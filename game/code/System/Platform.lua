---@class Platform
local Platform = {}

local ValidOSes = {
    Windows = true,
    ["Mac OS X"] = true,
    Linux = true,
    Android = true,
    iOS = true,
    Web = true,
}

function Platform.setOS(os)
    os = ValidOSes[os] and os or love.system.getOS()
    Platform.OS = os
    Platform.IsMobile = os == "Android" or os == "iOS"
end
Platform.setOS()

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
    saveconfig = {
        Windows = true,
        ["Mac OS X"] = true,
        Linux = true,
        Android = true,
        iOS = true,
        Web = true,
    }
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

function Platform.supports(feature)
    feature = features[feature]
    return feature ~= nil and feature[Platform.OS] == true
end

function Platform.overrideConfig(config)
    config = config or {}
    local configoverride = configoverrides[Platform.OS]
    if configoverride then
        for k, v in pairs(configoverride) do
            config[k] = v
        end
    end
    return config
end

return Platform