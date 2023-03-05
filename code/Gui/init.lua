local Scene = require "System.Scene"
local Tiled = require "Data.Tiled"
local GuiObject = require "Gui.GuiObject"
local class     = require "pl.class"

---@class Gui:GuiObject
---@field activemenu Menu
---@field menustack Menu[]
local Gui = class(GuiObject)

---@param map string|table Tiled map exported to Lua, either table or filename
---@return Gui
function Gui.new(map, rootpath)
    if type(map) == "string" then
        map = Tiled.load(map)
    end
    local self = map.layers
    if type(rootpath) == "string" then
        for layername in rootpath:gmatch("[^.]+") do
            self = self[layername]
            if not self then
                print(string.format("W: root not found %s", rootpath))
                self = map.layers
                break
            end
        end
    end
    self.width = map.width*map.tilewidth
    self.height = map.height*map.tileheight
    self.class = "Gui"
    local scene = Scene.new()
    scene:addLayers(self)
    self.scene = scene
    self.menustack = {}

    local function init(element)
        for i = 1, #element do
            init(element[i])
        end

        local ok
        local cls = element.class
        if cls ~= "" then
            ok, cls = pcall(require, cls)
            if not ok then
                print(cls)
            end
        end
        if not ok then
            cls = GuiObject
        end
        cls:cast(element)
        cls.init(element)
        if element ~= self then
            element.gui = self
        end
    end

    init(self)
    return self
end

function Gui:init()
    Gui:cast(self)
end

function Gui:resize(screenwidth, screenheight)
    for i = 1, #self do
        self[i]:reanchor(self.width, self.height, screenwidth, screenheight)
    end
end

function Gui:setActiveMenu(menu)
    if menu then
        menu:setHidden(false)
        menu:doOpenAction()
    end
    self.activemenu = menu
end

function Gui:pushMenu(menu)
    if not menu then
        return
    end
    for _, m in ipairs(self.menustack) do
        m:setHidden(true)
    end
    self.menustack[#self.menustack+1] = menu
    self:setActiveMenu(menu)
    local initialbutton = menu.initialbutton
    if initialbutton then
        menu:selectButton(initialbutton)
    end
end

function Gui:popMenu()
    local menu = self.menustack[#self.menustack]
    if not menu then
        return
    end
    menu:setHidden(true)
    self.menustack[#self.menustack] = nil
    self:setActiveMenu(self.menustack[#self.menustack])
end

function Gui:clearMenuStack()
    for i = #self.menustack, 1, -1 do
        local menu = self.menustack[i]
        menu:setHidden(true)
        self.menustack[i] = nil
    end
    self:setActiveMenu()
end

function Gui:keypressed(key)
    if self.activemenu and self.activemenu.visible then
        self.activemenu:keypressed(key)
    end
end

function Gui:gamepadpressed(gamepad, button)
    if self.activemenu and self.activemenu.visible then
        self.activemenu:gamepadpressed(gamepad, button)
    end
end

function Gui:touchpressed(id, x, y)
    if self.activemenu and self.activemenu.visible then
        self.activemenu:touchpressed(id, x, y)
    end
end

function Gui:touchmoved(id, x, y, dx, dy)
    if self.activemenu and self.activemenu.visible then
        self.activemenu:touchmoved(id, x, y, dx, dy)
    end
end

function Gui:touchreleased(id, x, y)
    if self.activemenu and self.activemenu.visible then
        self.activemenu:touchreleased(id, x, y)
    end
end

function Gui:fixedupdate()
    self.scene:animate(1)
end

function Gui:draw()
    self.scene:draw()
end

return Gui