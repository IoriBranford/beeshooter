local function newSpace(x, y, w, h)
	return {
		x = x, y = y, w = w, h = h
	}
end

local function findSubspace(space, w, h)
	for i = 1, #space do
		local subspace = findSubspace(space[i], w, h)
		if subspace then
			return subspace
		end
	end
	return w <= space.w and h <= space.h and not space.tile and space
end

local function splitSpace(space, w, h)
	local rightw = space.w - w
	local downh = space.h - h
	if rightw > 0 then
		space[#space+1] = newSpace(space.x + w, space.y, rightw, h)
	end
	if downh > 0 then
		space[#space+1] = newSpace(space.x, space.y + h, space.w, downh)
	end
end

local function growSpace(space, neww, newh)
	local newspace = space
	if space.w < neww then
		newspace = newSpace(0, 0, neww, newh)
		newspace[#newspace+1] = newSpace(space.w, 0, neww - space.w, space.h)
	else
		neww = space.w
	end
	if space.h < newh then
		if newspace==space then
			newspace = newSpace(0, 0, neww, newh)
		end
		newspace[#newspace+1] = newSpace(0, space.h, neww, newh - space.h)
	end
	if newspace ~= space then
		newspace[#newspace+1] = space
	end
	return newspace
end

local TilePacking = {}

--- Pack tiles in a map.
--- Do not use with gamma-correct rendering - tiles will be darkened.
--- @param map table map with unpacked tiles
--- @return table imagedata packed image data for saving
function TilePacking.pack(map)
    if not love.graphics then
        return false, "Megatileset requires love.graphics"
    end

    local tilesets = map.tilesets

    local packarea = 0
    local maxtilewidth = 0
    local maxtileheight = 0
    for i = 1, #tilesets do
        local tileset = tilesets[i]
        local tilewidth = tileset.tilewidth *1.5
        local tileheight = tileset.tileheight *1.5
        if maxtilewidth < tilewidth then
            maxtilewidth = tilewidth
        end
        if maxtileheight < tileheight then
            maxtileheight = tileheight
        end
        local tilearea = tilewidth*tileheight
        packarea = packarea + tilearea*tileset.tilecount
    end

    local packwidth = 1
    local packheight = 1

    while packarea > packwidth*packheight do
        if packheight < packwidth then
            packheight = packheight*2
        else
            packwidth = packwidth*2
        end
    end

    local sizesortedtiles = {}
    local maptiles = map.tiles
    for i = 1, #maptiles do
        sizesortedtiles[i] = maptiles[i]
    end
    table.sort(sizesortedtiles, function(a, b)
        return a.width*a.height > b.width*b.height
    end)

    local space = newSpace(0, 0, packwidth, packheight)

    for i = 1, #sizesortedtiles do
        local tile = sizesortedtiles[i]
        local width = tile.width + 2
        local height = tile.height + 2
        local subspace = findSubspace(space, width, height)
        while not subspace do
            if packheight < packwidth then
                packheight = packheight*2
            else
                packwidth = packwidth*2
            end
            space = growSpace(space, packwidth, packheight)
            subspace = findSubspace(space, width, height)
        end
        subspace.tile = tile
        splitSpace(subspace, width, height)
    end

    local limits = love.graphics.getSystemLimits()
    if packwidth > limits.texturesize
    or packheight > limits.texturesize then
        return false, string.format("Megatileset exceeds texture size limit of %dpx", limits.texturesize)
    end

    local drawSpace_quad = love.graphics.newQuad(0, 0, 1, 1, 1, 1)
    local function drawSpace(space)
        local quad = drawSpace_quad
        local tile = space.tile
        if tile then
            local tw, th = tile.width, tile.height
            local dx0, dy0 = space.x, space.y
            local dx1, dy1 = dx0+1, dy0+1
            local dx2, dy2 = dx1+tw, dy1+th
            local qx, qy, qw, qh = tile.quad:getViewport()
            local qx2 = qx + qw - 1
            local qy2 = qy + qh - 1
            local drawrects = {
                dx0, dy0, qx, qy, 1, 1,
                dx1, dy0, qx, qy, qw, 1,
                dx2, dy0, qx2, qy, 1, 1,
                dx0, dy1, qx, qy, 1, qh,
                dx1, dy1, qx, qy, qw, qh,
                dx2, dy1, qx2, qy, 1, qh,
                dx0, dy2, qx, qy2, 1, 1,
                dx1, dy2, qx, qy2, qw, 1,
                dx2, dy2, qx2, qy2, 1, 1
            }
            local image = tile.image
            local iw, ih = image:getDimensions()
            for i = 6, #drawrects, 6 do
                local destx = drawrects[i-5]
                local desty = drawrects[i-4]
                local ex = drawrects[i-3]
                local ey = drawrects[i-2]
                local ew = drawrects[i-1]
                local eh = drawrects[i-0]
                quad:setViewport(ex, ey, ew, eh, iw, ih)
                love.graphics.draw(image, quad, destx, desty)
            end
            tile.quad = love.graphics.newQuad(dx1, dy1, tw, th,
                packwidth, packheight)
        end
        --DEBUG
        --love.graphics.rectangle("line", space.x, space.y, space.w, space.h)
        for i = 1, #space do
            drawSpace(space[i])
        end
    end

    local canvas = love.graphics.newCanvas(packwidth, packheight, {
            format = "rgba8"
        })
    love.graphics.setCanvas(canvas)
    love.graphics.setLineStyle("rough")
    drawSpace(space)
    love.graphics.setCanvas()

    local imagedata = canvas:newImageData()
    local image = love.graphics.newImage(imagedata)
    image:setFilter("nearest", "nearest")
    for i = 1, #tilesets do
        local tileset = tilesets[i]
        tileset.image = image
        -- local firstgid = tileset.firstgid
        -- for t = 0, #tileset-1 do
        --     local tile = tileset[t]
        --     if tile.animation then
        --         for f, frame in ipairs(tile.animation) do
        --             local ftile = frame.tile
        --             print(ftile, tileset[frame.tileid], maptiles[firstgid + frame.tileid])
        --         end
        --     end
        -- end
    end
    for i = 1, #maptiles do
        maptiles[i].image = image
    end

    return imagedata
end

--- Save the packed tiles as an image and a table of quads
---@param map table map with packed tiles
---@param quadspath string quad table file path
---@param imagepath string image file path
---@param imagedata ImageData image data returned from packing
function TilePacking.save(map, quadspath, imagepath, imagedata)
    local tiles = map.tiles
    imagedata:encode("png", imagepath)

    local quadscode = { "return {" }
    for i = 1, #tiles do
        local x, y, w, h = tiles[i].quad:getViewport()
        quadscode[#quadscode+1] = string.format("%d,%d,%d,%d,", x, y, w, h)
    end
    quadscode[#quadscode+1] = "}"
    love.filesystem.write(quadspath, table.concat(quadscode))
end

--- Load packed tiles into map
---@param map table map whose packed tiles were saved
---@param quadspath string quad table file path
---@param imagepath string image file path
---@return boolean success
---@return string err
function TilePacking.load(map, quadspath, imagepath)
    local quadsfunction, err = love.filesystem.load(quadspath)
    if not quadsfunction then
        return false, err
    end

    local tiles = map.tiles
    local tilesets = map.tilesets

    local quads = quadsfunction()

    -- if type(imagepath) == "string" then
    local image = love.graphics.newImage(imagepath)
    image:setFilter("nearest", "nearest")

    for i = 1, #tilesets do
        tilesets[i].image = image
    end
    for i = 1, #tiles do
        tiles[i].image = image
    end
    -- elseif not megaimage.typeOf or not megaimage:typeOf("Image") then
    --     megaimage = tilesets[1].image
    -- end

    local iw, ih = image:getDimensions()

    local t = 1
    for i = 4, #quads, 4 do
        tiles[t].quad = love.graphics.newQuad(
            quads[i-3], quads[i-2], quads[i-1], quads[i], iw, ih)
        t = t + 1
    end

    return true
end

return TilePacking