local fixedupdate = require "fixedupdate"
local tablex      = require "pl.tablex"
local MockAccount = {
    type = "mock",
    initialized = false,
    mockerrors = {}, ---@type table<string,string>
    mockupdaterate = 1,
    mockusername = "MockUserName",
    mockfriends = {} ---@type string[]
}

for i = 1, 25 do
    MockAccount.mockfriends[#MockAccount.mockfriends+1] = "ユーザー"..(i*i)
end

local callbacks = {} ---@type function[]
local cbtimer = 0
local function runCallbacks()
    if #callbacks > 0 then
        for _, cb in ipairs(callbacks) do
            cb()
        end
        callbacks = {}
    end
end

---@class LeaderboardEntry
---@field name string
---@field score number
---@field time integer
---@field details integer[]?

---@class LeaderboardDownloadEntry:LeaderboardEntry
---@field rank integer

---@class LeaderboardDownload
---@field [integer] LeaderboardDownloadEntry
---@field userindex integer?

---@class Leaderboard
---@field [integer] LeaderboardEntry
---@field [string] integer

---@type table<string,Leaderboard|false>
local leaderboards = {
    ["2 minutes"] = false,
}

function MockAccount.init()
    print("MockAccount")
    MockAccount.initialized = true
end


function MockAccount.update()
    cbtimer = fixedupdate(MockAccount.mockupdaterate, 1,
        cbtimer, love.timer.getDelta(), runCallbacks)
end

function MockAccount.quit() end

function MockAccount.initLeaderboard(leaderboard)
    local lb = leaderboards[leaderboard]
    if lb == nil then
        return
    end

    local t = os.time()
    lb = {} ---@type Leaderboard
    for i = 1, 1000 do
        t = t - 60
        ---@type LeaderboardEntry
        local entry = {
            time = t,
            score = 1001 - i,
            name = "ユーザー"..i,
            details = { t, 1 }
        }
        lb[#lb+1] = entry
        lb[entry.name] = i
    end
    leaderboards[leaderboard] = lb
end

function MockAccount.countScores(leaderboard)
    local lb = leaderboards[leaderboard]
    return lb and #lb or 0
end

local function compScores(a, b)
    return a.score > b.score or
        a.score == b.score and a.time > b.time
end

---@class LeaderboardUploadResult
---@field success boolean
---@field leaderboard Leaderboard
---@field score number
---@field scorechanged boolean
---@field rank integer
---@field previousrank integer

local function addScore(lb, score, details)
    local oldrank = lb[MockAccount.mockusername]
    local oldentry = oldrank and lb[oldrank]
    ---@type LeaderboardEntry
    local newentry = {
        time = os.time(),
        score = score,
        name = MockAccount.mockusername,
        details = details
    }
    ---@type LeaderboardUploadResult
    local result = {
        success = true,
        leaderboard = lb,
        score = score,
        scorechanged = not oldentry or compScores(newentry, oldentry),
        rank = oldrank,
        previousrank = oldrank or 0
    }
    if result.scorechanged then
        lb[oldrank or (#lb+1)] = newentry

        table.sort(lb, compScores)
        for i, e in ipairs(lb) do
            lb[e.name] = i
        end

        result.rank = lb[MockAccount.mockusername]
    end
    return result
end

---@class ErrorResult
---@field error string

---@param leaderboard string
---@param score number
---@param details integer[]?
---@param callback fun(res: LeaderboardUploadResult|ErrorResult)
function MockAccount.uploadScore(leaderboard, score, details, callback)
    local lb = leaderboards[leaderboard]
    if lb == false then
        MockAccount.initLeaderboard(leaderboard)
        lb = leaderboards[leaderboard]
    end

    callbacks[#callbacks+1] = function()
        local err = MockAccount.mockerrors["uploadScore"] or
            lb == nil and "No such leaderboard "..leaderboard
        callback(err and {error = err} or
            addScore(lb, score, details))
    end
end

---@param lb Leaderboard
---@param i integer meaning depends on mode
---@param j integer meaning depends on mode
---@return LeaderboardDownload
local function getScores(lb, i, j)
    i = math.max(1, i)
    j = math.min(j, #lb)
    local scores = {} ---@type LeaderboardDownload
    for rank = i, j do
        local sc = tablex.copy(lb[rank])
        sc.rank = rank
        scores[#scores+1] = sc
        if sc.name == MockAccount.mockusername then
            scores.userindex = #scores
        end
    end
    return scores
end

local function getScoresAroundUser(lb, before, after)
    local rank = lb[MockAccount.mockusername]
    if not rank then
        return nil, "No score yet"
        -- before, after = math.min(before, after), math.max(before, after)
        -- return getScores(lb, 1, after - before)
    end

    local i, j = rank + before, rank + after
    if i < 1 then
        local shift = 1 - i
        i, j = i+shift, j+shift
    end
    if j > #lb then
        local shift = #lb - j
        i, j = i+shift, j+shift
    end

    return getScores(lb, i, j)
end

---@param lb Leaderboard
---@return LeaderboardDownload
local function getUserFriendScores(lb)
    local urank = lb[MockAccount.mockusername]
    local scores = { urank and lb[urank] } ---@type LeaderboardDownload
    for _, friend in ipairs(MockAccount.mockfriends) do
        local frank = lb[friend]
        if frank then
            local sc = tablex.copy(lb[frank])
            sc.rank = frank
            scores[#scores+1] = sc
        end
    end
    table.sort(scores, compScores)
    for i, sc in ipairs(scores) do
        if sc.name == MockAccount.mockusername then
            scores.userindex = i
            break
        end
    end
    return scores
end

---@param leaderboard string
---@param mode "WORLD"|"ME"|"FRIENDS"
---@param i integer meaning depends on mode
---@param j integer meaning depends on mode
---@param callback fun(scores: LeaderboardDownload?, err: string?)
function MockAccount.downloadScores(leaderboard, mode, i, j, callback)
    local lb = leaderboards[leaderboard]
    if lb == false then
        MockAccount.initLeaderboard(leaderboard)
        lb = leaderboards[leaderboard]
    end
    ---@cast lb Leaderboard

    callbacks[#callbacks+1] = function()
        local err = MockAccount.mockerrors["downloadScores"] or
            lb == nil and "No such leaderboard "..leaderboard
        local scores
        if mode == "WORLD" then
            scores = getScores(lb, i, j)
        elseif mode == "ME" then
            scores, err = getScoresAroundUser(lb, i, j)
        elseif mode == "FRIENDS" then
            scores = getUserFriendScores(lb)
        end
        callback(scores, err)
    end
end

return MockAccount