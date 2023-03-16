---@class SceneObject
local SceneObject = {}
SceneObject.__index = SceneObject

local t_sort = table.sort

local temptransform = love.math.newTransform()

function SceneObject.__lt(a, b)
    local az = a.z or 0
    local bz = b.z or 0
    if az < bz then
        return true
    end
    if az == bz then
        local ay = a.y or 0
        local by = b.y or 0
        if ay < by then
            return true
        end
        if ay == by then
            local ax = a.x or 0
            local bx = b.x or 0
            return ax < bx
        end
    end
end

function SceneObject.setHidden(sceneobject, hidden)
    sceneobject.hidden = hidden
end

function SceneObject.setColor(sceneobject, red, green, blue, alpha)
    sceneobject.red = red
    sceneobject.green = green
    sceneobject.blue = blue
    if alpha then
        sceneobject.alpha = alpha
    end
end

function SceneObject.applyTransform(sceneobject)
    temptransform:setTransformation(
        (sceneobject.x),
        (sceneobject.y),
        sceneobject.r,
        sceneobject.sx, sceneobject.sy,
        sceneobject.ox, sceneobject.oy,
        sceneobject.kx, sceneobject.ky)
    love.graphics.applyTransform(temptransform)
end
local applyTransform = SceneObject.applyTransform

function SceneObject.drawLine(sceneobject)
    love.graphics.push()
    applyTransform(sceneobject)

    love.graphics.setColor(sceneobject.red, sceneobject.green, sceneobject.blue, sceneobject.alpha)
    love.graphics.setLineWidth(sceneobject.linewidth or 1)
    love.graphics.line(sceneobject.drawable)

    love.graphics.pop()
end

function SceneObject.drawPolygon(sceneobject)
    love.graphics.push()
    applyTransform(sceneobject)

    local r,g,b,a = sceneobject.red, sceneobject.green, sceneobject.blue, sceneobject.alpha
    love.graphics.setColor(r,g,b,a)
    local triangles = sceneobject.drawable
    for i = 6, #triangles, 6 do
        love.graphics.polygon("fill",
            triangles[i-5], triangles[i-4],
            triangles[i-3], triangles[i-2],
            triangles[i-1], triangles[i-0])
    end

    r,g,b,a = sceneobject.linered, sceneobject.linegreen, sceneobject.lineblue, sceneobject.linealpha
    if a then
        love.graphics.setColor(r,g,b,a)
        love.graphics.setLineWidth(sceneobject.linewidth or 1)
        love.graphics.polygon("line", sceneobject.points)
    end

    love.graphics.pop()
end

function SceneObject.drawRectangle(sceneobject)
    love.graphics.push()
    applyTransform(sceneobject)

    local r,g,b,a = sceneobject.red, sceneobject.green, sceneobject.blue, sceneobject.alpha
    love.graphics.setColor(r,g,b,a)
    love.graphics.rectangle("fill", 0, 0, sceneobject.w, sceneobject.h, sceneobject.roundcorners or 0)

    r,g,b,a = sceneobject.linered, sceneobject.linegreen, sceneobject.lineblue, sceneobject.linealpha
    if a then
        love.graphics.setColor(r,g,b,a)
        love.graphics.rectangle("line", 0, 0, sceneobject.w, sceneobject.h, sceneobject.roundcorners or 0)
    end

    love.graphics.pop()
end

function SceneObject.drawEllipse(sceneobject)
    love.graphics.push()
    applyTransform(sceneobject)

    local hw, hh = sceneobject.w/2, sceneobject.h/2

    local r,g,b,a = sceneobject.red, sceneobject.green, sceneobject.blue, sceneobject.alpha
    love.graphics.setColor(r,g,b,a)
    love.graphics.ellipse("fill", hw, hh, hw, hh)

    r,g,b,a = sceneobject.linered, sceneobject.linegreen, sceneobject.lineblue, sceneobject.linealpha
    if a then
        love.graphics.setColor(r,g,b,a)
        love.graphics.ellipse("line", hw, hh, hw, hh)
    end

    love.graphics.pop()
end

function SceneObject.drawQuad(sceneobject)
    love.graphics.setColor(sceneobject.red, sceneobject.green, sceneobject.blue, sceneobject.alpha)
    love.graphics.draw(sceneobject.drawable, sceneobject.quad,
        (sceneobject.x),
        (sceneobject.y),
        sceneobject.r,
        sceneobject.sx, sceneobject.sy,
        sceneobject.ox, sceneobject.oy,
        sceneobject.kx, sceneobject.ky)
end

function SceneObject.drawText(sceneobject)
    love.graphics.setColor(sceneobject.red, sceneobject.green, sceneobject.blue, sceneobject.alpha)
    local font = sceneobject.font or love.graphics.getFont()
    local str = sceneobject.string
    local x, y = sceneobject.x, sceneobject.y
    local w, h = sceneobject.w, sceneobject.h
    local _, lines = font:getWrap(str, w)
    local n = #lines
    local lineh = font:getHeight()
    local valign = sceneobject.valign
    if valign == "bottom" then
        y = y + h - lineh*n
    elseif valign == "center" then
        y = y + (h - lineh*n) / 2
    end
    for i = 1, n do
        love.graphics.printf(lines[i], font, x, y,
            sceneobject.w, sceneobject.halign,
            sceneobject.r,
            sceneobject.sx, sceneobject.sy,
            sceneobject.ox, sceneobject.oy,
            sceneobject.kx, sceneobject.ky)
        y = y + lineh
    end
