local require = require
local type = type
local assert = assert
local co_create = coroutine.create
local co_resume = coroutine.resume
local co_status = coroutine.status

local Script = {}

function Script:isRunning()
    return self.thread ~= nil
end

function Script:stop()
    self.thread = nil
end
local stop = Script.stop

local start

function Script:run()
    local thread = self.thread
    if thread then
        local ok, nextaction = co_resume(thread, self)
        assert(ok, nextaction)
        if nextaction then
            start(self, nextaction)
        elseif co_status(thread) == "dead" then
            stop(self)
        end
    end
end
local run = Script.run

function Script:start(action)
    if type(action) ~= "function" then
        local script = self.script
        action = script and script[action]
    end
    if action then
        self.thread = co_create(action)
        run(self)
    end
end
start = Script.start

function Script:load(requirestring)
    self.script = requirestring and require(requirestring)
end

function Script:unload()
    stop(self)
    self.script = nil
end

return Script