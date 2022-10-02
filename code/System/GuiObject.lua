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
    self.sprite:setTextString(string)
end

return GuiObject