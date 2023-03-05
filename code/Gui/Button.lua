local Audio      = require "System.Audio"
local GuiObject    = require "Gui.GuiObject"
local class        = require "pl.class"

---@class Button:GuiObject
local Button = class(GuiObject)
Button.ismenuitem = true

function Button:init()
    GuiObject.init(self)
    local action = self.action
    self.action = self[action] or Button.playInvalidSound
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
    love.event.quit()
end

return Button