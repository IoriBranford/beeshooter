---@class GuiObject
---@field sprite SceneObject

local GuiObject = {}
GuiObject.__index = GuiObject

function GuiObject:init()
    setmetatable(self, GuiObject)
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
    for i = 1, #self do
        self[i]:translate(dx, dy)
    end
end

function GuiObject:setPosition(x, y)
    self:translate(x - self.x, y - self.y)
end

function GuiObject:setHidden(hidden)
    self.visible = not hidden
    if self.sprite then
        self.sprite.hidden = hidden
    end
    for i = 1, #self do
        self[i]:setHidden(hidden)
    end
end

return GuiObject