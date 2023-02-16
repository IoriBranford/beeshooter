local BaseButton    = require "Gui.Button"
local Stage        = require "BeeShooter.Stage"
local GamePhase    = require "BeeShooter.GamePhase"
local class        = require "pl.class"
local Controls     = require "System.Controls"
local Platform     = require "System.Platform"

local Button = class(BaseButton)

function Button:startGame()
    GamePhase.startGame()
end

function Button:quitGame()
    if Platform.supports("quit") then
        love.event.quit()
    end
end

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

function Button:changeWeapon()
    Controls.tapButton("changeweapon")
end

function Button:touchOpenHelp()
    GamePhase.touchOpenHelp()
end

function Button:touchCloseHelp()
    GamePhase.touchCloseHelp()
end

function Button:nextHelpPage()
    self.helpscreen:incPage(1)
end

function Button:previousHelpPage()
    self.helpscreen:incPage(-1)
end

return Button