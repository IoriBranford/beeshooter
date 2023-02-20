local Audio      = require "System.Audio"
local GuiObject    = require "Gui.GuiObject"
local class        = require "pl.class"

---@class Button:GuiObject
local Button = class(GuiObject)
Button.ismenuitem = true

function Button:init()
    local action = self.action
    self.action = self[action] or Button.playInvalidSound

    local points = self.points
    if points then
        local x1, y1, x2, y2 = math.huge, math.huge, -math.huge, -math.huge
        for i = 2, #points, 2 do
            local x, y = points[i-1], points[i]
            x1 = math.min(x1, x)
            y1 = math.min(y1, y)
            x2 = math.max(x2, x)
            y2 = math.max(y2, y)
        end
        self.leftx = self.x + x1
        self.topy = self.y + y1
        self.width = x2-x1
        self.height = y2-y1
    elseif self.tile then
        self.leftx = self.x - self.tile.objectoriginx
        self.topy = self.y - self.tile.objectoriginy
    else
        self.leftx, self.topy = self.x, self.y
    end
end

function Button:press()
    self:onDeselect()
    if self.action then
        self:action()
    end
end

function Button:onSelect()
end

function Button:onDeselect()
end

function Button:playInvalidSound()
    Audio.play(self.invalidsound)
end

function Button:openURL()
    love.system.openURL(self.url)
end

return Button