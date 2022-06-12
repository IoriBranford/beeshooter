local Grid = {}
Grid.__index = Grid

function Grid.new(width, height, cellwidth, cellheight, margin)
    margin = margin or 0
    width = width + 2*margin
    height = height + 2*margin
    local grid = {
        cellwidth = cellwidth or 1,
        cellheight = cellheight or 1,
        width = width,
        height = height,
        margin = margin
    }
    setmetatable(grid, Grid)
    return grid
end

function Grid.setmetatable(grid)
    return setmetatable(grid, Grid)
end

function Grid:inBounds(column, row)
    -- local margin = self.margin
    -- column = column + margin
    -- row = row + margin
    if column < 1 then return end
    if row < 1 then return end
    if column > self.width then return end
    if row > self.height then return end
    return true
end

function Grid:positionInBounds(x, y)
    return self:inBounds(self:cellAt(x, y))
end

function Grid:toCell(i)
    local margin = self.margin
    local width = self.width
    i = i - 1
    margin = margin - 1
    return (i % width) - margin, math.floor(i / width) - margin
end

function Grid:toIndex(column, row)
    local margin = self.margin
    row = row + margin - 1
    column = column + margin
    return row*self.width + column
end

function Grid:getWidth()
    return self.width - 2*self.margin
end

function Grid:getHeight()
    return self.height - 2*self.margin
end

function Grid:get(column, row)
    return self:inBounds(column, row) and self[self:toIndex(column, row)]
end

function Grid:cellAt(x, y)
    return math.ceil(x / self.cellwidth), math.ceil(y / self.cellheight)
end

function Grid:cellCenter(c, r)
    return (c - .5) * self.cellwidth, (r - .5) * self.cellheight
end

function Grid:cellsTouchingRect(rectx, recty, rectw, recth)
    local c1, r1 = self:cellAt(rectx, recty)
    local c2, r2 = self:cellAt(rectx + rectw, recty + recth)
    local c, r = c1, r1
    return function()
        if r > r2 then
            return
        end
        local v = self:get(c, r)
        local vc, vr = c, r
        c = c + 1
        if c > c2 then
            c = c1
            r = r + 1
        end
        return vc, vr, v
    end
end

function Grid:getAtPosition(x, y)
    local c, r = self:cellAt(x, y)
    return self:get(c, r)
end

function Grid:set(column, row, value)
    if self:inBounds(column, row) then
        self[self:toIndex(column, row)] = value
    end
end

function Grid:fill(value)
    for i = 1, self.width*self.height do
        self[i] = value
    end
end

function Grid:fillRect(x, y, width, height, value)
    local c1, r1 = self:cellAt(x, y)
    local c2, r2 = self:cellAt(x+width, y+height)
    local margin = self.margin
    local cmin = 1-margin
    local cmax = self.width-margin
    local rmin = 1-margin
    local rmax = self.height-margin
    if c1 < cmin then c1 = cmin end
    if c2 > cmax then c2 = cmax end
    if r1 < rmin then r1 = rmin end
    if r2 > rmax then r2 = rmax end
    for r = r1, r2 do
        local i = self:toIndex(c1, r)
        for c = c1, c2 do
            self[i] = value
            i = i + 1
        end
    end
end

function Grid:draw(x, y)
    local cellwidth = self.cellwidth
    local cellheight = self.cellheight
    local width = self.width
    local height = self.height
    local margin = self.margin

    x = (x or 0) - margin*cellwidth
    y = (y or 0) - margin*cellheight
    local x1 = x
    local i = 1
    for r = 1, height do
        for c = 1, width do
            local data = self[i]
            if data then
                love.graphics.printf(tostring(data), x, y, cellwidth)
            end
            i = i + 1
            x = x + cellwidth
        end
        x = x1
        y = y + cellheight
    end
end

return Grid