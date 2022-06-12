local Config = require "System.Config"
--local Object = require "levity.object"
local Button = require "Gui.Button"

local HorizontalAxes = {
	[1] = true,
	leftx = true,
}
local VerticalAxes = {
	[2] = true,
	lefty = true,
}
local Triggers = {
	triggerleft = true,
	triggerright = true,
}

local Menu = {}
Menu.metatable = {
    __index = Menu
}

function Menu:start(scene)
	-- self.layer = layer
	-- self.objects = layer.objects
	-- self.cursorpos = nil
	-- self.joyaxes = {}
	-- self.bindinginputtype = nil
	-- local platform = love.system.getOS()
	-- for i = 1, #self.objects do
	-- 	local object = self.objects[i]
	-- 	local name = object.name or ""
	-- 	if name ~= "" then
	-- 		self.objects[name] = object
	-- 	end
	-- 	local platforms = object.properties.platforms or "all"
	-- 	if platforms ~= "all" and not platforms:find(platform) then
	-- 		object.visible = false
	-- 	end
	-- end
end

function Menu:setIfFirstMenu(firstmenu)
	-- if firstmenu and self.layer.name == firstmenu
	-- or not firstmenu and self.layer.visible then
	-- 	self:setVisible(true)
	-- 	return true
	-- else
	-- 	self:setVisible(false)
	-- end
end

function Menu:initQuery()
	-- if self.layer.visible then
	-- 	self:initCursor()
	-- end
end

function Menu:setVisible(visible)
	-- self.layer.visible = visible
	-- local hasinputtype
	-- for _, object in pairs(self.layer.objects) do
	-- 	self:send(object.id, "refreshValue")
	-- 	self:send(object.id, "refreshWarning")
	-- 	self:send(object.id, "initLock")
	-- 	hasinputtype = hasinputtype or object.properties.inputtype ~= nil
	-- end
	-- if self.bindinginputtype and not visible then
	-- 	self:cancelBindingInput()
	-- end
	-- local unbindinstructions = levity.map.layers["inputunbind_instructions"]
	-- if unbindinstructions then
	-- 	unbindinstructions.visible = hasinputtype and visible
	-- end
end

