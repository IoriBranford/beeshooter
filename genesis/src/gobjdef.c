#include "gobjdef.h"
#include "maths.h"
#include "map.h"
#include "res_gfx.h"
#include "gobject.h"

const GameObjectDefinition defAnt = {
    .team = TEAM_ENEMY,
    .health = 1, .speed = FIX16(2),
    .defeatPoints = 200,
    .spriteDef = &sprAnt,
    .palette = &palAnt,
    .bodyW = FIX16(16), .bodyH = FIX16(12),
    .update = GOBJ_updatePathWalker
};
const GameObjectDefinition defHoneyPot = {
    .team = TEAM_ENEMY,
    .health = 1,
    .spriteDef = &sprHoneyPot,
    .palette = &palFlyAndHoney,
    .bodyW = FIX16(16), .bodyH = FIX16(16),
    .update = GOBJ_updateIdleOnStage
};
const GameObjectDefinition defPowerup = {
    .team = TEAM_ENEMY,
    .health = 1,
    .spriteDef = &sprPowerup,
    .palette = &palPlayer,
    .bodyW = FIX16(16), .bodyH = FIX16(16),
    .update = GOBJ_updateIdleOnStage
};
const GameObjectDefinition defFly = {
    .team = TEAM_ENEMY,
    .health = 8, .speed = FIX16(2),
    .defeatPoints = 500,
    .spriteDef = &sprFly,
    .palette = &palFlyAndHoney,
    .bodyW = FIX16(28), .bodyH = FIX16(28),
    .update = GOBJ_updatePathWalker
};
const GameObjectDefinition defHoneyCell;
const GameObjectDefinition defAntBig = {
    .team = TEAM_ENEMY,
    .health = 16, .speed = FIX16(1),
    .defeatPoints = 2500,
    .spriteDef = &sprAntBig,
    .palette = &palAnt,
    .bodyW = FIX16(40), .bodyH = FIX16(20),
    .update = GOBJ_updateIdleOnStage
};
const GameObjectDefinition defAlienGunner = {
    .team = TEAM_ENEMY,
    .health = 8, .speed = FIX16(2),
    .defeatPoints = 500,
    .spriteDef = &sprAlien,
    .palette = &palAlien,
    .bodyW = FIX16(20), .bodyH = FIX16(16),
    .update = GOBJ_updatePathWalker
};
const GameObjectDefinition defAlienPillager = {
    .team = TEAM_ENEMY,
    .health = 4, .speed = FIX16(2),
    .defeatPoints = 250,
    .spriteDef = &sprAlien,
    .palette = &palAlien,
    .bodyW = FIX16(20), .bodyH = FIX16(16),
    .animInd = 2,
    .update = GOBJ_updatePathWalker
};
const GameObjectDefinition defAlienMind;
const GameObjectDefinition defAcidAnt;
const GameObjectDefinition defWasp;
const GameObjectDefinition defReinforcedHoneyPot;
const GameObjectDefinition defAntHole;
const GameObjectDefinition defBeetle;
const GameObjectDefinition defWaspShooter;
const GameObjectDefinition defWaspBoss;
const GameObjectDefinition defTick;
const GameObjectDefinition defWaspEgg;