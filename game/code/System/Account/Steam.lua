local hassteam, steam = pcall(require, "luasteam")
---@cast steam Steam
if not hassteam then
	return false
end

local SteamAccount = {
    type = "steam",
    initialized = false,
    NumScoreDetails = 0
}

local leaderboards = {}

function SteamAccount.init()
    SteamAccount.initialized = steam.Init()
end

function SteamAccount.update()
    if not SteamAccount.initialized then return end
    steam.RunCallbacks()
end

function SteamAccount.quit()
    if SteamAccount.initialized then
        steam.Shutdown()
        SteamAccount.initialized = false
    end
end

local function findLeaderboardAnd(name, operation, ...)
	local leaderboard = leaderboards[name]
	if leaderboard then
		operation(leaderboard, ...)
	else
		local a,b,c,d,e,f,g,h = ...
		steam.UserStats.FindLeaderboard(name, function(data, err)
			if err or 0 == data.m_bLeaderboardFound then
				print("No leaderboard", name)
			else
				leaderboard = data.m_hSteamLeaderboard
                leaderboards[name] = leaderboard
				operation(leaderboard, a,b,c,d,e,f,g,h)
			end
		end)
	end
end

local function readScores(data, e)
	if e then
		return nil, "IO error"
	end
	local scores = {}
	local me = steam.User.GetSteamID()
	for i = 1, data.m_cEntryCount do
		local ok, entry, details = steam.UserStats.GetDownloadedLeaderboardEntry(
			data.m_hSteamLeaderboardEntries, i-1, SteamAccount.NumScoreDetails)
		if ok then
			local userid = entry.m_steamIDUser
			if me == userid then
				scores.userindex = i
			end
			local username = steam.Friends.GetFriendPersonaName(userid)
			scores[i] = {
				name = username,
				rank = entry.m_nGlobalRank,
				score = entry.m_nScore,
				details = details
			}
		end
	end
	return scores
end

local SteamPositions = {
	WORLD = steam.k_ELeaderboardDataRequestGlobal,
	ME = steam.k_ELeaderboardDataRequestGlobalAroundUser,
	FRIENDS = steam.k_ELeaderboardDataRequestFriends
}

function SteamAccount.initLeaderboard(name)
    steam.UserStats.FindLeaderboard(name, function(data, err)
        if err then return end
        if data.m_bLeaderboardFound then
            leaderboards[name] = data.m_hSteamLeaderboard
        end
    end)
end

function SteamAccount.downloadScores(leaderboard, mode, i, j, callback)
    findLeaderboardAnd(leaderboard,
        steam.UserStats.DownloadLeaderboardEntries,
		SteamPositions[mode], i, j,
		function(d, e)
			callback(readScores(d, e))
		end)
end

function SteamAccount.uploadScore(leaderboard, score, details, callback)
	findLeaderboardAnd(leaderboard,
		steam.UserStats.UploadLeaderboardScore,
		steam.k_ELeaderboardUploadScoreMethodKeepBest,
		score, details, SteamAccount.NumScoreDetails,
        function(data, ioerr)
            if callback then
                callback(not ioerr and  {
                    success = data.m_bSuccess ~= 0,
                    leaderboard = leaderboard,
                    score = data.m_nScore,
                    scorechanged = data.m_bScoreChanged ~= 0,
                    rank = data.m_nGlobalRankNew,
                    previousrank = data.m_nGlobalRankPrevious
                }, ioerr and "IO error")
            end
        end)
end

function SteamAccount.countScores(leaderboardname)
    local leaderboard = leaderboards[leaderboardname]
    return leaderboard and steam.UserStats.GetLeaderboardEntryCount(leaderboard) or 0
end

function SteamAccount.achieve(achievement)
	return steam.UserStats.SetAchievement(achievement)
end

return SteamAccount