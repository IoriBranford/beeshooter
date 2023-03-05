local Audio     = require "System.Audio"
local Button    = require "Gui.Button"
local class     = require "pl.class"
local Config    = require "System.Config"

---@class Slider:Button
local Slider = class(Button)
Slider.ismenuitem = true

function Slider:init()
    Button.init(self)
    local valuestrings = {}
    self.valuestrings = valuestrings
    for i = 1, 16 do
        local valuestr = self["valuestr"..i]
        if not valuestr then
            break
        end
        valuestrings = valuestrings or {}
        valuestrings[i] = valuestr
    end
end

function Slider:setValue(value)
    self.value = value
    self:setString(tostring(value))
    self:doAction("valuechangeaction")
end

function Slider:changeValue(dir)
    if self.action == "bindInput" then
        return
    end
    dir = dir / math.abs(dir)
    local value = self.value
    local valuetype = type(value)
    if valuetype == "number" then
        local increment = self.increment
            or self.percent and 1/16
            or 1
        value = value + (increment * dir)
        local min = self.min
        local max = self.max
        if value > max then
            value = min
        elseif value < min then
            value = max
        end
    elseif valuetype == "boolean" then
        value = not value
    elseif valuetype == "string" then
        local newvalue
        for i = 1, #self.valuestrings do
            if value == self.valuestrings[i] then
                local j = i + dir
                if j > #self.valuestrings then
                    j = 1
                elseif j < 1 then
                    j = #self.valuestrings
                end
                newvalue = self.valuestrings[j]
                break
            end
        end
        if not newvalue then
            local valuestrdefault = self.valuestrdefault or 1
            newvalue = self.valuestrings[valuestrdefault]
        end
        if newvalue == "true" then newvalue = true end
        if newvalue == "false" then newvalue = false end
        value = newvalue or value
    end
    Audio.play(self.changesound)
    self:setValue(value)
end

function Slider:updateConfigValue()
    Config[self.configkey] = self.value
end

return Slider