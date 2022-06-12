local Tiled = require "Data.Tiled"
local Scene = require "System.Scene"
local Database    = require "Data.Database"
local Element     = require "System.Gui.Element"

local Gui = {}
Gui.__index = Gui

function Gui.new(filename)
    local map = Tiled.load(filename)
    local gui = setmetatable(map.layers, Gui)
    local scene = Scene.new()
    gui.scene = scene

    local function addElementToScene(element)
        local uiclass = element.uiclass and require(element.uiclass) or Element
        uiclass.init(element)
        element:addToScene(scene)
    end

    local function addLayerToScene(layer)
        local layertype = layer.type
        if layertype == "group" then
            for i = 1, #layer do
                addLayerToScene(layer[i])
            end
        elseif layertype == "objectgroup" then
            for i = 1, #layer do
                local object = layer[i]
                Database.fillBlanks(object, object.type)
                addElementToScene(object)
            end
        end
        addElementToScene(layer)
    end

    local function initHidden(element, hidden)
        local layertype = element.type
        hidden = hidden or element.visible == false
        if layertype == "group" or layertype == "objectgroup" then
            for i = 1, #element do
                initHidden(element[i], hidden)
            end
        else
            element:setHidden(hidden)
        end
    end

    for i, maplayer in ipairs(gui) do
        addLayerToScene(maplayer)
    end

    for i, maplayer in ipairs(gui) do
        initHidden(maplayer)
    end

    return gui
end

function Gui:showOnlyLayer(onlylayer, onlylayerparent)
    onlylayerparent = onlylayerparent or self
    for _, layer in ipairs(onlylayerparent) do
        local hidden = layer ~= onlylayer
        layer:setHidden(hidden)
        
    end
end

function Gui:fixedupdate()
    self.scene:animate(1)
end

function Gui:draw()
    self.scene:draw()
end

return Gui