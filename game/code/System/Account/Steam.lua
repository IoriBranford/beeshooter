local hassteam, luasteam = pcall(require, "luasteam")
if not hassteam then
	return false
end

local SteamAccount = { type = "steam", initialized = false }

function SteamAccount.init()
    SteamAccount.initialized = luasteam.Init()
end

function SteamAccount.update()
    if not SteamAccount.initialized then return end
    luasteam.RunCallbacks()
end

function SteamAccount.quit()
    if SteamAccount.initialized then
        luasteam.Shutdown()
        SteamAccount.initialized = false
    end
end

return SteamAccount