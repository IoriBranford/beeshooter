local Tiled = require "Data.Tiled"

local Csv = {}

local s_gmatch = string.gmatch
local s_match = string.match
local s_lower = string.lower
local tonumber = tonumber

local function parseValue(v)
    local vlower = s_lower(v)
    if vlower == "true" then
        v = true
    elseif vlower == "false" then
        v = false
    else
        local tileset, tile = s_match(v, "^tile/(%w+)/(%w+)$")
        tileset = tileset and Tiled.tilesets[tileset]
        tile = tileset and tileset[tile]
        v = tile or tonumber(v) or v or ""
    end
    return v
end

function Csv.load(filename)
    local rows = {}
    for line in love.filesystem.lines(filename) do
        local row = {}
        for v in s_gmatch(line, "%s*([^,]-)%s*,") do
            row[#row+1] = parseValue(v)
        end
        row[#row+1] = parseValue(s_match(line, "%s*([^,]-)%s*$"))
        rows[#rows+1] = row
    end
    return rows
end

return Csv