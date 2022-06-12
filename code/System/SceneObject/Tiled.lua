local SceneTiled = {}
local Tiled       = require "Data.Tiled"
local Color = require "Data.Color"

-- from SceneObject
local new
local drawLine
local drawPolygon
local drawRectangle
local drawEllipse
local drawQuad
local drawGeneric

function SceneTiled.isAnimationEnding(sceneobject, dt)
    local animation = sceneobject.animation
    if animation then
        local aframe = sceneobject.animationframe
        local atime = sceneobject.animationtime + dt
        return Tiled.isAnimationEnded(animation, aframe, atime + dt)
    end
end

function SceneTiled.animateTile(sceneobject, dt)
    local animation = sceneobject.animation
    if animation then
        local aframe = sceneobject.animationframe
        local atime = sceneobject.animationtime
        aframe, atime = Tiled.getAnimationUpdate(animation, aframe, atime + dt)
        sceneobject.animationframe = aframe
        sceneobject.animationtime = atime
        sceneobject.quad = animation[aframe].tile.quad
    end
end
local animateTile = SceneTiled.animateTile

function SceneTiled.setTile(sceneobject, tile)
    if not tile then
        return
    end
    sceneobject.tile = tile
    sceneobject.drawable = tile.image
    sceneobject.quad = tile.quad
    sceneobject.width = tile.width
    sceneobject.height = tile.height
    sceneobject.ox = tile.objectoriginx
    sceneobject.oy = tile.objectoriginy
    sceneobject.animation = tile.animation
    sceneobject.animationframe = 1
    sceneobject.animationtime = 0
end
local setTile = SceneTiled.setTile

function SceneTiled.changeTile(sceneobject, tileid)
    local tile = sceneobject.tile
    local newtile = tile.tileset[tileid]
    if newtile ~= tile then
        setTile(sceneobject, newtile)
    end
end

function SceneTiled.getObjectTileset(sceneobject)
    local tile = sceneobject.tile
    return tile and tile.tileset
end

function SceneTiled.newShapeObject(shapeobject)
    local w, h, x, y, z, r, sx, sy
        = shapeobject.width, shapeobject.height,
        shapeobject.x, shapeobject.y, shapeobject.z,
        shapeobject.rotation, shapeobject.scalex, shapeobject.scaley

    local sceneobject
    local shape = shapeobject.shape
    local id = shapeobject.id
    if shape == "rectangle" then
        sceneobject = new(drawRectangle, nil, nil, w, h, x, y, z, r, sx, sy)
    elseif shape == "ellipse" then
        sceneobject = new(drawEllipse, nil, nil, w, h, x, y, z, r, sx, sy)
    elseif shape == "polyline" then
        sceneobject = new(drawLine, shapeobject.points, nil, w, h, x, y, z, r, sx, sy)
    elseif shape == "polygon" then
        local triangles = shapeobject.triangles
        if triangles then
            sceneobject = new(drawPolygon, triangles, nil, w, h, x, y, z, r, sx, sy)
            sceneobject.points = shapeobject.points -- for drawing outline
        else
            sceneobject = new(drawLine, shapeobject.points, nil, w, h, x, y, z, r, sx, sy)
        end
    end

    if not sceneobject then
        return
    end

    local color = shapeobject.color
    if color then
        sceneobject.red, sceneobject.green, sceneobject.blue, sceneobject.alpha = Color.unpack(color)
    end

    local linecolor = shapeobject.linecolor
    if linecolor then
        sceneobject.linered, sceneobject.linegreen, sceneobject.lineblue, sceneobject.linealpha
            = Color.unpack(linecolor)
    end

    sceneobject.linewidth = shapeobject.linewidth
    return sceneobject
end

function SceneTiled.newChunk(chunk, x, y, z, r, sx, sy, ox, oy, kx, ky)
    local w = chunk.width * chunk.tilewidth
    local h = chunk.height * chunk.tileheight
    local sceneobject = SceneTiled.new(drawGeneric, chunk.tilebatch, nil, w, h, x, y, z, r, sx, sy, ox, oy, kx, ky)
    return sceneobject
end

function SceneTiled.newAnimatedChunk(chunk, x, y, z, r, sx, sy, ox, oy, kx, ky)
    local sceneobject = SceneTiled.newChunk(chunk, x, y, z, r, sx, sy, ox, oy, kx, ky)
    sceneobject.batchanimations = chunk.batchanimations
    sceneobject.animationtime = 0
    sceneobject.animate = Tiled.animateChunk
    sceneobject.width = chunk.width
    sceneobject.tilewidth = chunk.tilewidth
    sceneobject.tileheight = chunk.tileheight
    sceneobject.data = chunk.data
    return sceneobject
