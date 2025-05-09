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

function EnemyShip:waitForOnscreenState(onscreenstate)
    while self:isSpriteOnScreen() ~= onscreenstate do
        SubScript.run(self)
        yield()
    end
end
local waitForOnscreenState = EnemyShip.waitForOnscreenState

---@param condition fun(self:EnemyShip)
function EnemyShip:waitFor(condition)
    while not condition(self) do
        SubScript.run(self)
        yield()
    end
end

function EnemyShip:meleeAttack(damage)
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
local meleeAttack = EnemyShip.meleeAttack

function EnemyShip:doPointData(pointdata)
    self.pathpoint = pointdata
    local actiontype = pointdata.actiontype or "function"
    if actiontype == "addcoroutine" then
        self:addCoroutine(pointdata.action)
    elseif actiontype == "setcoroutines" then
        self:setNextCoroutines(pointdata.action)
    else
        local action = self[pointdata.action]
        if type(action) == "function" then
            action(self)
        else
            SubScript.start(self, pointdata.subscript)
        end
    end
end
local doPointData = EnemyShip.doPointData

local function movePath(self, path, parent, meleedamage)
    if not path then
        return
    end
    meleedamage = meleedamage or 0
    local x0, y0 = path.x, path.y
    local points = path.points
    local pointsdata = path.pointsdata
    for i = 2, #points, 2 do
        repeat
            SubScript.run(self)
            local parenty = parent and parent.y or 0
            local destx, desty = x0 + points[i-1], y0 + points[i]
            local parentvely = parent and parent.vely or 0
            local velx, vely = Movement.getVelocity_speed(self.x, self.y - parenty, destx, desty, self.speed or 1)
            Body.setVelocity(self, velx, vely + parentvely)
            meleeAttack(self, meleedamage)
            yield()
        until self.x == destx
        and self.y - (parent and parent.y or 0) == desty

        local numpointdata = pointsdata and pointsdata[i-1] or 0
        if numpointdata > 1 then
            for _, pointdata in ipairs(pointsdata[i]) do
                doPointData(self, pointdata)
            end
        elseif numpointdata == 1 then
            doPointData(self, pointsdata[i])
        end
    end
end

local function walkPath(self, path)
    movePath(self, path, self.stage)
end

function EnemyShip:flyPath(path, meleedamage)
    movePath(self, path, {y = self.stage.y}, meleedamage)
end
local flyPath = EnemyShip.flyPath

function EnemyShip:PathPoint_Rotate()
    local pathpoint = self.pathpoint
    local delta = pathpoint and pathpoint.delta or 0
    Body.setRotation(self, self.rotation + math.rad(delta))
end

function EnemyShip:Lerp(key, v0, v1, t)
    t = math.max(1, t)
    local delta = (v1 - v0) / t
    self[key] = v0
    for _ = 1, t do
        self[key] = self[key] + delta
        yield()
    end
    self[key] = v1
end

function EnemyShip:PathPoint_Lerp()
    self:addCoroutine(function()
        local pathpoint = self.pathpoint
        self:Lerp(pathpoint.property, pathpoint.startvalue, pathpoint.targetvalue, pathpoint.time)
    end)
end

function EnemyShip:PathPoint_SetSpeed()
    self.speed = self.pathpoint and self.pathpoint.speed or self.speed
end

function EnemyShip:PathPoint_SetSpeedFast()
    self.speed = self.fastspeed or 2
end

function EnemyShip:Decal()
    self.x = self.x + love.math.random(-3, 3)
    self.y = self.y + love.math.random(-3, 3)
    self.sprite:randomizeTile()
    self.sprite.red = self.sprite.red + (love.math.random() - .5) / 64
    self.sprite.green = self.sprite.green + (love.math.random() - .5) / 64
    self.sprite.blue = self.sprite.blue + (love.math.random() - .5) / 64
    self:Idler()
end

function EnemyShip:HiddenBonus()
    while not self:isSpriteOnScreen() do
        Body.setVelocity(self, 0, self.stage.vely)
        yield()
    end
    while self:isSpriteOnScreen() do
        local healthpercent = self.health/self.maxhealth
        local flashspeed = math.pi / max(2, min(self.health, 30))
        self.sprite.alpha = (1 - healthpercent) * sin(self.age * flashspeed)
        Body.setVelocity(self, 0, self.stage.vely)
        yield()
    end
    self:markDisappear()
end

function EnemyShip:notifyHiddenBonus()
    self:defaultDefeat()
    local bonusletters = self.player.bonusletters or {"_", "_", "_", "_", "_"}
    self.player.bonusletters = bonusletters
    local i = self.bonusletterindex or 0
    if 1 <= i and i <= #bonusletters then
        bonusletters[i] = self.name
    end
    local points = self.defeatpoints or 0
    local message = string.format("SECRET ITEM!\n\n%s  %5d", table.concat(bonusletters, ""), points)
    self.player:notifySecretBonus(points, message)
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
        local x0, y0 = path.x, path.y
        local pathx = x0 + points[1]
        local pathy = y0 + points[2]
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
    self:waitFor(self.isSpriteOffScreenBottom)
    self:markDisappear()
