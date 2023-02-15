local Controls = require "System.Controls"
local Body     = require "BeeShooter.Character.Body"
local Database = require "Data.Database"
local Audio    = require "System.Audio"
local Stage    = require "BeeShooter.Stage"
local Movement = require "Component.Movement"
local GamePhase= require "BeeShooter.GamePhase"
local class    = require "pl.class"
local Character = require "BeeShooter.Character"

local cos = math.cos
local sin = math.sin
local max = math.max
local min = math.min
local abs = math.abs
local s_format = string.format
local s_rep = string.rep
local yield = coroutine.yield
local wait = coroutine.wait

---@class PlayerShip:Character
local PlayerShip = class(Character)
PlayerShip.InstantKillDamage = 0x1000000

local NextLifeScores = {
    10000,
    50000,
    100000,
    150000,
    250000,
    350000,
    500000,
    650000,
    800000,
    1000000,
    1200000,
    1500000
}

function PlayerShip:init()
    Character.init(self)
    local tile = self.tile
    local shapes = tile and tile.shapes
    self.sting = shapes and shapes.sting or { x = 0, y = 12 }
    self.score = 0
    self.lives = 2
    self.power = 1
    self.fastspeed = self.fastspeed or 4
    self.slowspeed = self.slowspeed or 2
    self.speed = self.slowspeed
    self.weapon = "A"
    self.nextlifeindex = 1
    return self
end

function PlayerShip:recenter()
    self.invincibletime = 240
    local camera = self.camera
    local x, y, destx, desty
    repeat
        x, y = Body.getPosition(self)
        destx = camera.x + camera.width/2
        desty = camera.y + camera.height*7/8
        local speed = self.speed*2
        local velx, vely = Movement.getVelocity_speed(x, y, destx, desty, speed)
        Body.setVelocity(self, velx, vely)
        yield()
    until abs(velx) < 1 and abs(vely) < 1
    Body.setPosition(self, destx, desty)
    Body.setVelocity(self, 0, 0)
end

function PlayerShip:respawn()
    PlayerShip.recenter(self)
    self:setNextCoroutines(PlayerShip.fight)
end

local function inputMovement(self)
    local speed = self.speed or 2
    local dirx, diry = Controls.getDirectionInput()
    local camera = self.camera
    local cameraw = camera.width
    local camerah = camera.height
    local camerax = camera.x + 8
    local cameray = camera.y + 8
    local camerax2 = camerax + cameraw - 16
    local cameray2 = cameray + camerah - 16
    local vx, vy = 0, 0
    local x, y = self.x, self.y
    local destx, desty
    if dirx == 0 and diry == 0 then
        destx, desty = Controls.getDestination()
    else
        Controls.setDestination()
    end
    if destx and desty then
        destx = math.max(camerax, math.min(destx, camerax2))
        desty = math.max(cameray, math.min(desty, cameray2))
        vx, vy = Movement.getVelocity_speed(x, y, destx, desty, 4)
        if vx == destx and vy == desty then
            Controls.setDestination()
        end
    else
        vx, vy = dirx * speed, diry * speed
        if x + vx < camerax then
            vx = camerax - x
        elseif x + vx > camerax2 then
            vx = camerax2 - x
        end
        if y + vy < cameray then
            vy = cameray - y
        elseif y + vy > cameray2 then
            vy = cameray2 - y
        end
    end
    Body.setVelocity(self, vx, vy)
end

local function inputShooting(self, firetime, firebutton)
    if firebutton then
        firetime = max(0, firetime - 1)
        if firetime <= 0 then
            local weapon = self.weapon
            local power = self.power
            local weapontype = "JennyShot"..weapon..power
            local weapondata = Database.get(weapontype)
            self:spawnTypes(weapondata and weapondata.shootbullets)
            firetime = 5
        end
    else
        firetime = 0
    end
    return firetime
end

function PlayerShip:fight()
    local firetime = 0
    while true do
        self.invincibletime = max(0, self.invincibletime - 1)
        self.sprite:setHidden(self.invincibletime % 4 >= 2)
        local firebutton = Controls.getButtonsDown()
        local _, weaponbutton, speedbutton = Controls.getButtonsPressed()
        if weaponbutton then
            self.weapon = self.weapon == "A" and "B" or "A"
            Audio.play(self.changeweaponsound)
        end
        local fastspeed = self.fastspeed
        local slowspeed = self.slowspeed
        if speedbutton then
            if self.speed == fastspeed then
                self.speed = slowspeed
                Audio.play(self.slowsound)
            else
                self.speed = fastspeed
                Audio.play(self.fastsound)
            end
        end
        if self.speed == fastspeed then
            self.sprite:changeTile("flyfast"..self.weapon)
        else
            self.sprite:changeTile("flyslow"..self.weapon)
        end
        inputMovement(self)
        firetime = inputShooting(self, firetime, firebutton)

        local stingrate = self.stingrate or 3
        if self.age % stingrate == 0 then
            local x, y = Body.getPosition(self)
            local sting = self.sting
            Stage.addCharacter({
                type = "JennySting",
                x = sting.x + x,
                y = sting.y + y
            })
        end

        yield()
    end
