local SubScript = require "BeeShooter.Character.SubScript"
local PathPoint = {}

local tostring = tostring

function PathPoint.init(pathpoint)
    local subscript = pathpoint.subscript
    if subscript then
        local name = pathpoint.name or ""
        if name == "" then
            name = tostring(pathpoint.id or pathpoint)
        end
        pathpoint.subscript = SubScript.compile(subscript, name)
    end
end

function PathPoint.startPathScript(pathpoint, character)
    SubScript.start(character, pathpoint.subscript)
end

return PathPoint