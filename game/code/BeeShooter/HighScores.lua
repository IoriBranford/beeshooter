local pl_pretty = require("pl.pretty")
-- local hassteam, steam = pcall(require, "luasteam")
-- if not hassteam then
-- 	steam = nil
-- end

local defaulttime = 0 -- os.time({
-- 	year = 2000,
-- 	month = 6,
-- 	day = 30,
-- 	hour = 6,
-- 	min = 6,
-- 	sec = 6
-- })

-- local allowedendmaps = {
-- 	["demonrealm.lua"] = true,
-- 	["village.lua"]	= true,
-- 	["chapel.lua"]	= true,
-- 	["cave.lua"]	= true,
-- 	["highway.lua"]	= true,
-- 	["capital.lua"]	= true,
-- 	["castle.lua"]	= true,
-- 	["final.lua"]	= true,
-- 	["ALL CLEAR"]	= true
-- }

local MaxHighScores = 10
local HighScoresVersion = 1
local FileName = "highscores"
local BackupFileName = "highscores.bak"

---@class HighScore
---@field score integer
---@field timestamp integer

local highscores = {} ---@type HighScore[]

-- local onlinescoreboards = {}

local HighScores = {}
local disablesave = false -- TODO re-enable when out of beta

-- local function leaderboardName(difficulty, character)
-- 	return string.format("%s %s", difficulty, character)
-- end

-- local function onSteamReceiveCurrentStats_findLeaderboards(d, e)
-- 	steam.userStats.onUserStatsReceived = function() end
-- 	--local hasstats = d.result == 1
-- 	for _, difficulty in pairs({"NORMAL", "HARD", "DEMONIC"}) do
-- 		for _, character in pairs({"Amy", "Snow"}) do
-- 			local leaderboardname = leaderboardName(difficulty, character)
-- 			steam.userStats.findLeaderboard(leaderboardname, function(d, e)
-- 				if e or not d.leaderboardFound then
-- 					print("No leaderboard", leaderboardname)
-- 				else
-- 					onlinescoreboards[leaderboardname] = d.steamLeaderboard
-- 					HighScores.uploadBest(difficulty, character)
-- 				end
-- 			end)
-- 		end
-- 	end
-- end

local function getScores(difficulty, character)
	-- if not highscores.campaign[difficulty] then
	-- 	print("No scores for difficulty", difficulty)
	-- 	return
	-- end
	-- local scores = highscores.campaign[difficulty][character]
	-- if not scores then
	-- 	print("No scores for character", character)
	-- 	return
	-- end
	-- return scores
    return highscores
end

function HighScores.backup()
	local data = love.filesystem.read("data", FileName)
	---@cast data love.FileData
	if data then
		love.filesystem.write(BackupFileName, data)
	end
end

function HighScores.load()
	local fileinfo = love.filesystem.getInfo(FileName)
	local err
	if fileinfo then
		local ok, f
		ok, f, err = pcall(love.filesystem.load, FileName)
		if type(f) == "function" then
			highscores = f()
		elseif not ok then
			err = f
		end
	end

	if err then
		err = string.format("Error reading high score file.\n  %s", err)
	end

	-- convert from old single scoreboard
	-- if not highscores.campaign then
	-- 	highscores.campaign = {
	-- 		NORMAL = {
	-- 			Amy = {},
	-- 			Snow = {}
	-- 		},
	-- 		HARD = {
	-- 			Amy = {},
	-- 			Snow = {}
	-- 		},
	-- 		DEMONIC = {
	-- 			Amy = {},
	-- 			Snow = {}
	-- 		}
	-- 	}

	-- 	for i = 1, #highscores do
	-- 		local score = highscores[i]
	-- 		local difficulty = score.difficulty or "NORMAL"
	-- 		local character = score.character or "Amy"
	-- 		local newscores = getScores(difficulty, character)
	-- 		if newscores then
	-- 			newscores[#newscores+1] = {
	-- 				version = score.version,
	-- 				score = math.ceil(score.score),
	-- 				timestamp = score.timestamp,
	-- 				endmap = score.endmap
	-- 			}
	-- 		end
	-- 	end
	-- 	for i = #highscores, 1, -1 do
	-- 		highscores[i] = nil
	-- 	end
	-- end

	local allboards = {
		highscores
	}

	for _, scores in pairs(allboards) do
		---- TODO if scoring potential is lower than old version
		-- for i = #scores, 1, -1 do
		-- 	local score = scores[i]
		-- 	local version = score.version or 0
		-- 	if version < HighScoresVersion then
		-- 		err = "Your high score file has scores from an old version which will be discarded."
		-- 		for j = i, #scores do
		-- 			scores[j] = scores[j+1]
		-- 		end
		-- 	end
		-- end
		for i = #scores+1, MaxHighScores do
			scores[i] = {
				-- gameversion = "0.0.0",
				version = HighScoresVersion,
				score = 0,
				timestamp = defaulttime,
				-- endmap = "demonrealm.lua"
			}
		end
	end

	if err then
		HighScores.backup()
		local backupfilepath = string.format("%s/%s", love.filesystem.getSaveDirectory(), BackupFileName)
		local message = string.format("%s\n\nIt has been backed up to:\n  %s", err, backupfilepath)
		love.window.showMessageBox("Notice", message)
		HighScores.save()
	end

	-- if steam and steam.initialized then
	-- 	steam.userStats.onUserStatsReceived = onSteamReceiveCurrentStats_findLeaderboards
	-- 	steam.userStats.requestCurrentStats()
	-- end
