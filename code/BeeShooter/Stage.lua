local Scene    = require "System.Scene"
local Character    = require "BeeShooter.Character"
local Body         = require "BeeShooter.Character.Body"
local Tiled        = require "Data.Tiled"
local Timeline     = require "Data.Timeline"
local PathPoint    = require "Object.PathPoint"
local Path         = require "Object.Path"
local Config       = require "System.Config"
local Database     = require "Data.Database"
local Trigger      = require "BeeShooter.Trigger"
local CharacterGroup        = require "BeeShooter.Character.Group"
local Z                     = require "BeeShooter.Z"
local PlayerShip

local t_sort = table.sort
local min = math.min
local floor = math.floor
local s_format = string.format

local Stage = {
    CameraWidth = 256,
    CameraHeight = 224
}

local scene ---@type Scene
local camera = {x = 0, y = 0, width = Stage.CameraWidth, height = Stage.CameraHeight}
local stage
local player ---@type Character
local teams  ---@type table
local everyone ---@type table
local flyingspawntimeline ---@type Timeline
local currentflyers
local stagespawntimeline ---@type Timeline
local clearred, cleargreen, clearblue = 0, 0, 0
local gametimer
local gametimerstate
local spriteshader
local stagetiles

local function readMapObjectLayer(objectlayer)
    local triggers, paths, pointdatas, characters
    for i, object in ipairs(objectlayer) do
        local objecttype = object.type or ""
        if objecttype == "Trigger" then
            Trigger:cast(object)
            triggers = triggers or {}
            triggers[#triggers+1] = object
        elseif objecttype == "Path" then
            paths = paths or {}
            paths[#paths+1] = object
        elseif objecttype == "PathPoint" then
            pointdatas = pointdatas or {}
            pointdatas[#pointdatas+1] = object
        else
            characters = characters or CharacterGroup()
            characters.allenemiesdefeatedbonus = objectlayer.allenemiesdefeatedbonus
            characters.allenemiesdefeatedbonuswindow = objectlayer.allenemiesdefeatedbonuswindow
            characters:add(object)
        end
        object.layer = objectlayer
    end
    if paths and pointdatas then
        for _, pointdata in ipairs(pointdatas) do
            PathPoint.init(pointdata)
            local datapath = pointdata.path
            if datapath then
                Path.addPointData(datapath, pointdata)
            else
                for _, path in ipairs(paths) do
                    Path.addPointData(path, pointdata)
                end
            end
        end
    end
    objectlayer.triggers = triggers
    objectlayer.paths = paths
    objectlayer.characters = characters
    objectlayer.objects = nil
    for i = #objectlayer, 1, -1 do
        objectlayer[i] = nil
    end
    return objectlayer
end

local function doFlyingSpawn(flyingspawn)
    currentflyers = flyingspawn.characters
    Stage.addCharacters(flyingspawn.characters)
end

function Stage.doStageSpawn(stagespawn)
    local characters = stagespawn.characters
    if not characters then
        return
    end
    local stagey = stage.y
    for _, character in ipairs(characters) do
        character.y = character.y + stagey
    end
    Stage.addCharacters(stagespawn.characters)
    stagespawn.characters = nil
end

function Stage.init(startpoint)
    spriteshader = love.graphics.newShader("shaders/sprite.glsl")
    PlayerShip   = require "BeeShooter.Character.PlayerShip"
    scene = Scene.new()
    camera = {x = 0, y = 0, width = Stage.CameraWidth, height = Stage.CameraHeight}

    stagespawntimeline = Timeline.new()
    flyingspawntimeline = Timeline.new()

    local map = Tiled.load("data/stage_caravan.lua")
    local backgroundcolor = map.backgroundcolor
    if backgroundcolor then
        clearred, cleargreen, clearblue = backgroundcolor[1], backgroundcolor[2], backgroundcolor[3]
    else
        clearred, cleargreen, clearblue = 0, 0, 0
    end

    stagetiles = map.tiles
    stage = map.layers.stage
    if stage then
        local stagey = stage.starty
        if stagey then
            stagey = -stagey
        else
            stagey = stage.y
        end
        stage.vely = 0
        scene:addLayers(stage, "group,tilelayer,imagelayer")

        local tilelayers = stage.tilelayers
        local drawbeforedecals = scene:addCustom(function()
            love.graphics.stencil(function()
                for _, layer in ipairs(tilelayers) do
                    if layer.visible then
                        local chunks = layer.chunks
                        for _, chunk in ipairs(chunks) do
                            local sprite = chunk.sprite
                            sprite:draw()
                        end
                    end
                end
            end)
            love.graphics.setStencilTest("greater", 0)
        end)
        drawbeforedecals.z = Z.GroundDecal-(1/256)
        local drawafterdecals = scene:addCustom(function()
            love.graphics.setStencilTest()
        end)
        drawafterdecals.z = Z.GroundDecal+(1/256)

        local stagespawns = stage.spawns
        stage.spawns = nil
        if stagespawns then
            for _, stagespawn in ipairs(stagespawns) do
                readMapObjectLayer(stagespawn)
            end
            local startspawn = startpoint and stagespawns[startpoint]
            if startspawn and startspawn.triggers then
                for _, trigger in ipairs(startspawn.triggers) do
                    stagey = math.max(stagey, -trigger.y - 1)
                end
            end
            for _, stagespawn in ipairs(stagespawns) do
                local triggers = stagespawn.triggers
                if triggers and stagespawn.visible then
                    for _, trigger in ipairs(triggers) do
                        local timelinepos = -stagey - trigger.y
                        if timelinepos >= 0 and trigger.visible then
                            stagespawntimeline:addEvent(timelinepos, Trigger.activate, trigger)
                        end
                    end
                end
            end
            stagespawntimeline:sort()
        end
        stage.y = stagey
    end

    local flyingspawns = map.layers.flyingspawns
    if flyingspawns then
        for i, flyingspawn in ipairs(flyingspawns) do
            readMapObjectLayer(flyingspawn)
            flyingspawntimeline:addEvent(i, doFlyingSpawn, flyingspawn)
        end
    end

    everyone = {}
    teams = {
        PlayerShip = {},
        EnemyShip = {},
        PlayerShot = {},
        EnemyShot = {}
    }
    teams.PlayerShip.enemies = teams.EnemyShot
    teams.PlayerShot.enemies = teams.EnemyShip
    teams.EnemyShip.enemies = teams.PlayerShot
    teams.EnemyShot.enemies = teams.PlayerShip
    player = Stage.addCharacter({
        type = "Jenny",
        x = 128,
        y = 240
    })

    gametimer = 60*60
    gametimerstate = "waitingforenemy"
end

function Stage.startGame()
    stage.vely = stage.startvely or .75
    player:setNextCoroutines(PlayerShip.respawn)
end

function Stage.addCharacter(object)
    if object ~= player then
        object.player = player
    end
    object.camera = camera
    object.stage = stage
    local type = object.type
    if type then
        Database.fillBlanks(object, type)
    end
    local characterclass = object.script and require(object.script) or Character
    characterclass:cast(object)
    local character = characterclass.init(object)
    character:addToScene(scene)
    local team = teams[character.team]
    if team then
        team[#team+1] = character
        character.enemies = team.enemies
    end
    if character.team == "EnemyShip"
    and gametimerstate == "waitingforenemy" then
        gametimerstate = "running"
    end
    everyone[#everyone+1] = character
    return character
end
local addCharacter = Stage.addCharacter

function Stage.addCharacters(objects)
    for _, object in ipairs(objects) do
        addCharacter(object)
    end
end

function Stage.quit()
    scene = nil
    camera       = nil
    stage = nil
    player       = nil
    teams = nil
    everyone = nil
    stagespawntimeline = nil
    flyingspawntimeline = nil
    currentflyers = nil
end

function Stage.restart()
    love.event.loadphase("BeeShooter.GamePhase")
end

local function prune(chars)
    local n = #chars
    for i = n, 1, -1 do
        local char = chars[i]
        if char:willDisappear() then
            char.player = nil
            char.enemies = nil
            char.layer = nil
            char.stage = nil
            char:disappear()
            chars[i] = chars[n]
            chars[n] = nil
            n = n - 1
        end
    end
end

function Stage.fixedupdateHud(hud)
    local timerminutes = floor(gametimer/3600)
    local timerseconds = floor(gametimer / 60) % 60
    local timerframes = gametimer % 60
    local timerstring = s_format("%d:%02d:%02d", timerminutes, timerseconds, timerframes)
    hud.status.time:setString(timerstring)
    PlayerShip.updateHud(player, hud)
end

function Stage.fixedupdateTouchController(touchcontroller)
    PlayerShip.updateTouchController(player, touchcontroller)
end

function Stage.fixedupdate()
    local stagey = stage.y
    local stagevely = stage.vely
    stagey = stagey + stagevely
    stage.y = stagey

    scene:animate(1)
    t_sort(everyone)
    for i = 1, #everyone do
        Body.fixedupdateBody(everyone[i])
    end
    for i = 1, #everyone do
        everyone[i]:fixedupdate()
    end

    prune(everyone)
    for _, teamchars in pairs(teams) do
        prune(teamchars)
    end
    if currentflyers then
        prune(currentflyers)
    end
    stagespawntimeline:advance(stagevely)
    if not currentflyers or #currentflyers <= 0 then
        flyingspawntimeline:advance(1)
    end

    if gametimerstate == "running" and gametimer > 0 then
        gametimer = gametimer - 1
        if gametimer <= 0 then
            player:setNextCoroutines(PlayerShip.timeout)
            local GamePhase = require "BeeShooter.GamePhase"
            GamePhase.lose("TIME UP!")
        end
    end
end

function Stage.update(dsecs, fixedfrac)
    for i = 1, #everyone do
        everyone[i]:update(dsecs, fixedfrac)
    end

    local stagevely = stage.vely
    local stagey = stage.y + stagevely*fixedfrac
    for _, layer in ipairs(stage.tilelayers) do
        local layertype = layer.type
        if layertype == "tilelayer" then
            local chunks = layer.chunks
            for _, chunk in ipairs(chunks) do
                local vy = stagevely
                local y = stagey + chunk.y*chunk.tileheight
                local sprite = chunk.sprite
                sprite.y = y + vy * fixedfrac
            end
        end
    end
end

function Stage.killTeam(teamname)
    local team = teams[teamname]
    if team then
        for i = 1, #team do
            team[i]:defeat()
        end
    end
end

function Stage.explodeTileLayer(layer, centerx, centery)
    if type(layer) == "string" then
        local tilelayers = stage.tilelayers
        layer = tilelayers[layer]
    end
    if not layer or layer.type ~= "tilelayer" or not layer.visible then
        return
    end
    centery = -stage.y + centery

    layer.visible = false
    for _, chunk in ipairs(layer.chunks) do
        chunk.sprite:setHidden(true)
        local data = chunk.data
        local i = 0
        for r = chunk.y, chunk.y + chunk.height - 1 do
            for c = chunk.x, chunk.x + chunk.width - 1 do
                i = i + 1
                local gid = data[i]
                gid = gid and Tiled.parseGid(gid)
                local tile = stagetiles[gid]
                if tile then
                    local x = (c+.5) * chunk.tilewidth
                    local y = stage.y + (r+.5) * chunk.tileheight
                    local velx = (x - centerx) / chunk.tilewidth
                    local vely = (y - centery) / chunk.tileheight
                    Stage.addCharacter({
                        type = "ExplosionDebris",
                        x = x,
                        y = y,
                        velx = velx,
                        vely = vely,
                        tile = tile,
                        visible = true,
                    })
                end
            end
        end
    end
end

function Stage.setVelY(vely)
    stage.vely = vely
end

function Stage.setTime(time)
    gametimer = time
end

function Stage.addToTimer(time)
    gametimer = gametimer + time
end

function Stage.stop()
    gametimerstate = "stopped"
    stage.vely = 0
end

function Stage.pauseTimerUntilNextEnemy()
    gametimerstate = "waitingforenemy"
end

function Stage.win()
    Stage.stop()
    player:setNextCoroutines(PlayerShip.win)
end

function Stage.lose()
    Stage.stop()
end

function Stage.getTimeLeft()
    return gametimer
end

function Stage.draw(fixedfrac)
    love.graphics.clear(clearred, cleargreen, clearblue)
    love.graphics.setShader(spriteshader)
    scene:draw()
    love.graphics.setShader()
    if Config.drawbodies then
        for i = 1, #everyone do
            everyone[i]:drawBody()
        end
    end
end

return Stage