end

function EnemyShip:ShrinkingParticle()
    local angle = love.math.random() * math.pi * 2
    local speed = love.math.random() * 4 + 4
    local velx, vely = cos(angle)*speed, sin(angle)*speed
    Body.setVelocity(self, velx, vely)
    Body.setRotation(self, angle)
    local shrinkawayspeed = self.shrinkawayspeed or (1/15)
    self.scalexy = abs(self.scalexy or 1)
    while self.scalexy > 0 do
        self.scalexy = self.scalexy - shrinkawayspeed
        yield()
    end
    self:markDisappear()
end

function EnemyShip:Faller()
    local tumbleaxis = self.tumbleaxis
    if tumbleaxis == "random" then
        tumbleaxis = love.math.random(2) == 1 and "x" or "y"
    end
    local tumblespeed = self.tumblespeed or 1
    local tumble = love.math.random(0x10000)
    while true do
        local accely = self.accely or (1/8)
        self.vely = self.vely + accely
        if self.vely ~= 0 or self.velx ~= 0 then
            Body.setRotation(self, atan2(self.vely, self.velx))
        end
        if tumbleaxis == "x" then
            self.scalex = cos(tumble)
        elseif tumbleaxis == "y" then
            self.scaley = cos(tumble)
        end
        tumble = tumble + tumblespeed
        yield()
        if not self:isSpriteOnScreen() then
            self:markDisappear()
        end
    end
end

function EnemyShip:Egg()
    self.lifetime = self.lifetime or 60
    while self.age < self.lifetime do
        Body.setVelocity(self, 0, self.stage.vely)
        yield()
    end
    if self:isSpriteOnScreen() and self.health > 0 then
        local spawned = self:spawnType(self.bullettype)
        if self.charactergroup then
            self.charactergroup:add(spawned)
        end
        self.defeated = true -- for checkAllEnemyShipsDefeated
    end
end

function EnemyShip:WaspHatch()
    coroutine.waitfor(function()
        return self.sprite:isAnimationEnding(1)
    end)
    self.collidable = true
    self.sprite:changeTile("fly")
    self:startWaspAttack()
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
    Body.setRotation(self, 0)
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

function EnemyShip:shootBurstsAtAngle(bursts, burstinterval, burstshots, shotinterval,
                                    angle, shotdeltaangle, burstdeltaangle)
    angle = (angle or 0)
    bursts = bursts or 1
    burstinterval = burstinterval or 1
    burstshots = burstshots or 1
    burstdeltaangle = (burstdeltaangle or 0)
    shotdeltaangle = (shotdeltaangle or 0)
    shotinterval = shotinterval or 1
    for b = 1, bursts do
        wait(burstinterval)
        for s = 1, burstshots do
            wait(shotinterval)
            shootAS(self, self.bullettype, angle)
            if s < burstshots then
                angle = angle + shotdeltaangle
            end
        end
        if b < bursts then
            angle = angle + burstdeltaangle
        end
    end
end

function EnemyShip:PathPoint_ShootBurstsAtAngle()
    local pathpoint = self.pathpoint
    local bullettype = pathpoint.bullettype or ""
    if bullettype ~= "" then
        self.bullettype = bullettype
    end
    self:shootBurstsAtAngle(
        pathpoint.bursts, pathpoint.burstinterval, pathpoint.burstshots, pathpoint.shotinterval,
            math.rad(pathpoint.angle or 0), math.rad(pathpoint.shotdeltaangle or 0),
            math.rad(pathpoint.burstdeltaangle or 0)
    )
end

function EnemyShip:shootBurstsAtTarget(target, bursts, burstinterval, burstshots, shotinterval,
                                    angleoffset, shotdeltaangleoffset, burstdeltaangleoffset)
    target = target or self.player
    angleoffset = (angleoffset or 0)
    bursts = bursts or 1
    burstinterval = burstinterval or 1
    burstshots = burstshots or 1
    burstdeltaangleoffset = (burstdeltaangleoffset or 0)
    shotdeltaangleoffset = (shotdeltaangleoffset or 0)
    shotinterval = shotinterval or 1
    for b = 1, bursts do
        wait(burstinterval)
        for s = 1, burstshots do
            wait(shotinterval)
            self:shootTargetAS(self.bullettype, target, angleoffset)
            if s < burstshots then
                angleoffset = angleoffset + shotdeltaangleoffset
            end
        end
        if b < bursts then
            angleoffset = angleoffset + burstdeltaangleoffset
        end
    end
