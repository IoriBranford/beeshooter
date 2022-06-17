local Script = require "Component.Script"
local Sprite = require "Component.Sprite"
local Database = require "Data.Database"
local Audio    = require "System.Audio"

local huge = math.huge
local testrects = math.testrects

---@class Character
---@field type string
---@field tile table Tiled tile structure
---@field lifetime number die at this age
---@field script string the require string of the script module
---@field scriptstart string|function the first script function to run
---@field scriptdefeat string|function the script function to start when out of health
---@field team string cannot have whitespace
---@field enemyteams string list of teams separated by whitespace
---@field camera table camera reference for convenience
---@field enemies table array of characters that do damage
---@field invincibletime number
---@field collidable boolean otherwise cannot hit or be hit
---@field defeatdrops string list of items to drop, separated by non-word chars
---@field spawnsound string
---@field defeatsound string
local Character = {}
Character.__index = Character

local DefaultHitbox = {
    x = 0,
    y = 0,
    width = 0,
    height = 0
}

local function initHitbox(self)
    local tile = self.tile
    local shapes = tile and tile.shapes
    local hitbox = shapes and shapes.hitbox
    self.hitbox = hitbox
end

function Character:init()
    self = self or {}
    local type = self.type
    if type then
        Database.fillBlanks(self, type)
    end
    setmetatable(self, Character)
    self.age = 0                                    -- in fixedupdates
    self.lifetime = self.lifetime or 0              -- die at this age, immortal if <= 0
    self.health = self.health or 1
    self.hitdamageenemy = self.hitdamageenemy or 0
    self.hitdamageself = self.hitdamageself or 0
    self.maxhealth = self.maxhealth or self.health
    self.width = self.width or 1    -- graphic width
    self.height = self.height or 1  -- graphic height
    self.x = self.x or 0
    self.y = self.y or 0
    self.z = self.z or 0
    self.velx = self.velx or 0
    self.vely = self.vely or 0
    self.velz = self.velz or 0
    self.fixedupdateorder = self.fixedupdateorder or 0
    initHitbox(self)
    Audio.play(self.spawnsound)
    return self
end

function Character:__lt(other)
    return self.fixedupdateorder < other.fixedupdateorder
end

---@param scene Scene
function Character:addToScene(scene)
    self.sprite = Sprite.newTileSprite(self, scene)
        or Sprite.newAseprite(self, scene)
        or scene:addObject(self)
end

function Character:isSpriteOnScreen()
    local x, y, w, h = self.x, self.y, self.width, self.height
    local sprite = self.sprite
    local ox, oy = 0, 0
    if sprite then
        ox, oy = sprite.ox, sprite.oy
    end
    local camera = self.camera
    local cx, cy, cw, ch = camera.x, camera.y, camera.width, camera.height
    return testrects(x - ox, y - oy, w, h, cx, cy, cw, ch)
end

function Character:dropDefeatObjects()
    local defeatdrops = self.defeatdrops
    if not defeatdrops then
        return
    end
    local Stage = require "BeeShooter.Stage"
    for droptype in string.gmatch(defeatdrops, "%w+") do
        local dropprefab = Database.get(droptype)
        if dropprefab then
            Stage.addCharacter({
                type = droptype,
                x = self.x + dropprefab.x,
                y = self.y + dropprefab.y
            })
        end
    end
end

function Character:giveDefeatPoints()
    local PlayerShip = require "BeeShooter.Character.PlayerShip"
    PlayerShip.scorePoints(self.player, self.defeatpoints or 0)
end

---@param self Character
function Character:defaultDefeat()
    Audio.play(self.defeatsound)
    self:dropDefeatObjects()
    self:giveDefeatPoints()
    self:markDisappear()
end

function Character:defeat()
    if self.defeated then
        return
    end
    self.defeated = true
    Script.start(self, self.scriptdefeat or Character.defaultDefeat)
end

local function respondToCollisions(self, others, collide)
    if not others or not self.collidable or not self:isSpriteOnScreen() then
        return
    end
    local hitbox = self.hitbox or DefaultHitbox
    local x, y, w, h = self.x + hitbox.x, self.y + hitbox.y, hitbox.width, hitbox.height
    for _, other in ipairs(others) do
        if other.collidable then
            local hitbox2 = other.hitbox or DefaultHitbox
            local x2, y2, w2, h2 =
                hitbox2.x + other.x,
                hitbox2.y + other.y,
                hitbox2.width, hitbox2.height
            if testrects(x, y, w, h, x2, y2, w2, h2) then
                collide(self, other)
            end
        end
    end
end

local function fixedupdateDamage(self)
    local invincibletime = self.invincibletime or 0
    if invincibletime > 0 then
        return
    end
    local enemies = self.enemies
    if not enemies then
        return
    end
    local damage = 0
    local hitdamageself = self.hitdamageself or 0
    respondToCollisions(self, enemies, function(_, enemy)
        damage = damage + enemy.hitdamageenemy + hitdamageself
    end)
    self.health = self.health - damage
    if self.health < 1 then
        self:defeat()
    end
end

function Character:fixedupdate()
    self.age = self.age + 1
    fixedupdateDamage(self)
    Script.run(self)
    if self.lifetime > 0 and self.age >= self.lifetime then
        self:markDisappear()
    end
end

function Character:update(dsecs, fixedfrac)
    Sprite.update(self, self.sprite, fixedfrac)
end

function Character:willDisappear()
    return self.age < 0
end

function Character:markDisappear()
    self.age = -huge
end

function Character:disappear()
    Sprite.remove(self, "sprite")
end

return Character