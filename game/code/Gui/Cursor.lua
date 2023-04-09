local GuiObject = require "Gui.GuiObject"
local Audio     = require "System.Audio"
local Cursor = class(GuiObject)
Cursor.iscursor = true

function Cursor:init()
    GuiObject.init(self)
    self.offsetx = self.offsetx or 0
    self.offsety = self.offsety or 0
end

function Cursor:onSelect(i, item)
end

function Cursor:moveTo(item)
    self:setPosition(
        item.x + self.offsetx,
        item.y + self.offsety)
end

function Cursor:onMoveTo(i, item)
    Audio.play(self.movesound)
end

return Cursor