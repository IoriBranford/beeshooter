local class = require "pl.class"
local Menu = require "Gui.Menu"
local HighScores= require "BeeShooter.HighScores"

---@class HighScoreMenu:GuiObject
local HighScoreMenu = class(Menu)

local function highScoreString(highscore)
    local date = os.date("%Y/%m/%d %H:%M:%S", highscore.timestamp)
    return string.format("%7d  %s", highscore.score, date)
end

function HighScoreMenu:init()
    Menu.init(self)
    self:refresh()
end

function HighScoreMenu:refresh()
    local highscores = HighScores.getLocalScores()
    local text = {}
    for _, highscore in ipairs(highscores) do
        text[#text+1] = highScoreString(highscore)
    end
    self.text:setString(table.concat(text, '\n\n'))
end

return HighScoreMenu