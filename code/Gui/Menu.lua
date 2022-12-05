local GuiObject = require "Gui.GuiObject"
local Config    = require "System.Config"
local class     = require "pl.class"

local Menu = class(GuiObject)

function Menu:init()
    local platform = love.system.getOS()

    local cursors = {}
    local menuitems = {}
    self.cursors = cursors
    self.menuitems = menuitems

    for _, object in ipairs(self) do
        local platforms = object.platforms or "all"
        if platforms == "all" or platforms:find(platform) then
            if object.iscursor then
                cursors[#cursors+1] = object
            elseif object.ismenuitem then
                menuitems[#menuitems + 1] = object
            end
        else
            object:setHidden(true)
        end
    end

    assert(#menuitems > 0, self.name.." is a Menu without Buttons")

    table.sort(menuitems, function(a,b)
        return a.y < b.y
    end)

    self:selectButton(1)
    return self
end

function Menu:keypressed(key)
    if key == Config.key_fire then
        self:pressSelectedButton()
    elseif key == Config.key_up then
        self:moveCursor(-1)
    elseif key == Config.key_down then
        self:moveCursor(1)
    elseif key == Config.key_left then
        self:changeSelectedSlider(-1)
    elseif key == Config.key_right then
        self:changeSelectedSlider(1)
    end
end

function Menu:gamepadpressed(gamepad, button)
    if button == "dpup" then
        self:moveCursor(-1)
    elseif button == "dpdown" then
        self:moveCursor(1)
    elseif button == "dpleft" then
        self:changeSelectedSlider(-1)
    elseif button == "dpright" then
        self:changeSelectedSlider(1)
    elseif button == Config.joy_fire then
        self:pressSelectedButton()
    end
end

function Menu:selectButton(i)
    local menuitems = self.menuitems
    local menuitem = menuitems[i]
    local lastmenuitem = menuitems[self.cursorposition]
    if lastmenuitem then
        lastmenuitem:onDeselect()
    end
    if menuitem then
        menuitem:onSelect()
        for _, cursor in ipairs(self.cursors) do
            cursor:setHidden(false)
            cursor:setPosition(
                menuitem.x + (cursor.offsetx or 0),
                menuitem.y + (cursor.offsety or 0))
            cursor:onSelect(i, menuitem)
        end
    else
        for _, cursor in ipairs(self.cursors) do
            cursor:setHidden(true)
        end
    end
    self.cursorposition = i
end

function Menu:moveCursor(dir)
    dir = dir / math.abs(dir)
    local i = self.cursorposition
    local menuitems = self.menuitems
    i = i + dir
    if i < 1 then
        i = #menuitems
    elseif i > #menuitems then
        i = 1
    end
    self:selectButton(i)
    for _, cursor in ipairs(self.cursors) do
        cursor:onMoveTo(i, menuitems[i])
    end
end

function Menu:changeSelectedSlider(dir)
    local slider = self.menuitems[self.cursorposition]
    if slider and slider.change then
        slider:change(dir)
    end
end

function Menu:pressSelectedButton()
    local button = self.menuitems[self.cursorposition]
    if button and button.press then
        button:press()
    end
end

return Menu