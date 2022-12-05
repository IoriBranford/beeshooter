local Heap = {}
Heap.__index = Heap

function Heap.new(compare)
    local heap = setmetatable({
        compare = compare or function(a,b) return a < b end,
        positions = {}
    }, Heap)
    return heap
end

function Heap:clear()
    for i = #self, 1, -1 do
        self[i] = nil
    end
    local positions = self.positions
    for k in pairs(positions) do
        positions[k] = nil
    end
end

local function swap(self, positions, i, j, v, u)
    positions[v], positions[u] = j, i
    self[i], self[j] = u, v
    return j
end

local function moveForward(self, i, data)
    local positions = self.positions
    local compare = self.compare
    local parenti = math.floor(i/2)
    while parenti > 0 do
        local parentdata = self[parenti]
        if compare(parentdata, data) then
            break
        end
        i = swap(self, positions, i, parenti, data, parentdata)
        parenti = math.floor(i/2)
    end
    return i
end

function Heap:push(data)
    if self.positions[data] ~= nil then return end
    local i = #self+1
    self[i] = data
    moveForward(self, i, data)
end

local function moveBackward(self, i, v)
    local positions = self.positions
    local compare = self.compare
    local last = math.floor(#self/2)
    while i <= last do
        local i1 = 2*i
        local i2 = i1+1
        local v1 = self[i1]
        local v2 = self[i2]
        if compare(v, v1) then
            if not v2 or compare(v, v2) then
                break
            else
                i = swap(self, positions, i, i2, v, v2)
            end
        elseif not v2 or compare(v, v2) or compare(v1, v2) then
            i = swap(self, positions, i, i1, v, v1)
        elseif v2 then
            i = swap(self, positions, i, i2, v, v2)
        end
    end
    return i
end

function Heap:pop()
    local value = self[1]
    self.positions[value] = nil
    local newhead = self[#self]
    self[1] = newhead
    self[#self] = nil
    moveBackward(self, 1, newhead)
    return value
end

function Heap:update(value)
    local i = self.positions[value]
    if i and moveForward(self, i, value) == i then
        moveBackward(self, i, value)
    end
end

return Heap