local Button = {}
Button.metatable = {
    __index = Button
}

-- function Button:start(scene)
-- 	self.object = object
-- 	self.pressed = false
-- 	self.properties = object.properties

-- 	self:initLock()
-- end

-- function Button:initLock()
-- 	local cond = self.properties.lockcondition or self.properties.action
-- 	local initLock = cond and Button["initLock_"..cond]
-- 	if initLock then
-- 		initLock(self)
-- 	end
-- end

-- function Button:refreshWarning()
-- 	local warningcondition = self.properties.warningcondition
-- 	warningcondition = self[warningcondition]
-- 	local warningarg1 = self.properties.warningarg1
-- 	local iswarning = self:isVisible()
-- 		and type(warningcondition)=="function"
-- 		and warningcondition(self, warningarg1)

-- 	local warninglayer = self.properties.warninglayer or self.object.name.."_warning"
-- 	warninglayer = levity.map.layers[warninglayer]
-- 	if warninglayer then
-- 		warninglayer.visible = iswarning
-- 	end
-- 	local warningexplanationlayer = self.properties.warningexplanationlayer
-- 	warningexplanationlayer = levity.map.layers[warningexplanationlayer]
-- 	if warningexplanationlayer then
-- 		warningexplanationlayer.visible = iswarning
-- 			or self.object.layer.visible and warningexplanationlayer.visible
-- 				and not self:call(self.object.layer.name, "isBindingInput")
-- 	end
-- end

-- function Button:buttonNeedsSetting(buttonpref)
-- 	if self.object.name == buttonpref
-- 	and self:call(self.object.layer.name, "isBindingInputTo", self.object.id) then
-- 		return
-- 	end
-- 	local button = levity.prefs[buttonpref]
-- 	local isgamepad = type(button)=="string"
-- 	local joysticks = love.joystick.getJoysticks()
-- 	for i, joystick in ipairs(joysticks) do
-- 		if isgamepad == joystick:isGamepad() then
-- 			return
-- 		end
-- 	end
-- 	return #joysticks > 0
-- end

-- function Button:anyButtonNeedsSetting()
-- 	return self:buttonNeedsSetting("joy_fire")
-- 	or self:buttonNeedsSetting("joy_focus")
-- 	or self:buttonNeedsSetting("joy_bomb")
-- 	or self:buttonNeedsSetting("joy_pausemenu")
-- end

-- function Button:isVisible()
-- 	return self.object.visible and self.object.layer.visible
-- end

-- function Button:isPressable()
-- 	return self:isVisible() and not self.locked
-- end

-- function Button:mousepressed(x, y, button)
-- 	if button == 1 then
-- 		self:touchpressed(nil, x, y)
-- 	end
-- end

-- function Button:mousemoved(x, y, dx, dy)
-- 	if love.mouse.isDown(1) then
-- 		self:touchmoved(nil, x, y, dx, dy)
-- 	end
-- end

-- function Button:mousereleased(x, y, button)
-- 	if button == 1 then
-- 		self:touchreleased(nil, x, y)
-- 	end
-- end

-- function Button:playPressSound()
-- 	local presssound = self.properties.presssound
-- 	if presssound then
-- 		levity.bank:play(presssound)
-- 	end
-- end

-- function Button:touchpressed(touch, x, y, dx, dy, pressure)
-- 	if self:isPressable() then
-- 		x, y = levity:screenToCamera(x, y)
-- 		if math.rectsisect(x, y, 0, 0, self.object.x, self.object.y,
-- 			self.object.width, self.object.height)
-- 		then
-- 			self:playPressSound()
-- 			self:press()
-- 			self:call(self.object.layer.name,
-- 				"setCursorButton", self.object.id)
-- 			self:startActionHold()
-- 		else
-- 			self:unpress()
-- 		end
-- 	end
-- end

-- function Button:touchmoved(touch, x, y, dx, dy, pressure)
-- 	if self:isPressable() then
-- 		x, y = levity:screenToCamera(x, y)
-- 		self.pressed = math.rectsisect(x, y, 0, 0,
-- 			self.object.x, self.object.y,
-- 			self.object.width, self.object.height)
-- 		if not self.pressed then
-- 			self:stopActionHold()
-- 		end
-- 	end
-- end

