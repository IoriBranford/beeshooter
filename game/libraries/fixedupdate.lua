local modf = math.modf
local min = math.min

local function fixedupdate(fps, maxf, t, dt, f, ...)
    local n
    n, t = modf(t + dt*fps)
    for _ = 1, min(n, maxf) do
        f(...)
    end
    return t, n
end

return fixedupdate