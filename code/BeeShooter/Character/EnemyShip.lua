local Movement = require "Component.Movement"
local Body     = require "BeeShooter.Character.Body"
local SubScript = require "BeeShooter.Character.SubScript"
local Stage         = require "BeeShooter.Stage"
local GamePhase     = require "BeeShooter.GamePhase"
local Audio         = require "System.Audio"
local PlayerShip    = require "BeeShooter.Character.PlayerShip"
local Database      = require "Data.Database"
local Sprite        = require "Component.Sprite"
local Character = require "BeeShooter.Character"
local class     = require "pl.class"

---@class EnemyShip:Character
local EnemyShip = class(Character)

local pi, cos, sin, atan2 = math.pi, math.cos, math.sin, math.atan2
local abs, min, max = math.abs, math.min, math.max
local floor, ceil = math.floor, math.ceil
local fmod = math.fmod
local huge = math.huge
local distsq = math.distsq
local yield = coroutine.yield
local wait = coroutine.wait

local function waitForOnscreenState(self, onscreenstate)
    while self:isSpriteOnScreen() ~= onscreenstate do
        SubScript.run(self)
        yield()
    end
end

local function meleeAttack(self, damage)
    if not self.collidable then
        return
    end
    if damage <= 0 then
        return
    end
    local hitbox = self.hitbox
    if hitbox then
        Stage.addCharacter({
            type = "EnemyMelee",
            x = self.x,
            y = self.y,
            width = hitbox.width,
            height = hitbox.height,
            hitbox = hitbox,
            hitdamageenemy = damage
        })
    end
end

local function movePath(self, path, parent, meleedamage)
    if not path then
        return
    end
    meleedamage = meleedamage or 0
    local points = path.points
    local pointsdata = path.pointsdata
    for i = 2, #points, 2 do
        repeat
            SubScript.run(self)
            local destx, desty = points[i-1], points[i]
            local parenty = parent and parent.y or 0
            local parentvely = parent and parent.vely or 0
            local velx, vely = Movement.getVelocity_speed(self.x, self.y - parenty, destx, desty, self.speed or 1)
            Body.setVelocity(self, velx, vely + parentvely)
            meleeAttack(self, meleedamage)
            yield()
        until self.x == destx
        and self.y - (parent and parent.y or 0) == desty

        local pointdata = pointsdata and pointsdata[i]
        if pointdata then
            self.pathpoint = pointdata
            local action = self[pointdata.action]
            if type(action) == "function" then
                action(self)
            else
                SubScript.start(self, pointdata.subscript)
            end
        end
    end
end

local function walkPath(self, path)
    movePath(self, path, self.stage)
end

local function flyPath(self, path, meleedamage)
    movePath(self, path, path, meleedamage)
end

function EnemyShip:PathPoint_Rotate()
    local pathpoint = self.pathpoint
    local delta = pathpoint and pathpoint.delta or 0
    self.rotation = self.rotation + math.rad(delta)
end

function EnemyShip:Idler()
    while not self:isSpriteOnScreen() do
        Body.setVelocity(self, 0, self.stage.vely)
        yield()
    end
    while self:isSpriteOnScreen() do
        Body.setVelocity(self, 0, self.stage.vely)
        yield()
    end
    self:markDisappear()
end

local function findPath(self)
    local paths = self.layer and self.layer.paths
    if not paths then
        return
    end
    if #paths == 1 then
        return paths[1]
    end
    local closestpath
    local closestdsq = huge
    local stagey = self.stage.y
    local x, y = self.x, self.y - stagey
    for i, path in ipairs(paths) do
        local points = path.points
        local pathx = points[1]
        local pathy = points[2]
        local dsq = distsq(x, y, pathx, pathy)
        if dsq < closestdsq then
            closestpath = path
            closestdsq = dsq
        end
    end
    return closestpath
end

function EnemyShip:Walker()
    walkPath(self, self.path or findPath(self))
    Body.setVelocity(self, 0, self.stage.vely)
    waitForOnscreenState(self, true)
    waitForOnscreenState(self, false)
    self:markDisappear()
