local Database = {}
local Audio = require "System.Audio"
local Csv   = require "Data.Csv"
local Tiled = require "Data.Tiled"
local type = type
local pairs = pairs

local database = {}

function Database.add(key, row)
    local existingrow = database[key]
    if existingrow then
        for k,v in pairs(row) do
            existingrow[k] = v
        end
    else
        database[key] = row
    end
end
local add = Database.add

function Database.addArray(keyfield, rows)
    for i = 1, #rows do
        local row = rows[i]
        add(row[keyfield], row)
    end
end
local addArray = Database.addArray

function Database.addHash(keyfield, hash)
    for _, row in pairs(hash) do
        add(row[keyfield], row)
    end
end
local addHash = Database.addHash

function Database.addMapObjectGroup(objectgroup)
    for i = 1, #objectgroup do
        local object = objectgroup[i]
        object.id = nil
        Database.fillBlanks(object, object.type)
    end
    addArray("name", objectgroup)
end

function Database.addMapObjects(mapobjects)
    for _, object in pairs(mapobjects) do
        object.id = nil
        Database.fillBlanks(object, object.type)
    end
    addHash("name", mapobjects)
end

function Database.loadMapObjects(mapfilename)
    local map = Tiled.load(mapfilename)
    Database.addMapObjects(map.objects)
end

function Database.load(csvfilename)
    local loadedrows = Csv.load(csvfilename)
    local fieldnames = loadedrows[1]
    for i = 1, #fieldnames do
        fieldnames[i] = fieldnames[i]:match("^([_A-Za-z]+)")
    end
    for r = 2, #loadedrows do
        local row = loadedrows[r]
        local key = row[1]
        loadedrows[key] = row
        for c = #row, 1, -1 do
            local field = fieldnames[c]
            if field then
                if row[c] ~= "" then
                    row[field] = row[c]
                end
            else
                print(string.format("%s no field name for data at %d,%d", csvfilename, c, r))
            end
            row[c] = nil
        end
        add(key, row)
    end
    for i = #loadedrows, 1, -1 do
        loadedrows[i] = nil
    end
    return loadedrows
end

function Database.get(key)
    return database[key]
end

function Database.clear()
    database = {}
end

local function set(unit, k, v)
    local var = type(v) == "string" and v:match("^%$(.+)$")
    unit[k] = var and unit[var] or v ~= "nil" and v or nil
end

function Database.fillBlanks(unit, key)
    local row = type(key) == "table" and key or database[key]
    if row then
        for k,v in pairs(row) do
            if unit[k] == nil then
                set(unit, k, v)
            end
        end
    end
end

function Database.fill(unit, key)
    local row = type(key) == "table" and key or database[key]
    if row then
        for k,v in pairs(row) do
            set(unit, k, v)
        end

        local think = unit[row.think]
        if type(think) == "function" then
            unit.think = think
        end

        Audio.play(unit.typesound)
    end
end

function Database.forEach(func)
    for name, properties in pairs(database) do
        func(name, properties)
    end
end

return Database