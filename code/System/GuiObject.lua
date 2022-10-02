---@class GuiObject
---@field sprite SceneObject

local GuiObject = {}
GuiObject.__index = GuiObject

---@param object table
---@return GuiObject
function GuiObject.init(object)
    return setmetatable(object, GuiObject)
end

function GuiObject:changeTile(tileid)
    self.sprite:changeTile(tileid)
end

function GuiObject:setString(string)
    self.string = string
    self.sprite:setTextString(string)
end

function GuiObject:setColor(r, g, b, a)
    self.sprite:setColor(r, g, b, a)
end

function GuiObject:setPosition(x, y)
    self.x, self.y = x, y
    self.sprite.x = x
    self.sprite.y = y
end

return GuiObject