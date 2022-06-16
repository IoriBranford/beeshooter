local Config   = require "System.Config"

local setfenv = setfenv
local wait, waitfor = coroutine.wait, coroutine.waitfor
local yield, resume = coroutine.yield, coroutine.resume

local Env = {
    random = love.math.random,
    pi = math.pi,
    print = print,
    wait = wait,
    waitfor = waitfor,
    yield = yield
}
local EnvMetatable = {}
setmetatable(Env, EnvMetatable)
local self

function Env.setScaleX(sx)
    local sprite = self.sprite
    if sprite then
        sprite.sx = sx
    end
end

function Env.setCollidable(collidable)
    self.collidable = collidable
end

function Env.setAlpha(alpha)
    local sprite = self.sprite
    if sprite then
        sprite.alpha = alpha
    end
end

local Commands = {}

function Commands.setEnvOn(commandscript)
    setfenv(commandscript, Env)
    Env.difficulty = Config.game_difficulty
end

function Commands.run(command, character)
    self = character
    EnvMetatable.__index = character
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
    EnvMetatable.__index = nil
end

return Commands