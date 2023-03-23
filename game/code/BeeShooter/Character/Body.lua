local HC = require "HC"
local Body = {}

local function newShape(self, shapeobject, x, y)
    local shapetype = shapeobject.shape
    if shapetype == "rectangle" then
        local offsetx = shapeobject.x or 0
        local offsety = shapeobject.y or 0
        local w = shapeobject.width or 1
        local h = shapeobject.height or 1
        local shape = HC.rectangle(x + offsetx, y + offsety, w, h)
        shape:setRotation(self.rotation or 0, x, y)
        shape.character = self
        return shape
    elseif shapetype == "ellipse" then
        local offsetx = shapeobject.x or 0
        local offsety = shapeobject.y or 0
        local w = shapeobject.width or 1
        local h = shapeobject.height or 1
        local shape = HC.circle(x + offsetx + w/2, y + offsety + h/2, (w + h) / 4)
        shape:setRotation(self.rotation or 0, x, y)
        shape.character = self
        return shape
    -- elseif shapetype == "polygon" then
    --     local points = shapeobject.points
    --     shape = HC.polygon(table.unpack(points))
    --     shape:move(x, y)
    end
end

function Body.addToWorld(self, world)
    local x, y = self.x, self.y
    local body = self.body
    if not body then
        local bodytype = self.bodytype
        body = bodytype and {}
        self.body = body
    end
    if not body then
        return
    end

    for i = #body, 1, -1 do
        body[i] = nil
    end
    local tile = self.tile
    if tile then
        local shapes = tile.shapes
        if shapes then
            for i = 1, #shapes do
                local shapeobject = shapes[i]
                if shapeobject.collidable or shapeobject.name=="hitbox" then
                    body[#body+1] = newShape(self, shapeobject, x, y)
                end
            end
        else
            local tilerect = tile.rectangle
            if not tilerect then
                tilerect = {
                    shape = 'rectangle',
                    x = -tile.objectoriginx,
                    y = -tile.objectoriginy,
                    width = tile.width,
                    height = tile.height
                }
                tile.rectangle = tilerect
            end
            body[#body+1] = newShape(self, tilerect, x, y)
        end
    elseif self.collidable then
        body[#body+1] = newShape(self, self, 0, 0)
    end
end

function Body.setPosition(self, x, y)
    local body = self.body
    if body then
        local dx, dy = x - self.x, y - self.y
        for _, shape in ipairs(body) do
            shape:move(dx, dy)
        end
    end
    self.x, self.y = x, y
end

function Body.setVelocity(self, velx, vely)
    self.velx, self.vely = velx, vely
end

function Body.setRotation(self, angle)
    local body = self.body
    if body then
        local x, y = self.x, self.y
        for _, shape in ipairs(body) do
            shape:setRotation(angle, x, y)
        end
    end
    self.rotation = angle
end

function Body.getPosition(self)
    return self.x, self.y
end

function Body.getVelocity(self)
    return self.velx, self.vely
end

function Body.getRotation(self)
    return self.rotation
end

function Body.fixedupdateBody(self)
    local body = self.body
    local velx, vely = self.velx, self.vely
    if body then
        for _, shape in ipairs(body) do
            shape:move(velx, vely)
        end
    end
    self.x = self.x + velx
    self.y = self.y + vely
end

function Body.respondToCollisions(self, response)
    local body = self.body
    if not body then
        return
    end
    for _, shape in ipairs(body) do
        local contacts = HC.collisions(shape)
        for othershape in pairs(contacts) do
            local othercharacter = othershape.character
            if othercharacter then
                response(self, othercharacter)
            end
        end
    end
end

function Body.collidesWith(self, other)
    local body = self.body
    if not body then
        return false
    end
    for _, shape in ipairs(body) do
        local contacts = HC.collisions(shape)
        for othershape in pairs(contacts) do
            local othercharacter = othershape.character
            if othercharacter == other then
                return true
            end
        end
    end
end

function Body.remove(self)
    local body = self.body
    if body then
        for i = #body, 1, -1 do
            local shape = body[i]
            HC.remove(shape)
            shape.character = nil
            body[i] = nil
        end
        self.body = nil
    end
end

function Body.draw(self)
    local body = self.body
    if not body then
        return
    end
    for _, shape in ipairs(body) do
        shape:draw('line')
    end
    love.graphics.circle("line", self.x, self.y, 1)
end

return Body