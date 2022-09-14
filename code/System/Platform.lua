local Platform = {}

local OS = love.system.getOS()

local features = {
    quit = {
        Windows = true,
        ["Mac OS X"] = true,
        Linux = true,
        Android = true
    },
    tilepacking = {
        Windows = true,
        ["Mac OS X"] = true,
        Linux = true,
        Android = true,
        iOS = true
    },
    maximize = {
        Windows = true,
        ["Mac OS X"] = true,
        Linux = true,
        Android = true,
        iOS = true
    }
}

function Platform.supports(feature)
    feature = features[feature]
    return feature ~= nil and feature[OS] == true
end

return Platform