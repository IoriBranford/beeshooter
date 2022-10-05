local Audio      = require "System.Audio"
local tablex     = require "pl.tablex"
local GuiObject    = require "Gui.GuiObject"

local Button = tablex.copy(GuiObject)
Button.__index = Button

function Button:init()
    setmetatable(self, Button)

    local pressaction = self.pressaction
    self.pressaction = Button[pressaction] or Button.playInvalidSound
end

function Button:press()
    if self.pressaction then
        self:pressaction()
    end
end

function Button:playInvalidSound()
    Audio.play(self.invalidsound)
end

return Button