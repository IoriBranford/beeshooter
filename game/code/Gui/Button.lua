local Audio      = require "System.Audio"
local GuiObject    = require "Gui.GuiObject"
local class        = require "pl.class"
local Platform     = require "System.Platform"

---@class Button:GuiObject
---@field label GuiObject?
local Button = class(GuiObject)
Button.ismenuitem = true

function Button:init()
    GuiObject.init(self)
    local action = self.action
    self.action = self[action] or Button.playInvalidSound
end

function Button:setHidden(hidden)
    GuiObject.setHidden(self, hidden)
    if self.label then
        self.label:setHidden(hidden)
    end
end

function Button:setLabelString(string)
    if self.label then
        self.label:setString(string)
    end
end

function Button:press()
    self:onDeselect()
    if self.action then
        self:action()
    end
end

function Button:onSelect()
end

function Button:onDeselect()
end

function Button:playInvalidSound()
    Audio.play(self.invalidsound)
end

function Button:openURL()
    love.system.openURL(self.url)
end

function Button:openMenu()
    local menu = self.gui:get(self.guipath)
    self.gui:pushMenu(menu)
end

function Button:closeMenu()
    self.gui:popMenu()
end

function Button:quitGame()
    if Platform.supports("quit") then
        love.event.quit()
    end
end

return Button