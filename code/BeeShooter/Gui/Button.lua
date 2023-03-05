local Button    = require "Gui.Button"
local Stage        = require "BeeShooter.Stage"
local GamePhase    = require "BeeShooter.GamePhase"
local class        = require "pl.class"
local Controls     = require "System.Controls"
local Color        = require "Data.Color"
local Config       = require "System.Config"

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

function GameButton:nextHelpPage()
    self.helpscreen:incPage(1)
end

function GameButton:previousHelpPage()
    self.helpscreen:incPage(-1)
end

function GameButton:moveChangeWeaponButton()
    local changebuttonside = Config.touch_changebutton
    if changebuttonside == "BOTH" then
        changebuttonside = "LEFT"
    elseif changebuttonside == "LEFT" then
        changebuttonside = "RIGHT"
    else
        changebuttonside = "BOTH"
    end
    Config.touch_changebutton = changebuttonside
    self:refreshChangeButtonSetting()
end

function GameButton:refreshChangeButtonSetting()
    local changebuttonside = Config.touch_changebutton
    local rightbutton = self.rightbutton
    local leftbutton = self.leftbutton
    if rightbutton then
        rightbutton:setHidden(changebuttonside == "LEFT")
    end
    if leftbutton then
        leftbutton:setHidden(changebuttonside == "RIGHT")
    end
    self:setLabelString(changebuttonside)
end

return GameButton