--[[

Aseprite module

EXPORT SETTINGS

	Required:
		Split layers = ON
		JSON Data = ON
			Hash or Array
			Layers = ON if data format = Hash
			Tags = ON for animations
			Item filename = "{layer}#{frame1}"
 	Recommended:
		Sheet type = Packed
		Trim cels = ON
		Extrude = ON

DATA STRUCTURE

	ase
	{
		[array]		= list of aseprite's frames
		image		= the sprite sheet image
		width		= the sprite frame width
		height		= the sprite frame height

		layers		= the sprite layers
		{
			[array]	= ordered list of layers
			[hash]	= maps layer name to index
		}

		animations	= the available animations
		{
			[array]		= list of frame indices making up the animation
			from		= first animation frame, 1-based instead of 0-based
			to			= last animation frame, 1-based instead of 0-based
			direction	= "forward", "reverse", or "pingpong"
						  "reverse" and "pingpong" implemented by reversing or duplicating frame indices
		}
	}
]]

local LG = love.graphics
local lg_draw = love.graphics.draw
local type = type
local pretty = require "pl.pretty"
local json   = require "json"
local Time   = require "System.Time"
local max = math.max
local min = math.min

local Aseprite = {}
Aseprite.__index = Aseprite
Aseprite.animationtimeunit = "milliseconds"

local AnimationTimeUnits = {
    milliseconds = 1,
    seconds = 1 / 1000,
    fixedupdates = Time.FixedUpdateRate / 1000
}

function Aseprite:getAnimationUpdate(tag, tagframe, t, dt, onend)
	t = t + dt
	local animation = self.animations[tag]
	if not animation then
		return tagframe, t
	end
	local frame = animation[tagframe]
	if not frame then
		error("Animation "..tag.." does not have a frame "..tagframe)
	end
	local duration = self[frame].duration
	while t >= duration do
		if tagframe == #animation then
			if type(onend) == "function" then
				return onend(tag, tagframe, duration)
			elseif onend == "stop" then
				return tagframe, duration
			else
				tagframe = 1
			end
		else
			tagframe = (tagframe + 1)
		end
		t = t - duration
		duration = self[animation[tagframe]].duration
	end
	return tagframe, t
end

function Aseprite:getAnimationFrame(tag, tagframe)
	local animation = self.animations[tag]
	if not animation then
		print("Unknown animation "..tag)
		return nil
	end
	tagframe = max(1, min(tagframe, #animation))
	return animation[tagframe]
end

function Aseprite:getAnimation(tag)
	return self.animations[tag]
end

function Aseprite:drawFrame(frame, x, y, r, sx, sy, ox, oy, kx, ky)
	frame = self[frame]
	local image = self.image
	for i = 1, #self.layers do
		local cel = frame[i]
		if cel then
			lg_draw(image, cel.quad, x + cel.x, y + cel.y, r, sx, sy, ox, oy, kx, ky)
		end
	end
end

function Aseprite:drawCel(frame, cel, x, y, r, sx, sy, ox, oy, kx, ky)
	cel = self[frame][cel]
	if cel then
		lg_draw(self.image, cel.quad, x + cel.x, y + cel.y, r, sx, sy, ox, oy, kx, ky)
	end
end

function Aseprite:newSpriteBatch(tag)
	local nlayers = #self.layers
	local spritebatch = LG.newSpriteBatch(self.image, nlayers, "dynamic")
	for i = 1, nlayers do
		spritebatch:add(0,0,0,0,0)
	end

	if self.animations[tag] then
		self:startSpriteBatchAnimation(spritebatch, tag)
	else
		self:setSpriteBatchFrame(spritebatch, 1)
	end
	return spritebatch
end

function Aseprite:startSpriteBatchAnimation(spritebatch, tag)
	local animation = self.animations[tag]
	if animation then
		self:setSpriteBatchFrame(spritebatch, animation[1])
	end
end

function Aseprite:setSpriteBatchFrame(spritebatch, frame)
	frame = self[frame]
	for i = 1, #self.layers do
		local cel = frame[i]
		if cel then
			spritebatch:set(i, cel.quad, cel.x, cel.y)
		else
			spritebatch:set(i, 0, 0, 0, 0, 0)
		end
	end
end

function Aseprite:animateSpriteBatch(spritebatch, tag, tagframe, timer, dt, loop)
	local f, t = self:getAnimationUpdate(tag, tagframe, timer, dt, loop)
	if tagframe ~= f then
		self:setSpriteBatchFrame(spritebatch, self.animations[tag][f])
	end
	return f, t
end

function Aseprite:setAnchor(anchorx, anchory)
	self.offsetx = anchorx*self.width
	self.offsety = anchory*self.height
end

local function load_cel(cel, filename, ase, layers, image)
	local layername, framei = filename:match("(.*)#(%d+)")
	local layeri = layers[layername]
	if not layeri then
		layers[#layers+1] = { name = layername }
		layeri = #layers
		layers[layername] = layeri
	end

	framei = tonumber(framei)
	local frame = ase[framei]
	if not frame then
		frame = { duration = cel.duration }
		ase[framei] = frame
	end

	local rect = cel.frame
	local pos = cel.spriteSourceSize
	frame[layeri] = {
		x = pos.x,
		y = pos.y,
		quad = LG.newQuad(rect.x, rect.y, rect.w, rect.h,
				image:getWidth(), image:getHeight())
	}
end

function Aseprite.load(jsonfile)
	local doc = json.decode(love.filesystem.read(jsonfile))
	local cels = doc.frames
	local meta = doc.meta
	local imagefile = meta.image
    local directory = string.match(jsonfile, "^(.+/)") or ""
	local image = love.graphics.newImage(directory..imagefile)
	image:setFilter("nearest", "nearest")

	local layers = meta.layers
	if not cels[1] and not layers then
		error("Aseprite "..imagefile.." was exported with hash frames and no layer list. There is no way to ensure the correct layer order.")
	end

	layers = layers or {}

	for i = 1, #layers do
		layers[layers[i].name] = i
	end

	local ase = {}
	local _, cel1 = next(cels)
	local size = cel1.sourceSize
	ase.imagefile = imagefile
	ase.width = size.w
	ase.height = size.h

	if cels[1] then
		for i = 1, #cels do
			local cel = cels[i]
			load_cel(cel, cel.filename, ase, layers, image)
		end
	else
		for k,v in pairs(cels) do
			load_cel(v, k, ase, layers, image)
		end
	end

	local animationtimescale = AnimationTimeUnits[Aseprite.animationtimeunit] or 1
	for i = 1, #ase do
		local frame = ase[i]
		frame.duration = frame.duration * animationtimescale
	end

	local animations = meta.frameTags
	for i = 1, #animations do
		local animation = animations[i]
		animations[animation.name] = animation
		animation.from = animation.from + 1
		animation.to = animation.to + 1
		local direction = animation.direction
		if direction == "reverse" then
			for f = animation.to, animation.from, -1 do
				animation[#animation + 1] = f
			end
		else
			for f = animation.from, animation.to do
				animation[#animation + 1] = f
			end
			if direction == "pingpong" then
				for f = animation.to-1, animation.from+1, -1 do
					animation[#animation + 1] = f
				end
			end
		end
	end
	for i = #animations, 1, -1 do
		animations[i] = nil
	end

	ase.image = image
	ase.layers = layers
	ase.animations = animations

	setmetatable(ase, Aseprite)
	return ase
end

return Aseprite