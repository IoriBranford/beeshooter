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

---Precalc data for one-dimensional path progress
function Path.calcLengths(path)
    local startslengths = path.startslengths
    if startslengths then
        return
    end
    startslengths = {}
    local points = path.points
    local x, y = points[1], points[2]
    local totallength = 0;
    for i = 2, #points-2, 2 do
        local x2, y2 = points[i+1], points[i+2]
        local seglength = math.dist(x, y, x2, y2)
        startslengths[i-1] = totallength
        startslengths[i] = seglength
        x, y = x2, y2
        totallength = totallength+seglength
        print(i, totallength, seglength)
    end
    startslengths[#points-1] = totallength
    startslengths[#points] = 0
    path.startslengths = startslengths
    path.totallength = totallength
end

function Path.clampIndex(path, i)
    if i < 2 then
        return 2
    end
    if i > #path.points then
        return #path.points
    end
    return i
end

function Path.clampPosition1d(path, pos)
    if pos < 0 then
        return 0
    end
    if pos > path.totallength then
        return path.totallength
    end
    return pos
end

function Path.updatePosition1d(path, i, pos, speed)
    i = Path.clampIndex(path, i)
    pos = pos + speed
    pos = Path.clampPosition1d(path, pos)
    local points = path.points
    local startslengths = path.startslengths

    if speed > 0 then
        while i <= #points do
            local segstart = startslengths[i-1]
            local seglength = startslengths[i]
            if pos >= segstart + seglength then
                i = i + 2
            else
                break
            end
        end
    elseif speed < 0 then
        while i >= 2 do
            local segstart = startslengths[i-1]
            if pos <= segstart then
                i = i - 2
            else
                break
            end
        end
    end
    return i, pos
end

function Path.getPosition2d(path, i, pos)
    i = Path.clampIndex(path, i)
    pos = Path.clampPosition1d(path, pos)
    local points = path.points
    local startslengths = path.startslengths
    local segx1, segy1 = points[i-1], points[i]
    local segstart, seglength = startslengths[i-1], startslengths[i]
    if seglength <= 0 then
        return segx1, segy1
    end
    local segx2, segy2 = points[i+1] or segx1, points[i+2] or segy1
    local segdx, segdy = segx2 - segx1, segy2 - segy1
    local segpos = pos - segstart
    local dirx, diry = segdx / seglength, segdy / seglength
    return segx1 + segpos*dirx, segy1 + segpos*diry
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