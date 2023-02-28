local EnemyShip = require "BeeShooter.Character.EnemyShip"
local Movement = require "Component.Movement"
local Body = require "BeeShooter.Character.Body"
local class = require "pl.class"
local CharacterGroup = require "BeeShooter.Character.Group"
local Stage          = require "BeeShooter.Stage"
local Audio          = require "System.Audio"

local Sqrt2 = math.sqrt(2)
local CosPiThird = math.cos(math.pi/3)

---@class WaspBoss:EnemyShip
local WaspBoss = class(EnemyShip)

function WaspBoss:Breakout()
    Audio.play(self.entersound)
    Stage.explodeTileLayer("waspbossbreakablefloor", "ExplosionDebris", self.x, self.y, .25, 1/3)
    Stage.explodeTileLayer("waspbossbreakableonfloor", "ExplosionDebris", self.x, self.y)
    self:setNextCoroutines("ChooseEntryPath DamageFlashRed")
end

function WaspBoss:ChooseEntryPath()
    self.collidable = true
    local pathpoint = self.startpoint
    self.speed = pathpoint.speed or 6
    local leftpath = pathpoint.leftpath
    local rightpath = pathpoint.rightpath
    local player = self.player
    local path, face
    if player.x < self.x then
        path, face = rightpath, -1
    else
        path, face = leftpath, 1
    end
    self.path = path
    self:faceSpriteX(face)
    self:flyPath(path)
end

function WaspBoss:ChooseSweepPath()
    local pathpoint = self.pathpoint
    local horizontalpath = pathpoint.horizontalpath
    local verticalpath = pathpoint.verticalpath
    local horidiagonalpath = pathpoint.horidiagonalpath
    local vertidiagonalpath = pathpoint.vertidiagonalpath
    local player = self.player
    local path
    local healthpercent = self.health / self.maxhealth
    local dist = math.dist(self.x, self.y, player.x, player.y)
    local det = math.det(1, self.scalex, player.x - self.x, player.y - self.y)
    local dot = math.dot(1, self.scalex, player.x - self.x, player.y - self.y)
    local usediagonal = healthpercent <= .5 and dot >= dist * Sqrt2 * CosPiThird
    if det < 0 then
        if usediagonal then
            path = horidiagonalpath
        else
            path = horizontalpath
        end
    else
        if usediagonal then
            path = vertidiagonalpath
        else
            path = verticalpath
        end
    end
    self.path = path
    self:flyPath(path)
end

function WaspBoss:ChargeAndLayEggs()
    local spawngroup = CharacterGroup()
    local pathpoint = self.pathpoint
    self.speed = pathpoint.speed or 8
    local egginterval = pathpoint.egginterval or 10
    local eggtype = pathpoint.eggtype or "WaspEgg"
    self:addCoroutine(function()
        for _ = 1, pathpoint.eggs do
            coroutine.wait(egginterval)
            local egg = self:spawnType(eggtype)
            spawngroup:add(egg)
        end
    end)
    EnemyShip.chargePlayer(self)
    self:waitForOnscreenState(true)
    while self:isSpriteOnScreen() do
        self:meleeAttack(1)
        coroutine.yield()
    end
    self.collidable = false
    self.sprite:setHidden(true)
    local dest = self.startpoint
    repeat
        local velx, vely = Movement.getVelocity_speed(self.x, self.y, dest.x, dest.y, self.speed or 1)
        Body.setVelocity(self, velx, vely)
        coroutine.yield()
    until self.x == dest.x and self.y == dest.y
    self.sprite:setHidden(false)
    self:setNextCoroutines("ChooseEntryPath DamageFlashRed")
end

return WaspBoss