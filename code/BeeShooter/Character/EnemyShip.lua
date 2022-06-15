local Movement = require "Component.Movement"
local Body     = require "BeeShooter.Character.Body"
local EnemyShip = {}

local yield = coroutine.yield

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
function EnemyShip:Ant()
    walkPath(self, self.path)
    waitUntilOffscreen(self)
    self:markDisappear()
end

return EnemyShip