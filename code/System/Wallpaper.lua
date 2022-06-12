local Config = require "System.Config"
local Wallpaper = {}

local wallpaper
local transform

function Wallpaper.load()
    local gw = love.graphics.getWidth()
    local gh = love.graphics.getHeight()
    local ghw = gw / 2
    local ghh = gh / 2
    local scale
    local rotation = math.rad(Config.rotation)
    local portraitrotation = Config.isPortraitRotation()
    if portraitrotation then
        wallpaper = love.graphics.newImage("data/wallpaper/tedbob-vert.png")
        if wallpaper then
            scale = math.max((gw / wallpaper:getHeight()), (gh / wallpaper:getWidth()))
        end
    else
        wallpaper = love.graphics.newImage("data/wallpaper/tedbob-hori.png")
        if wallpaper then
            scale = math.max((gw / wallpaper:getWidth()), (gh / wallpaper:getHeight()))
        end
    end
    if wallpaper then
        transform = love.math.newTransform(ghw, ghh, rotation, scale, scale, wallpaper:getWidth()/2, wallpaper:getHeight()/2)
    end
end

function Wallpaper.draw()
    if wallpaper then
        love.graphics.draw(wallpaper, transform)
    end
end

return Wallpaper