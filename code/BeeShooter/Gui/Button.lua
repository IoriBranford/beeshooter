local Button    = require "Gui.Button"
local Stage        = require "BeeShooter.Stage"
local GamePhase    = require "BeeShooter.GamePhase"
local class        = require "pl.class"
local Controls     = require "System.Controls"
local Color        = require "Data.Color"

---@class GameButton:Button
local GameButton = class(Button)

function GameButton:onSelect()
    self:setColor(Color.unpack(self.pressedcolor or Color.White))
end

function GameButton:onDeselect()
    self:setColor(Color.unpack(self.color or Color.Grey))
end

function GameButton:startGame()
    GamePhase.startGame()
end

function GameButton:resumeGame()
    GamePhase.setPaused(false)
end

function GameButton:endGame()
    GamePhase.restart()
end

function GameButton:touchPauseGame()
    GamePhase.setPaused(true)
end

function GameButton:touchResumeGame()
    GamePhase.setPaused(false)
end

function GameButton:changeWeapon()
    Controls.tapButton("changeweapon")
end

function GameButton:openHelp()
    self.gui.titlescreen.help:setHidden(false)
    self.gui.titlescreen.help.controls.page:setValue(1)
    self.gui:pushMenu(self.gui.titlescreen.help.controls)
end

function GameButton:closeHelp()
    self.helpscreen:setHidden(true)
    self.gui:popMenu()
end

function GameButton:nextHelpPage()
    self.helpscreen:incPage(1)
end

function GameButton:previousHelpPage()
    self.helpscreen:incPage(-1)
end

function GameButton:openHighScore()
    self.gui.titlescreen.highscores:refresh()
    self.gui:pushMenu(self.gui.titlescreen.highscores)
end

return GameButton