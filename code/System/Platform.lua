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
        iOS = true,
        -- Web = true,
    },
    maximize = {
        Windows = true,
        ["Mac OS X"] = true,
        Linux = true,
        Android = true,
        iOS = true
    }
}

local defaultconfig = {
    Web = {
        key_pausemenu = "p"
    },
    Android = {
        fullscreen = true
    }
}

function Platform.supports(feature)
    feature = features[feature]
    return feature ~= nil and feature[OS] == true
end

function Platform.defaultSetting(setting)
    local config = defaultconfig[OS]
    return config and config[setting]
end

return Platform