local class = require "pl.class"
local Menu = require "BeeShooter.Gui.Menu"
local HighScores= require "BeeShooter.HighScores"

---@class HighScoreMenu:GameMenu
local HighScoreMenu = class(Menu)

function HighScoreMenu:refresh()
    local highscores = HighScores.getLocalScores()
    for i = 1, 10 do
        local highscore = highscores[i]
        if highscore then
            local ranktext = self["rank"..i]
            local scoretext = self["score"..i]
            local timetext = self["time"..i]
            if ranktext then
                ranktext:setString(i..'.')
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

HighScoreMenu.openaction = "refresh"

return HighScoreMenu