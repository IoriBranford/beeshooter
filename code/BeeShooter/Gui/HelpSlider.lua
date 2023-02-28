local class = require "pl.class"
local Slider= require "Gui.Slider"
local GameButton= require "BeeShooter.Gui.Button"

---@class HelpSlider:Slider
---@field helpscreen HelpScreen
local HelpSlider = class(Slider)

function HelpSlider:initPages()
    self.value = 1
    self.min = 1
    self.max = #self.helpscreen.pages
    for i = 1, self.max do
        self.valuestrings[i] = string.format("%d / %d", i, self.max)
    end
end

function HelpSlider:onNewValue(value)
    self.helpscreen:setPage(value)
end

HelpSlider.closeHelp = GameButton.closeHelp

return HelpSlider