end

function EnemyShip:Flyer()
    flyPath(self, self.path or findPath(self))
    Body.setVelocity(self, 0, self.stage.vely)
    waitForOnscreenState(self, false)
    self:markDisappear()
end


function EnemyShip:Spawner()
    Body.setVelocity(self, 0, self.stage.vely)
    local spawntype = self.spawntype
    local spawninterval = self.spawninterval or 1
    local spawncount = self.spawncount or 1
    for _ = 1, spawncount do
        wait(spawninterval)
        self:spawnTypes(spawntype)
    end
    waitForOnscreenState(self, true)
    waitForOnscreenState(self, false)
    self:markDisappear()
end

function EnemyShip:Faller()
    while true do
        local accely = self.accely or (1/8)
        self.vely = self.vely + accely
        if self.vely ~= 0 or self.velx ~= 0 then
            self.rotation = atan2(self.vely, self.velx)
        end
        yield()
        if self:isSpriteOffScreenBottom() then
            self:markDisappear()
        end
    end
end

function EnemyShip:chargePlayer(dir)
    dir = dir or 1
    local speed = self.speed
    local dirx, diry = math.norm(self.player.x - self.x, self.player.y - self.y)
    self.velx, self.vely = dir * dirx * speed, dir * diry * speed
    self:faceSpriteX(dirx)
end

function EnemyShip:shootXY(bullettype, velx, vely)
    velx, vely = velx or 0, vely or 0
    local angle = velx == 0 and vely == 0 and 0 or atan2(vely, velx)
    Stage.addCharacter({
        type = bullettype,
        x = self.x,
        y = self.y,
        rotation = angle,
        velx = velx,
        vely = vely
    })
end

function EnemyShip:shootAS(bullettype, angle, speed)
    local prefab = Database.get(bullettype)
    if not prefab then
        return
    end
    angle = angle or 0
    speed = speed or prefab.speed or 1
    local velx, vely = cos(angle)*speed, sin(angle)*speed
    Stage.addCharacter({
        type = bullettype,
        x = self.x,
        y = self.y,
        rotation = angle,
        velx = velx,
        vely = vely
    })
end
local shootAS = EnemyShip.shootAS

function EnemyShip:shootTargetAS(bullettype, target, angleoffset, speed)
    if not target then
        return
    end
    local x, y = self.x, self.y
    local targetx, targety = target.x, target.y
    local angle = targetx == x and targety == y and 0 or atan2(targety - y, targetx - x)
    angle = (angleoffset or 0) + angle
    shootAS(self, bullettype, angle, speed)
end

function EnemyShip:enterBackground()
    self.z = -abs(self.z)
    self.collidable = false
    self.sprite.alpha = 0.5
end

function EnemyShip:climbUpToFloor()
    self.rotation = 0
    self.z = abs(self.z)
    self.collidable = true
    self.sprite.red = 1
    self.sprite.green = 1
    self.sprite.blue = 1
end

function EnemyShip:enterForeground()
    self.z = abs(self.z)
    self.collidable = true
    self.sprite.alpha = 1
end

function EnemyShip:shootAtPlayer()
    EnemyShip.shootTargetAS(self, self.bullettype, self.player, self.shootangleoffset, self.bulletspeed)
end

function EnemyShip:shootBurstsAtAngle(bursts, burstinterval, burstshots, shotinterval, angle, deltaangle)
    deltaangle = deltaangle or 0
    self.aimangle = angle
    local waittime = burstinterval + shotinterval*burstshots
    for i = 1, bursts do
        self:setShooting(EnemyShip.shootAimAngle, shotinterval, burstshots)
        wait(waittime)
        self.aimangle = self.aimangle + deltaangle
    end
end

function EnemyShip:shootBurstsAtPlayer(bursts, burstinterval, burstshots, shotinterval)
    local waittime = burstinterval + shotinterval*burstshots
    for i = 1, bursts do
        self:setShooting(EnemyShip.shootAtPlayer, shotinterval, burstshots)
        wait(waittime)
    end
