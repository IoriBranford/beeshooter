local Tiled = require "Data.Tiled"
local Config = require "System.Config"
local Wallpaper             = require "System.Wallpaper"

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

    Config.exhibit = args.exhibit
    Config.drawbodies = args.drawbodies
    Config.drawstats = args.drawstats
    Config.drawai = args.drawai
    Config.exclusive = args.exclusive
    if args.rotation ~= -1 then
        Config.rotation = args.rotation
    end
    if args.fullscreen then
        Config.fullscreen = true
    elseif args.windowed then
        Config.fullscreen = false
    end
    Config.applyDisplayMode()
    love.window.setTitle(love.filesystem.getIdentity())

    Tiled.animationtimeunit = "fixedupdates"
    Tiled.setFontPath("data/fonts/")
    love.graphics.setLineStyle("rough")

    -- Wallpaper.load()

    local startpoint = args.startpoint
    love.event.loadphase(firstphase, firstmap, startpoint)
end

return {
    cli = [[
        --rotation                              (number default -1)	Screen orientation in degrees clockwise
        --drawbodies                            Draw physical bodies
        --drawai                                Draw AI information
        --exhibit                               Exhibit mode - disable options menu and quit
        --buildmegatilesets	(optional string)   Build megatilesets for all maps in the given text file
        --stage (optional string)               Name of stage to start
        --test (optional string)                Name of test to start
        --startpoint (optional string)          Name of stage start point
    ]],
    defaultconfig = {
        _version = 1,
        debug = false,
        drawbodies = false,
        drawstats = false,
        drawai = false,
        exclusive = false,
        exhibit = false,
        rotation = 0,
        fullscreen = false,
        vsync = false,
        usedpiscale = false,
        basewindowwidth = 256,
        basewindowheight = 224,
        canvasresolution = "HIGH",
        canvasscaleint = true,
        canvasscalesoft = false,
        musicvolume = 0.5,
        soundvolume = 0.5,
        resizable = false,
    
        key_left = "left",
        key_right = "right",
        key_up = "up",
        key_down = "down",
        key_fire = "z",
        key_focus = "x",
        key_bomb = "c",
        key_pause = "pause",
        key_pausemenu = "escape",
        key_restart = "none",
    
        game_rules = "ORIGINAL",
        game_difficulty = "NORMAL",
        game_dialogue = true,
        player_character = "Amy",
        player_hitbox = "FOCUSFIRE",
        player_burst = 4,
        practice_lives = 2,
        practice_bombs = 1,
        practice_wingmen = 0,
        practice_powerlevel = 0,
        practice_stage = "DEMONREALM",
    
        joy_deadzone = 0.25,
        joy_move1 = "left",
        joy_move2 = "dp",
        joy_startbackrestart = false,
        joy_fire = "x",
        joy_focus = "a",
        joy_bomb = "b",
        joy_pause = "back",
        joy_pausemenu = "start",
        joy_namingscheme = "XBOX",
    
        hud_inner = "AUTO",
        hud_outer = true,
    
        backgroundstyle = "ART2",
        highscores_difficulty = "NORMAL",
        highscores_character = "Amy",
        highscores_onlineposition = "TOP",
    }
}