end

function EnemyShip:PathPoint_ShootBurstsAtTarget()
    local pathpoint = self.pathpoint
    self:shootBurstsAtTarget(pathpoint.target,
        pathpoint.bursts, pathpoint.burstinterval, pathpoint.burstshots, pathpoint.shotinterval,
        math.rad(pathpoint.angleoffset or 0), math.rad(pathpoint.shotdeltaangleoffset or 0),
        math.rad(pathpoint.burstdeltaangleoffset or 0)
    )
end

function EnemyShip:PathPoint_SlowSpeedAndShootBurstsAtTarget()
    self.speed = self.slowspeed or 1
    self:PathPoint_ShootBurstsAtTarget()
end

function EnemyShip:shootAtAimAngleOnDefeat()
    if self:isSpriteFullyOnScreen() then
        EnemyShip.shootAimAngle(self)
    end
    self:defaultDefeat()
end

function EnemyShip:shootAtPlayerOnDefeat()
    if self:isSpriteFullyOnScreen() then
        EnemyShip.shootAtPlayer(self)
    end
    self:defaultDefeat()
end

function EnemyShip:shootAimAngle()
    shootAS(self, self.bullettype, self.aimangle)
end

function EnemyShip:WaspCharge()
    EnemyShip.chargePlayer(self)
    self:waitFor(self.isSpriteOnScreen)
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
    local pathpoint = self.pathpoint
    local centerangle = pi/2
    local arcs = {}
    local speeds = {}
    local bursts = pathpoint and pathpoint.bursts or 5
    local burstshots = pathpoint and pathpoint.burstshots or 4
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
        wait(45)
    end
end

function EnemyShip:getCirclingVelocity(centerx, centery, angle, dist)
    local posx, posy = centerx + dist*cos(angle), centery + dist*sin(angle)
    return posx - self.x, posy - self.y
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

local function dropDyingEffects(self)
    local hitbox = self.hitbox
    local dyingeffects = self.dyingeffect or "KillSmall DecalBlood"
    for i = 1, 20 do
        Audio.play(self.dyingsound)
        if dyingeffects then
            for dyingeffect in dyingeffects:gmatch("%S+") do
                Stage.addCharacter({
                    type = dyingeffect,
                    x = self.x + hitbox.x + love.math.random(hitbox.width),
                    y = self.y + hitbox.y + love.math.random(hitbox.height),
                })
            end
        end
        wait(6)
    end
end

function EnemyShip:defeatMidBoss()
    self.player:giveInvincibleTime(240)
    Stage.pauseTimerUntilNextEnemy()
    Stage.addToTimer(60*60)
    self:giveDefeatPoints()
    self.collidable = false
    Stage.killTeam("EnemyShip")
    Stage.killTeam("EnemyShot")
    Body.setVelocity(self, 0, .125)
    dropDyingEffects(self)
    Audio.play(self.defeatsound)
    self:spawnTypes(self.defeatdrops)
    self:markDisappear()
    Stage.setVelY(self.stage.startvely or .75)
end

EnemyShip.defeatAlienMind = EnemyShip.defeatMidBoss

function EnemyShip:defeatBoss()
    self.player:giveInvincibleTime(240)
    Stage.stop()
    self:giveDefeatPoints()
    self.collidable = false
    Stage.killTeam("EnemyShip")
    Stage.killTeam("EnemyShot")
    Body.setVelocity(self, 0, .125)
    dropDyingEffects(self)
    Audio.play(self.defeatsound)
    self:spawnTypes(self.defeatdrops)
    self:markDisappear()
    GamePhase.win()
end

function EnemyShip:DamageFlashRed()
    while true do
        local health = math.max(2, self.health)
        if health < self.maxhealth and self.age % health == 0 then
            self.sprite.green, self.sprite.blue = 0, 0
        else
            self.sprite.green, self.sprite.blue = 1, 1
        end
        yield()
    end
end

function EnemyShip:defeatWithAllEnemyBonus()
    self:defaultDefeat()
    local group = self.charactergroup
    local bonus = group and group.allenemiesdefeatedbonus or 0
    if bonus <= 0 then
        return
    end
    local window = group.allenemiesdefeatedbonuswindow
    if group:checkAllEnemyShipsDefeatedInWindow(window) then
        self.player:giveSecretBonus(bonus)
        group.allenemiesdefeatedbonus = nil
    end
end

function EnemyShip:defeatDropItemIfLast()
    self:defaultDefeat()
    local dropsifdefeatedlast = self.dropsifdefeatedlast
    if not dropsifdefeatedlast then
        return
    end
    local group = self.charactergroup
    if group and group:checkAllEnemyShipsDefeated() then
        self:spawnTypes(dropsifdefeatedlast)
    end
end

return EnemyShip