end

function EnemyShip:shootAtAimAngleOnDefeat()
    EnemyShip.shootAimAngle(self)
    self:defaultDefeat()
end

function EnemyShip:shootAtPlayerOnDefeat()
    EnemyShip.shootAtPlayer(self)
    self:defaultDefeat()
end

function EnemyShip:shootAimAngle()
    shootAS(self, self.bullettype, self.aimangle)
end

function EnemyShip:WaspCharge()
    EnemyShip.chargePlayer(self)
    waitForOnscreenState(self, true)
    while self:isSpriteOnScreen() do
        meleeAttack(self, 1)
        yield()
    end
    self:markDisappear()
end

function EnemyShip:startWaspAttack()
    self.speed = self.chargeplayerspeed or 5
    self:setNextCoroutines(EnemyShip.WaspCharge)
end

function EnemyShip:AlienGunner_shootAtPlayer()
    local player = self.player
    local x, y = self.x, self.y
    self:faceSpriteX(player.x - x)
    local angle = atan2(player.y - y, player.x - x)
    if angle == angle then
        self.aimangle = angle
        self:setShooting(EnemyShip.shootAimAngle, 1, 5)
    end
end

function EnemyShip:startBeetleShoot()
    self:addCoroutine(self.BeetleShoot)
end

function EnemyShip:BeetleShoot()
    local centerangle = pi/2
    local arcs = {}
    local speeds = {}
    local bursts = 5
    local burstshots = 4
    for i = 1, burstshots do
        arcs[i] = self.scalex*(burstshots - i + 1)*pi/16
        speeds[i] = 1 + i/4
    end
    for _ = 1, bursts do
        for i = 1, burstshots do
            shootAS(self, self.bullettype, centerangle + arcs[i], speeds[i])
            wait(2)
        end
        shootAS(self, self.bullettype, centerangle, speeds[#speeds]+.25)
        wait(24)
    end
end

local function getCirclingVelocity(self, centerx, centery, angle, dist)
    local posx, posy = centerx + dist*cos(angle), centery + dist*sin(angle)
    return posx - self.x, posy - self.y
end

local BiteIndexes = {
    [5] = true,
    [7] = true,
    [4] = true,
    [0] = true,
    [3] = true,
    [1] = true,
}

function EnemyShip:Tick()
    Audio.play(self.movesound)
    local player = self.player
    local biters = player.biters or {}
    player.biters = biters
    local anglefromplayer = 0
    local circlingspeed = pi/30
    local emergingspeed = 1/64

    -- circle player while emerging
    while self.scalexy < 1 do
        self.scalexy = min(1, self.scalexy + emergingspeed)
        Body.setVelocity(self, getCirclingVelocity(self, player.x, player.y, anglefromplayer, 64))
        anglefromplayer = fmod(anglefromplayer + circlingspeed, 2*pi)
        self.rotation = anglefromplayer + pi
        yield()
    end

    EnemyShip.enterForeground(self)

    -- circle player until onscreen and facing free bite spot: UL, UR, CL, CR, BL, BR
    local biteangle, biteindex
    while not biteangle do
        local nextanglefromplayer = fmod(anglefromplayer + circlingspeed, 2*pi)
        if self:isSpriteOnScreen() then
            biteindex = floor(nextanglefromplayer/(pi/4))
            if BiteIndexes[biteindex] and floor(anglefromplayer/(pi/4)) ~= biteindex then
                local biter = biters[biteindex]
                if not biter or biter:willDisappear() then
                    self.biteindex = biteindex
                    biters[biteindex] = self
                    biteangle = biteindex * pi/4
                    nextanglefromplayer = biteangle
                end
            end
        end
        Body.setVelocity(self, getCirclingVelocity(self, player.x, player.y, nextanglefromplayer, 64))
        anglefromplayer = nextanglefromplayer
        self.rotation = anglefromplayer + pi
        yield()
    end

    -- charge at player, bite on collision
    local chargespeed = -8
    self.velx, self.vely = cos(biteangle) * chargespeed, sin(biteangle) * chargespeed
    local bitesuccess
    while not bitesuccess and self:isSpriteOnScreen() do
        yield()
        if self:testCollisionWith(player) then
            bitesuccess = true
        end
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
            Body.setVelocity(self, getCirclingVelocity(self, player.x, player.y, biteangle, draindist))
            self.sprite.green = max(0, self.sprite.green - (1/draintime))
            self.sprite.blue = max(0, self.sprite.blue - (1/draintime))
            yield()
        end

        -- if still alive damage player and flee
        self.hitbox = hitbox
        biters[biteindex] = nil
        player:defeat()
        chargespeed = -chargespeed
        self.velx, self.vely = cos(biteangle) * chargespeed, sin(biteangle) * chargespeed
        waitForOnscreenState(self, false)
    end

    -- disappear when offscreen
    self:markDisappear()
end

function EnemyShip:TickDefeat()
    if self.biteindex then
        local player = self.player
        local biters = player.biters
        if biters then
            biters[self.biteindex] = nil
        end
    end
    self:defaultDefeat()
end

local function alienMindSpawnReinforcement(self, name, typ, path)
    local reinforcement = self[name]
    if not reinforcement or reinforcement:willDisappear() then
        self[name] = Stage.addCharacter({
            type = typ,
            x = self.x,
            y = self.y,
            layer = self.layer,
            path = path
        })
    end
end

function EnemyShip:AlienMind()
    Stage.setVelY(0)
    self.invincibletime = huge
    flyPath(self, self.path or findPath(self), PlayerShip.InstantKillDamage)
    Body.setVelocity(self, 0, 0)
    self.invincibletime = 0
    local t = 0
    local reinforcements = {
        [15] = {name = "leftgunner", type = "AlienGunnerLeft", path = self.leftgunnerpath},
        [30] = {name = "rightgunner", type = "AlienGunner", path = self.rightgunnerpath},
        [75] = {name = "rightfly", type = "FlyBehind", path = self.rightflypath},
        [120] = {name = "leftfly", type = "FlyBehindLeft", path = self.leftflypath},
    }
    while true do
        yield()
        meleeAttack(self, PlayerShip.InstantKillDamage)
        t = t + 1
        local reinforcement = reinforcements[t % 180]

        if t % 20 == 0 then
            Stage.addCharacter({
                type = "AlienPillagerLeft",
                x = self.x,
                y = self.y,
                layer = self.layer,
                path = self.leftpillagerpath
            })
        elseif t % 20 == 10 then
            Stage.addCharacter({
                type = "AlienPillager",
                x = self.x,
                y = self.y,
                layer = self.layer,
                path = self.rightpillagerpath
            })
        end

        if reinforcement then
            alienMindSpawnReinforcement(self, reinforcement.name, reinforcement.type, reinforcement.path)
        end
    end
end

function EnemyShip:defeatAlienMind()
    EnemyShip.defeatBoss(self)
end

function EnemyShip:defeatBoss()
    Stage.stop()
    self:giveDefeatPoints()
    self.collidable = false
    Stage.killTeam("EnemyShip")
    Stage.killTeam("EnemyShot")
    Body.setVelocity(self, 0, .125)
    local hitbox = self.hitbox
    local dyingeffect = self.dyingeffect or "KillSmall"
    for i = 1, 20 do
        Audio.play(self.dyingsound)
        if dyingeffect then
            Stage.addCharacter({
                type = dyingeffect,
                x = self.x + hitbox.x + love.math.random(hitbox.width),
                y = self.y + hitbox.y + love.math.random(hitbox.height),
            })
        end
        wait(6)
    end
    Audio.play(self.defeatsound)
    self:spawnTypes(self.defeatdrops)
    self:markDisappear()
    GamePhase.win()
end

return EnemyShip