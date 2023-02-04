local class = require "pl.class"

---@class CharacterGroup
local CharacterGroup = class()

local function checkAnyCharacter(self, check)
    for _, character in ipairs(self) do
        if check(character) then
            return true
        end
    end
end

local function checkAllCharacters(self, check)
    for _, character in ipairs(self) do
        if not check(character) then
            return false
        end
    end
    return true
end

function CharacterGroup:add(character)
    self[#self+1] = character
    character.charactergroup = self
end

function CharacterGroup:remove(character)
    for i = #self, 1, -1 do
        if self[i] == character then
            self[i] = self[#self]
            self[#self] = nil
            character.charactergroup = nil
        end
    end
end

function CharacterGroup:checkAllEnemyShipsDefeated()
    return checkAllCharacters(self, function(character)
        return character.team ~= "EnemyShip" or character.defeated
    end)
end

function CharacterGroup:checkAllEnemyShipsDefeatedInWindow(window)
    if not window then
        return self:checkAllEnemyShipsDefeated()
    end
    local mindefeatedage, maxdefeatedage = math.huge, -math.huge
    for _, character in ipairs(self) do
        if character.team == "EnemyShip" then
            local defeatedage = character.defeatedage
            if not defeatedage then
                return
            end
            mindefeatedage = math.min(mindefeatedage, defeatedage)
            maxdefeatedage = math.max(maxdefeatedage, defeatedage)
        end
    end
    return maxdefeatedage < mindefeatedage or
        maxdefeatedage - mindefeatedage <= window
end

return CharacterGroup