local GuiObject = require "Gui.GuiObject"
local Color     = require "Data.Color"

local BonusText = class(GuiObject)

local yield = coroutine.yield

function BonusText:init()
    GuiObject.init(self)
    self.x0, self.y0 = self.x, self.y
    self:setHidden(true)
end

function BonusText:start(points, message)
    self.thread = coroutine.create(self.coroutine)
    message = message or string.format("SECRET BONUS!\n\n%d", points)
    self.sprite.string = message
end

function BonusText:fixedupdate()
    local thread = self.thread
    if thread and coroutine.status(thread) ~= "dead" then
        assert(coroutine.resume(thread, self))
    else
        self.thread = nil
    end
end

function BonusText:updateHue(hue, velhue)
    self:setColor(Color.fromHSV(hue, .5, 1))
    return hue + velhue
end

function BonusText:coroutine()
    self:setHidden(false)
    self.sprite.alpha = 1
    self:setPosition(self.x0, self.y0)
    local hue = 0
    local velhue = math.pi/3
    local showtime = 90
    for _ = 1, showtime do
        hue = self:updateHue(hue, velhue)
        yield()
    end
    local vely = -1
    local moveuptime = 16
    local velalpha = -1/moveuptime
    for _ = 1, moveuptime do
        self:setPosition(self.x, self.y + vely)
        hue = self:updateHue(hue, velhue)
        self.sprite.alpha = self.sprite.alpha + velalpha
        yield()
    end
    self:setHidden(true)
end

return BonusText