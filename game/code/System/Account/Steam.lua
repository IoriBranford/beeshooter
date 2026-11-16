local hassteam, steam = pcall(require, "luasteam")
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
	for i = 0, data.m_cEntryCount - 1 do
		local ok, entry, details = steam.UserStats.GetDownloadedLeaderboardEntry(
			data.m_hSteamLeaderboardEntries, i, SteamAccount.NumScoreDetails)
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
	TOP = steam.k_ELeaderBoardDataRequestGlobal,
	SELF = steam.k_ELeaderBoardDataRequestGlobalAroundUser,
	FRIENDS = steam.k_ELeaderBoardDataRequestFriends
}

function SteamAccount.initLeaderboard(name)
    steam.UserStats.FindLeaderboard(name, function(data, err)
        if err then return end
        if data.m_bLeaderboardFound then
            leaderboards[name] = data.m_hSteamLeaderboard
        end
    end)
end

function SteamAccount.downloadScores(leaderboard, position, numbefore, numafter, callback)
    findLeaderboardAnd(leaderboard,
        steam.UserStats.DownloadLeaderboardEntries,
		SteamPositions[position], numbefore, numafter,
		function(d, e)
			callback(readScores(d, e))
		end)
end

function SteamAccount.uploadScore(leaderboard, score, details, callback)
	findLeaderboardAnd(leaderboard,
		steam.UserStats.UploadLeaderboardScore,
		steam.k_ELeaderboardUploadScoreMethodKeepBest,
		score.score, details, SteamAccount.NumScoreDetails,
        function(data, ioerr)
            if callback then
                data = ioerr and {
                    error = "IO error"
                } or {
                    success = data.m_bSuccess ~= 0,
                    leaderboard = leaderboard,
                    score = data.m_nScore,
                    scorechanged = data.m_bScoreChanged ~= 0,
                    rank = data.m_nGlobalRankNew,
                    previousrank = data.m_nGlobalRankPrevious
                }
                callback(data)
            end
        end)
end

function SteamAccount.countScores(leaderboardname)
    local leaderboard = leaderboards[leaderboardname]
    return leaderboard and steam.UserStats.GetLeaderboardEntryCount(leaderboard) or 0
end

return SteamAccount