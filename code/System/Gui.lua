local Scene = require "System.Scene"
local Tiled = require "Data.Tiled"
local GuiObject = require "System.GuiObject"

---@class Gui
local Gui = {}
Gui.__index = Gui

---@param map string|table Tiled map exported to Lua, either table or filename
---@return Gui
function Gui.new(map)
    if type(map) == "string" then
        map = Tiled.load(map)
    end
    local scene = Scene.new()
    scene:addMap(map)
    local self = map.layers
    self.scene = scene
    setmetatable(self, Gui)

    local function initGuiLayer(layer)
        local layertype = layer.type

        if layertype == "objectgroup" then
            for o = 1, #layer do
                GuiObject.init(layer[o])
            end
        elseif layertype == "group" then
            for c = 1, #layer do
                initGuiLayer(layer[c])
            end
            return
        elseif layertype == "imagelayer" then
            GuiObject.init(layer)
            return
        end
    end
    for i = 1, #self do
        initGuiLayer(self[i])
    end
    return self
end

function Gui:draw()
    self.scene:draw()
end

return Gui