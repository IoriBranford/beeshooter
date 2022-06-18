local Stage = require "BeeShooter.Stage"
local Canvas= require "System.Canvas"
local Audio = require "System.Audio"
local Config= require "System.Config"
local Tiled = require "Data.Tiled"
local Assets= require "System.Assets"
local Database = require "Data.Database"
local GamePhase = {}

local paused
local music
local result

function GamePhase.loadphase(startpoint)
    local isAsset = Assets.isAsset
    local getAsset = Assets.get
    paused = false
    Database.load("data/db_ships.csv")
    Database.load("data/db_bullets.csv")
    Database.load("data/db_items.csv")
    Database.load("data/db_statics.csv")
    Database.load("data/db_playersounds.csv")
    Database.loadMapObjects("data/prefabs_Jenny.lua")
    Database.loadMapObjects("data/prefabs_caravan.lua")
    Database.forEach(function(_, properties)
        for k,v in pairs(properties) do
            if isAsset(v) then
                getAsset(v)
            end
        end
    end)
    Stage.init(startpoint)
    Canvas.init(Stage.CameraWidth, Stage.CameraHeight)
    Assets.get("music/Funkbuster.ogg")
end

function GamePhase.quitphase()
    result = nil
    music = nil
    Audio.stop()
    Stage.quit()
    Tiled.clearCache()
    Assets.clear()
    Database.clear()
end

function GamePhase.fixedupdate()
    if not paused then
        if not music then
            music = Audio.playMusic("music/Funkbuster.ogg")
            music:setLooping(true)
        end
        Stage.fixedupdate()
    end
end

function GamePhase.gamepadpressed(joystick, button)
    if button == "start" and joystick:isGamepadDown("back")
    or button == "back" and joystick:isGamepadDown("start")
    then
        if paused then
            love.event.quit()
        else
            Stage.restart()
        end
        return
    end

    if button == "start" then
        paused = not paused
    end
end

function GamePhase.keypressed(key)
    if key == Config.key_pausemenu then
        if result then
            Stage.restart()
        else
            paused = not paused
        end
        -- if paused then
        --     Audio.play("sounds/pause.ogg")
        -- end
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

function GamePhase.win()
    Audio.fadeMusic()
    result = "COMPLETE!"
    Stage.win()
end

function GamePhase.lose(reason)
    Audio.fadeMusic()
    result = reason or "GAME OVER\n\nPress F2 to retry"
    Stage.lose()
end

function GamePhase.draw(fixedfrac)
    if paused then
        fixedfrac = 0
    end
    Canvas.drawOnCanvas(function()
        Stage.draw(fixedfrac)
        if result then
            love.graphics.printf(result, 0, 104, 256, "center")
        elseif paused then
            love.graphics.printf("PAUSE!", 0, 104, 256, "center")
        end
    end)
    Canvas.drawCanvas()
end

return GamePhase
