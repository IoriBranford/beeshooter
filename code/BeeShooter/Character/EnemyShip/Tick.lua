local class = require "pl.class"
local EnemyShip = require "BeeShooter.Character.EnemyShip"
local Audio     = require "System.Audio"
local Body      = require "BeeShooter.Character.Body"

local Tick = class(EnemyShip)

local pi = math.pi
local yield = coroutine.yield

-- UL = 5, UR = 7, CL = 4, CR = 0, BL = 3, BR = 1.
-- 
-- BiteIndexLevelReqs[playerweapon][playerpower][biteindex] = minimum difficulty to bite here.
local BiteIndexLevelReqs = {
    A =
    {
        {
            -- player must powerup
            [5] = 1,[7] = 1,

            -- player must powerup and change weapon
            -- [4] = 2,[0] = 2,

            -- player must powerup x2
            -- [3] = 2,[1] = 2,
        },
        {
            -- player must change weapon
            [4] = 1,[0] = 1,

            -- player must powerup
            [3] = 1,[1] = 1,
        },
        {
            -- player must change weapon
            [4] = 1,[0] = 1,
        }
    },
    B = {
        {
            -- player must powerup 2x or powerup and change weapon
            -- [5] = 2,[7] = 2,

            -- player must powerup
            [4] = 1,[0] = 1,

            -- player must powerup 2x and change weapon
            -- [3] = 3,[1] = 3,
        },
        {
            -- player must change weapon
            [5] = 1,[7] = 1,

            -- player must powerup and change weapon
            -- [3] = 2,[1] = 2,
        },
        {
            -- player must change weapon
            [3] = 1,[1] = 1,
        }
    }
}

local function canBite(self, biteindex)
    if not self:isSpriteOnScreen() then
        return false
    end
    local player = self.player
    local biters = player.biters
    local biter = biters[biteindex]
    if biter and not biter:willDisappear() then
        return false
    end
    local nbiters = 0
    for _, b in pairs(biters) do
        if not b:willDisappear() then
            nbiters = nbiters + 1
        end
    end
    local maxnumbiters = self.maxnumbiters or 1
    if nbiters >= maxnumbiters then
        return false
    end
    local playerweapon, playerpower = player.weapon, player.power
    local mindifficulty = BiteIndexLevelReqs[playerweapon][playerpower][biteindex] or math.huge
    local difficulty = self.difficulty or 1
    if mindifficulty > difficulty then
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
    local anglefromplayer = 0
    local distfromplayer = math.floor(math.dist(player.x, player.y, self.x, self.y))
    if distfromplayer > 0 then
        anglefromplayer = math.atan2(self.y - player.y, self.x - player.x)
    end
    self.scalexy = math.max(self.scalex, self.scaley)
    self.scalex, self.scaley = 1, 1
    local circlingspeed = math.rad(self.circlingspeed or 3)
    local circlingdist = self.circlingdist or 64
    local emergingtime = self.emergingtime or 64
    local emergingspeed = 1 / emergingtime
    local maxcirclingtime = 600
    local timer = 1

    -- circle player while emerging
    while self.scalexy ~= 1 do
        if self.scalexy < 1 then
            self.scalexy = math.min(1, self.scalexy + emergingspeed)
        else
            self.scalexy = math.max(1, self.scalexy - emergingspeed)
        end
        local distdiff = distfromplayer - circlingdist
        if distdiff >= 4 then
            distfromplayer = distfromplayer - 4
        elseif distdiff <= -4 then
            distfromplayer = distfromplayer + 4
        else
            distfromplayer = circlingdist
        end
        Body.setVelocity(self, self:getCirclingVelocity(player.x, player.y, anglefromplayer, distfromplayer))
        anglefromplayer = math.fmod(anglefromplayer + circlingspeed, 2*pi)
        self.rotation = anglefromplayer + pi
        yield()
    end

    EnemyShip.enterForeground(self)

    -- circle player until onscreen and facing free bite spot: UL, UR, CL, CR, BL, BR
    local biteangle, biteindex
    while not biteangle and timer < maxcirclingtime do
        local nextanglefromplayer = math.fmod(anglefromplayer + circlingspeed, 2*pi)
        biteindex = math.floor(nextanglefromplayer/(pi/4))
        if math.floor(anglefromplayer/(pi/4)) ~= biteindex then
            if canBite(self, biteindex) then
                self.biteindex = biteindex
                biters[biteindex] = self
                biteangle = biteindex * pi/4
                nextanglefromplayer = biteangle
            end
        end
        Body.setVelocity(self, self:getCirclingVelocity(player.x, player.y, nextanglefromplayer, circlingdist))
        anglefromplayer = nextanglefromplayer
        self.rotation = anglefromplayer + pi
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