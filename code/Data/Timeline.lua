local Timeline = {}
Timeline.__index = Timeline

function Timeline.new()
    return setmetatable({
        time = 0,
        eventindex = 1,
        events = {}
    }, Timeline)
end

function Timeline:addEvent(time, func, ...)
    assert(type(func) == "function")
    local event = {
        ...
    }
    event.time = time
    event.func = func
    local events = self.events
    events[#events + 1] = event
end

local function compare(a, b)
    return a.time < b.time
end

function Timeline:sort()
    table.sort(self.events, compare)
end

function Timeline:advance(dtime)
    local time = self.time + dtime
    local events = self.events
    local eventindex = self.eventindex
    local event = events[eventindex]
    while event and time >= event.time do
        local a, b = event.func(unpack(event))
        if not a and b then
            print(b)
        end
        eventindex = eventindex + 1
        event = events[eventindex]
    end
    self.time = time
    self.eventindex = eventindex
end

function Timeline:skipTo(time)
    local events = self.events
    local eventindex = self.eventindex
    local event = events[eventindex]
    while event and time > event.time do
        eventindex = eventindex + 1
        event = events[eventindex]
    end
    self.time = time
    self.eventindex = eventindex
end

return Timeline
