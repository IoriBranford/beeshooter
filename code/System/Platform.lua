
---@class Platform
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
}

local configoverrides = {
    Web = {
        key_pausemenu = "p",
        maximize = false
    },
    Android = {
        key_pausemenu = "p",
        fullscreen = true,
        resizable = false
    }
}
local configoverride = configoverrides[OS]

function Platform.supports(feature)
    feature = features[feature]
    return feature ~= nil and feature[OS] == true
end

function Platform.defaultSetting(setting)
    return configoverride and configoverride[setting]
end

function Platform.overrideConfig(config)
    config = config or {}
    if configoverride then
        for k, v in pairs(configoverride) do
            config[k] = v
        end
    end
    return config
end

return Platform