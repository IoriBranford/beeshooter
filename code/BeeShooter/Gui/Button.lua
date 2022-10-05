local tablex     = require "pl.tablex"
local BaseButton    = require "Gui.Button"
local Stage        = require "BeeShooter.Stage"
local GamePhase    = require "BeeShooter.GamePhase"

local Button = tablex.copy(BaseButton)
Button.__index = Button

function Button:init()
    setmetatable(self, Button)

    local pressaction = self.pressaction
    self.pressaction = Button[pressaction] or Button.playInvalidSound
end

function Button:resumeGame()
    GamePhase.setPaused(false)
end

function Button:endGame()
    Stage.restart()
end

return Button