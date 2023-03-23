local class = require "pl.class"
local EnemyShip = require "BeeShooter.Character.EnemyShip"
local Audio     = require "System.Audio"
local Body      = require "BeeShooter.Character.Body"

local Tick = class(EnemyShip)

local pi = math.pi
local yield = coroutine.yield

local function canBite(self, biteindex)
    local player = self.player
    local biters = player.biters
    local biter = biters[biteindex]
    if biter and not biter:willDisappear() then
        return false
    end
    return true
end

local WeakTable = {
    __mode = "v"
}

function Tick:Tick()
    local buzzsound = Audio.newSource(self.movesound)
    if buzzsound then
        self.buzzsound = buzzsound
        buzzsound:play()
    end
    local player = self.player
    player.biters = player.biters or setmetatable({}, WeakTable)
    local biters = player.biters
    local anglefromplayer = self.rotation + pi
    self.scalexy = math.max(self.scalex, self.scaley)
    self.scalex, self.scaley = 1, 1
    local circlingspeed = math.rad(self.circlingspeed or 3)
    local circlingdist = self.circlingdist or 64
    local emergingtime = self.emergingtime or 64
    local emergingspeed = (1 - self.scalexy) / emergingtime
    local maxcirclingtime = 600
    local timer = 1

    -- circle player while emerging
    while self.scalexy ~= 1 do
        if emergingspeed > 0 then
            self.scalexy = math.min(1, self.scalexy + emergingspeed)
        elseif emergingspeed < 0 then
            self.scalexy = math.max(1, self.scalexy + emergingspeed)
        end
        Body.setVelocity(self, self:getCirclingVelocity(player.x, player.y, anglefromplayer, circlingdist))
        anglefromplayer = anglefromplayer + circlingspeed
        Body.setRotation(self, anglefromplayer + pi)
        yield()
    end

    EnemyShip.enterForeground(self)

    -- circle player until facing desired or free bite spot
    local biteangle
    local biteindex = ((math.floor(anglefromplayer/(pi/4)) % 8) + 8) % 8
    while not biteangle and timer < maxcirclingtime do
        local nextanglefromplayer = anglefromplayer + circlingspeed
        local nextbiteindex = ((math.floor(nextanglefromplayer/(pi/4)) % 8) + 8) % 8
        local wantedbiteindex = self.bitepoint or nextbiteindex
        if nextbiteindex ~= biteindex then
            if circlingspeed < 0 and biteindex == wantedbiteindex
            or nextbiteindex == wantedbiteindex then
                if canBite(self, wantedbiteindex) then
                    self.biteindex = wantedbiteindex
                    biters[wantedbiteindex] = self
                    biteangle = wantedbiteindex * pi/4
                    nextanglefromplayer = biteangle
                end
            end
        end
        Body.setVelocity(self, self:getCirclingVelocity(player.x, player.y, nextanglefromplayer, circlingdist))
        anglefromplayer = nextanglefromplayer
        biteindex = nextbiteindex
        Body.setRotation(self, anglefromplayer + pi)
        yield()
        timer = timer + 1
    end

    local bitesuccess
    local chargespeed = 8

    if biteangle then
        -- charge at player, bite on collision
        self.velx, self.vely = -math.cos(biteangle) * chargespeed, -math.sin(biteangle) * chargespeed

        while not bitesuccess and self:isSpriteOnScreen() do
            yield()
            if self:testCollisionWith(player) then
                bitesuccess = true
            end
        end
        if not bitesuccess then
            biters[biteindex] = nil
        end
    else
        self.velx, self.vely = math.cos(anglefromplayer) * chargespeed, math.sin(anglefromplayer) * chargespeed
        self:waitForOnscreenState(false)
    end

    if bitesuccess then
        local hitbox = self.hitbox
        self.hitbox = nil
        Audio.play(self.attacksound)
        Audio.play(player.hurtsound)
        -- bite player for t frames, turn red gradually
        local draintime = 128
        local draindist = 16
        for _ = 1, draintime do
            if player.defeated then
                break
            end
            Body.setVelocity(self, self:getCirclingVelocity(player.x, player.y, biteangle, draindist))
            self.sprite.green = math.max(0, self.sprite.green - (1/draintime))
            self.sprite.blue =  math.max(0, self.sprite.blue - (1/draintime))
            yield()
        end

        -- if still alive damage player and flee
        self.hitbox = hitbox
        biters[biteindex] = nil
        player:defeat()
        self.velx, self.vely = math.cos(biteangle) * chargespeed, math.sin(biteangle) * chargespeed
        self.defeatdrops = (self.defeatdrops or "").." Powerup"
        self:waitForOnscreenState(false)
    end

    -- disappear when offscreen
    self:markDisappear()
    if buzzsound then
        buzzsound:stop()
        self.buzzsound = nil
    end
end

function Tick:TickDefeat()
    if self.buzzsound then
        self.buzzsound:stop()
        self.buzzsound = nil
    end
    if self.biteindex then
        local player = self.player
        local biters = player.biters
        if biters then
            biters[self.biteindex] = nil
        end
    end
    self:defaultDefeat()
end

return Tick