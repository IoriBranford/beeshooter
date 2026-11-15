local hassteam, luasteam = pcall(require, "luasteam")
if not hassteam then
	return false
end

local SteamAccount = { type = "steam" }

local initialized

function SteamAccount.init()
    initialized = luasteam.Init()
end

function SteamAccount.update()
    if not initialized then return end
    luasteam.RunCallbacks()
end

function SteamAccount.quit()
    if initialized then
        luasteam.Shutdown()
        initialized = nil
    end
end

return SteamAccount