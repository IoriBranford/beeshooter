local Pool = {}
Pool.__index = Pool

local function initValues(t, values)
	if values then
		for k,v in pairs(values) do
			t[k] = v
		end
	end
	return t
end

function Pool:pop()
	local t
	if #self <= 0 then
		t = initValues({}, self.initvalues)
	else
		t = self[#self]
		self[#self] = nil
	end
	return t
end

function Pool:push(t)
	for k,_ in pairs(t) do
		t[k] = nil
	end
	self[#self+1] = initValues(t, self.initvalues)
end

return function(size, initvalues)
	size = size or 256
	local pool = setmetatable({initvalues = initvalues}, Pool)
	for i = 1, size do
		pool[i] = {}
	end
	if initvalues then
		for i = 1, size do
			local t = pool[i]
			for k,v in pairs(initvalues) do
				t[k] = v
			end
		end
	end
	return pool
end