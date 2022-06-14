local Scene    = require "System.Scene"
local Character    = require "BeeShooter.Character"
local Body         = require "BeeShooter.Character.Body"

local t_sort = table.sort
local Stage = {}

local scene
local camera

local player
local teams
local everyone

function Stage.init()
    scene = Scene.new()
    camera = {x = 0, y = 0, width = 256, height = 224}
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
    player       = nil
    teams = nil
    everyone = nil
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

    for _, teamchars in pairs(teams) do
        prune(teamchars)
    end
    prune(everyone)
end

function Stage.update(dsecs, fixedfrac)
    for _, teamchars in pairs(teams) do
        for _, char in ipairs(teamchars) do
            char:update(dsecs, fixedfrac)
        end
    end
end

function Stage.draw(fixedfrac)
    love.graphics.clear(.25, .25, .25)
    scene:draw()
end

return Stage