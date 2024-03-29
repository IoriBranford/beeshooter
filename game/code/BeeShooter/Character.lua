local Sprite = require "Component.Sprite"
local Database = require "Data.Database"
local Audio    = require "System.Audio"
local Movement = require "Component.Movement"
local Body  = require "BeeShooter.Character.Body"
local Coroutines = require "BeeShooter.Character.Coroutines"
local cos, sin = math.cos, math.sin
local huge = math.huge
local testrects = math.testrects
local co_create = coroutine.create
local co_resume = coroutine.resume
local co_status = coroutine.status

---@class Character
---@field type string
---@field tile table Tiled tile structure
---@field lifetime number die at this age
---@field script string the require string of the script module
---@field scriptstart string|function the first script function to run
---@field scriptdefeat string|function the script function to start when out of health
---@field team string cannot have whitespace
---@field camera table camera reference for convenience
---@field enemies table array of characters that do damage
---@field invincibletime number
---@field collidable boolean can hit and damage others or be hit
---@field defeatdrops string list of items to drop, separated by non-word chars
---@field spawnsound string
---@field defeatsound string
---@field hitbox table { x = offsetX, y = offsetY, width = width, height = height }
---@field shootfunc function|string? function or name of script function that will fire next shot
---@field shoottimer number?
---@field shootinterval number?
---@field shootcount number?
local Character = class()

local DefaultHitbox = {
    x = 0,
    y = 0,
    width = 0,
    height = 0
}

local function initHitbox(self)
    local tile = self.tile
    local shapes = tile and tile.shapes
    local hitbox = shapes and shapes.hitbox
    self.hitbox = hitbox
end

function Character:init()
    self = self or {}
    self.age = 0                                    -- in fixedupdates
    self.lifetime = self.lifetime or 0              -- die at this age, immortal if <= 0
    if self.lifetime == "animation" then
        local tile = self.tile
        local animation = tile and tile.animation
        self.lifetime = animation and animation.duration or 60
    end
    self.health = self.health or 1
    self.hitdamageenemy = self.hitdamageenemy or 0
    self.hitdamageself = self.hitdamageself or 0
    self.maxhealth = self.maxhealth or self.health
    self.width = self.width or 1    -- graphic width
    self.height = self.height or 1  -- graphic height
    self.x = self.x or 0
    self.y = self.y or 0
    self.z = self.z or 0
    if self.velx == "forward" or self.vely == "forward" then
        local speed = self.speed or 0
        local rotation = self.rotation or 0
        if speed > 0 then
            self.velx = speed * cos(rotation)
            self.vely = speed * sin(rotation)
        end
    end
    self.velx = self.velx or 0
    self.vely = self.vely or 0
    self.velz = self.velz or 0
    self.fixedupdateorder = self.fixedupdateorder or 0
    if not self.hitbox then
        initHitbox(self)
    end
    self:setShooting(self.shootfunc, self.shootinterval, self.shootcount)
    Audio.play(self.spawnsound)
    if self.nextcoroutines then
        self:setNextCoroutines(self.nextcoroutines)
    end
    return self
end

function Character:__lt(other)
    return self.fixedupdateorder < other.fixedupdateorder
end

---@param scene Scene
function Character:addToScene(scene)
    self.sprite = Sprite.newTileSprite(self, scene)
        or Sprite.newAseprite(self, scene)
        or scene:addObject(self)
end

function Character:faceLeft()
    self.scalex = -math.abs(self.scalex)
end

function Character:faceRight()
    self.scalex = math.abs(self.scalex)
end

function Character:faceSpriteX(facex)
    if facex > 0 then
        self.scalex = math.abs(self.scalex)
    elseif facex < 0 then
        self.scalex = -math.abs(self.scalex)
    end
end

function Character:changeTile(tileid)
    local sprite = self.sprite
    if sprite then
        sprite:changeTile(tileid)
    end
end

function Character:isSpriteOnScreen()
    local x, y, w, h = self.x, self.y, self.width, self.height
    local sprite = self.sprite
    local ox, oy = 0, 0
    if sprite then
        ox, oy = sprite.ox, sprite.oy
    end
    local camera = self.camera
    local cx, cy, cw, ch = camera.x, camera.y, camera.width, camera.height
    return testrects(x - ox, y - oy, w, h, cx, cy, cw, ch)
end

function Character:isSpriteFullyOnScreen()
    local x, y, w, h = self.x, self.y, self.width, self.height
    local sprite = self.sprite
    local ox, oy = 0, 0
    if sprite then
        ox, oy = sprite.ox, sprite.oy
    end
    local camera = self.camera
    local cx, cy, cw, ch = camera.x, camera.y, camera.width, camera.height
    return cx < x and x+w < cx+cw and cy < y and y+h < cy+ch
end

function Character:isSpriteOffScreenBottom()
    local y = self.y
    local sprite = self.sprite
    local oy = sprite and sprite.oy or 0
    local camera = self.camera
    local cy, ch = camera.y, camera.height
    return y - oy > cy + ch
end

local DropperTransform = love.math.newTransform()

