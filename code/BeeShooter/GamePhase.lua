local Stage = require "BeeShooter.Stage"
local Canvas= require "System.Canvas"
local Audio = require "System.Audio"
local Config= require "System.Config"
local Tiled = require "Data.Tiled"
local Assets= require "System.Assets"
local Database = require "Data.Database"
local Platform = require "System.Platform"
local Wallpaper = require "System.Wallpaper"
local Gui      = require "Gui"
local GamePhase = {}

local paused
local music
local status
local gui ---@type Gui

local IsMobile = love.system.getOS() == "Android" or love.system.getOS() == "iOS"

local TitleStatus = IsMobile and "" or [[
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
    gui = Gui.new("data/gui_gameplay.lua", IsMobile and "touchui" or "normalui")
    gui.pausemenu:setHidden(true)
    gui.highscores:setHidden(true)

    if gui.help then
        gui.help:setHidden(true)
    end

    gui.hud:setHidden(true)
    gui.hud.status.over:setHidden(true)
    gui:pushMenu(gui.mainmenu)
    if not IsMobile then
        gui.mainmenu:selectButton(1)
    end
    if gui.controls then
        gui.controls:setHidden(true)
    end
    GamePhase.resize(love.graphics.getWidth(), love.graphics.getHeight())
    Assets.get("music/Funkbuster.ogg")
end

function GamePhase.resize(screenwidth, screenheight)
    Canvas.init(Stage.CameraWidth, Stage.CameraHeight, screenwidth, screenheight)
    Wallpaper.reload()
    screenwidth, screenheight = Canvas.inverseTransformVector(screenwidth, screenheight)
    gui:resize(screenwidth, screenheight)
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
        if gui.controls then
            Stage.fixedupdateTouchController(gui.controls)
        end
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

    if button == "back" or button == "start" then
        if gui.activemenu == gui.help.controls then
            GamePhase.closeHelp()
            return
        end
    end

    if button == "start" then
        if status == TitleStatus then
        elseif status then
            Stage.restart()
        else
            GamePhase.setPaused(not paused)
            gui.pausemenu:selectButton(paused and 1)
        end
        return
    end

    gui:gamepadpressed(joystick, button)
end

function GamePhase.keypressed(key)
    if key == Config.key_pausemenu or key == "escape" then
        if gui.activemenu == gui.help.controls then
            GamePhase.closeHelp()
        elseif status == TitleStatus then
            if Platform.supports("quit") then
                love.event.quit()
            end
        elseif status then
            Stage.restart()
        elseif key == Config.key_pausemenu then
            GamePhase.setPaused(not paused)
            gui.pausemenu:selectButton(paused and 1)
        end
        return
    elseif key == "f2" then
        Stage.restart()
        return
    end

    gui:keypressed(key)
end

function GamePhase.mousepressed(x, y, button, istouch)
    if not istouch and button == 1 then
        GamePhase.touchpressed("mouse", x, y)
    end
end

function GamePhase.mousemoved(x, y, dx, dy, istouch)
    if not istouch and love.mouse.isDown(1) then
        gui:touchmoved("mouse", x, y, dx, dy)
    end
end

function GamePhase.mousereleased(x, y, button, istouch)
    if not istouch and button == 1 then
        gui:touchreleased("mouse")
    end
end

function GamePhase.touchpressed(id, x, y)
    if status == TitleStatus then
    elseif status then
        Stage.restart()
        return
    end
    gui:touchpressed(id, x, y)
end

function GamePhase.touchmoved(id, x, y, dx, dy)
    gui:touchmoved(id, x, y, dx, dy)
end

function GamePhase.touchreleased(id)
    gui:touchreleased(id)
end

function GamePhase.startGame()
    status = nil
    music = Audio.playMusic("music/Funkbuster.ogg")
    music:setLooping(true)
    gui.mainmenu:setHidden(true)
    gui:clearMenuStack()
    if gui.controls then
        gui:pushMenu(gui.controls)
    end
    Stage.startGame()
    gui.hud:setHidden(false)
    gui.titleart:setHidden(true)
end

function GamePhase.openHelp()
    gui.help:setHidden(false)
    gui.help.controls.page:setValue(1)
    gui:pushMenu(gui.help.controls)
    if not IsMobile then
        gui.help:selectButton(1)
    end
end

function GamePhase.closeHelp()
    gui.help:setHidden(true)
    gui:popMenu()
end

function GamePhase.popMenu()
    gui:popMenu()
end

function GamePhase.openHighScore()
    gui:pushMenu(gui.highscores)
    gui.highscores:refresh()
    if not IsMobile then
        gui.highscores:selectButton(1)
    end
end

function GamePhase.setPaused(pause)
    paused = pause
    -- if pause then
    --     Audio.play("sounds/pause.ogg")
    -- end
    gui.pausemenu:setHidden(not paused)
    if pause then
        gui:setActiveMenu(gui.pausemenu)
    end
    if gui.controls then
        if not pause then
            gui:setActiveMenu(gui.controls)
        end
        gui.controls:setHidden(pause)
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
    status = "COMPLETE!"
    status = string.format(status, string.upper(Config.key_pausemenu))
    Stage.win()
    if gui.controls then
        gui.controls:setHidden(true)
    end
    gui.hud.status.over:setHidden(false)
    gui:clearMenuStack()
end

function GamePhase.lose(reason)
    Audio.fadeMusic()
    status = reason or "GAME OVER"
    status = string.format(status, string.upper(Config.key_pausemenu))
    Stage.lose()
    if gui.controls then
        gui.controls:setHidden(true)
    end
    gui.hud.status.over:setHidden(false)
    gui:clearMenuStack()
end

function GamePhase.draw(fixedfrac)
    if paused then
        fixedfrac = 0
    end
    Wallpaper.draw()
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
