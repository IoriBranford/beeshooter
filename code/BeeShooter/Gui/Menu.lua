local class        = require "pl.class"
local Menu         = require "Gui.Menu"
local GamePhase    = require "BeeShooter.GamePhase"
local Stage        = require "BeeShooter.Stage"

---@class GameMenu:Menu
local GameMenu = class(Menu)

function GameMenu:showHelp()
    self.gui.titlescreen.help:setHidden(false)
    self.gui.titlescreen.help.controls.page:setValue(1)
end

function GameMenu:hideHelp()
    self.gui.titlescreen.help:setHidden(true)
end

function GameMenu:resumeGame()
    GamePhase.setPaused(false)
end

function GameMenu:endGame()
    GamePhase.restart()
end

return GameMenu