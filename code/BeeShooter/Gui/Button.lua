local BaseButton    = require "Gui.Button"
local Stage        = require "BeeShooter.Stage"
local GamePhase    = require "BeeShooter.GamePhase"
local class        = require "pl.class"

local Button = class(BaseButton)

function Button:resumeGame()
    GamePhase.setPaused(false)
end

function Button:endGame()
    Stage.restart()
end

function Button:touchPauseGame()
    GamePhase.touchSetPaused(true)
end

function Button:touchResumeGame()
    GamePhase.touchSetPaused(false)
end

function Button:fireWeaponA()
end

function Button:fireWeaponB()
end

return Button