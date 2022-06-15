local Controls = require "System.Controls"
local Body     = require "BeeShooter.Character.Body"
local Database = require "Data.Database"
local Audio    = require "System.Audio"
local Stage    = require "BeeShooter.Stage"
local Movement = require "Component.Movement"

local cos = math.cos
local sin = math.sin
local max = math.max
local abs = math.abs
local yield = coroutine.yield
local wait = coroutine.wait

local PlayerShip = {}

function PlayerShip:start()
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
    return PlayerShip.recenter
end

function PlayerShip:recenter(nextaction)
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
    return nextaction or PlayerShip.fight
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
    local vx, vy = dirx * speed, diry * speed
    local x, y = self.x, self.y
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
    Body.setVelocity(self, vx, vy)
end

local function inputShooting(self, firetime, firebutton)
    if firebutton then
        firetime = max(0, firetime - 1)
        if firetime <= 0 then
            local x, y = Body.getPosition(self)
            local z = self.z
            local weapon = self.weapon
            local power = self.power
            local i = 1
            while i <= 6 do
                local bullettype = "JennyShot"..weapon..power..i
                local bulletprefab = Database.get(bullettype)
                if not bulletprefab then
                    break
                end
                local bullet = Stage.addCharacter({
                    type = bullettype,
                    x = bulletprefab.x + x,
                    y = bulletprefab.y + y,
                    z = z - 1
                })
                local angle = bullet.rotation or 0
                local speed = bullet.speed or 1
                bullet.velx = cos(angle)*speed
                bullet.vely = sin(angle)*speed
                Audio.play(bulletprefab.sound)
                i = i + 1
            end
            firetime = 5
        end
    else
        firetime = 0
    end
    return firetime
end

function PlayerShip:fight()
    self.scriptdefeat = PlayerShip.die
    local firetime = 0
    while true do
        self.invincibletime = max(0, self.invincibletime - 1)
        local firebutton = Controls.getButtonsDown()
        local _, weaponbutton, speedbutton = Controls.getButtonsPressed()
        if weaponbutton then
            self.weapon = self.weapon == "A" and "B" or "A"
        end
        if speedbutton then
            local fastspeed = self.fastspeed
            local slowspeed = self.slowspeed
            if self.speed == fastspeed then
                self.speed = slowspeed
                self.sprite:changeTile("flyslow")
            else
                self.speed = fastspeed
                self.sprite:changeTile("flyfast")
            end
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

function PlayerShip:die()
    Body.setVelocity(self, 0, 0)
    Audio.play(self.deathsound)
    local deathbullet = Database.get(self.deathbullet)
    local x, y, z = self.x, self.y, self.z
    if deathbullet then
        Stage.addCharacter({
            type = deathbullet.type,
            x = x,
            y = y,
            z = z
        })
    end
    self.sprite:setHidden(true)
    wait(60)

    if self.lives <= 0 then
        return
    end

    self.lives = self.lives - 1
    self.defeated = false
    Audio.play(self.respawnsound)
    self.sprite:setHidden(false)
    self.health = 1
    return PlayerShip.fight
end

function PlayerShip:drawStatus()
    local status = string.format("%07dpts   ♥ %02d   Speed %s",
        0, self.lives, string.rep("▶", self.speed == self.fastspeed and 2 or 1))
    love.graphics.printf(status, 8, 208, 240, "left")
end

return PlayerShip