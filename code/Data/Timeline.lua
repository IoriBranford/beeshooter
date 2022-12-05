local Timeline = {}
Timeline.__index = Timeline

function Timeline.new()
    ---@class Timeline
    return setmetatable({
        time = 0,
        eventindex = 1,
    }, Timeline)
end

function Timeline:addEvent(time, func, ...)
    assert(type(func) == "function")
    local event = {
        ...
    }
    event.time = time
    event.func = func
    self[#self + 1] = event
end

local function compare(a, b)
    return a.time < b.time
end

function Timeline:sort()
    table.sort(self, compare)
end

function Timeline:advance(dtime)
    local time = self.time + dtime
    local eventindex = self.eventindex
    local event = self[eventindex]
    while event and time >= event.time do
        local a, b = event.func(unpack(event))
        if not a and b then
            print(b)
        end
        eventindex = eventindex + 1
        event = self[eventindex]
    end
    self.time = time
    self.eventindex = eventindex
end

function Timeline:skipTo(time)
    local eventindex = self.eventindex
    local event = self[eventindex]
    while event and time > event.time do
        eventindex = eventindex + 1
        event = self[eventindex]
    end
    self.time = time
    self.eventindex = eventindex
end

return Timeline
