local PlayerShip = require "BeeShooter.Character.PlayerShip"
local Movement   = require "Component.Movement"
local Body       = require "BeeShooter.Character.Body"
local class      = require "pl.class"
local Character  = require "BeeShooter.Character"
local Item = class(Character)

local cos = math.cos
local pi = math.pi
local yield = coroutine.yield

function Item:Powerup()
    local destx = self.camera.x + self.camera.width/2
    local desty = self.camera.y + self.camera.height/6
    repeat
        local velx, vely = Movement.getVelocity_speed(self.x, self.y, destx, desty, self.speed or 8)
        Body.setVelocity(self, velx, vely)
        yield()
    until self.x == destx and self.y == desty

    local wavesign = self.velx < 0 and -1 or 1
    self.vely = .5
    local t = 0
    repeat
        self.velx = wavesign * cos(t) * 4
        t = t + pi/60
        yield()
    until not self:isSpriteOnScreen()
    self:markDisappear()
end

function Item:PowerupPickedUp()
    PlayerShip.incPowerLevel(self.player)
    self:defaultDefeat()
end

return Item