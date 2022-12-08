local Config = require "System.Config"
local SubScript = {}

local loadstring, assert = loadstring, assert
local co_create, co_status = coroutine.create, coroutine.status
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
    atan2 = math.atan2,
    rad = math.rad
}
local EnvMetatable = {
    __index = function(_, k)
        return Env.self[k]
    end
}
setmetatable(Env, EnvMetatable)

---@param subscript string
---@param name string?
function SubScript.compile(subscript, name)
    if subscript then
        local func, err = loadstring(subscript, name)
        assert(func, err)
        setfenv(func, Env)
        Env.difficulty = Config.game_difficulty
        return func
    end
end

---@param character Character
---@param subscript function
function SubScript.start(character, subscript)
    if not subscript then
        return
    end
    local thread = co_create(subscript)
    character.subthread = thread
    SubScript.run(character)
end

---@param character Character
function SubScript.run(character)
    local thread = character.subthread
    if not thread then
        return
    end

    Env.self = character
    local ok, err = resume(thread, character)
    if not ok then
        error(debug.traceback(err))
    end
    Env.self = nil

    if co_status(thread) == "dead" then
        character.subthread = nil
    end
end

return SubScript