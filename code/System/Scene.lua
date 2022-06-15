local SceneObject = require "System.SceneObject"
local Color       = require "Data.Color"

---@class Scene
local Scene = {}
Scene.__index = Scene

local insert = table.insert

---@return Scene
function Scene.new()
    local scene = {
        animating = {}
    }
    return setmetatable(scene, Scene)
end

function Scene:add(sceneobject)
    insert(self, sceneobject)
    return sceneobject
end

function Scene:addAnimating(sceneobject)
    insert(self, sceneobject)
    insert(self.animating, sceneobject)
    return sceneobject
end

function Scene:addShapeObject(shapeobject)
    local sceneobject = SceneObject.newShapeObject(shapeobject)
    return self:add(sceneobject)
end

function Scene:addChunk(chunk, x, y, z, r, sx, sy, ox, oy, kx, ky)
    local sceneobject = SceneObject.newChunk(chunk, x, y, z, r, sx, sy, ox, oy, kx, ky)
    return self:add(sceneobject)
end

function Scene:addAnimatedChunk(chunk, x, y, z, r, sx, sy, ox, oy, kx, ky)
    local sceneobject = SceneObject.newAnimatedChunk(chunk, x, y, z, r, sx, sy, ox, oy, kx, ky)
    insert(self.animating, sceneobject)
    return self:add(sceneobject)
end

function Scene:addTile(tile, x, y, z, r, sx, sy, ox, oy, kx, ky)
    local sceneobject = SceneObject.newTile(tile, x, y, z, r, sx, sy, ox, oy, kx, ky)
    return self:add(sceneobject)
end

function Scene:addAnimatedTile(tile, x, y, z, r, sx, sy, ox, oy, kx, ky)
    local sceneobject = self:addTile(tile, x, y, z, r, sx, sy, ox, oy, kx, ky)
    insert(self.animating, sceneobject)
    return sceneobject
end

function Scene:addAseprite(aseprite, frame, x, y, z, r, sx, sy, ox, oy, kx, ky)
    local sceneobject = SceneObject.newAseprite(aseprite, frame or 1, x, y, z, r, sx, sy, ox, oy, kx, ky)
    return self:add(sceneobject)
end

function Scene:addManualAnimatedAseprite(aseprite, tag, tagframe, x, y, z, r, sx, sy, ox, oy, kx, ky)
    local sceneobject = SceneObject.newAnimatedAseprite(aseprite, tag, tagframe or 1, x, y, z, r, sx, sy, ox, oy, kx, ky)
    return self:add(sceneobject)
end

local addManualAnimatedAseprite = Scene.addManualAnimatedAseprite

function Scene:addAnimatedAseprite(aseprite, tag, tagframe, x, y, z, r, sx, sy, ox, oy, kx, ky)
    local sceneobject = addManualAnimatedAseprite(aseprite, tag, tagframe or 1, x, y, z, r, sx, sy, ox, oy, kx, ky)
    insert(self.animating, sceneobject)
    return sceneobject
end

function Scene:addTextObject(textobject)
    local sceneobject = SceneObject.newTextObject(textobject)
    return self:add(sceneobject)
end

function Scene:addImage(image, x, y, z, r, sx, sy, ox, oy, kx, ky)
    local sceneobject = SceneObject.newImage(image, x, y, z, r, sx, sy, ox, oy, kx, ky)
    return self:add(sceneobject)
end

function Scene:addImageLayer(imagelayer)
    local sceneobject = SceneObject.newImageLayer(imagelayer)
    return self:add(sceneobject)
end

function Scene:addTileLayer(tilelayer)
    local tilebatch = tilelayer.tilebatch
    local layerx = tilelayer.x
    local layery = tilelayer.y
    local layerz = tilelayer.z
    if tilebatch then
        return {self:addAnimatedChunk(tilelayer, layerx, layery, layerz)}
    end
    local chunks = tilelayer.chunks
    if chunks then
        local cellwidth = tilelayer.tilewidth
        local cellheight = tilelayer.tileheight
        local sceneobjects = {}
        for i = 1, #chunks do
            local chunk = chunks[i]
            local w = chunk.width * cellwidth
            local h = chunk.height * cellheight
            local cx = chunk.x * cellwidth
            local cy = chunk.y * cellheight
            local spritebatch = self:addAnimatedChunk(chunk, layerx+cx, layery+cy, layerz)
            chunk.sprite = spritebatch
            sceneobjects[i] = spritebatch
        end
        return sceneobjects
    end
end

function Scene:addTileObject(tileobject)
    local tile = tileobject.tile
    local x = tileobject.x
    local y = tileobject.y
    local z = tileobject.z
    local sprite = tileobject.animated == false
        and self:addTile(tile, x, y, z, tileobject.rotation, tileobject.scalex, tileobject.scaley)
        or self:addAnimatedTile(tile, x, y, z, tileobject.rotation, tileobject.scalex, tileobject.scaley)
    local color = tileobject.color
    if color then
        sprite.red, sprite.green, sprite.blue, sprite.alpha = Color.unpack(color)
    end
    sprite.hidden = not tileobject.visible
    return sprite
end

function Scene:addObject(object)
    local str = object.string
    if str then
        return self:addTextObject(object)
    end
    local tile = object.tile
    if tile then
        return self:addTileObject(object)
    end
    return self:addShapeObject(object)
end

function Scene:addMap(map, layerfilter)
    local function addLayers(layers)
        for i = 1, #layers do
            local layer = layers[i]
            local layertype = layer.type
            if not layerfilter or layerfilter:find(layertype) then
                if layertype == "group" then
                    addLayers(layer)
                elseif layertype == "tilelayer" then
                    layer.sprites = self:addTileLayer(layer)
                elseif layertype == "objectgroup" then
                    for i = 1, #layer do
                        local object = layer[i]
                        object.sprite = self:addObject(object)
                    end
                elseif layertype == "imagelayer" then
                    layer.sprite = self:addImageLayer(layer)
                end
            end
        end
    end

    addLayers(map.layers)
end

function Scene:addTileParticles(tile, z)
    local sceneobject = SceneObject.newTileParticles(tile, z)
    insert(self.animating, sceneobject)
    return self:add(sceneobject)
end

function Scene:addTileParticlesObject(object)
    return self:addTileParticles(object.tile, object.z)
end

function Scene:addCustom(draw, drawable, quad, w, h, x, y, z, r, sx, sy, ox, oy, kx, ky)
    return self:add(SceneObject.new(draw, drawable, quad, w, h, x, y, z, r, sx, sy, ox, oy, kx, ky))
end

function Scene:clear()
    local animating = self.animating
    for i = #animating, 1, -1 do
        animating[i] = nil
    end
    for i = #self, 1, -1 do
        self[i] = nil
    end
end

local sortAndPrune = SceneObject.sortAndPruneObjects

local function sortAnimated(a, b)
    return a.z ~= math.huge and b.z == math.huge
end

function Scene:animate(dt)
    local animating = self.animating
    sortAndPrune(animating, sortAnimated)
    for i = 1, #animating do
        animating[i]:animate(dt)
    end
end

function Scene:draw()
    sortAndPrune(self)
    for i = 1, #self do
        local sceneobject = self[i]
        if not sceneobject.hidden then
            self[i]:draw()
        end
    end
end

return Scene
