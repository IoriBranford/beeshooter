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
    local isAsset = Assets.isAsset
    local getAsset = Assets.get
    paused = false
    Database.load("data/db_ships.csv")
    Database.load("data/db_bullets.csv")
    Database.load("data/db_items.csv")
    Database.load("data/db_statics.csv")
    Database.loadMapObjects("data/prefabs_Jenny.lua")
    Database.loadMapObjects("data/prefabs_caravan.lua")
    Database.forEach(function(_, properties)
        for k,v in pairs(properties) do
            if isAsset(v) then
                getAsset(v)
            end
        end
    end)
    Stage.init()
    Canvas.init(Stage.CameraWidth, Stage.CameraHeight)
    local music = Audio.playMusic("music/Funkbuster.ogg")
    music:setLooping(true)
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
