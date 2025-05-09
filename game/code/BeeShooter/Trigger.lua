
local Trigger = class()

function Trigger:activate()
    local action = self[self.action]
    if type(action) == "function" then
        action(self)
    end
end

function Trigger:spawnCharacters()
    local Stage = require "BeeShooter.Stage"
    Stage.doStageSpawn(self.layer)
end

function Trigger:spawnNextCharacters()
    local Stage = require "BeeShooter.Stage"
    Stage.spawnNCharacters(self.layer, self.count or 1)
end

function Trigger:stopStageScroll()
    local Stage = require "BeeShooter.Stage"
    Stage.setVelY(0)
end

return Trigger