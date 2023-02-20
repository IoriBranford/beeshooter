local Button    = require "Gui.Button"
local Stage        = require "BeeShooter.Stage"
local GamePhase    = require "BeeShooter.GamePhase"
local class        = require "pl.class"
local Controls     = require "System.Controls"
local Platform     = require "System.Platform"
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

function GameButton:quitGame()
    if Platform.supports("quit") then
        love.event.quit()
    end
end

function GameButton:resumeGame()
    GamePhase.setPaused(false)
end

function GameButton:endGame()
    Stage.restart()
end

function GameButton:touchPauseGame()
    GamePhase.touchSetPaused(true)
end

function GameButton:touchResumeGame()
    GamePhase.touchSetPaused(false)
end

function GameButton:changeWeapon()
    Controls.tapButton("changeweapon")
end

function GameButton:touchOpenHelp()
    GamePhase.touchOpenHelp()
end

function GameButton:touchCloseHelp()
    GamePhase.touchCloseHelp()
end

function GameButton:nextHelpPage()
    self.helpscreen:incPage(1)
end

function GameButton:previousHelpPage()
    self.helpscreen:incPage(-1)
end

return GameButton