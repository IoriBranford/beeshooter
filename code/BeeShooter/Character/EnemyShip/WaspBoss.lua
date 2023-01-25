local EnemyShip = require "BeeShooter.Character.EnemyShip"
local Movement = require "Component.Movement"
local Body = require "BeeShooter.Character.Body"
local class = require "pl.class"

---@class WaspBoss:EnemyShip
local WaspBoss = class(EnemyShip)

function WaspBoss:ChooseEntryPath()
    local pathpoint = self.startpoint
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
    local player = self.player
    local path
    if math.det(1, self.scalex, player.x - self.x, player.y - self.y) < 0 then
        path = horizontalpath
    else
        path = verticalpath
    end
    self.path = path
    self:flyPath(path)
end

function WaspBoss:ChargeAndLayEggs()
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
    self.collidable = true
    self:setNextCoroutines(self.ChooseEntryPath)
end

return WaspBoss