local CommandScript = require "BeeShooter.Character.CommandScript"
local PathPoint = {}

local tostring = tostring

function PathPoint.init(pathpoint)
    local commandscript = pathpoint.commandscript
    if commandscript then
        local name = pathpoint.name or ""
        if name == "" then
            name = tostring(pathpoint.id or pathpoint)
        end
        pathpoint.commandscript = CommandScript.compile(commandscript, name)
    end
end

function PathPoint.startPathScript(pathpoint, character)
    CommandScript.start(character, pathpoint.commandscript)
end

return PathPoint