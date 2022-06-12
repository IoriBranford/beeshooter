local min = math.min
local max = math.max
local cos = math.cos
local sin = math.sin
local rad = math.rad
local sqrt = math.sqrt

function math.clamp(x, a, b)
    return max(a, min(x, b))
end

function math.dot(x, y, x2, y2)
    return x2*x + y2*y
end

function math.det(x, y, x2, y2)
    return x*y2 - y*x2
end

function math.lensq(x, y)
    return x*x+y*y
end
local lensq = math.lensq

function math.distsq(x1, y1, x2, y2)
    local dx, dy = x2-x1, y2-y1
    return dx*dx + dy*dy
end

function math.dist(x1, y1, x2, y2)
    local dx, dy = x2-x1, y2-y1
    return sqrt(dx*dx + dy*dy)
end

function math.len(x, y)
    return sqrt(x*x + y*y)
end

function math.norm(x, y)
    local len = sqrt(x*x + y*y)
    return x/len, y/len
end

function math.mid(x1, y1, x2, y2)
    return x1 + (x2 - x1)/2, y1 + (y2 - y1)/2
end

function math.rot(x, y, a)
    local cosa, sina = cos(a), sin(a)
    return x*cosa - y*sina, y*cosa + x*sina
end

function math.testrects(ax, ay, aw, ah, bx, by, bw, bh)
    if ax + aw < bx then return false end
    if bx + bw < ax then return false end
    if ay + ah < by then return false end
    if by + bh < ay then return false end
    return true
end

function math.testcircles(ax, ay, ar, bx, by, br)
    local dx, dy = ax - bx, ay - by
    local distsq = lensq(dx, dy)
    local radii = ar + br
    local radiisq = radii * radii
    return distsq <= radiisq and distsq
end

function math.table_rad(t, k)
    local x = t[k]
    if type(x) == "number" then
        t[k] = rad(x)
    end
end