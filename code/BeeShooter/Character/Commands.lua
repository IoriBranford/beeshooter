local Config   = require "System.Config"
local Stage

local setfenv = setfenv
local wait, waitfor = coroutine.wait, coroutine.waitfor
local yield, resume = coroutine.yield, coroutine.resume

local Env = {
    random = love.math.random,
    pi = math.pi,
    print = print,
    wait = wait,
    waitfor = waitfor,
    yield = yield,
    abs = math.abs,
    atan2 = math.atan2
}
local self
local EnvMetatable = {
    __index = function(_, k)
        local v = self.script and self.script[k]
        if v == nil then
            v = self[k]
        end
        return v
    end
}
setmetatable(Env, EnvMetatable)

local pi, cos, sin = math.pi, math.cos, math.sin
local atan2 = math.atan2
local norm = math.norm

function Env.setSpeed(speed)
    self.speed = speed
end

function Env.shootAS(bullettype, angle, speed)
    angle = angle or 0
    speed = speed or 1
    local velx, vely = cos(angle)*speed, sin(angle)*speed
    Stage.addCharacter({
        type = bullettype,
        x = self.x,
        y = self.y,
        rotation = angle,
        velx = velx,
        vely = vely
    })
end
local shootAS = Env.shootAS

function Env.shootXY(bullettype, velx, vely)
    velx, vely = velx or 0, vely or 0
    local angle = velx == 0 and vely == 0 and 0 or atan2(vely, velx)
    Stage.addCharacter({
        type = bullettype,
        x = self.x,
        y = self.y,
        rotation = angle,
        velx = velx,
        vely = vely
    })
end
local shootXY = Env.shootXY

function Env.shootTargetAS(bullettype, target, angle, speed)
    if not target then
        return
    end
    local x, y = self.x, self.y
    local targetx, targety = target.x, target.y
    local angleoffset = targetx == x and targety == y and 0 or atan2(targety - y, targetx - x)
    angle = (angle or 0) + angleoffset
    speed = speed or 1
    shootAS(bullettype, angle, speed)
end

function Env.setScaleX(sx)
    self.scalex = sx
end

function Env.setCollidable(collidable)
    self.collidable = collidable
end

function Env.changeTile(tileid)
    local sprite = self.sprite
    if sprite then
        sprite:changeTile(tileid)
    end
end

function Env.setAlpha(alpha)
    local sprite = self.sprite
    if sprite then
        sprite.alpha = alpha
    end
end

function Env.setZ(z)
    self.z = z
end

function Env.disappear()
    self:markDisappear()
end

local Commands = {}

function Commands.setEnvOn(commandscript)
    Stage    = require "BeeShooter.Stage"
    setfenv(commandscript, Env)
    Env.difficulty = Config.game_difficulty
end

function Commands.run(command, character)
    self = character
    Env.self = self
    local t = type(command)
    if t=="string" then
        Env[command]()
    elseif t=="thread" then
        local ok, err = resume(command, self)
        assert(ok, err)
    elseif t=="function" then
        command()
    end
    self = nil
    Env.self = nil
end

return Commands