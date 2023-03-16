local newCircleShape = love.physics.newCircleShape
local newRectangleShape = love.physics.newRectangleShape
local newPolygonShape = love.physics.newPolygonShape
local newChainShape = love.physics.newChainShape
local newBody = love.physics.newBody
local newFixture = love.physics.newFixture

local Body = {}

local function addFixtureToBody(body, shapeobject, offsetx, offsety)
    local shapetype = shapeobject.shape
    local shape
    if shapetype == "rectangle" then
        local w = shapeobject.width or 1
        local h = shapeobject.height or 1
        shape = newRectangleShape(
            offsetx+w/2, offsety+h/2, w, h)
    elseif shapetype == "ellipse" then
        local w = shapeobject.width or 1
        local h = shapeobject.height or 1
        shape = newCircleShape(
            offsetx+w/2, offsety+h/2, (w + h) / 4)
    elseif shapetype == "polygon" then
        local points = shapeobject.points
        if #points <= 16 then
            shape = newPolygonShape(points)
        else
            shape = newChainShape(true, points)
        end
    elseif shapetype == "polyline" then
        shape = newChainShape(false, shapeobject.points)
    end
    local fixture = shape and newFixture(body, shape)
    if fixture then
        fixture:setFriction(shapeobject.friction or 0)
        fixture:setSensor(shapeobject.sensor or false)
    end
end

function Body.addToWorld(self, world)
    local x, y = self.x, self.y
    local body = self.body
    if not body then
        local bodytype = self.bodytype
        body = bodytype and newBody(world, x, y, bodytype)
        self.body = body
    end
    if not body then
        return
    end

    body:setFixedRotation(not self.bodyrotation)
    body:setAngle(self.bodyrotation and self.rotation or 0)
    body:setLinearVelocity(self.velx or 0, self.vely or 0)
    body:setSleepingAllowed(not self.bodystayawake)
    for i, fixture in pairs(body:getFixtures()) do
        fixture:destroy()
    end
    local tile = self.tile
    if tile then
        local shapes = tile.shapes
        if shapes then
            for i = 1, #shapes do
                local shapeobject = shapes[i]
                if shapeobject.collidable then
                    addFixtureToBody(body, shapeobject,
                        shapeobject.x, shapeobject.y)
                end
            end
        end
    elseif self.collidable then
        addFixtureToBody(body, self, 0, 0)
    end
    body:setBullet(self.bodybullet or false)
    body:setUserData(self)
end

function Body.setPosition(self, x, y)
    local body = self.body
    if body then
        body:setPosition(x, y)
    end
    self.x, self.y = x, y
end

function Body.setVelocity(self, velx, vely)
    local body = self.body
    if body then
        body:setLinearVelocity(velx, vely)
    end
    self.velx, self.vely = velx, vely
end

function Body.setRotation(self, angle)
    local body = self.body
    if body then
        body:setAngle(angle)
    end
    self.rotation = angle
end

function Body.getPosition(self)
    local body = self.body
    if body then
        return body:getPosition(self)
    end
    return self.x, self.y
end

function Body.getVelocity(self)
    local body = self.body
    if body then
        return body:getLinearVelocity()
    end
    return self.velx, self.vely
end

function Body.getRotation(self)
    local body = self.body
    if body then
        return body:getAngle()
    end
    return self.rotation
end

function Body.fixedupdateBody(self)
    local body = self.body
    if body then
        self.x, self.y = body:getPosition()
        self.velx, self.vely = body:getLinearVelocity()
    else
        self.x = self.x + self.velx
        self.y = self.y + self.vely
    end
end

function Body.respondToCollisions(self, response)
    local body = self.body
    if not body then
        return
    end
    local contacts = body:getContacts()
    for i = 1, #contacts do
        local contact = contacts[i]
        if contact:isTouching() then
            local f1, f2 = contact:getFixtures()
            local b1, b2 = f1:getBody(), f2:getBody()
            if b2 == body then
                b1, b2 = b2, b1
            end
            local other = b2:getUserData()
            if other then
                response(self, other)
            end
        end
    end
end

function Body.remove(self)
    local body = self.body
    if body then
        for _, fixture in pairs(body:getFixtures()) do
            fixture:destroy()
        end
        body:setUserData(nil)
        body:destroy()
        self.body = nil
    end
end

return Body