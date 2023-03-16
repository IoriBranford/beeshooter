local Physics = {}

local world
local bodies

function Physics.init()
    bodies = {}
    world = love.physics.newWorld()
end

function Physics.clear()
    bodies = nil
    world:destroy()
    world = nil
end

function Physics.addBody(id, x, y, type, shape, dim1, dim2)
    local body = love.physics.newBody(world, x, y, type)
    bodies[id] = body
    body:setUserData(id)
    return body
end

function Physics.getBody(id)
    return bodies[id]
end

function Physics.addRectangleFixture(id, w, h, x, y)
    local body = bodies[id]
    local shape = x and y and love.physics.newRectangleShape(x, y, w, h)
        or love.physics.newRectangleShape(w, h)
    local fixture = love.physics.newFixture(body, shape)
    fixture:setUserData(id)
    return fixture
end

function Physics.addCircleFixture(id, r, x, y)
    local body = bodies[id]
    local shape = x and y and love.physics.newCircleShape(x, y, r)
        or love.physics.newCircleShape(r)
    local fixture = love.physics.newFixture(body, shape)
    fixture:setUserData(id)
    return fixture
end

function Physics.addChainFixture(id, loop, ...)
    local body = bodies[id]
    local shape = love.physics.newChainShape(loop, ...)
    local fixture = love.physics.newFixture(body, shape)
    fixture:setUserData(id)
    return fixture
end

function Physics.addPolygonFixture(id, ...)
    local body = bodies[id]
    local shape = love.physics.newPolygonShape(...)
    local fixture = love.physics.newFixture(body, shape)
    fixture:setUserData(id)
    return fixture
end

function Physics.removeBody(id)
    local body = bodies[id]
    if body then
        bodies[id] = nil
        for i, fixture in pairs(body:getFixtures()) do
            fixture:destroy()
        end
        body:destroy()
    end
end

function Physics.setGravity(x, y)
    world:setGravity(x, y)
end

function Physics.fixedupdate()
    world:update(1)
end

function Physics.iterateBodies()
    return pairs(bodies)
end

function Physics.iterateContacts()
    return pairs(world:getContacts())
end

function Physics.rectCast(x, y, w, h, callback)
    world:queryBoundingBox(x, y, x+w, y+h, callback)
end

function Physics.rayCast(x1, y1, x2, y2, callback)
    world:rayCast(x1, y1, x2, y2, callback)
end

local function drawFixture(fixture)
    local shape = fixture:getShape()
    local typ = shape:getType()
    if typ == "circle" then
        local body = fixture:getBody()
        local x, y = body:getWorldPoint(shape:getPoint())
        love.graphics.circle("line", x, y, shape:getRadius())
    elseif typ == "polygon" or typ == "chain" then
        local body = fixture:getBody()
        love.graphics.setLineWidth(1)
        love.graphics.polygon("line", body:getWorldPoints(shape:getPoints()))
    end
    return true
end

function Physics.draw(viewx, viewy, vieww, viewh)
    world:queryBoundingBox(viewx, viewy, viewx + vieww, viewy + viewh, drawFixture)
end

return Physics