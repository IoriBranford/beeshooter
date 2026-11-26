---@class Stats
---@field [string] number
local Stats = class()

function Stats:_init(stats)
    for k,v in pairs(stats) do
        if not self[k] then
            self[#self+1] = k
            self[k] = v
        end
    end
    table.sort(self, function(a, b)
        return self[a] < self[b]
    end)
end

function Stats:inc(stat, delta)
    local n = self[stat]
    if n then self[stat] = n + (delta or 1) end
end

function Stats:print(stat)
    local n = stat and self[stat]
    if n then
        print(stat, n)
    else
        for _, k in ipairs(self) do
            print(k, self[k])
        end
    end
end

return Stats