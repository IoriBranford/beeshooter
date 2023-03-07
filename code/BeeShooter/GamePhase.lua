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
local gui ---@type Gui
local PauseSound = "sounds/pause.mp3"

function GamePhase.loadphase(startpoint)
    local isAsset = Assets.isAsset
    local getAsset = Assets.get
    paused = false
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

    gui = Gui.new("data/gui_gameplay.lua", Platform.IsMobile and "touchui" or "normalui")
    gui.titlescreen:setHidden(false)
    gui.titlescreen:hideChildrenExcept("art", "mainmenu")
    gui.gamescreen:setHidden(true)
    gui:pushMenu(gui.titlescreen.mainmenu)

    GamePhase.resize(love.graphics.getWidth(), love.graphics.getHeight())
    Assets.get("music/Funkbuster.ogg")
    Assets.get(PauseSound)
end

function GamePhase.restart()
    love.event.loadphase("BeeShooter.GamePhase")
end

function GamePhase.resize(screenwidth, screenheight)
    Canvas.init(Stage.CameraWidth, Stage.CameraHeight, screenwidth, screenheight)
    Wallpaper.reload()
    screenwidth, screenheight = Canvas.inverseTransformVector(screenwidth, screenheight)
    gui:resize(screenwidth, screenheight)
end

function GamePhase.quitphase()
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
        Stage.fixedupdateHud(gui.gamescreen.hud)
        if gui.gamescreen.controls then
            Stage.fixedupdateTouchController(gui.gamescreen.controls)
        end
    end
    gui:fixedupdate()
end

function GamePhase.gamepadpressed(joystick, button)
    if button == "start" and joystick:isGamepadDown("back")
    or button == "back" and joystick:isGamepadDown("start")
    then
        GamePhase.restart()
        return
    end

    if gui.gamescreen.visible then
        if gui.activemenu == gui.gamescreen.gameovermenu then
        else
            if button == Config.joy_pausemenu then
                GamePhase.setPaused(not paused)
                gui.gamescreen.pausemenu:selectButton(paused and 1)
                return
            end
        end
    end

    gui:gamepadpressed(joystick, button)
end

function GamePhase.keypressed(key)
    if key == "f2" then
        GamePhase.restart()
        return
    end

    if gui.gamescreen.visible then
        if gui.activemenu == gui.gamescreen.gameovermenu then
        else
            if key == Config.key_pausemenu then
                GamePhase.setPaused(not paused)
                gui.gamescreen.pausemenu:selectButton(paused and 1)
                return
            end
        end
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
    gui:touchpressed(id, x, y)
end

function GamePhase.touchmoved(id, x, y, dx, dy)
    gui:touchmoved(id, x, y, dx, dy)
end

function GamePhase.touchreleased(id)
    gui:touchreleased(id)
end

function GamePhase.startGame()
    music = Audio.playMusic("music/Funkbuster.ogg")
    music:setLooping(true)
    gui.gamescreen:setHidden(false)
    gui.gamescreen:hideChildrenExcept("hud")
    gui.titlescreen:setHidden(true)
    gui:clearMenuStack()
    if gui.gamescreen.controls then
        gui:pushMenu(gui.gamescreen.controls)
    end

    Stage.startGame()
end

function GamePhase.setPaused(pause)
    paused = pause
    -- if pause then
    --     Audio.play("sounds/pause.ogg")
    -- end
    gui.gamescreen.pausemenu:setHidden(not paused)
    if pause then
        gui:setActiveMenu(gui.gamescreen.pausemenu)
        Audio.play(PauseSound)
    end
    if gui.gamescreen.controls then
        if not pause then
            gui:setActiveMenu(gui.gamescreen.controls)
        end
        gui.gamescreen.controls:setHidden(pause)
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
    Stage.win()
    gui:clearMenuStack()
    gui.gamescreen.gameovermenu.result:setString("COMPLETE!")
end

function GamePhase.lose(reason)
    Audio.fadeMusic()
    Stage.lose()
    gui:clearMenuStack()
    gui:pushMenu(gui.gamescreen.gameovermenu)
    gui.gamescreen.gameovermenu.result:setString(reason or "GAME OVER")
end

function GamePhase.openGameOverMenu()
    gui:pushMenu(gui.gamescreen.gameovermenu)
end

function GamePhase.draw(fixedfrac)
    if paused then
        fixedfrac = 0
    end
    Wallpaper.draw()
    Canvas.drawOnCanvas(function()
        Stage.draw(fixedfrac)
    end)
    if Stage.getTimeLeft() <= 0 then
        love.graphics.setColor(1, 0, 0)
        Canvas.drawCanvas()
        love.graphics.setColor(1, 1, 1)
    else
        Canvas.drawCanvas()
    end
    Canvas.drawScaledToCanvas(function()
        gui:draw()
    end)
end

return GamePhase
