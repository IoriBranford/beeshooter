local Scene    = require "System.Scene"
local Character    = require "BeeShooter.Character"
local Body         = require "BeeShooter.Character.Body"
local Script       = require "Component.Script"
local Tiled        = require "Data.Tiled"
local Timeline     = require "Data.Timeline"

local t_sort = table.sort
local Stage = {}

local scene ---@type Scene
local camera = {x = 0, y = 0, width = 256, height = 224}
local map ---@type Map
local player ---@type Character
local teams  ---@type table
local everyone ---@type table
local flyingspawntimeline ---@type Timeline
local currentflyers
local stagespawntimeline ---@type Timeline

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

function Stage.init()
    scene = Scene.new()
    camera = {x = 0, y = 0, width = 256, height = 224}

    stagespawntimeline = Timeline.new()
    flyingspawntimeline = Timeline.new()

    map = Tiled.load("data/stage_caravan.lua")
    scene:addMap(map, "group,tilelayer,imagelayer")

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
    map = nil
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
    if not currentflyers or #currentflyers <= 0 then
        flyingspawntimeline:advance(1)
    end
end

function Stage.update(dsecs, fixedfrac)
    for _, teamchars in pairs(teams) do
        for _, char in ipairs(teamchars) do
            char:update(dsecs, fixedfrac)
        end
    end
end

function Stage.draw(fixedfrac)
    local backgroundcolor = map.backgroundcolor
    if backgroundcolor then
        love.graphics.clear(backgroundcolor[1], backgroundcolor[2], backgroundcolor[3])
    end
    scene:draw()
end

return Stage