local Csv    = require "Data.Csv"
local Language = {}

local strings

function Language.load(language)
    local languagefile = string.format("data/languages.csv")
    local csv = Csv.load(languagefile)
    local headrow = csv[1]
    local languageindex
    for i = 2, #headrow do
        if headrow[i] == language then
            languageindex = i
            break
        end
    end
    strings = {}
    for r = 2, #csv do
        local row = csv[r]
        strings[row[1]] = row[languageindex]
    end
end

function Language.clear()
    strings = nil
end

function Language.getString(id)
    return strings[id] or id
end

function Language.formatString(id, ...)
    return string.format(strings[id] or id, ...)
end

return Language