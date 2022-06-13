local Scene    = require "System.Scene"
local Character    = require "BeeShooter.Character"
local Stage = {}

local scene
local camera

local player
local teams

function Stage.init()
    scene = Scene.new()
    camera = {x = 0, y = 0, width = 256, height = 224}
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
end

function Stage.restart()
    love.event.loadphase("BeeShooter.GamePhase")
end

function Stage.fixedupdate()
    scene:animate(1)
    for _, teamchars in pairs(teams) do
        for _, char in ipairs(teamchars) do
            char:fixedupdate()
        end
    end

    for _, teamchars in pairs(teams) do
        local n = #teamchars
        for i = n, 1, -1 do
            local char = teamchars[i]
            if char:willDisappear() then
                char:disappear()
                teamchars[i] = teamchars[n]
                teamchars[n] = nil
                n = n - 1
            end
        end
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
    love.graphics.clear(.25, .25, .25)
    scene:draw()
end

return Stage