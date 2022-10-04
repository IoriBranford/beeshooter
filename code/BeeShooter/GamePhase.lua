local Stage = require "BeeShooter.Stage"
local Canvas= require "System.Canvas"
local Audio = require "System.Audio"
local Config= require "System.Config"
local Tiled = require "Data.Tiled"
local Assets= require "System.Assets"
local Database = require "Data.Database"
local Platform = require "System.Platform"
local Gui      = require "Gui"
local GamePhase = {}

local paused
local music
local status
local gui

local TitleStatus = [[
HONEY GUARDIAN


FIRE
Z key / A button

CHANGE WEAPON
X key / B button

CHANGE SPEED
C key / X button


PRESS FIRE
]]

function GamePhase.loadphase(startpoint)
    local isAsset = Assets.isAsset
    local getAsset = Assets.get
    paused = false
    status = TitleStatus
    Database.load("data/db_ships.csv")
    Database.load("data/db_bullets.csv")
    Database.load("data/db_items.csv")
    Database.load("data/db_statics.csv")
    Database.load("data/db_playerweapons.csv")
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
    gui = Gui.new("data/gui_gameplay.lua")
    gui.pausemenu:setHidden(true)
    Canvas.init(Stage.CameraWidth, Stage.CameraHeight)
    Assets.get("music/Funkbuster.ogg")
end

function GamePhase.resize()
    Canvas.init(Stage.CameraWidth, Stage.CameraHeight)
end

function GamePhase.quitphase()
    status = nil
    music = nil
    gui = nil
    Audio.stop()
    Stage.quit()
    Tiled.clearCache()
    Assets.clear()
    Database.clear()
end

function GamePhase.fixedupdate()
    if not paused then
        Stage.fixedupdate()
        Stage.fixedupdateHud(gui.hud)
    end
    gui:fixedupdate()
end

function GamePhase.gamepadpressed(joystick, button)
    if button == "start" and joystick:isGamepadDown("back")
    or button == "back" and joystick:isGamepadDown("start")
    then
        if status == TitleStatus then
            if Platform.supports("quit") then
                love.event.quit()
            end
        else
            Stage.restart()
        end
        return
    end

    if button == "start" then
        if status == TitleStatus then
            GamePhase.startGame()
        elseif status then
            Stage.restart()
        else
            GamePhase.setPaused(not paused)
        end
        return
    elseif button == Config.joy_fire then
        if status == TitleStatus then
            GamePhase.startGame()
        end
    end
end

function GamePhase.keypressed(key)
    if key == Config.key_pausemenu then
        if status == TitleStatus then
            if Platform.supports("quit") then
                love.event.quit()
            end
        elseif status then
            Stage.restart()
        else
            GamePhase.setPaused(not paused)
        end
    elseif key == "f2" then
        Stage.restart()
    elseif key == Config.key_fire then
        if status == TitleStatus then
            GamePhase.startGame()
        elseif paused then
            gui.pausemenu:pressSelectedButton()
        end
    elseif key == Config.key_up then
        if paused then
            gui.pausemenu:moveCursor(-1)
        end
    elseif key == Config.key_down then
        if paused then
            gui.pausemenu:moveCursor(1)
        end
    end
end

function GamePhase.startGame()
    status = nil
    music = Audio.playMusic("music/Funkbuster.ogg")
    music:setLooping(true)
    Stage.startGame()
end

function GamePhase.setPaused(pause)
    paused = pause
    -- if pause then
    --     Audio.play("sounds/pause.ogg")
    -- end
    gui.pausemenu:setHidden(not paused)
end

function GamePhase.update(dsecs, fixedfrac)
    if not paused then
        Stage.update(dsecs, fixedfrac)
    end
    Audio.update(dsecs)
end

function GamePhase.win()
    Audio.fadeMusic()
    status = "COMPLETE!\n\nPress %s key\nor START button"
    status = string.format(status, string.upper(Config.key_pausemenu))
    Stage.win()
end

function GamePhase.lose(reason)
    Audio.fadeMusic()
    status = reason or "GAME OVER\n\nPress %s key\nor START button"
    status = string.format(status, string.upper(Config.key_pausemenu))
    Stage.lose()
end

function GamePhase.draw(fixedfrac)
    if paused then
        fixedfrac = 0
    end
    Canvas.drawOnCanvas(function()
        Stage.draw(fixedfrac)
        if status then
            love.graphics.printf(status, 0, 64, 256, "center")
        end
    end)
    Canvas.drawCanvas()
    Canvas.drawScaledToCanvas(function()
        gui:draw()
    end)
end

return GamePhase
