local Button    = require "Gui.Button"
local Audio       = require "System.Audio"
local GamePhase    = require "BeeShooter.GamePhase"
local Controls     = require "BeeShooter.Controls"
local Color        = require "Data.Color"
local Config       = require "System.Config"

---@class GameButton:Button
local GameButton = class(Button)

function GameButton:onSelect()
    self:setColor(Color.unpack(self.pressedcolor or Color.White))
    Audio.play(self.pressedsound)
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

function GameButton:toggleAudioSetting()
    local configkey = self.configkey
    local value = Config[configkey]
    if value then
        Config[configkey] = value == 0 and 0.5 or 0
        self:refreshAudioSetting()
    end
end

function GameButton:refreshAudioSetting()
    local configkey = self.configkey
    local value = Config[configkey]
    local label = self.label
    if label and value then
        label:setString(value == 0 and "OFF" or "ON")
    end
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