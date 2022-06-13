local Stage = require "BeeShooter.Stage"
local Canvas= require "System.Canvas"
local Audio = require "System.Audio"
local Config= require "System.Config"
local Tiled = require "Data.Tiled"
local Assets= require "System.Assets"
local Database = require "Data.Database"
local GamePhase = {}

local paused

function GamePhase.loadphase(stage, startpoint)
    paused = false
    Database.load("data/db_ships.csv")
    Database.load("data/db_bullets.csv")
    local prefabs_Jenny = Tiled.load("data/prefabs_Jenny.lua")
    Database.addMapObjects(prefabs_Jenny.objects)
    Stage.init()
    Canvas.init(Config.basewindowwidth, Config.basewindowheight)
end

function GamePhase.quitphase()
    Audio.stop()
    Stage.quit()
    Tiled.clearCache()
    Assets.clear()
    Database.clear()
end

function GamePhase.fixedupdate()
    if not paused then
        Stage.fixedupdate()
    end
end

function GamePhase.keypressed(key)
    if key == Config.key_pausemenu then
        paused = not paused
        if paused then
            Audio.play("sounds/pause.ogg")
        end
    elseif key == "f2" then
        Stage.restart()
    end
end

function GamePhase.update(dsecs, fixedfrac)
    if not paused then
        Stage.update(dsecs, fixedfrac)
    end
    Audio.update(dsecs)
end

function GamePhase.draw(fixedfrac)
    if paused then
        fixedfrac = 0
    end
    Canvas.drawOnCanvas(function()
        Stage.draw(fixedfrac)
    end)
    Canvas.drawCanvas()
end

return GamePhase
