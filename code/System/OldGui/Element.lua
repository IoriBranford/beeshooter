local Element = {}
Element.__index = Element

function Element.init(self)
    setmetatable(self, Element)
    return Element
end

function Element:addToScene(scene)
    if self.type == "tilelayer" then
        self.sceneobject = scene:addTileLayer(self)
    elseif self.type == "imagelayer" then
        self.sceneobject = scene:addImageLayer(self)
    elseif self.type == "objectgroup" then
        -- objects added in Gui.init
    elseif self.type == "group" then
        -- sublayers added in Gui.init
    else
        self.sceneobject = scene:addObject(self)
    end
end

function Element:setHidden(hidden)
    if #self > 0 then
        for i, child in ipairs(self) do
            child:setHidden(hidden)
        end
    end
    local sceneobject = self.sceneobject
    if not sceneobject then
        return
    end
    if #sceneobject > 0 then
        for i, so in ipairs(sceneobject) do
            so:setHidden(hidden)
        end
    end
    if sceneobject.setHidden then
        sceneobject:setHidden(hidden)
    end
end

function Element:showOnlyChildrenNamed(visiblechildren)
    for i, object in ipairs(self) do
        object:setHidden(not visiblechildren[object.name])
    end
end

function Element:setTextString(...)
	self.sceneobject:setTextString(...)
end

function Element:changeTile(...)
	self.sceneobject:changeTile(...)
end

return Element