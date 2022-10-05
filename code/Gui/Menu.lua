local Audio = require "System.Audio"
local tablex= require "pl.tablex"
local GuiObject = require "Gui.GuiObject"

---@class Menu
local Menu = tablex.copy(GuiObject)
Menu.__index = Menu

function Menu:init()
    setmetatable(self, Menu)
    local platform = love.system.getOS()

    local cursors = {}
    local buttons = {}
    self.cursors = cursors
    self.buttons = buttons

    for _, object in ipairs(self) do
        local platforms = object.platforms or "all"
        if platforms == "all" or platforms:find(platform) then
            local oclass = object.class
            if oclass:find("Gui.Cursor") then
                cursors[#cursors+1] = object
            elseif oclass:find("Gui.Button") then
                buttons[#buttons + 1] = object
            end
        else
            object:setHidden(true)
        end
    end

    assert(#buttons > 0, self.name.." is a Menu without Buttons")

    table.sort(buttons, function(a,b)
        return a.y < b.y
    end)

    self:selectButton(1)
    return self
end

function Menu:selectButton(i)
    local buttons = self.buttons
    local button = buttons[i]
    local oldbutton = buttons[self.cursorposition]
    if oldbutton then
        if oldbutton.onDeselect then
            oldbutton:onDeselect()
        end
    end
    if button.onSelect then
        button:onSelect()
    end
    for _, cursor in ipairs(self.cursors) do
        cursor:setPosition(
            button.x + (cursor.offsetx or 0),
            button.y + (cursor.offsety or 0))
    end
    self.cursorposition = i
end

function Menu:moveCursor(dir)
    dir = dir / math.abs(dir)
    local i = self.cursorposition
    local buttons = self.buttons
    i = i + dir
    if i < 1 then
        i = #buttons
    elseif i > #buttons then
        i = 1
    end
    self:selectButton(i)
end

function Menu:pressSelectedButton()
    local button = self.buttons[self.cursorposition]
    if button then
        button:press()
    end
end

return Menu