---@class Grid
local Grid = {}
Grid.__index = Grid

local floor, ceil = math.floor, math.ceil
local abs = math.abs
local distsq =  math.distsq
local dist = math.dist
local sqrt2 = math.sqrt(2)

---@return Grid
function Grid.new(width, height, cellwidth, cellheight, margin)
    margin = margin or 0
    width = width + 2*margin
    height = height + 2*margin

    ---@class Grid
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
    local margin = self.margin
    column = column + margin
    row = row + margin
    if column < 1 then return end
    if row < 1 then return end
    if column > self.width then return end
    if row > self.height then return end
    return true
end
local inBounds = Grid.inBounds

function Grid:toCell(i)
    local margin = self.margin
    local width = self.width
    i = i - 1
    margin = margin - 1
    return (i % width) - margin, floor(i / width) - margin
end
local toCell = Grid.toCell

function Grid:toIndex(column, row)
    local margin = self.margin
    row = row + margin - 1
    column = column + margin
    return row*self.width + column
end
local toIndex = Grid.toIndex

-- TBD if this includes margins or not
-- function Grid:getWidth()
--     return self.width - 2*self.margin
-- end

-- function Grid:getHeight()
--     return self.height - 2*self.margin
-- end

function Grid:get(column, row)
    return self[toIndex(self, column, row)]
end
local get = Grid.get

function Grid:cellAt(x, y)
    return ceil(x / self.cellwidth), ceil(y / self.cellheight)
end
local cellAt = Grid.cellAt

function Grid:indexAt(x, y)
    return toIndex(self, cellAt(self, x, y))
end

function Grid:cellCenter(c, r)
    return (c - .5) * self.cellwidth, (r - .5) * self.cellheight
end
local cellCenter = Grid.cellCenter

function Grid:positionInBounds(x, y)
    return inBounds(self, cellAt(self, x, y))
end

function Grid:indexCenter(i)
    return cellCenter(self, toCell(self, i))
end

function Grid:indexDist(i, j)
    local ic, ir = toCell(self, i)
    local jc, jr = toCell(self, j)
    if ic == jc then
        return abs(jr-ir)
    end
    if jr == ir then
        return abs(ic-jc)
    end
    local disty = abs(jr-ir)
    if disty == abs(ic-jc) then
        return disty * sqrt2
    end
    return dist(ic, ir, jc, jr)
end

function Grid:indexDistSq(i, j)
    local ic, ir = toCell(self, i)
    local jc, jr = toCell(self, j)
    return distsq(ic, ir, jc, jr)
end

local function rectIterator(self, c1, r1, c2, r2)
    local c, r = c1, r1
    local incc = c2 < c1 and -1 or 1
    local incr = r2 < r1 and -1 or 1
    local endr = r2 + incr
    return function()
        if r == endr then
            return
        end
        local v = get(self, c, r)
        local vc, vr = c, r
        if c == c2 then
            c = c1
            r = r + incr
        else
            c = c + incc
        end
        return vc, vr, v
    end
end

function Grid:cellsTouchingRect(rectx, recty, rectw, recth)
    local c1, r1 = cellAt(self, rectx, recty)
    local c2, r2 = cellAt(self, rectx + rectw, recty + recth)
    return rectIterator(self, c1, r1, c2, r2)
end

local function lineIteratorX(self, c1, r1, c2, r2)
    local dr = r2-r1
    local incr = 1
    if dr < 0 then
        incr = -1
        dr = -dr
    end

    local dc2dr = dr-(c2-c1)
    local d = dc2dr + dr
    local doubledr = 2*dr
    local doubledc2dr = 2*dc2dr
    local r = r1
    local c = c1
    local endc = c2 + 1
    return function()
        if c == endc then
            return
        end
        local v = get(self, c, r)
        local vc, vr = c, r
        c = c + 1
        if d > 0 then
            r = r + incr
            d = d + doubledc2dr
        else
            d = d + doubledr
        end
        return vc, vr, v
    end
end

local function lineIteratorY(self, c1, r1, c2, r2)
    local dc = c2-c1
    local incc = 1
    if dc < 0 then
        incc = -1
        dc = -dc
    end

    local dr2dc = dc-(r2-r1)
    local d = dr2dc + dc
    local doubledc = 2*dc
    local doubledr2dc = 2*dr2dc
    local r = r1
    local c = c1
    local endr = r2 + 1
    return function()
        if r == endr then
            return
        end
        local v = get(self, c, r)
        local vc, vr = c, r
        r = r + 1
        if d > 0 then
            c = c + incc
            d = d + doubledr2dc
        else
            d = d + doubledc
        end
        return vc, vr, v
    end
end

function Grid:cellsTouchingLine(c1, r1, c2, r2)
    if c1 == c2 or r1 == r2 then
        return rectIterator(self, c1, r1, c2, r2)
    end
    if abs(r2 - r1) < abs(c2 - c1) then
        return c1 > c2
            and lineIteratorX(self, c2, r2, c1, r1)
            or  lineIteratorX(self, c1, r1, c2, r2)
    end
    return r1 > r2
        and lineIteratorY(self, c2, r2, c1, r1)
        or  lineIteratorY(self, c1, r1, c2, r2)
end

function Grid:getAtPosition(x, y)
    local c, r = cellAt(self, x, y)
    return get(self, c, r)
end

function Grid:set(column, row, value)
    if inBounds(self, column, row) then
        self[toIndex(self, column, row)] = value
    end
end

function Grid:fill(value)
    for i = 1, self.width*self.height do
        self[i] = value
    end
end

function Grid:fillRect(x, y, width, height, value)
    local c1, r1 = cellAt(self, x, y)
    local c2, r2 = cellAt(self, x+width, y+height)
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
        local i = toIndex(self, c1, r)
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