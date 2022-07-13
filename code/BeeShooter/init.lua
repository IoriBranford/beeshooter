local Tiled = require "Data.Tiled"
local Config = require "System.Config"
local Wallpaper             = require "System.Wallpaper"
local Stage                 = require "BeeShooter.Stage"

local firstphase = "BeeShooter.GamePhase"
local firstmap = "data/stage_caravan.lua"

function love.load(args)
    local mapname = args.stage or args.test
    if mapname then
        local map = args.stage and string.format("data/stage_%s.lua", mapname)
            or string.format("data/test_%s.lua", mapname)
        if love.filesystem.getInfo(map, "file") then
            firstphase = "BeeShooter.GamePhase"
            firstmap = map
        end
    end

    Config.drawbodies = args.drawbodies
    Config.drawstats = args.drawstats
    Config.exclusive = args.exclusive
    if args.rotation ~= -1 then
        Config.rotation = args.rotation
    end
    if args.fullscreen then
        Config.fullscreen = true
    elseif args.windowed then
        Config.fullscreen = false
    end
    Config.applyDisplayMode(Stage.CameraWidth, Stage.CameraHeight)
    love.window.setTitle(love.filesystem.getIdentity())
    local iconfile = "appicon/appicon.png"
    if love.filesystem.getInfo(iconfile) then
        love.window.setIcon(love.image.newImageData(iconfile))
    end
    Tiled.animationtimeunit = "fixedupdates"
    Tiled.setFontPath("data/fonts/")
    love.graphics.setNewFont("data/fonts/Press Start 2P 8.fnt")
    love.graphics.setLineStyle("rough")

    -- Wallpaper.load()

    local startpoint = args.startpoint
    love.event.loadphase(firstphase, startpoint)
end

return {
    cli = [[
        --rotation                              (number default -1)	Screen orientation in degrees clockwise
        --startpoint (optional string)          Name of stage start point
    ]],
        --drawbodies                            Draw physical bodies
        --drawai                                Draw AI information
        --exhibit                               Exhibit mode - disable options menu and quit
        --buildmegatilesets	(optional string)   Build megatilesets for all maps in the given text file
        --stage (optional string)               Name of stage to start
        --test (optional string)                Name of test to start
    defaultconfig = {
        _version = 1,
        drawbodies = false,

        key_left = "left",
        key_right = "right",
        key_up = "up",
        key_down = "down",
        key_fire = "z",
        key_changeweapon = "x",
        key_changespeed = "c",
        key_pause = "pause",
        key_pausemenu = "escape",
        key_restart = "none",

        joy_deadzone = 0.25,
        joy_move1 = "left",
        joy_move2 = "dp",
        joy_startbackrestart = false,
        joy_fire = "a",
        joy_changeweapon = "b",
        joy_changespeed = "x",
        joy_pause = "back",
        joy_pausemenu = "start",
        joy_namingscheme = "XBOX"
    }
}