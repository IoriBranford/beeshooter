local SceneAseprite = {}

local new

function SceneAseprite.setAsepriteAnimation(sceneobject, aseprite, tag, tagframe, onend)
    tagframe = tagframe or 1
    aseprite = aseprite or sceneobject.aseprite
    sceneobject.aseprite = aseprite
    sceneobject.animation = tag
    sceneobject.animationframe = tagframe
    sceneobject.animationtime = 0
    sceneobject.onanimationend = onend
    sceneobject.asepriteframe = aseprite:getAnimationFrame(tag, tagframe)
end
local setAsepriteAnimation = SceneAseprite.setAsepriteAnimation

function SceneAseprite.changeAsepriteAnimation(sceneobject, tag, tagframe, onend)
    if tag ~= sceneobject.animation then
        setAsepriteAnimation(sceneobject, sceneobject.aseprite, tag, tagframe, onend)
    end
end

function SceneAseprite.animateAseprite(sceneobject, dt)
    local animation = sceneobject.animation
    if animation then
        local aframe = sceneobject.animationframe
        local atime = sceneobject.animationtime
        local aseprite = sceneobject.aseprite
        aframe, atime = aseprite:getAnimationUpdate(animation, aframe, atime, dt, sceneobject.onanimationend)
        sceneobject.animationframe = aframe
        sceneobject.animationtime = atime
        sceneobject.asepriteframe = aseprite:getAnimationFrame(animation, aframe)
    end
end
local animateAseprite = SceneAseprite.animateAseprite

function SceneAseprite.drawAseprite(sceneobject)
    love.graphics.setColor(sceneobject.red, sceneobject.green, sceneobject.blue, sceneobject.alpha)
    sceneobject.aseprite:drawFrame(sceneobject.asepriteframe,
        (sceneobject.x),
        (sceneobject.y),
        sceneobject.r,
        sceneobject.sx, sceneobject.sy,
        sceneobject.ox, sceneobject.oy,
        sceneobject.kx, sceneobject.ky)
end
local drawAseprite = SceneAseprite.drawAseprite

function SceneAseprite.setAseprite(sceneobject, aseprite, frame)
    sceneobject.aseprite = aseprite
    sceneobject.asepriteframe = frame or 1
end
local setAseprite = SceneAseprite.setAseprite

function SceneAseprite.newAseprite(aseprite, frame, x, y, z, r, sx, sy, ox, oy, kx, ky)
    local sceneobject = new(drawAseprite, nil, nil, aseprite.width, aseprite.height,
                                        x, y, z, r, sx, sy, ox, oy, kx, ky)
    sceneobject.animate = animateAseprite
    setAseprite(sceneobject, aseprite, frame)
    return sceneobject
end

function SceneAseprite.newAnimatedAseprite(aseprite, tag, tagframe, x, y, z, r, sx, sy, ox, oy, kx, ky)
    local sceneobject = new(drawAseprite, nil, nil, aseprite.width, aseprite.height,
                                        x, y, z, r, sx, sy, ox, oy, kx, ky)
    sceneobject.animate = animateAseprite
    setAsepriteAnimation(sceneobject, aseprite, tag, tagframe)
    return sceneobject
end

return function(SceneObject)
    new = SceneObject.new
    for k,v in pairs(SceneAseprite) do
        SceneObject[k] = v
    end
    SceneAseprite = SceneObject
end