local tablex = require "pl.tablex"
local GuiObject = require "Gui.GuiObject"

local Cursor = tablex.copy(GuiObject)
Cursor.__index = Cursor

function Cursor:init()
    setmetatable(self, Cursor)
end

return Cursor