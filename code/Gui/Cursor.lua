local GuiObject = require "Gui.GuiObject"
local Audio     = require "System.Audio"
local class     = require "pl.class"

local Cursor = class(GuiObject)
Cursor.iscursor = true

function Cursor:init()
end

function Cursor:onSelect(i, item)
end

function Cursor:onMoveTo(i, item)
    Audio.play(self.movesound)
end

return Cursor