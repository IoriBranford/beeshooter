local Config = require "System.Config"
local Canvas = {}

local canvas
local transform

function Canvas.init(width, height)
    canvas = love.graphics.newCanvas(width, height)
    canvas:setFilter(Config.canvasscalesoft and "linear" or "nearest")

    local gw = love.graphics.getWidth()
    local gh = love.graphics.getHeight()
    local ghw = gw / 2
    local ghh = gh / 2
    local chw = canvas:getWidth() / 2
    local chh = canvas:getHeight() / 2
    local canvasscale

    local rotation = math.rad(Config.rotation)
    local portraitrotation = Config.isPortraitRotation()
    if portraitrotation then
        canvasscale = math.min(ghh / chw, ghw / chh)
    else
        canvasscale = math.min(ghw / chw, ghh / chh)
    end

    if Config.canvasscaleint then
        canvasscale = math.floor(canvasscale)
    end

    transform = love.math.newTransform()
    transform:translate(math.floor(ghw), math.floor(ghh))
    transform:rotate(rotation)
    transform:scale(canvasscale)
    transform:translate(-chw, -chh)
end

function Canvas.drawOnCanvas(draw)
    canvas:renderTo(draw)
end

function Canvas.drawCanvas()
    love.graphics.setColor(1, 1, 1)
    love.graphics.draw(canvas, transform)
end

function Canvas.drawScaledToCanvas(draw)
    love.graphics.push()
    love.graphics.applyTransform(transform)
    draw()
    love.graphics.pop()
end

return Canvas