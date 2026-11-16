local pl_pretty = require("pl.pretty")
local Account         = require("System.Account")
local hassteam, steam
if Account.type == "steam" then
	hassteam, steam = pcall(require, "luasteam")
	if not hassteam then
		print(steam)
		steam = nil
	end
end

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
---@field version integer

local highscores = {} ---@type HighScore[]

local onlinescoreboards = {}

local HighScores = {}
local disablesave = false -- TODO re-enable when out of beta

local function leaderboardName()
	-- return string.format("%s %s")
	return "2 minutes"
end

local function getSteamLeaderboardThen(operation, ...)
	local leaderboardname = leaderboardName()
	local leaderboard = onlinescoreboards[leaderboardname]
	if leaderboard then
		operation(leaderboard, ...)
	else
		local a,b,c,d,e,f,g,h = ...
		steam.UserStats.FindLeaderboard(leaderboardname, function(data, err)
			if err or 0 == data.m_bLeaderboardFound then
				print("No leaderboard", leaderboardname)
			else
				leaderboard = data.m_hSteamLeaderboard
                onlinescoreboards[leaderboardname] = leaderboard
				operation(leaderboard, a,b,c,d,e,f,g,h)
			end
		end)
	end
end

local function getScores()
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
	-- 		local newscores = getScores()
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

	if Account.type == "steam" and Account.initialized then
		return getSteamLeaderboardThen(HighScores.uploadBest)
	end
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
	local scores = getScores()
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
        HighScores.uploadBest()
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

function HighScores.getScore(i)
	local scores = getScores()
	return scores and scores[i]
end

function HighScores.getLocalScores()
	return getScores()
end

local Detail = {
	"Time", "Version",
	["Time"] = 1, ["Version"] = 2
}

function HighScores.uploadBest()
	local leaderboardname = leaderboardName()
	local scores = getScores()
	if not scores then
		return false, "No scoreboard "..leaderboardname
	end
	local score = scores[1]
	if not score or not score.score or score.score <= 0 then
		return false, "No score entry "..leaderboardname
	end

	local details = {
		[Detail.Time] = score.timestamp,
		[Detail.Version] = score.version
	}
	Account.uploadScore(leaderboardname, score.score, details)
	return true
end

return HighScores
