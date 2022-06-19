local Movement = require "Component.Movement"
local Body     = require "BeeShooter.Character.Body"
local CommandScript = require "BeeShooter.Character.CommandScript"
local Stage         = require "BeeShooter.Stage"
local GamePhase     = require "BeeShooter.GamePhase"
local Audio         = require "System.Audio"
local EnemyShip = {}

local huge = math.huge
local distsq = math.distsq
local yield = coroutine.yield
local wait = coroutine.wait

---@param self Character
local function waitForOnscreenState(self, onscreenstate)
    while self:isSpriteOnScreen() ~= onscreenstate do
        CommandScript.run(self)
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
            CommandScript.run(self)
            local destx, desty = points[i-1], points[i]
            local velx, vely = Movement.getVelocity_speed(self.x, self.y - stage.y, destx, desty, self.speed or 1)
            Body.setVelocity(self, velx, vely + stage.vely)
            yield()
        until self.x == destx and self.y - stage.y == desty
        local pointdata = pointsdata and pointsdata[i]
        if pointdata then
            CommandScript.start(self, pointdata.commandscript)
        end
    end
end

---@param self Character
local function flyPath(self, path)
    if not path then
        return
    end
    local points = path.points
    local pathy = path.y
    local pointsdata = path.pointsdata
    for i = 2, #points, 2 do
        repeat
            CommandScript.run(self)
            local destx, desty = points[i-1], points[i]
            local velx, vely = Movement.getVelocity_speed(self.x, self.y - pathy, destx, desty, self.speed or 1)
            Body.setVelocity(self, velx, vely)
            yield()
        until self.x == destx and self.y - pathy == desty
        local pointdata = pointsdata and pointsdata[i]
        if pointdata then
            CommandScript.start(self, pointdata.commandscript)
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
    local layer = self.layer
    for _ = 1, spawncount do
        wait(spawninterval)
        Stage.addCharacter({
            type = spawntype,
            x = self.x,
            y = self.y,
            layer = layer
        })
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
    self.collidable = false
    flyPath(self, self.path or findPath(self))
    Body.setVelocity(self, 0, 0)
    self.collidable = true
    local t = 0
    local reinforcements = {
        [15] = {name = "leftgunner", type = "AlienGunnerLeft", path = self.leftgunnerpath},
        [30] = {name = "rightgunner", type = "AlienGunner", path = self.rightgunnerpath},
        [75] = {name = "rightfly", type = "FlyBehind", path = self.rightflypath},
        [120] = {name = "leftfly", type = "FlyBehindLeft", path = self.leftflypath},
    }
    while true do
        yield()
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
    self.collidable = false
    Stage.killTeam("EnemyShip")
    Stage.killTeam("EnemyShot")
    Body.setVelocity(self, 0, .125)
    for i = 1, 6 do
        Audio.play(self.dyingsound)
        wait(10)
    end
    self:defaultDefeat()
    GamePhase.win()
end

return EnemyShip