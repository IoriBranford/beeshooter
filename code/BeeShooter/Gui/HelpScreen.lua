local class = require "pl.class"
local GuiObject = require "Gui.GuiObject"

---@class HelpScreen:GuiObject
local HelpScreen = class(GuiObject)

function HelpScreen:init()
    GuiObject.init(self)
    local menuitems = self.controls.menuitems
    for _, menuitem in ipairs(menuitems) do
        menuitem.helpscreen = self
    end
    self.controls.page:initPages()
    self.controls.page:setValue(1)
end

function HelpScreen:setPage(p)
    local pages = self.pages
    p = math.max(1, math.min(p, #pages))
    self.page = p
    for i, page in ipairs(pages) do
        page:setHidden(p ~= i)
    end
    local pagestring = string.format("%d / %d", p, #pages)
    self.controls.page:setString(pagestring)
end

function HelpScreen:incPage(delta)
    self:setPage(self.page + delta)
end

function HelpScreen:selectButton(i)
    self.controls:selectButton(i)
end

return HelpScreen