function Menu:initCursor()
	-- if not self.cursorpos
	-- or not self.objects[self.cursorpos]
	-- or not self:call(self.objects[self.cursorpos].id, "isPressable")
	-- then
	-- 	self:moveCursor(1, #self.objects + 1)
	-- end
end

function Menu:setMouseCursorMode(cursormode)
	-- love.mouse.setVisible(cursormode)
	-- love.mouse.setRelativeMode(not cursormode)
end

function Menu:startBindingInput(inputbindid, inputtype)
	-- self.inputbindid = inputbindid
	-- self.bindinginputtype = inputtype
	-- local instructions = levity.map.layers["inputbind_instructions"]
	-- if instructions then
	-- 	instructions.visible = true
	-- 	local instruction = instructions.objects[1]
	-- 	local textformat = instruction.properties.textformat
	-- 	if textformat then
	-- 		textformat = levity.prefs.string_gsub(textformat)
	-- 		instruction.text = textformat:format(inputtype)
	-- 	end
	-- 	local back = self.objects.back
	-- 	if back then
	-- 		back.visible = false
	-- 	end
	-- end
	-- local unbindinstructions = levity.map.layers["inputunbind_instructions"]
	-- if unbindinstructions then
	-- 	unbindinstructions.visible = false
	-- end
end

function Menu:isBindingInput()
	-- return self.bindinginputtype
end

function Menu:isBindingInputTo(optionid)
	-- return self.inputbindid and self.inputbindid == optionid
end

function Menu:bindInput(input)
	-- self:send(self.inputbindid, "set", input)
	-- self:send(self.inputbindid, "playChangeSound")
	-- self:stopBindingInput()
end

function Menu:cancelBindingInput()
	-- local inputbind = levity.map.objects[self.inputbindid]
	-- local input = inputbind and levity.prefs[inputbind.name]
	-- self:send(self.inputbindid, "set", input)
	-- self:stopBindingInput()
end

function Menu:stopBindingInput()
	-- self.bindinginputtype = nil
	-- self.inputbindid = nil
	-- local instructions = levity.map.layers["inputbind_instructions"]
	-- if instructions then
	-- 	instructions.visible = false
	-- end
	-- local back = self.objects.back
	-- if back then
	-- 	back.visible = true
	-- end
	-- local unbindinstructions = levity.map.layers["inputunbind_instructions"]
	-- if unbindinstructions then
	-- 	unbindinstructions.visible = true
	-- end
end

function Menu:mousemoved()
	-- if not self.layer.visible then
	-- 	return
	-- end
	-- self:setMouseCursorMode(true)
end

function Menu:joystickaxis(joystick, axis, value)
	-- local prevvalue = self.joyaxes[axis] or value >= 1 and 0
	-- self.joyaxes[axis] = value
	-- if not self.layer.visible then
	-- 	return
	-- end
	-- local deadzone = levity.prefs.joy_deadzone
	-- if self.bindinginputtype then
	-- 	if math.abs(value) > deadzone then
	-- 		axis = type(axis)=="number" and "axis"..axis or axis
	-- 		if self.bindinginputtype == "axis"
	-- 		or self.bindinginputtype == "button" and Triggers[axis] then
	-- 			self:bindInput(axis)
	-- 		end
	-- 	end
	-- 	return
	-- end
	-- self:setMouseCursorMode(false)
	-- if not prevvalue then
	-- 	return
	-- end
	-- if HorizontalAxes[axis] then
	-- 	if value < -deadzone and prevvalue >= -deadzone then
	-- 		self:changeCursorOption(-1)
	-- 	elseif value > deadzone and prevvalue <= deadzone then
	-- 		self:changeCursorOption(1)
	-- 	end
	-- elseif VerticalAxes[axis] then
	-- 	if value < -deadzone and prevvalue >= -deadzone then
	-- 		self:moveCursor(-1, 0)
	-- 	elseif value > deadzone and prevvalue <= deadzone then
	-- 		self:moveCursor(1, #self.objects + 1)
	-- 	end
	-- elseif Triggers[axis] then
	-- 	if value <= deadzone and prevvalue > deadzone then
	-- 		self:gamepadreleased(joystick, axis)
	-- 	elseif value > deadzone and prevvalue <= deadzone then
	-- 		self:gamepadpressed(joystick, axis)
	-- 	end
	-- end
end

Menu.gamepadaxis = Menu.joystickaxis

function Menu:joystickhat(joystick, hat, value)
	-- if not self.layer.visible then
	-- 	return
	-- end
	-- if self.bindinginputtype then
	-- 	if self.bindinginputtype == "axis"
	-- 	and value ~= "c" then
	-- 		hat = type(hat)=="number" and "hat"..hat or hat
	-- 		self:bindInput(hat)
	-- 	end
	-- 	return
	-- end

	-- if value:find("l") then
	-- 	self:changeCursorOption(-1)
	-- elseif value:find("r") then
	-- 	self:changeCursorOption(1)
	-- elseif value:find("u") then
	-- 	self:moveCursor(-1, 0)
	-- elseif value:find("d") then
	-- 	self:moveCursor(1, #self.objects + 1)
	-- end
end

local dpadhat = require("dpadhat")

function Menu:gamepadpressed(joystick, button)
	-- if not self.layer.visible then
	-- 	return
	-- end
	-- if button:find("^dp") then
	-- 	self:joystickhat(joystick, "dpad", dpadhat(joystick))
	-- elseif button == "back" then
	-- 	if self.bindinginputtype then
	-- 		self:cancelBindingInput()
	-- 	else
	-- 		self:send(levity.mapfile, "goBack")
	-- 	end
	-- else
	-- 	self:joystickpressed(joystick, button)
	-- end
end

function Menu:joystickpressed(joystick, button)
	-- if not self.layer.visible then
	-- 	return
	-- end
	-- if self.bindinginputtype then
	-- 	if self.bindinginputtype == "button" then
	-- 		self:bindInput(button)
	-- 	end
	-- 	return
	-- end
	-- self:setMouseCursorMode(false)
	-- self.actionholdtimestart = self:startCursorActionHold()
	-- if not self.actionholdtimestart then
	-- 	self:activateCursorButton()
	-- end
end

function Menu:joystickreleased(joystick, button)
	-- local actionholdtimestart = self.actionholdtimestart
	-- if not self:stopCursorActionHold() and actionholdtimestart then
	-- 	self:activateCursorButton()
	-- end
end
Menu.gamepadreleased = Menu.joystickreleased

function Menu:keypressed(key)
	-- if not self.layer.visible then
	-- 	return
	-- end
	-- if self.bindinginputtype then
	-- 	return
	-- end
	-- self:setMouseCursorMode(false)
	-- local button = self.objects[self.cursorpos]
	-- if key == Config.key_pausemenu then
	-- 	self:send(levity.mapfile, "goBack")
	-- elseif key == "delete" and button and button.properties.inputtype then
	-- 	self:send(button.id, "set", "none")
	-- elseif key == Config.key_up or key == "up" then
	-- 	self:moveCursor(-1, 0)
	-- elseif key == Config.key_down or key == "down" then
	-- 	self:moveCursor(1, #self.objects + 1)
	-- elseif key == Config.key_left or key == "left" then
	-- 	self:showChangingCursorOption(-1)
	-- elseif key == Config.key_right or key == "right" then
	-- 	self:showChangingCursorOption(1)
	-- elseif key == Config.key_fire or key == "return" then
	-- 	self.isactivatekeypressed = true
	-- 	self.actionholdtimestart = self:startCursorActionHold()
	-- end
end

function Menu:keyreleased(key)
	-- if not self.layer.visible then
	-- 	return
	-- end
	-- if self.bindinginputtype then
	-- 	if key == Config.key_pausemenu then
	-- 		self:cancelBindingInput()
	-- 	elseif self.bindinginputtype == "key" then
	-- 		self:bindInput(key)
	-- 	end
	-- 	return
	-- end
	-- if key == Config.key_left or key == "left" then
	-- 	self:changeCursorOption(-1)
	-- 	self:showChangingCursorOption(0)
	-- elseif key == Config.key_right or key == "right" then
	-- 	self:changeCursorOption(1)
	-- 	self:showChangingCursorOption(0)
	-- elseif key == Config.key_fire or key == "return" then
	-- 	if self.isactivatekeypressed then
	-- 		if not self:stopCursorActionHold() then
	-- 			self:activateCursorButton()
	-- 		end
	-- 	end
	-- 	self.isactivatekeypressed = false
	-- end
end

function Menu:setHoldMessageVisible(actionholdtime)
	-- local holdmessage = self.objects.holdmessage
	-- if holdmessage then
	-- 	holdmessage.visible = actionholdtime > 0
	-- end
end

function Menu:setCursorButton(buttonid)
	-- for i = 1, #self.objects do
	-- 	local object = self.objects[i]
	-- 	if object.id == buttonid then
	-- 		self.cursorpos = i
	-- 		self:setHoldMessageVisible(object.properties.actionholdtime or 0)
	-- 		break
	-- 	end
	-- end
end

function Menu:moveCursor(dir, limit)
	-- dir = dir / math.abs(dir)

	-- local cursorpos = self.cursorpos or limit - dir

	-- local i = 0
	-- local newcursorobject, isbutton
	-- repeat
	-- 	cursorpos = cursorpos + dir
	-- 	if cursorpos == limit then
	-- 		cursorpos = cursorpos - #self.objects*dir
	-- 	end
	-- 	newcursorobject = self.objects[cursorpos]
	-- 	isbutton = newcursorobject and
	-- 		self:call(newcursorobject.id, "isPressable")
	-- 	i = i + 1
	-- until cursorpos == self.cursorpos or isbutton or i > #self.objects

	-- if newcursorobject then
	-- 	self.isactivatekeypressed = false
	-- 	self:stopCursorActionHold()
	-- 	local oldcursorobject = self.objects[self.cursorpos]
	-- 	if oldcursorobject then
	-- 		self:send(oldcursorobject.id, "unpress")
	-- 	end
	-- 	if self.cursorpos and self.cursorpos ~= cursorpos then
	-- 		self:send(newcursorobject.id, "playPressSound")
	-- 	end
	-- 	self:setHoldMessageVisible(newcursorobject.properties.actionholdtime or 0)
	-- 	self:send(newcursorobject.id, "press")
	-- end
	-- self.cursorpos = cursorpos
end

function Menu:activateCursorButton()
	-- local button = self.objects[self.cursorpos]
	-- local _ = button and self:send(button.id, "activate")
end

function Menu:startCursorActionHold()
	-- local button = self.objects[self.cursorpos]
	-- return button and self:call(button.id, "startActionHold")
end

function Menu:stopCursorActionHold()
	-- self.actionholdtimestart = nil
	-- local button = self.objects[self.cursorpos]
	-- return button and self:call(button.id, "stopActionHold")
end

function Menu:showChangingCursorOption(dir)
	-- local button = self.objects[self.cursorpos]
	-- local _ = button and self:send(button.id, "showChanging", dir)
end

function Menu:changeCursorOption(dir)
	-- local button = self.objects[self.cursorpos]
	-- local _ = button and self:send(button.id, "change", dir)
end

function Menu:drawOver()
	-- local button = self.objects[self.cursorpos]
	-- local _ = button and self:send(button.id, "drawPressedOutline")
end

return Menu
