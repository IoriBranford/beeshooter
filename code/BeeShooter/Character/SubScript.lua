local Commands = require "BeeShooter.Character.Commands"
local SubScript = {}

local loadstring, assert = loadstring, assert
local co_create, co_status = coroutine.create, coroutine.status

---@param subscript string
---@param name string?
function SubScript.compile(subscript, name)
    if subscript then
        local func, err = loadstring(subscript, name)
        assert(func, err)
        Commands.setEnvOn(func)
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
    character.commandthread = thread
    SubScript.run(character)
end

---@param character Character
function SubScript.run(character)
    local thread = character.commandthread
    if not thread then
        return
    end

    Commands.run(thread, character)

    if co_status(thread) == "dead" then
        character.commandthread = nil
    end
end

return SubScript