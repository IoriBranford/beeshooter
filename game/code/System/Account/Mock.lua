local fixedupdate = require "fixedupdate"
local MockAccount = {
    type = "mock",
    initialized = false,
    mockerrors = {},
    mockupdaterate = 1,
    mockusername = "MockUserName",
    mockfriends = {}
}

for i = 1, 25 do
    MockAccount.mockfriends[#MockAccount.mockfriends+1] = "ユーザー"..(i*i)
end

local callbacks = {}
local cbtimer = 0
local function runCallbacks()
    if #callbacks > 0 then
        for _, cb in ipairs(callbacks) do
            cb()
        end
        callbacks = {}
    end
end

---@type table<string,boolean|table>
local leaderboards = {
    ["2 minutes"] = false,
}

function MockAccount.init()
    print("MockAccount")
    MockAccount.initialized = true
end


function MockAccount.update()
    fixedupdate(MockAccount.mockupdaterate, 1,
        cbtimer, love.timer.getDelta(), runCallbacks)
end

function MockAccount.quit() end

function MockAccount.initLeaderboard(leaderboard)
    local lb = leaderboards[leaderboard]
    if lb == nil then
        return
    end

    local t = os.time()
    lb = {}
    for i = 1, 1000 do
        t = t - 60
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

local function addScore(lb, score, details)
    local oldrank = lb[MockAccount.mockusername]
    local oldentry = oldrank and lb[oldrank]
    local newentry = {
        time = os.time(),
        score = score,
        name = MockAccount.mockusername,
        details = details
    }
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

function MockAccount.uploadScore(leaderboard, score, details, callback)
    local lb = leaderboards[leaderboard]
    if lb == nil then MockAccount.initLeaderboard(leaderboard) end

    callbacks[#callbacks+1] = function()
        local err = MockAccount.mockerrors["uploadScore"]
        callback(err and {error = err} or
            addScore(lb, score, details))
    end
end

local function getScores(lb, i, j)
    i = math.max(1, i)
    j = math.min(j, #lb)
    local scores = {}
    for _ = i, j do
        scores[#scores+1] = lb[i]
        if lb[i].name == MockAccount.mockusername then
            scores.userindex = i
        end
    end
    return scores
end

local function getScoresAroundUser(lb, before, after)
    local rank = lb[MockAccount.mockusername]
    if not rank then return nil end

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

local function getUserFriendScores(lb)
    local urank = lb[MockAccount.mockusername]
    local scores = { urank and lb[urank] }
    for _, friend in ipairs(MockAccount.mockfriends) do
        local frank = lb[friend]
        scores[#scores+1] = frank and lb[frank]
    end
    table.sort(scores, compScores)
    return scores
end

function MockAccount.downloadScores(leaderboard, mode, i, j, callback)
    local lb = leaderboards[leaderboard]
    if lb == nil then MockAccount.initLeaderboard(leaderboard) end

    callbacks[#callbacks+1] = function()
        local err = MockAccount.mockerrors["downloadScores"]
        local scores
        if mode == "WORLD" then
            scores = getScores(lb, i, j)
        elseif mode == "ME" then
            scores = getScoresAroundUser(lb, i, j)
        elseif mode == "FRIENDS" then
            scores = getUserFriendScores(lb)
        end
        callback(err and {error = err} or scores)
    end
end

return MockAccount