end
local drawText = SceneObject.drawText

function SceneObject.drawGeneric(sceneobject)
    love.graphics.setColor(sceneobject.red, sceneobject.green, sceneobject.blue, sceneobject.alpha)
    love.graphics.draw(sceneobject.drawable,
        (sceneobject.x),
        (sceneobject.y),
        sceneobject.r,
        sceneobject.sx, sceneobject.sy,
        sceneobject.ox, sceneobject.oy,
        sceneobject.kx, sceneobject.ky)
end
local drawGeneric = SceneObject.drawGeneric

function SceneObject.drawArray(sceneobject)
    if sceneobject.predraw then
        sceneobject:predraw()
    end
    for _, child in ipairs(sceneobject) do
        child:draw()
    end
    if sceneobject.postdraw then
        sceneobject:postdraw()
    end
end
local drawArray = SceneObject.drawArray

function SceneObject.newArray(array)
    local so = SceneObject.new(drawArray)
    for i = 1, #array do
        so[i] = array[i]
    end
    return so
end

function SceneObject.drawStencil(sceneobject)
    local stencil = sceneobject.stencil or function() end
    if type(stencil) == "table" then
        stencil = function ()
            drawArray(sceneobject)
        end
    end
    local action = sceneobject.stencilaction
    local value = sceneobject.stencilvalue
    local keepvalues = sceneobject.stencilkeepvalues
    love.graphics.stencil(stencil, action, value, keepvalues)
end
local drawStencil = SceneObject.drawStencil

function SceneObject.newStencil(stencil, action, value, keepvalues)
    local so = SceneObject.new(drawStencil)
    so.stencil = stencil
    so.stencilaction = action
    so.stencilvalue = value
    so.stencilkeepvalues = keepvalues
    return so
end

function SceneObject.drawClear3b(sceneobject)
    love.graphics.clear(sceneobject.clearcolor, sceneobject.clearstencil, sceneobject.cleardepth)
end
local drawClear3b = SceneObject.drawClear3b

function SceneObject.newClear3b(clearcolor, clearstencil, cleardepth)
    local so = SceneObject.new(drawClear3b)
    so.clearcolor = clearcolor
    so.clearstencil = clearstencil
    so.cleardepth = cleardepth
    return so
end

function SceneObject.updateGeneric(sceneobject, unit, fixedfrac)
    local vx, vy, vz = unit.velx or 0, unit.vely or 0, unit.velz or 0
    local av = unit.avel or 0
    local x, y, z = unit.x, unit.y, unit.z
    local r = unit.rotation or 0
    sceneobject.x = x + vx * fixedfrac
    sceneobject.y = y + vy * fixedfrac
    sceneobject.z = z + vz * fixedfrac
    sceneobject.r = r + av * fixedfrac
end
local updateGeneric = SceneObject.updateGeneric

function SceneObject.new(draw, drawable, quad, w, h, x, y, z, r, sx, sy, ox, oy, kx, ky)
    local sceneobject = setmetatable({}, SceneObject)
    sceneobject.draw = draw
    sceneobject.drawable = drawable
    if type(drawable) == "string" then
        sceneobject.string = drawable
    elseif drawable and drawable.type then
        sceneobject[drawable:type():lower()] = drawable
    end
    sceneobject.quad = quad
    sceneobject.w = w or math.huge
    sceneobject.h = h or math.huge
    sceneobject.x = x or 0
    sceneobject.y = y or 0
    sceneobject.z = z or 0
    sceneobject.r = r or 0
    sceneobject.sx = sx or 1
    sceneobject.sy = sy or sx or 1
    sceneobject.ox = ox or 0
    sceneobject.oy = oy or 0
    sceneobject.kx = kx or 0
    sceneobject.ky = ky or 0
    sceneobject.hidden = nil
    sceneobject.red = sceneobject.red or 1
    sceneobject.green = sceneobject.green or 1
    sceneobject.blue = sceneobject.blue or 1
    sceneobject.alpha = sceneobject.alpha or 1
    sceneobject.updateFromUnit = updateGeneric
    return sceneobject
end

function SceneObject.newText(string, font, width, height, halign, valign, x, y, z, rotation, scalex, scaley, originx, originy, skewx, skewy)
    local text = SceneObject.new(drawText, string, nil, width, height, x, y, z, rotation, scalex, scaley, originx, originy, skewx, skewy)
    text.font = font
    text.halign = halign or "left"
    text.valign = valign or "top"
    return text
end

function SceneObject.setTextString(sceneobject, string)
    sceneobject.string = string
end

function SceneObject.newImage(image, x, y, z, r, sx, sy, ox, oy, kx, ky)
    return SceneObject.new(drawGeneric, image, nil, image:getWidth(), image:getHeight(), x, y, z, r, sx, sy, ox, oy, kx, ky)
end

function SceneObject.markRemove(sceneobject)
    sceneobject.z = math.huge
end

function SceneObject.sortAndPruneObjects(sceneobjects, sort)
    t_sort(sceneobjects, sort)
    for i = #sceneobjects, 1, -1 do
        local sceneobject = sceneobjects[i]
        if sceneobject.z < math.huge then
            break
        end
        sceneobjects[i] = nil
    end
end

require("System.SceneObject.Tiled")(SceneObject)
require("System.SceneObject.Aseprite")(SceneObject)
return SceneObject