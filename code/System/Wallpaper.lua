local Config = require "System.Config"
local Wallpaper = {}

local wallpaper
local transform

function Wallpaper.reload()
    local gw = love.graphics.getWidth()
    local gh = love.graphics.getHeight()
    local ghw = gw / 2
    local ghh = gh / 2
    local scale
    local rotation = math.rad(Config.rotation)
    wallpaper = love.graphics.newImage("data/wallpaper.png")
    if not wallpaper then
        return
    end
    scale = math.max((gw / wallpaper:getWidth()), (gh / wallpaper:getHeight()))
    transform = love.math.newTransform(ghw, ghh, rotation, scale, scale, wallpaper:getWidth()/2, wallpaper:getHeight()/2)
end

function Wallpaper.draw()
    if wallpaper then
        love.graphics.draw(wallpaper, transform)
    end
end

return Wallpaper