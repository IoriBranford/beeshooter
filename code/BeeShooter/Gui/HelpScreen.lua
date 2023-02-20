local class = require "pl.class"
local GuiObject = require "Gui.GuiObject"

local HelpScreen = class(GuiObject)

function HelpScreen:init()
    local menuitems = self.controls.menuitems
    for _, menuitem in ipairs(menuitems) do
        menuitem.helpscreen = self
    end
    self:setPage(1)
end

function HelpScreen:setPage(p)
    local pages = self.pages
    p = math.max(1, math.min(p, #pages))
    self.page = p
    for i, page in ipairs(pages) do
        page:setHidden(p ~= i)
    end
    local pagestring = string.format("%2d / %2d", p, #pages)
    self.controls.page:setString(pagestring)
end

function HelpScreen:incPage(delta)
    self:setPage(self.page + delta)
end

return HelpScreen