local Team = {}

function Team.start(unit, defaultteam, defaultenemyteams)
    unit.team = unit.team or defaultteam
    unit.enemyteams = unit.enemyteams or defaultenemyteams
    if unit.team == "opponent" then
        unit.team = Team.getOpposingTeam(unit.team)
    end
end

function Team.getOpposingTeam(team)
    if team == "PlayerTeam" then
        return "EnemyTeam"
    elseif team == "EnemyTeam" then
        return "PlayerTeam"
    end
end

function Team.isEnemyOf(unit, other)
    local unitteam = unit.team
    local otherenemies = other.enemyteams
    return unitteam and otherenemies and
        string.find(otherenemies, unitteam)
end

function Team.areEnemies(a, b)
    local teamA, teamB = a.team, b.team
    local enemyA, enemyB = a.enemyteams, b.enemyteams
    return teamA and enemyB and teamB and enemyA
        and string.find(enemyB, teamA) and string.find(enemyA, teamB)
end

return Team