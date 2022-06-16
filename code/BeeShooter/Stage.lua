local Scene    = require "System.Scene"
local Character    = require "BeeShooter.Character"
local Body         = require "BeeShooter.Character.Body"
local Script       = require "Component.Script"
local Tiled        = require "Data.Tiled"
local Timeline     = require "Data.Timeline"
local Database     = require "Data.Database"
local PlayerShip

local t_sort = table.sort
local min = math.min

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

local function readMapObjectLayer(objectlayer)
    local paths, characters
    for i, object in ipairs(objectlayer) do
        local objecttype = object.type
        if objecttype == "Trigger" then
            objectlayer.trigger = object
        elseif objecttype == "Path" then
            paths = paths or {}
            paths[#paths+1] = object
        else
            characters = characters or {}
            characters[#characters+1] = object
        end
    end
    objectlayer.paths = paths
    objectlayer.characters = characters
    return objectlayer
end

local function doFlyingSpawn(flyingspawn)
    currentflyers = flyingspawn.characters
    Stage.addCharacters(flyingspawn.characters)
end

local function doStageSpawn(stagespawn)
    local stagey = stage.y
    local characters = stagespawn.characters
    for _, character in ipairs(characters) do
        character.y = character.y + stagey
    end
    local paths = stagespawn.paths
    for _, path in ipairs(paths) do
        path.y = path.y + stagey
    end
    Stage.addCharacters(stagespawn.characters)
end

function Stage.init()
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

    stage = map.layers.stage
    if stage then
        local stagey = stage.starty or stage.y
        stage.y = stagey
        stage.vely = stage.vely or .75
        scene:addLayers(stage, "group,tilelayer,imagelayer")
        local stagespawns = stage.spawns
        if stagespawns then
            for _, stagespawn in ipairs(stagespawns) do
                readMapObjectLayer(stagespawn)
                local trigger = stagespawn.trigger
                local characters = stagespawn.characters
                if trigger and characters then
                    stagespawntimeline:addEvent(-stagey - trigger.y, doStageSpawn, stagespawn)
                end
            end
        end
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
end

function Stage.addCharacter(object)
    if object ~= player then
        object.player = player
    end
    object.camera = camera
    object.stage = stage
    local character = Character.init(object)
    character:addToScene(scene)
    local team = teams[character.team]
    if team then
        team[#team+1] = character
        character.enemies = team.enemies
    end
    everyone[#everyone+1] = character
    Script.load(character, character.script)
    Script.start(character, character.scriptstart or "start")
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
            char:disappear()
            chars[i] = chars[n]
            chars[n] = nil
            n = n - 1
        end
    end
end

function Stage.fixedupdate()
    local stagey = stage.y
    local stagevely = stage.vely
    stagey = stagey + stagevely
    stage.vely = min(-stagey, stagevely)
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
end

function Stage.update(dsecs, fixedfrac)
    for i = 1, #everyone do
        everyone[i]:update(dsecs, fixedfrac)
    end

    local stagevely = stage.vely
    local stagey = stage.y + stagevely*fixedfrac
    for _, layer in ipairs(stage) do
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

function Stage.draw(fixedfrac)
    love.graphics.clear(clearred, cleargreen, clearblue)
    scene:draw()
    PlayerShip.drawStatus(player)
end

return Stage