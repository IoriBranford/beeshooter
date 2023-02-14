local Config = require "System.Config"
local Canvas = {}

local maincanvas
local canvases
local transform

function Canvas.init(width, height)
    maincanvas = love.graphics.newCanvas(width, height)
    canvases = {maincanvas}
    if love.graphics.getCanvasFormats().stencil8 then
        canvases.depthstencil = love.graphics.newCanvas(width, height, { format = "stencil8" })
    end

    local gw = love.graphics.getWidth()
    local gh = love.graphics.getHeight()
    local ghw = gw / 2
    local ghh = gh / 2
    local chw = maincanvas:getWidth() / 2
    local chh = maincanvas:getHeight() / 2
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

    local filter = Config.canvasscalesoft and "linear" or "nearest"
    maincanvas:setFilter(filter, filter)

    transform = love.math.newTransform()
    transform:translate(math.floor(ghw), math.floor(ghh))
    transform:rotate(rotation)
    transform:scale(canvasscale)
    transform:translate(-chw, -chh)
end

function Canvas.drawOnCanvas(draw)
    love.graphics.setCanvas(canvases)
    draw()
    love.graphics.setCanvas()
end

function Canvas.drawCanvas()
    love.graphics.setColor(1, 1, 1)
    love.graphics.draw(maincanvas, transform)
end

function Canvas.drawScaledToCanvas(draw)
    love.graphics.push()
    love.graphics.applyTransform(transform)
    draw()
    love.graphics.pop()
end

function Canvas.inverseTransformPoint(x, y)
    return transform:inverseTransformPoint(x, y)
end

return Canvas