end

local function die(self)
    self.collidable = false
    self.defeated = true
    Body.setVelocity(self, 0, 0)
    Audio.play(self.defeatsound)
    self:spawnTypes(self.defeatdrops)
    self.sprite:setHidden(true)
end

function PlayerShip:timeout()
    die(self)
end

function PlayerShip:defaultDefeat()
    self.power = self.power - 1
    if self.power > 0 and self.health > self.maxhealth - PlayerShip.InstantKillDamage then
        self.defeated = false
        self.health = self.maxhealth
        local hurtinvincibletime = self.hurtinvincibletime or 60
        if self.invincibletime < hurtinvincibletime then
            self.invincibletime = hurtinvincibletime
        end
        Audio.play(self.hurtsound)
        self:setNextCoroutines(PlayerShip.fight)
        return
    end
    self.power = max(1, self.power)
    die(self)
    wait(60)

    if self.lives <= 0 then
        GamePhase.lose()
        return
    end

    Audio.play(self.respawnsound)
    self.lives = self.lives - 1
    self.collidable = true
    self.defeated = false
    self.sprite:setHidden(false)
    self.health = self.maxhealth
    local camera = self.camera
    local destx = camera.x + camera.width/2
    local desty = camera.y + camera.height + 16
    Body.setPosition(self, destx, desty)
    self:setNextCoroutines(PlayerShip.respawn)
end

local function tallyBonuses(self, timeleft)
    while self.lives > 0 do
        self.lives = self.lives - 1
        self.score = self.score + (self.bonusperlife or 10000)
        wait(15)
    end
    timeleft = math.floor(timeleft / 60) * 60
    while timeleft > 0 do
        timeleft = timeleft - 60
        Stage.setTime(timeleft)
        self.score = self.score + (self.bonuspersecond or 100)
        yield()
    end
end

function PlayerShip:win()
    self.collidable = false
    self.defeated = false
    self.health = 1
    self.sprite:setHidden(false)
    PlayerShip.recenter(self)
    local timeleft = Stage.getTimeLeft()
    tallyBonuses(self, timeleft)
end

function PlayerShip:scorePoints(points)
    local newscore = self.score + points
    local nextlifescore = NextLifeScores[self.nextlifeindex]
    if nextlifescore then
        if newscore >= nextlifescore  then
            self.nextlifeindex = self.nextlifeindex + 1
            self.lives = self.lives + 1
            Audio.play(self.lifesound)
        end
    end
    self.score = newscore
end

function PlayerShip:giveSecretBonus(points)
    Audio.play(self.bonussound)
    self:scorePoints(points)
    self.bonus = points
end

function PlayerShip:incPowerLevel()
    local powerupinvincibletime = self.powerupinvincibletime or 60
    if self.invincibletime < powerupinvincibletime then
        self.invincibletime = powerupinvincibletime
    end
    if self.power >= 3 then
        PlayerShip.scorePoints(self, 1000)
    else
        self.power = self.power + 1
    end
end

function PlayerShip:updateHud(hud)
    love.graphics.setColor(1, 1, 1)
    local score = s_format("%07d", self.score)
    hud.status.score:setString(score)

    local lives = self.lives
    local livesstring
    if lives > 9 then
        livesstring = "♥"..lives
    else
        livesstring = s_rep("♥", lives)
    end
    hud.status.lives:setString(livesstring)

    if hud.status.speed then
        local speedstring = "Speed "..s_rep("▶", self.speed == self.fastspeed and 2 or 1)
        hud.status.speed:setString(speedstring)
    end

    local power = tostring(self.power)
    hud.weapons.weaponA:changeTile(power.."A")
    hud.weapons.weaponB:changeTile(power.."B")

    local weapon = self.weapon
    if weapon == "A" then
        hud.weapons:selectButton(1)
    elseif weapon == "B" then
        hud.weapons:selectButton(2)
    end

    local bonus = self.bonus
    if bonus then
        self.bonus = nil
        hud.status.bonus:start(bonus)
    end
    hud.status.bonus:fixedupdate()
end

function PlayerShip:updateTouchController(touchcontroller)
    if self.defeated then
        touchcontroller:hideMoveCursor()
    elseif not touchcontroller.movecursor.visible then
        touchcontroller:resetMoveCursor()
    end
end

return PlayerShip