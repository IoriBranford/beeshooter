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

function HelpSlider:valuechangeaction()
    self.helpscreen:setPage(self.value)
end

HelpSlider.closeMenu = GameButton.closeMenu

return HelpSlider