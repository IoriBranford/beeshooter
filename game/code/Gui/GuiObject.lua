
---@class GuiObject
---@field gui Gui
---@field sprite SceneObject
local GuiObject = class()

function GuiObject:init()
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
    self.x0, self.y0 = self.x, self.y
end

function GuiObject:doAction(action)
    if type(action) ~= "function" then
        action = self[action]
    end
    if type(action) == "function" then
        action(self)
    end
end

function GuiObject:changeTile(tileid)
    self.sprite:changeTile(tileid)
    self.tile = self.sprite.tile
end

function GuiObject:setString(string)
    self.string = string
    self.sprite:setTextString(string)
end

function GuiObject:setColor(r, g, b, a)
    self.sprite:setColor(r, g, b, a)
end

function GuiObject:resetPosition()
    self:setPosition(self.x0, self.y0)
end

function GuiObject:translate(dx, dy)
    local x = self.x + dx
    local y = self.y + dy
    self.x, self.y = x, y
    if self.sprite then
        self.sprite.x = x
        self.sprite.y = y
    end
    self.leftx = self.leftx + dx
    self.topy = self.topy + dy
    for i = 1, #self do
        self[i]:translate(dx, dy)
    end
end

function GuiObject:setPosition(x, y)
    self:translate(x - self.x, y - self.y)
end

function GuiObject:setSpriteHidden(hidden)
    if self.sprite then
        self.sprite.hidden = hidden or not self.visible
    end
    for i = 1, #self do
        self[i]:setSpriteHidden(hidden)
    end
end

function GuiObject:setHidden(hidden)
    self.visible = not hidden
    self:setSpriteHidden(hidden)
end

function GuiObject:hideChildrenIf(condition)
    if not condition then
        return
    end
    for _, child in ipairs(self) do
        child:setHidden(condition(child))
    end
end

function GuiObject:hideChildrenExcept(...)
    local n = select("#", ...)
    if n < 1 then
        return
    end

    for _, child in ipairs(self) do
        local name = child.name or ""
        local hidden = true
        if name ~= "" then
            for arg = 1, n do
                if name == select(arg, ...) then
                    hidden = false
                    break
                end
            end
        end
        child:setHidden(hidden)
    end
end

function GuiObject:reanchor(guiwidth, guiheight, screenwidth, screenheight)
    local anchorx = self.anchorx or 0
    local anchory = self.anchory or 0
    local dx = anchorx * (screenwidth-guiwidth)/2
    local dy = anchory * (screenheight-guiheight)/2
    self:resetPosition()
    self:translate(dx, dy)
    for i = 1, #self do
        self[i]:reanchor(guiwidth, guiheight, screenwidth, screenheight)
    end
end

return GuiObject