end

function SceneTiled.newTile(tile, x, y, z, r, sx, sy, ox, oy, kx, ky)
    local sceneobject = SceneTiled.new(drawQuad, tile.image, nil, tile.width, tile.height, x, y, z, r, sx, sy, nil, nil, kx, ky)
    sceneobject.animate = animateTile
    setTile(sceneobject, tile)
    if ox then
        sceneobject.ox = ox
    end
    if oy then
        sceneobject.oy = oy
    end
    return sceneobject
end

function SceneTiled.newTextObject(textobject)
    local sceneobject = SceneTiled.newText(textobject.string, textobject.font,
        textobject.width, textobject.height,
        textobject.halign, textobject.valign, textobject.x, textobject.y, textobject.z,
        textobject.rotation, textobject.scalex, textobject.scaley,
        textobject.originx, textobject.originy,
        textobject.skewx, textobject.skewy)
    sceneobject.font = textobject.font
    sceneobject.halign = textobject.halign or "left"
    sceneobject.valign = textobject.valign or "top"
    local color = textobject.color
    if color then
        sceneobject.red, sceneobject.green, sceneobject.blue = color[1], color[2], color[3]
    end
    return sceneobject
end

function SceneTiled.newImageLayer(imagelayer)
    local image = imagelayer.image
    local sceneobject = SceneTiled.newImage(image, imagelayer.x, imagelayer.y, imagelayer.z)
    sceneobject.alpha = imagelayer.opacity
    return sceneobject
end

function SceneTiled.newTileObject(tileobject)
    local tile = tileobject.tile
    local id = tileobject.id
    local x = tileobject.x
    local y = tileobject.y
    local z = tileobject.z
    local sceneobject = SceneTiled.newTile(tile, x, y, z, tileobject.rotation, tileobject.scalex, tileobject.scaley)
    local color = tileobject.color
    if color then
        sceneobject.red, sceneobject.green, sceneobject.blue, sceneobject.alpha = Color.unpack(color)
    end
    if not tileobject.visible then
        sceneobject.hidden = true
    end
    return sceneobject
end

local function updateParticleSystem(sceneobject, unit, fixedfrac)
    local vx, vy, vz = unit.velx, unit.vely, unit.velz or 0
    local av = unit.avel
    local x, y, z = unit.x, unit.y, unit.z
    x = x + vx * fixedfrac
    y = y + vy * fixedfrac
    sceneobject.z = z + vz * fixedfrac
    local r = unit.rotation + av * fixedfrac
    local particlesystem = sceneobject.particlesystem
    particlesystem:moveTo(x, y)
    particlesystem:setDirection(r)
end

function SceneTiled.animateParticles(sceneobject, dt)
    sceneobject.particlesystem:update(dt)
end
local animateParticles = SceneTiled.animateParticles

local addTileParticles_quads = {}
function SceneTiled.newTileParticles(tile, z)
    local particlesystem = love.graphics.newParticleSystem(tile.image)
    local animation = tile.animation
    if animation then
        for i = #addTileParticles_quads, #animation+1, -1 do
            addTileParticles_quads[i] = nil
        end
        for i = 1, #animation do
            addTileParticles_quads[i] = animation[i].tile.quad
        end
        particlesystem:setQuads(addTileParticles_quads)
        local duration = animation.duration
        particlesystem:setParticleLifetime(duration)
    else
        particlesystem:setQuads(tile.quad)
        particlesystem:setParticleLifetime(60)
    end
    particlesystem:setOffset(tile.objectoriginx, tile.objectoriginy)

    local sceneobject = new(drawGeneric, particlesystem, nil, nil, nil, 0, 0, z)
    sceneobject.animate = animateParticles
    sceneobject.updateFromUnit = updateParticleSystem
    return sceneobject
end

return function(SceneObject)
    new = SceneObject.new
    drawLine        = SceneObject.drawLine
    drawPolygon     = SceneObject.drawPolygon
    drawRectangle   = SceneObject.drawRectangle
    drawEllipse     = SceneObject.drawEllipse
    drawQuad        = SceneObject.drawQuad
    drawGeneric     = SceneObject.drawGeneric
    for k,v in pairs(SceneTiled) do
        SceneObject[k] = v
    end
    SceneTiled = SceneObject
end