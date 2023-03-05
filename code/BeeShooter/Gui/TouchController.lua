local class = require "pl.class"
local Canvas    = require "System.Canvas"
local Menu      = require "BeeShooter.Gui.Menu"
local Controls  = require "System.Controls"

---@class TouchController:GameMenu
---@field movecursor GuiObject
local TouchController = class(Menu)

function TouchController:init()
    Menu.init(self)
    Controls.setDestination()
    Controls.releaseTouchButton("fire")
    local movecursor = self.movecursor
    self.movecursorx0, self.movecursory0 = movecursor.x, movecursor.y
end

function TouchController:hideMoveCursor()
    local movecursor = self.movecursor
    movecursor:setHidden(true)
end

function TouchController:resetMoveCursor()
    local movecursor = self.movecursor
    movecursor:setHidden(false)
    movecursor:setPosition(self.movecursorx0, self.movecursory0)
    Controls.setDestination()
end

function TouchController:touchpressed(id, x, y)
    Menu.touchpressed(self, id, x, y)
    if self.movetouchid or self.menutouchid == id then
        return
    end
    self.movetouchid = id
    local movecursor = self.movecursor
    Controls.setDestination(movecursor.x, movecursor.y)
    Controls.pressTouchButton("fire", id)
end

function TouchController:touchmoved(id, x, y, dx, dy)
    Menu.touchmoved(self, id, x, y)
    if self.movetouchid ~= id or self.menutouchid == id then
        return
    end
    dx, dy = Canvas.inverseTransformVector(dx, dy)

    local movecursor = self.movecursor
    x, y = movecursor.x + dx, movecursor.y + dy
    x = math.max(8, math.min(x, 256-8))
    y = math.max(8, math.min(y, 224-8))
    movecursor:setPosition(x, y)
    Controls.setDestination(x, y)
end

function TouchController:touchreleased(id)
    local menutouchid = self.menutouchid
    Menu.touchreleased(self, id)
    if self.movetouchid ~= id or menutouchid == id then
        return
    end
    self.movetouchid = nil
    Controls.releaseTouchButton("fire")
end

function TouchController:keypressed(key)
end

function TouchController:gamepadpressed(gamepad, button)
end

return TouchController