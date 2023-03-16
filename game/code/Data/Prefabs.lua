local Prefabs = {}

local prefabs = {}

function Prefabs.add(newprefabs)
    for i = 1, #newprefabs do
        local prefab = newprefabs[i]
        prefab.id = nil
        local name = prefab.name or ""
        if name ~= "" and not prefabs[name] then
            prefabs[name] = prefab
            local typ = prefab.type
            if typ == "" then
                local tile = prefab.tile
                prefab.type = tile and tile.type
            end
        end
    end
end

function Prefabs.clear()
    prefabs = {}
end

function Prefabs.get(name)
    return prefabs[name]
end

function Prefabs.forEach(func)
    for name, prefab in pairs(prefabs) do
        func(name, prefab)
    end
end

return Prefabs