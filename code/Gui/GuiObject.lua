local class = require "pl.class"

---@class GuiObject
---@field sprite SceneObject
local GuiObject = class()

function GuiObject:init()
end

function GuiObject:changeTile(tileid)
    self.sprite:changeTile(tileid)
    self.tile = self.sprite.tile
end

function GuiObject:setString(string)
    self.string = string
    self.sprite:setTextString(string)
end

function GuiObject:setColor(r, g, b, a)
    self.sprite:setColor(r, g, b, a)
end

function GuiObject:translate(dx, dy)
    local x = self.x + dx
    local y = self.y + dy
    self.x, self.y = x, y
    if self.sprite then
        self.sprite.x = x
        self.sprite.y = y
    end
    self.leftx = self.leftx + dx
    self.topy = self.topy + dy
    for i = 1, #self do
        self[i]:translate(dx, dy)
    end
end

function GuiObject:setPosition(x, y)
    self:translate(x - self.x, y - self.y)
end

function GuiObject:setSpriteHidden(hidden)
    if self.sprite then
        self.sprite.hidden = hidden or not self.visible
    end
    for i = 1, #self do
        self[i]:setSpriteHidden(hidden)
    end
end

function GuiObject:setHidden(hidden)
    self.visible = not hidden
    self:setSpriteHidden(hidden)
end

return GuiObject