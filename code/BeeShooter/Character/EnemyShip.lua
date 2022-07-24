local Movement = require "Component.Movement"
local Body     = require "BeeShooter.Character.Body"
local SubScript = require "BeeShooter.Character.SubScript"
local Stage         = require "BeeShooter.Stage"
local GamePhase     = require "BeeShooter.GamePhase"
local Audio         = require "System.Audio"
local PlayerShip    = require "BeeShooter.Character.PlayerShip"
local Database      = require "Data.Database"
local Script        = require "Component.Script"
local EnemyShip = {}

local cos, sin, atan2 = math.cos, math.sin, math.atan2
local abs = math.abs
local huge = math.huge
local distsq = math.distsq
local yield = coroutine.yield
local wait = coroutine.wait

---@param self Character
local function waitForOnscreenState(self, onscreenstate)
    while self:isSpriteOnScreen() ~= onscreenstate do
        SubScript.run(self)
        yield()
    end
end

---@param self Character
local function walkPath(self, path)
    if not path then
        return
    end
    local points = path.points
    local pointsdata = path.pointsdata
    local stage = self.stage
    for i = 2, #points, 2 do
        repeat
            SubScript.run(self)
            local destx, desty = points[i-1], points[i]
            local velx, vely = Movement.getVelocity_speed(self.x, self.y - stage.y, destx, desty, self.speed or 1)
            Body.setVelocity(self, velx, vely + stage.vely)
            yield()
        until self.x == destx and self.y - stage.y == desty
        local pointdata = pointsdata and pointsdata[i]
        if pointdata then
            SubScript.start(self, pointdata.subscript)
        end
    end
end

local function meleeAttack(self, damage)
    if not self.collidable then
        return
    end
    local hitbox = self.hitbox
    if hitbox then
        Stage.addCharacter({
            type = "EnemyMelee",
            x = self.x + hitbox.x,
            y = self.y + hitbox.y,
            width = hitbox.width,
            height = hitbox.height,
            hitbox = hitbox,
            hitdamageenemy = damage
        })
    end
end

---@param self Character
local function flyPath(self, path, meleedamage)
    if not path then
        return
    end
    local points = path.points
    local pathy = path.y
    local pointsdata = path.pointsdata
    for i = 2, #points, 2 do
        repeat
            SubScript.run(self)
            local destx, desty = points[i-1], points[i]
            local velx, vely = Movement.getVelocity_speed(self.x, self.y - pathy, destx, desty, self.speed or 1)
            Body.setVelocity(self, velx, vely)
            meleeAttack(self, meleedamage)
            yield()
        until self.x == destx and self.y - pathy == desty
        local pointdata = pointsdata and pointsdata[i]
        if pointdata then
            self.pathpoint = pointdata
            SubScript.start(self, pointdata.subscript)
        end
    end
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
    local closestpath
    local closestdsq = huge
    local x, y = self.x, self.y
    for i, path in ipairs(paths) do
        local points = path.points
        local pathx = points[1] + path.x
        local pathy = points[2] + path.y
        local dsq = distsq(x, y, pathx, pathy)
        if dsq < closestdsq then
            closestpath = path
            closestdsq = dsq
        end
    end
    return closestpath
end

---@param self Character
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
    waitForOnscreenState(self, false)
    self:markDisappear()
end

function EnemyShip:Faller()
    while true do
        local accely = self.accely or (1/8)
        self.vely = self.vely + accely
        yield()
        if self:isSpriteOffScreenBottom() then
            self:markDisappear()
        end
    end
end

function EnemyShip:chargePlayer()
    local speed = self.speed
    local dirx, diry = math.norm(self.player.x - self.x, self.player.y - self.y)
    self.velx, self.vely = dirx * speed, diry * speed
    self:faceSpriteX(dirx)
end

function EnemyShip:PlayerCharger()
    EnemyShip.chargePlayer(self)
    waitForOnscreenState(self, true)
    waitForOnscreenState(self, false)
    self:markDisappear()
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

function EnemyShip:shootTargetAS(bullettype, target, angleoffset, speed)
    if not target then
        return
    end
    local x, y = self.x, self.y
    local targetx, targety = target.x, target.y
    local angle = targetx == x and targety == y and 0 or atan2(targety - y, targetx - x)
    angle = (angleoffset or 0) + angle
    EnemyShip.shootAS(self, bullettype, angle, speed)
end

function EnemyShip:enterBackground()
    self.z = -abs(self.z)
    self.collidable = false
    self.sprite.alpha = 0.5
end

function EnemyShip:enterForeground()
    self.z = abs(self.z)
    self.collidable = true
    self.sprite.alpha = 1
end

function EnemyShip:shootAtPlayer()
    EnemyShip.shootTargetAS(self, self.bullettype, self.player, self.shootangleoffset, self.bulletspeed)
end

function EnemyShip:shootAimAngle()
    EnemyShip.shootAS(self, self.bullettype, self.aimangle)
end

---@param self Character
function EnemyShip:startWaspAttack()
    self:setShooting(EnemyShip.shootAtPlayer, 6, 5)
    Script.setNext(self, EnemyShip.PlayerCharger)
end

---@param self Character
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