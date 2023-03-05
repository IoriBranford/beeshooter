local class        = require "pl.class"
local Menu         = require "Gui.Menu"
local GamePhase    = require "BeeShooter.GamePhase"
local Stage        = require "BeeShooter.Stage"

---@class GameMenu:Menu
local GameMenu = class(Menu)

function GameMenu:closeHelp()
    GamePhase.closeHelp()
end

function GameMenu:resumeGame()
    GamePhase.setPaused(false)
end

function GameMenu:endGame()
    Stage.restart()
end

return GameMenu