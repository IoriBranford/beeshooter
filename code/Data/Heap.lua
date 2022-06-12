local Heap = {}
Heap.__index = Heap

function Heap.new(compare)
    local heap = setmetatable({
        compare = compare or function(a,b) return a < b end
    }, Heap)
    return heap
end

function Heap:clear()
    for i = #self, 1, -1 do
        self[i] = nil
    end
end

function Heap:push(data)
    local i = #self+1
    self[i] = data

    local compare = self.compare
    local parenti = math.floor(i/2)
    while parenti > 0 and compare(data, self[parenti]) do
        self[i] = self[parenti]
        self[parenti] = data
        i = parenti
        parenti = math.floor(i/2)
    end
end

function Heap:pop()
    local value = self[1]
    self[1] = self[#self]
    self[#self] = nil

    local compare = self.compare
    local i = 1
    local last = math.floor(#self/2)
    while i <= last do
        local i1 = 2*i
        local i2 = i1+1
        local v = self[i]
        local v1 = self[i1]
        local v2 = self[i2]
        if compare(v, v1) then
            if not v2 or compare(v, v2) then
                break
            else
                self[i] = v2
                self[i2] = v
                i = i2
            end
        elseif not v2 or compare(v, v2) or compare(v1, v2) then
            self[i] = v1
            self[i1] = v
            i = i1
        elseif v2 then
            self[i] = v2
            self[i2] = v
            i = i2
        end
    end
    return value
end

return Heap