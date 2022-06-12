local Database = require "Data.Database"
local Particles = {}
Particles.__index = Particles

function Particles:init()
    setmetatable(self, Particles)
    local typ = self.type or ""
    if typ ~= "" then
        Database.fillBlanks(self, typ)
    end
    return self
end

function Particles:addToScene(scene)
    local sceneobject = scene:addTileParticlesObject(self)
    local particlesystem = sceneobject.particlesystem
    self.particlesystem = particlesystem

    particlesystem:setParticleLifetime(self.particletime or 60)
    particlesystem:setSpeed(self.particlespeed or 1,
        self.particlespeedmax or self.particlespeed or 1)
    particlesystem:setSpread(self.particlespreadangle or math.pi)
    particlesystem:setLinearAcceleration(self.particleaccelx or 0, self.particleaccely or 0)
    particlesystem:setEmissionArea(
		self.particleareashape or "ellipse",
		self.particleareawidth or self.width,
		self.particleareaheight or self.height)
    particlesystem:setRadialAcceleration(self.particleacceloutward or 0)
    particlesystem:setTangentialAcceleration(self.particleaccelsideways or 0)
end

function Particles:startEmit(rate)
    self.particlesystem:setEmissionRate(rate)
    self.particlesystem:moveTo(self.x, self.y)
    self.particlesystem:setDirection(self.rotation)
    self.particlesystem:start()
end

function Particles:stopEmit()
    self.particlesystem:stop()
end

function Particles:emit(num, x, y, dir, spread)
    if x then self.x = x else x = self.x end
    if y then self.y = y else y = self.y end
    if dir then self.rotation = dir else dir = self.rotation end
    if spread then self.particlespreadangle = spread else spread = self.particlespreadangle end
    self.particlesystem:moveTo(x, y)
    self.particlesystem:setDirection(dir)
    self.particlesystem:setSpread(spread)
    self.particlesystem:emit(num)
end

return Particles