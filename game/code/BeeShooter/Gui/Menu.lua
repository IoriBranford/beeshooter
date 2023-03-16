local class        = require "pl.class"
local Menu         = require "Gui.Menu"
local GamePhase    = require "BeeShooter.GamePhase"
local Stage        = require "BeeShooter.Stage"
local Config       = require "System.Config"

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

function GameMenu:refreshOptions()
    if self.movechangeweaponbutton then
        self.movechangeweaponbutton:refreshChangeButtonSetting()
    end
    if self.musicbutton then
        self.musicbutton:refreshAudioSetting()
    end
    if self.soundbutton then
        self.soundbutton:refreshAudioSetting()
    end
end

function GameMenu:saveOptions()
    Config.save()
end

return GameMenu