local Menu = require "BeeShooter.Gui.Menu"
local HighScores= require "BeeShooter.HighScores"
local Config  = require "System.Config"
local Account = require "System.Account"

---@class OnlineHighScoreMenu:GameMenu
---@field downloadstatus GuiObject
---@field onlinescoresmode GuiObject
---@field downloadcount integer
---@field downloadpos integer
---@field displaypos integer
---@field mode "WORLD"|"ME"|"FRIENDS"
---@field scores OnlineHighScore[]?
local OnlineHighScoreMenu = class(Menu)

function OnlineHighScoreMenu:init()
    Menu.init(self)
    self.downloadcount = 50
    self.downloadpos = 0
    self.displaypos = 0
    self.mode = "WORLD"
end

function OnlineHighScoreMenu:showDownloadStatus(status)
    self.downloadstatus:setHidden(status == nil)
    self.downloadstatus:setString(status)
    for i = 1, 10 do
        local nametext = self["name"..i] ---@type GuiObject
        local ranktext = self["rank"..i] ---@type GuiObject
        local scoretext = self["score"..i] ---@type GuiObject
        local timetext = self["time"..i] ---@type GuiObject
        if nametext then nametext:setHidden(status ~= nil) end
        if ranktext then ranktext:setHidden(status ~= nil) end
        if scoretext then scoretext:setHidden(status ~= nil) end
        if timetext then timetext:setHidden(status ~= nil) end
    end
end

function OnlineHighScoreMenu:refresh()
    self.onlinescoresmode:setString(self.mode)
    if self.scores then
        self:showScores(self.scores, self.displaypos)
    else
        self:download(self.mode, self.downloadpos, self.displaypos)
    end
end

local function trim(scores)
    local n = #scores
    local endtrim = n > 10 and (scores[n].rank % 10) or 0
    if endtrim > 0 then
        for i = n, n-endtrim+1, -1 do
            scores[i] = nil
        end
        n = #scores
    end
    local starttrim = n > 10 and (n % 10) or 0
    if starttrim > 0 then
        for i = 1, n-starttrim do
            scores[i] = scores[i+starttrim]
        end
        for i = n, n-starttrim+1, -1 do
            scores[i] = nil
        end
    end
end

function OnlineHighScoreMenu:download(mode, dlpos, disppos)
    self.mode = mode
    self.onlinescoresmode:setString(mode)
    self.downloadpos = dlpos
    self.displaypos = disppos
    self:showDownloadStatus("Downloading...")
    local i, j = 0, 0
    if mode == "WORLD" then
        i = dlpos + 1
        j = dlpos + self.downloadcount
    elseif mode == "ME" then
        i = dlpos - self.downloadcount + 1
        j = dlpos + self.downloadcount
    end
    HighScores.download(mode, i, j,
        function(scores, err)
            if scores then
                local n = #scores
                if n <= 0 then
                    self:showDownloadStatus("No scores")
                else
                    if self.mode ~= "FRIENDS" then
                        trim(scores)
                    end
                    if #scores > 0 then
                        self:showScores(scores, disppos)
                    else
                        self:showDownloadStatus("No scores")
                    end
                end
            else
                err = err and "Download error!\n\n"..err or "Download error!"
                self:showDownloadStatus(err)
            end
        end)
end

function OnlineHighScoreMenu:showScores(scores, pos)
    self:showDownloadStatus()
    self.scores = scores
    self.displaypos = pos
    for i = 1, 10 do
        local highscore = scores[pos + i]
        local nametext = self["name"..i]
        local ranktext = self["rank"..i]
        local scoretext = self["score"..i]
        local timetext = self["time"..i]

        if nametext then nametext:setHidden(highscore == nil) end
        if ranktext then ranktext:setHidden(highscore == nil) end
        if scoretext then scoretext:setHidden(highscore == nil) end
        if timetext then timetext:setHidden(highscore == nil) end

        if highscore then
            if nametext then
                nametext:setString(highscore.name)
            end
            if ranktext then
                ranktext:setString(highscore.rank..'.')
            end
            if scoretext then
                scoretext:setString(tostring(highscore.score))
            end
            if timetext then
                timetext:setString(os.date("%Y/%m/%d %H:%M:%S", highscore.timestamp))
            end
        end
    end
end

function OnlineHighScoreMenu:scroll(dir)
    local scores = self.scores
    if not scores then return end

    local i = self.displaypos + (dir < 0 and -10 or 10)
    if i < 0 then
        if scores[1].rank > 1 then
            self:download(self.mode,
                self.downloadpos - self.downloadcount,
                self.downloadcount - 10)
        end
    elseif i >= #scores then
        local lastrank = Account.countScores("2 minutes")
        if self.mode ~= "FRIENDS"
        and scores[#scores].rank < lastrank then
            self:download(self.mode,
                self.downloadpos + self.downloadcount,
                0)
        end
    else
        self:showScores(self.scores, i)
    end
end

local NextMode = {
    WORLD = "ME",
    ME="FRIENDS",
    FRIENDS="WORLD"
}

local PrevMode = {
    WORLD = "FRIENDS",
    ME="WORLD",
    FRIENDS="ME"
}

function OnlineHighScoreMenu:keypressed(key)
    if key == Config.key_fire then
        self:closeMenu()
    elseif key == Config.key_up then
        self:scroll(-10)
    elseif key == Config.key_down then
        self:scroll(10)
    elseif key == Config.key_left then
        self:download(PrevMode[self.mode], 0, 0)
    elseif key == Config.key_right then
        self:download(NextMode[self.mode], 0, 0)
    elseif key == "escape" then
        self:closeMenu()
    end
end

function OnlineHighScoreMenu:gamepadpressed(gamepad, button)
    if button == "dpup" then
        self:scroll(-10)
    elseif button == "dpdown" then
        self:scroll(10)
    elseif button == "dpleft" then
        self:download(PrevMode[self.mode], 0, 1)
    elseif button == "dpright" then
        self:download(NextMode[self.mode], 0, 1)
    elseif button == Config.joy_fire then
        self:closeMenu()
    elseif button == "back" then
        self:closeMenu()
    end
end

OnlineHighScoreMenu.openaction = "refresh"

return OnlineHighScoreMenu