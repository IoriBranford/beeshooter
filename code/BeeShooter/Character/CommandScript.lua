local Commands = require "BeeShooter.Character.Commands"
local CommandScript = {}

local loadstring, assert = loadstring, assert
local co_create, co_status = coroutine.create, coroutine.status

---@param commandscript string
---@param name string?
function CommandScript.compile(commandscript, name)
    if commandscript then
        local func, err = loadstring(commandscript, name)
        assert(func, err)
        Commands.setEnvOn(func)
        return func
    end
end

---@param character Character
---@param commandscript function
function CommandScript.start(character, commandscript)
    if not commandscript then
        return
    end
    local thread = co_create(commandscript)
    character.commandthread = thread
    CommandScript.run(character)
end

---@param character Character
function CommandScript.run(character)
    local thread = character.commandthread
    if not thread then
        return
    end

    Commands.run(thread, character)

    if co_status(thread) == "dead" then
        character.commandthread = nil
    end
end

return CommandScript