function Character:spawnType(typ)
    local prefab = Database.get(typ)
    if not prefab then
        return
    end

    local offsetx, offsety = prefab.x, prefab.y

    local drop = {
        type = typ,
        layer = self.layer
    }
    if prefab.applyspawnertransform then
        local rotation = (self.rotation or 0)
        local scalex   = (self.scalex or 1)
        local scaley   = (self.scaley or 1)
        local scalexy = self.scalexy or 1
        drop.rotation = rotation + (prefab.rotation or 0)
        drop.scalexy = scalexy * (prefab.scalexy or 1)
        drop.scalex   = scalex * (prefab.scalex or 1)
        drop.scaley   = scaley * (prefab.scaley or 1)
        DropperTransform:setTransformation(0, 0, rotation, scalex*scalexy, scaley*scalexy)
        offsetx, offsety = DropperTransform:transformPoint(offsetx, offsety)
        -- drop.velx, drop.vely = DroppedTransform:transformPoint(dropprefab.velx or 0, dropprefab.vely or 0)
    end
    drop.x, drop.y = self.x + offsetx, self.y + offsety

    local Stage = require "BeeShooter.Stage"
    return Stage.addCharacter(drop)
end

function Character:spawnTypes(typeslist)
    if not typeslist then
        return
    end

    for typ in string.gmatch(typeslist, "%w+") do
        self:spawnType(typ)
    end
end

function Character:giveDefeatPoints()
    local PlayerShip = require "BeeShooter.Character.PlayerShip"
    PlayerShip.scorePoints(self.player, self.defeatpoints or 0)
end

---@param self Character
function Character:defaultDefeat()
    self.defeatedage = self.age
    Audio.play(self.defeatsound)
    self:spawnTypes(self.defeatdrops)
    self:giveDefeatPoints()
    self:markDisappear()
end

function Character:defeat()
    if self.defeated then
        return
    end
    self.defeated = true
    self:setNextCoroutines(self.scriptdefeat or self.defaultDefeat)
end

function Character:testCollisionWith(other)
    return other.collidable and Body.collidesWith(self, other)
end

function Character:addCoroutine(f)
    if not self.coroutines then
        self.coroutines = Coroutines(self)
    end
    self.coroutines:add(f)
end

function Character:setNextCoroutines(funcs)
    if not self.coroutines then
        self.coroutines = Coroutines(self)
    end
    self.coroutines:setNext(funcs)
end

local function fixedupdateDamage(self)
    local invincibletime = self.invincibletime or 0
    if invincibletime > 0 then
        return
    end
    local damage = 0
    local hitdamageself = self.hitdamageself or 0
    local myteam = self.team
    local myenemy = self.enemyteams
    if myteam and myenemy and self.collidable and self:isSpriteOnScreen() then
        Body.respondToCollisions(self, function(_, enemy)
            if not enemy.collidable then
                return
            end
            local theirteam = enemy.team
            local theirenemy = enemy.enemyteams
            if not theirenemy or not theirenemy:find(myteam)
            or not theirteam or not myenemy:find(theirteam) then
                return
            end
            damage = damage + enemy.hitdamageenemy + hitdamageself
        end)
    end
    self.health = self.health - damage
    if self.health < 1 then
        self:defeat()
    end
end

local function fixedupdateShoot(self)
    local shootfunc = self.shootfunc
    local shootcount = self.shootcount or 0
    local shoottimer = self.shoottimer
    if not shootfunc or not shoottimer or shootcount <= 0 then return end

    shoottimer = shoottimer - 1
    self.shoottimer = shoottimer
    if shoottimer == 0 then
        self.shoottimer = self.shootinterval
        self.shootcount = shootcount - 1
        shootfunc(self)
    end
end

function Character:setShooting(func, interval, count)
    if type(func) == "string" then
        func = self and self[func]
    end
    self.shootfunc = func
    if interval then
        self.shootinterval = interval
        self.shoottimer = interval
    end
    if count then
        self.shootcount = count
    end
end

function Character:stopShooting()
    self:setShooting(nil)
end

---@param property string name of a number property of the character
---@param target number
---@param time number
function Character:setLerpingTime(property, start, target, time)
    self.lerpproperty = property
    self.lerpdelta = (target - start) / time
    self.lerptarget = target
    self.lerptime = time
    self[property] = start
end

function Character:stopLerping()
    self.lerpproperty = nil
    self.lerpdelta = nil
    self.lerptarget = nil
    self.lerptime = nil
end

local function fixedupdateLerp(self)
    local lerpproperty = self.lerpproperty
    local lerptarget = self.lerptarget
    local lerpdelta = self.lerpdelta
    local lerptime = self.lerptime or 0
    if not lerpproperty or not lerptarget or not lerpdelta or lerptime <= 0 then
        return
    end

    self[lerpproperty] = Movement.moveTowards(self[lerpproperty], lerptarget, lerpdelta)
    lerptime = lerptime - 1
    self.lerptime = lerptime
    if lerptime <= 0 then
        self[lerpproperty] = lerptarget
        self:stopLerping()
    end
end

function Character:fixedupdate()
    self.age = self.age + 1
    fixedupdateDamage(self)
    fixedupdateShoot(self)
    fixedupdateLerp(self)
    local coroutines = self.coroutines
    if coroutines then
        coroutines:startNext()
        coroutines:run()
    end
    if self.lifetime > 0 and self.age >= self.lifetime then
        self:markDisappear()
    end
end

function Character:update(dsecs, fixedfrac)
    Sprite.update(self, self.sprite, fixedfrac)
end

function Character:willDisappear()
    return self.age < 0
end

function Character:markDisappear()
    self.age = -huge
end

function Character:disappear()
    Sprite.remove(self, "sprite")
    Body.remove(self)
end

return Character