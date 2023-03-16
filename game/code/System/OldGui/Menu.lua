local Audio = require "System.Audio"
local Element = require "Gui.Element"
local tablex  = require "pl.tablex"

local Menu = tablex.copy(Element)
Menu.__index = Menu

function Menu:init()
    setmetatable(self, Menu)
    local platform = love.system.getOS()
    for _, object in ipairs(self) do
        local platforms = object.platforms or "all"
        if platforms ~= "all" and not platforms:find(platform) then
            object:setHidden(true)
            if object.setLocked then
                object:setLocked(true)
            end
        end
    end

    local cursor = self.cursor
    cursor.offsetx = cursor.offsetx or 0
    cursor.offsety = cursor.offsety or 0
    self:initCursor()
end

function Menu:initCursor()
    local button = self[self.cursorpos]
    if not self.cursorpos or not button or not button.isLocked or button:isLocked() then
        self:moveCursor(1, #self + 1)
    end
end

function Menu:setMouseCursorMode(cursormode)
    love.mouse.setVisible(cursormode)
    love.mouse.setRelativeMode(not cursormode)
end

function Menu:mousemoved()
    self:setMouseCursorMode(true)
end

function Menu:setHoldMessageVisible(actionholdtime)
	local holdmessage = self.holdmessage
	if holdmessage then
		holdmessage:setHidden(actionholdtime <= 0)
	end
end

function Menu:moveCursorToButton(button)
    local cursor = self.cursor
    cursor.x = button.x + cursor.offsetx
    cursor.y = button.y + cursor.offsety
end

function Menu:moveCursor(dir, limit)
    local cursor = self.cursor
    dir = dir / math.abs(dir)

    local cursorpos = self.cursorpos or limit - dir

    local i = 0
    local newbutton, isbutton
    repeat
        cursorpos = cursorpos + dir
        if cursorpos == limit then
            cursorpos = cursorpos - #self*dir
        end
        newbutton = self[cursorpos]
        isbutton = newbutton and newbutton.isLocked and not newbutton:isLocked()
        i = i + 1
    until cursorpos == self.cursorpos or isbutton or i > #self

    if newbutton then
        self.isactivatekeypressed = false
        self:stopCursorActionHold()
        local oldbutton = self[self.cursorpos]
        if oldbutton then
            oldbutton:setPressed(false)
        end
        if self.cursorpos and self.cursorpos ~= cursorpos then
            Audio.play(cursor.movesound)
        end
        self:setHoldMessageVisible(newbutton.actionholdtime or 0)
        newbutton:setPressed(true)
        self:moveCursorToButton(newbutton)
    end
    self.cursorpos = cursorpos
end

function Menu:activateCursorButton()
    local button = self[self.cursorpos]
    if button then
        button:activate()
    end
end

function Menu:startCursorActionHold()
    local button = self[self.cursorpos]
    if button then
        button:startActionHold()
    end
end

function Menu:stopCursorActionHold()
	self.actionholdtimestart = nil
    local button = self[self.cursorpos]
    if button then
        button:stopActionHold()
    end
end

function Menu:showChangingCursorOption(dir)
    local button = self[self.cursorpos]
    if button then
        button:showChanging(dir)
    end
end

function Menu:changeCursorOption(dir)
    local button = self[self.cursorpos]
    if button then
        button:change(dir)
    end
end

return Menu