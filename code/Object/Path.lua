---@class Path
local Path = {}

function Path.getWorldPoint(path, i)
    if not path or not i then
        return
    end
	local points = path.points
    if i < 2 then
        i = 2
    elseif i > #points then
        i = #points
    end
    local dx = points[i-1]
    local dy = points[i]
    return path.x + dx, path.y + dy
end

function Path.getNextIndex(path, i, di)
    if not i then return end

    di = di or 1
    i = i + 2*di
    if path then
        local points = path.points
        if path.shape == "polygon" then
            if i > #points then
                i = 2
            elseif i < 2 then
                i = #points
            end
        end
    end
    return i
end

function Path.getSegmentLengthSq(path, endi)
    if endi < 4 or endi > #path then
        return 0
    end
    return math.distsq(path[endi-3], path[endi-2], path[endi-1], path[endi])
end

function Path.getPathPointDistSq(path, i, x, y)
    local px, py = Path.getWorldPoint(path, i)
    return math.distsq(x, y, px, py)
end

function Path.addPointData(path, pointdata)
    local pointsdata
    local points = path.points
    local x, y = pointdata.x, pointdata.y
    for i = 2, #points, 2 do
        if points[i-1] == x and points[i] == y then
            pointsdata = path.pointsdata or {}
            path.pointsdata = pointsdata
            pointsdata[i-1] = pointdata
            pointsdata[i] = pointdata
            return true
        end
    end
end

function Path.getPointData(path, i)
    return path.pointsdata and path.pointsdata[i]
end

function Path.draw(path)
    local points = path.points
    local x, y = path.x, path.y
    for i = 2, #points-2, 2 do
        local x1 = x + points[i-1]
        local y1 = y + points[i-0]
        local x2 = x + points[i+1]
        local y2 = y + points[i+2]
        love.graphics.line(x1, y1, x2, y2)
        love.graphics.rectangle("fill", x1-1.5, y1-1.5, 3, 3)
    end
    local lastx = x + points[#points-1]
    local lasty = y + points[#points-0]
    love.graphics.rectangle("fill", lastx-1.5, lasty-1.5, 3, 3)
end

return Path