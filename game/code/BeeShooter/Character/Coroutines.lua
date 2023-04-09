
local co_create = coroutine.create
local co_resume = coroutine.resume
local co_status = coroutine.status

---@class Coroutines
local Coroutines = class()

function Coroutines:_init(user)
    self.user = user
end

function Coroutines:add(f)
    if type(f) ~= "function" then
        f = self.user[f]
    end
    self[#self+1] = type(f) == "function" and co_create(f)
end

function Coroutines:startNext()
    local next = self.next
    if next then
        self.next = nil
        self:clear()
        if type(next) == "string" then
            for f in next:gmatch("%S+") do
                self:add(f)
            end
        elseif type(next) == "table" then
            for _, f in ipairs(next) do
                self:add(f)
            end
        elseif type(next) == "function" then
            self:add(next)
        end
    end
end

function Coroutines:run()
    local user = self.user
    for i, co in ipairs(self) do
        if co then
            local ok, err = co_resume(co, user)
            if not ok then
                error(debug.traceback(err))
            elseif co_status(co) == "dead" then
                self[i] = false
            end
        end
    end
    for i = #self, 1, -1 do
        if self[i] ~= false then
            break
        end
        self[i] = nil
    end
end

function Coroutines:setNext(funcs)
    self.next = funcs
end

function Coroutines:clear()
    for i = #self, 1, -1 do
        self[i] = nil
    end
end

return Coroutines