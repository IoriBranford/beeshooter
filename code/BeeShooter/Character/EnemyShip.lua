local Movement = require "Component.Movement"
local Body     = require "BeeShooter.Character.Body"
local EnemyShip = {}

local huge = math.huge
local distsq = math.distsq
local yield = coroutine.yield

---@param self Character
local function waitUntilOnscreen(self)
    while not self:isSpriteOnScreen() do
        yield()
    end
end

---@param self Character
local function waitUntilOffscreen(self)
    while self:isSpriteOnScreen() do
        yield()
    end
end

---@param self Character
local function walkPath(self, path)
    if not path then
        return
    end
    local points = path.points
    local stage = self.stage
    for i = 2, #points, 2 do
        repeat
            local destx, desty = points[i-1], points[i]
            local velx, vely = Movement.getVelocity_speed(self.x, self.y - stage.y, destx, desty, self.speed or 1)
            Body.setVelocity(self, velx, vely + stage.vely)
            yield()
        until self.x == destx and self.y - stage.y == desty
    end
end

---@param self Character
local function flyPath(self, path)
    if not path then
        return
    end
    local points = path.points
    local pathy = path.y
    for i = 2, #points, 2 do
        repeat
            local destx, desty = points[i-1], points[i]
            local velx, vely = Movement.getVelocity_speed(self.x, self.y - pathy, destx, desty, self.speed or 1)
            Body.setVelocity(self, velx, vely)
            yield()
        until self.x == destx and self.y - pathy == desty
    end
end

function EnemyShip:Idler()
    Body.setVelocity(self, 0, self.stage.vely)
    waitUntilOnscreen(self)
    waitUntilOffscreen(self)
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
function EnemyShip:Ant()
    walkPath(self, self.path or findPath(self))
    waitUntilOffscreen(self)
    self:markDisappear()
end

function EnemyShip:Flyer()
    flyPath(self, self.path or findPath(self))
    waitUntilOffscreen(self)
    self:markDisappear()
end

return EnemyShip