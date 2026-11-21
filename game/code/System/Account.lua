local Config = require "System.Config"

if Config.mockaccount then
    return require "System.Account.Mock"
end

local account = require "System.Account.Steam"
if account then return account end

local NullAccount = {
    type = nil,
    initialized = false,
    Leaderboard = {}
}

function NullAccount.init() print("no account to init") end
function NullAccount.update() end
function NullAccount.quit() end

function NullAccount.initLeaderboard(name)
end

function NullAccount.countScores(leaderboardname)
    return 0
end

function NullAccount.uploadScore(leaderboard, score, details, callback)
	return false, "No online score service"
end

function NullAccount.downloadScores(leaderboard, mode, i, j, callback)
	return false, "No online score service available."
end

function NullAccount.achieve(achievement) end

return NullAccount