end

-- local mapnumbers = {
-- 	["demonrealm.lua"] 	= 1,
-- 	["village.lua" 	]= 2,
-- 	["chapel.lua" 	]= 3,
-- 	["cave.lua" 	]= 4,
-- 	["highway.lua" 	]= 5,
-- 	["capital.lua" 	]= 6,
-- 	["castle.lua" 	]= 7,
-- 	["final.lua" 	]= 8,
-- 	["end.lua" 	]= "ALL",
-- 	["inebriator.lua"] 	= "I"
-- }

-- function HighScores.getMapIndex(map)
-- 	return mapnumbers[map]
-- end

local function comparehighscores(a, b)
	if a.score > b.score then
		return true
	end
	if a.score == b.score then
        return a.timestamp > b.timestamp
		-- local endmapA = a.endmap
		-- endmapA = endmapA and mapnumbers[endmapA]
		-- local endmapB = b.endmap
		-- endmapB = endmapB and mapnumbers[endmapB]
		-- if type(endmapA) == "number" and type(endmapB) == "number" then
		-- 	return endmapA > endmapB
		-- end
		-- if endmapA == "ALL" then
		-- 	return true
		-- end
		-- if endmapB == "ALL" then
		-- 	return false
		-- end
	end
	return false
end

function HighScores.put(score, gameversion, character, difficulty, endmap)
	-- if not allowedendmaps[endmap] then
	-- 	--print("No scores on map", endmap)
	-- 	return
	-- end
	local scores = getScores(difficulty, character)
	if not scores then
		return
	end

	local newscore = {
		gameversion = gameversion,
		version = HighScoresVersion,
		score = math.ceil(score),
		timestamp = os.time(),
		-- endmap = endmap
	}
    if comparehighscores(newscore, scores[#scores]) then
        scores[#scores] = newscore
        table.sort(scores, comparehighscores)
        HighScores.save()
        -- HighScores.uploadBest(difficulty, character)
    end
end

function HighScores.save()
	if disablesave then
		return
	end
	local code = "return "..pl_pretty.write(highscores)
	--DEBUG
	-- love.filesystem.write("highscores.lua", code)

	local f = loadstring(code)
	love.filesystem.write(FileName, string.dump(f, true))
end

function HighScores.getScore(i, difficulty, character)
	local scores = getScores(difficulty, character)
	return scores and scores[i]
end

function HighScores.getLocalScores(difficulty, character)
	return getScores(difficulty, character)
end

-- function HighScores.countOnlineScores(difficulty, character)
-- 	if steam and steam.initialized then
-- 		local leaderboardname = leaderboardName(difficulty, character)
-- 		local leaderboard = onlinescoreboards[leaderboardname]
-- 		return leaderboard and steam.userStats.getLeaderboardEntryCount(leaderboard)
-- 	end
-- end

-- local function steamLeaderboardOperation(difficulty, character, operation, ...)
-- 	if not HighScores["steam_"..operation] then
-- 		return false, "No operation "..operation
-- 	end
-- 	operation = HighScores["steam_"..operation]

-- 	if not steam then
-- 		return false, "Steam unavailable"
-- 	end

-- 	local a,b,c,d,e,f,g,h = ...
-- 	local function doOperation(data)
-- 		steam.userStats.onUserStatsReceived = function() end
-- 		if data and data.result > 2 then
-- 			print("requestCurrentStats error", data.result)
-- 			return
-- 		end

-- 		local leaderboardname = leaderboardName(difficulty, character)
-- 		local leaderboard = onlinescoreboards[leaderboardname]
-- 		if leaderboard then
-- 			operation(leaderboard, a,b,c,d,e,f,g,h)
-- 		else
-- 			steam.userStats.findLeaderboard(leaderboardname, function(data, err)
-- 				if err or not data.leaderboardFound then
-- 					print("No leaderboard", leaderboardname)
-- 				else
-- 					local leaderboard = data.steamLeaderboard
-- 					onlinescoreboards[leaderboardname] = leaderboard
-- 					operation(leaderboard, a,b,c,d,e,f,g,h)
-- 				end
-- 			end)
-- 		end
-- 	end

-- 	if steam.initialized then
-- 		doOperation()
-- 	else
-- 		steam.initialized = steam.init()
-- 		if steam.initialized then
-- 			steam.userStats.onUserStatsReceived = doOperation
-- 			steam.userStats.requestCurrentStats()
-- 		else
-- 			return false, "Could not connect to Steam leaderboards.\n\nPlease start Steam and login to your account, then press Retry."
-- 		end
-- 	end
-- 	return true
-- end

-- local function readSteamScores(data, e)
-- 	if e then
-- 		return
-- 	end
-- 	local scores = {}
-- 	local me = steam.user.getSteamID()
-- 	for i = 1, #data do
-- 		local d = data[i]
-- 		local details = d.details
-- 		local endmap, version, timestamp = details:match("m([^;]+);v([^;]+);t([^;]+)")
-- 		local userid = d.steamIDUser
-- 		if me == userid then
-- 			scores.userindex = i
-- 		end
-- 		local username = steam.friends.getFriendPersonaName(userid)
-- 		--if username == "" or username == "[unknown]" then
-- 		--	username = tostring(userid)
-- 		--end
-- 		scores[i] = {
-- 			name = username,
-- 			rank = d.globalRank,
-- 			score = d.score,
-- 			endmap = endmap,
-- 			version = version,
-- 			timestamp = timestamp
-- 		}
-- 	end
-- 	return scores
-- end

-- function HighScores.steam_download(leaderboard, position, numbefore, numafter, callback)
-- 	if position == "Friends" then
-- 		steam.userStats.downloadLeaderboardEntries(leaderboard,
-- 			position, function(d, e)
-- 				callback(readSteamScores(d, e))
-- 		end)
-- 	else
-- 		steam.userStats.downloadLeaderboardEntries(leaderboard,
-- 			position, numbefore, numafter,
-- 			function(d, e)
-- 				callback(readSteamScores(d, e))
-- 			end)
-- 	end
-- end

-- function HighScores.steam_uploadBest(leaderboard, score)
-- 	local details = string.format("m%s;v%s;t%d",
-- 		score.endmap or "?",
-- 		score.version or "?",
-- 		score.timestamp or "?")

-- 	local padsize = 4 - (#details % 4)
-- 	if padsize < 4 then
-- 		local padder = string.format("%%-%ds", #details + padsize)
-- 		details = string.format(padder, details)
-- 	end
-- 	if #details > 256 then
-- 		details = nil
-- 	end

-- 	steam.userStats.uploadLeaderboardScore(leaderboard, "KeepBest",
-- 		score.score, details, function(data, err) end)
-- end

-- function HighScores.uploadBest(difficulty, character)
-- 	local leaderboardname = leaderboardName(difficulty, character)
-- 	local scores = getScores(difficulty, character)
-- 	if not scores then
-- 		return false, "No scoreboard "..leaderboardname
-- 	end
-- 	local score = scores[1]
-- 	if not score or not score.score or score.score <= 0 then
-- 		return false, "No score entry "..leaderboardname
-- 	end

-- 	if steam then
-- 		return steamLeaderboardOperation(difficulty, character, "uploadBest", score)
-- 	end
-- 	return false, "No online score service"
-- end

-- local SteamPositions = {
-- 	TOP = "Global",
-- 	SELF = "GlobalAroundUser",
-- 	FRIENDS = "Friends"
-- }

-- function HighScores.download(difficulty, character, position, numbefore, numafter, callback)
-- 	if steam then
-- 		if not SteamPositions[position] then
-- 			return false, "Unknown position "..position
-- 		end
-- 		return steamLeaderboardOperation(difficulty, character, "download",
-- 			SteamPositions[position], numbefore, numafter, callback)
-- 	end
-- 	return false, "No online score service available."
-- end

return HighScores
