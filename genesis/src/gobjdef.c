#include "gobjdef.h"
#include "maths.h"
#include "map.h"
#include "res_gfx.h"
#include "gobject.h"

const GameObjectDefinition defAnt = {
    .health = 1, .speed = FIX16(2),
    .defeatPoints = 200,
    .spriteDef = &sprAnt,
    .palette = &palAnt,
    .update = GOBJ_updatePathWalker
};
const GameObjectDefinition defHoneyPot = {
    .health = 1,
    .spriteDef = &sprHoneyPot,
    .palette = &palFlyAndHoney,
    .update = GOBJ_updateIdleOnStage
};
const GameObjectDefinition defPowerup = {
    .health = 1,
    .spriteDef = &sprPowerup,
    .palette = &palPlayer,
    .update = GOBJ_updateIdleOnStage
};
const GameObjectDefinition defFly = {
    .health = 8, .speed = FIX16(2),
    .defeatPoints = 500,
    .spriteDef = &sprFly,
    .palette = &palFlyAndHoney,
    .update = GOBJ_updatePathWalker
};
const GameObjectDefinition defHoneyCell;
const GameObjectDefinition defAntBig;
const GameObjectDefinition defAlienGunner;
const GameObjectDefinition defAlienPillager;
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