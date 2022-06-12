local Color = require "Data.Color"
local tablex= require "pl.tablex"
local Element = require "System.Gui.Element"

local Gauge = tablex.copy(Element)
Gauge.__index = Gauge

function Gauge:getPercent()
	return self.gaugepercent
end

function Gauge:setPercent(percent)
	self.gaugepercent = percent
	local barminx = self.barminx
	local barminy = self.barminy
	local barmaxw = self.barmaxw
	local barmaxh = self.barmaxh

	local direction = self.filldirection
	if direction == "left" then
		self.barx = barminx + barmaxw*(1 - percent)
		self.bary = barminy
		self.barw = barmaxw*percent
		self.barh = barmaxh
	elseif direction == "up" then
		self.barx = barminx
		self.bary = barminy + barmaxh*(1 - percent)
		self.barw = barmaxw
		self.barh = barmaxh*percent
	elseif direction == "right" then
		self.barx = barminx
		self.bary = barminy
		self.barw = barmaxw*percent
		self.barh = barmaxh
	else
		self.barx = barminx
		self.bary = barminy
		self.barw = barmaxw
		self.barh = barmaxh*percent
	end
end

function Gauge:setFillColor(color)
	self.fillcolor = color
    self.barred, self.bargreen, self.barblue, self.baralpha = Color.unpack(color)
end

function Gauge.init(self)
	setmetatable(self, Gauge)
	self:setFillColor(self.fillcolor or "ffffffff")

	local barx = math.huge
	local bary = math.huge
	local barw = 0
	local barh = 0
	local tile = self.tile
    local shapes = tile and tile.shapes
	if shapes then
        local barrects = {}
        self.barrects = barrects
		local barx2 = -math.huge
		local bary2 = -math.huge
		for _, shape in ipairs(shapes) do
			if shape.shape == "rectangle" then
				local roundx = shape.roundx or 0
				local roundy = shape.roundy or roundx
				local rect = {
					roundx = roundx,
					roundy = roundy,
					width = shape.width,
					height = shape.height
				}
				barrects[#barrects+1] = rect

                local rectx, recty = shape.x + tile.objectoriginx, shape.y + tile.objectoriginy
				rect.x = rectx
				rect.y = recty

				barx = math.min(barx, rectx)
				bary = math.min(bary, recty)
				barx2 = math.max(barx2, rectx + rect.width)
				bary2 = math.max(bary2, recty + rect.height)
			end
		end
		barw = barx2 - barx
		barh = bary2 - bary
	else
		barx = 0
		bary = 0
		barw = self.width
		barh = self.height
	end

	self.barminx = barx
	self.barminy = bary
	self.barmaxw = barw
	self.barmaxh = barh
	self.barx = barx
	self.bary = bary
	self.barw = barw
	self.barh = barh
	self:setPercent(1)
	return self
end

function Gauge:addToScene(scene)
    local sceneobject = scene:addObject(self)
	self.sceneobject = sceneobject
	local basedraw = sceneobject.draw
	function sceneobject.draw(sceneobject)
		local barw = self.barw
		local barh = self.barh
		if barw > 0 and barh > 0 then
			love.graphics.setColor(self.barred, self.bargreen, self.barblue, self.baralpha)
			local barx = self.barx
			local bary = self.bary
			love.graphics.push()
			sceneobject:applyTransform()
			local rects = self.barrects
			if rects then
				local barx2 = barx + barw
				local bary2 = bary + barh
				for i = 1, #rects do
					local rect = rects[i]
					local rectx, recty = rect.x, rect.y
					local width, height = rect.width, rect.height
					local x = math.max(rectx, barx)
					local y = math.max(recty, bary)
					local x2 = math.min(rectx + width, barx2)
					local y2 = math.min(recty + height, bary2)
					if x < x2 and y < y2 then
						love.graphics.rectangle("fill", x, y, x2-x, y2-y,
							rect.roundx, rect.roundy)
					end
				end
			else
				love.graphics.rectangle("fill", barx, bary, barw, barh)
			end
			love.graphics.pop()
		end
		basedraw(sceneobject)
	end

	return sceneobject
end

return Gauge