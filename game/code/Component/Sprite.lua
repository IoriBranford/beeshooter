local Assets = require "System.Assets"
local Tiled  = require "Data.Tiled"
local getTile = Tiled.getTile

local pi = math.pi
local floor = math.floor
local atan2 = math.atan2

local Sprite = {}

function Sprite:newAseprite(scene)
    local asepritefile = self.asepritefile
    local ase = asepritefile and Assets.get(asepritefile)
    if not ase then
        return
    end

    local frameortag, tagframe, x, y, ox, oy
        = self.animation or 1, 1,
        self.x, self.y,
        self.spriteoriginx or 0, self.spriteoriginy or 0
    local z, r, sx, sy, sxy = self.z, self.rotation, self.scalex, self.scaley, self.scalexy or 1
    sx = sx * sxy
    sy = sy * sxy

    if type(frameortag) == "string" then
        return scene:addAnimatedAseprite(ase, frameortag, tagframe,
            x, y, z, r, sx, sy, ox, oy)
    else
        return scene:addAseprite(ase, frameortag,
            x, y, z, r, sx, sy, ox, oy)
    end
end
local newAseprite = Sprite.newAseprite

function Sprite:newTileSprite(scene)
    local tile = self.tile
    if not tile then
        local tileset = self.tileset
        local tileid = self.tileid
        tile = tileset and tileid and getTile(tileset, tileid)
    end
    if tile then
        return scene:addTileObject(self)
    end
end
local newTileSprite = Sprite.newTileSprite

function Sprite:addToScene(scene, key)
    local sprite = newTileSprite(self, scene) or newAseprite(self, scene)
    self[key] = sprite
    return sprite
end

function Sprite:setHidden(spritename, hidden)
    local sprite = self[spritename]
    if sprite then
        sprite.hidden = hidden
    end
end

function Sprite:update(sprite, fixedfrac)
    if sprite then
        local vx, vy = self.velx, self.vely
        local vz = self.velz or 0
        local x, y = self.x, self.y
        local z = self.z
        local angle = self.rotation or 0
        local scalexy = self.scalexy or 1
        local scalex, scaley = self.scalex or 1, self.scaley or 1
        sprite.x = x + vx * fixedfrac
        sprite.y = y + vy * fixedfrac
        sprite.z = z + vz * fixedfrac
        sprite.sx = scalex * scalexy
        sprite.sy = scaley * scalexy
        sprite.r = angle
        -- sprite.oy = (self.spriteoriginy or 0) + z
    end
end

function Sprite.getDirectionIndex_angle(numdirections, angle)
    local dirarc = 2 * pi / numdirections
    return floor(angle / dirarc + .5) % numdirections
end
local getDirectionIndex_angle = Sprite.getDirectionIndex_angle

function Sprite.getDirectionalTileId_angle(basetileid, numdirections, angle)
    return basetileid..getDirectionIndex_angle(numdirections, angle)
end

function Sprite.getDirectionalTileId_vector(basetileid, numdirections, vecx, vecy)
    local angle = atan2(vecy, vecx)
    if angle ~= angle then
        angle = 0
    end
    return Sprite.getDirectionalTileId_angle(basetileid, numdirections, angle)
end

function Sprite.setDirectionalTile_angle(sprite, basetileid, numdirections, angle)
    local tileset = sprite and sprite:getObjectTileset()
    if tileset then
        sprite:changeTile(Sprite.getDirectionalTileId_angle(basetileid, numdirections, angle))
    end
end

function Sprite.setDirectionalTile_vector(sprite, basetileid, numdirections, vecx, vecy)
    local tileset = sprite and sprite:getObjectTileset()
    if tileset then
        sprite:changeTile(Sprite.getDirectionalTileId_vector(basetileid, numdirections, vecx, vecy))
    end
end

function Sprite:remove(key)
    local sprite = self[key]
    if sprite then
        sprite:markRemove()
        self[key] = nil
    end
end

return Sprite