-- function Button:touchreleased(touch, x, y, dx, dy, pressure)
-- 	if self:isPressable() then
-- 		x, y = levity:screenToCamera(x, y)
-- 		if math.rectsisect(x, y, 0, 0, self.object.x, self.object.y,
-- 			self.object.width, self.object.height)
-- 		then
-- 			self.pressed = false
-- 			if not self:stopActionHold() then
-- 				self:activate()
-- 			end
-- 		end
-- 	end
-- end

-- function Button:setLock(locked)
-- 	self.locked = locked
-- end

-- function Button:press()
-- 	self.pressed = true
-- 	local settextobject = self.properties.settextobject
-- 	settextobject = levity.map.objects[settextobject]
-- 	local settextstring = self.properties.settextstring
-- 	if settextobject then
-- 		settextobject.text = settextstring
-- 	end
-- end

-- function Button:unpress()
-- 	self.pressed = false
-- 	self.actionholdtimestart = nil
-- end

-- function Button:startActionHold()
-- 	local actionholdtime = self.properties.actionholdtime or 0
-- 	if actionholdtime > 0 then
-- 		self.actionholdtimestart = love.timer.getTime()
-- 		return self.actionholdtimestart
-- 	end
-- end

-- function Button:stopActionHold()
-- 	local holdtimestart = self.actionholdtimestart
-- 	local actionholdtime = self.properties.actionholdtime or 0
-- 	self.actionholdtimestart = nil
-- 	return holdtimestart and love.timer.getTime() - holdtimestart < actionholdtime
-- end

-- function Button:activate()
-- 	levity.bank:play(self.properties.actionsound)
-- 	local action = self.properties.action
-- 	action = action and self[action]
-- 	if action then
-- 		action(self)
-- 	end
-- end

-- function Button:beginDraw()
-- 	local x, y, w, h = self.object.x, self.object.y,
-- 				self.object.width, self.object.height
-- 	local fillwidth = self.properties.fillwidth or w
-- 	local actionholdtime = self.properties.actionholdtime or 0
-- 	local timestart = self.actionholdtimestart
-- 	if timestart then
-- 		local heldtime = love.timer.getTime() - timestart
-- 		fillwidth = w * math.min(1, heldtime / actionholdtime)
-- 	elseif actionholdtime > 0 then
-- 		fillwidth = 0
-- 	end

-- 	local roundx = self.properties.roundx or 0
-- 	local roundy = self.properties.roundy or roundx
-- 	if self.locked then
-- 		for i = 1, 4 do
-- 			self.object.color[i] = .5
-- 		end
-- 		levity.setColorARGB(self.properties.lockedfillcolor or "#80202020")
-- 		love.graphics.rectangle("fill", x, y, w, h, roundx, roundy)
-- 	else
-- 		for i = 1, 4 do
-- 			self.object.color[i] = 1
-- 		end
-- 		if not self.pressed or fillwidth < w then
-- 			levity.setColorARGB(self.properties.fillcolor or "#80292042")
-- 			love.graphics.rectangle("fill", x, y, w, h, roundx, roundy)
-- 		end
-- 		if self.pressed and fillwidth > 0 then
-- 			levity.setColorARGB(self.properties.pressfillcolor or "#807359a5")
-- 			love.graphics.rectangle("fill", x, y, fillwidth, h, roundx, roundy)
-- 		end
-- 		levity.setColorARGB(self.properties.linecolor or "#ff523c84")
-- 		love.graphics.rectangle("line", x+.5, y+.5, w, h, roundx, roundy)
-- 	end

-- 	love.graphics.setColor(1, 1, 1, 1)
-- end

-- function Button:drawPressedOutline()
-- 	local x, y, w, h = self.object.x, self.object.y,
-- 				self.object.width, self.object.height
-- 	local pulse = math.floor(10 * love.timer.getTime()) % 2 == 0
-- 	local dxy = pulse and -1 or 0
-- 	local dwh = -2*dxy
-- 	x, y = x + dxy, y + dxy
-- 	w, h = w + dwh, h + dwh
-- 	local roundx = self.properties.roundx or 0
-- 	local roundy = self.properties.roundy or roundx

-- 	local color = pulse and "#ffffffff" or self.properties.presslinecolor or "#ffa478ff"
-- 	levity.setColorARGB(color)
-- 	love.graphics.rectangle("line", x+.5, y+.5, w, h, roundx-dxy, roundy-dxy)
-- 	love.graphics.setColor(1, 1, 1, 1)
-- end


-- function Button:joystickadded(joystick)
-- 	self:initLock()
-- 	self:refreshWarning()
-- end
-- Button.joystickremoved = Button.joystickadded

return Button
