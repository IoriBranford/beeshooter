local Color      = require "Data.Color"
local Audio      = require "System.Audio"
local tablex     = require "pl.tablex"
local Element    = require "System.Gui.Element"
local Color_unpack = Color.unpack

local Button = tablex.copy(Element)
Button.__index = Button

function Button:isPressed()
    return self.pressed
end

function Button:isLocked()
    return self.locked
end

function Button:setPressed(pressed)
    self.pressed = pressed
end

function Button:setLocked(locked)
    self.locked = locked
end

function Button:playPressSound()
    Audio.play(self.presssound)
end

function Button:activate()
    Audio.play(self.actionsound)
    self:action()
end

function Button.init(button)
    setmetatable(button, Button)
    local script = button.script
    local action = button.action
    button.script = script and require(script)
    button.action = script and script[action]
    return button
end

function Button:addToScene(scene)
    local sceneobject = scene:addObject(self)
    self.sceneobject = sceneobject

    local normalfillcolor = self.fillcolor or 0x80808080
    local normallinecolor = self.linecolor or 0xff808080
    local pressfillcolor = self.pressfillcolor or 0xFFc0c0c0
    local presslinecolor = self.presslinecolor or 0xFFFFFFFF
    local lockedfillcolor = self.lockedfillcolor or 0xff404040
    local lockedlinecolor = self.lockedlinecolor or 0

    local normalfillred, normalfillgreen, normalfillblue, normalfillalpha = Color_unpack(normalfillcolor)
    local normallinered, normallinegreen, normallineblue, normallinealpha = Color_unpack(normallinecolor)
    local pressfillred, pressfillgreen, pressfillblue, pressfillalpha = Color_unpack(pressfillcolor)
    local presslinered, presslinegreen, presslineblue, presslinealpha = Color_unpack(presslinecolor)
    local lockedfillred, lockedfillgreen, lockedfillblue, lockedfillalpha = Color_unpack(lockedfillcolor)
    local lockedlinered, lockedlinegreen, lockedlineblue, lockedlinealpha = Color_unpack(lockedlinecolor)
    local cornerround = self.cornerround or 0

    local basedraw = sceneobject.draw
    function sceneobject.draw(sceneobject)
        local x, y, w, h = sceneobject.x - sceneobject.ox, sceneobject.y - sceneobject.oy, sceneobject.w, sceneobject.h
        local fr,fg,fb,fa,lr,lg,lb,la
        if self.locked then
            fr,fg,fb,fa = lockedfillred, lockedfillgreen, lockedfillblue, lockedfillalpha
            lr,lg,lb,la = lockedlinered, lockedlinegreen, lockedlineblue, lockedlinealpha
        elseif self.pressed then
            fr,fg,fb,fa = pressfillred, pressfillgreen, pressfillblue, pressfillalpha
            lr,lg,lb,la = presslinered, presslinegreen, presslineblue, presslinealpha
        else
            fr,fg,fb,fa = normalfillred, normalfillgreen, normalfillblue, normalfillalpha
            lr,lg,lb,la = normallinered, normallinegreen, normallineblue, normallinealpha
        end
        love.graphics.setColor(fr, fg, fb, fa)
        love.graphics.rectangle("fill", x, y, w, h, cornerround, cornerround)
        love.graphics.setColor(lr, lg, lb, la)
        love.graphics.rectangle("line", x+.5, y+.5, w, h, cornerround, cornerround)
        basedraw(sceneobject)
    end
end

return Button