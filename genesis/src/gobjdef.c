#include "gobjdef.h"
#include "maths.h"
#include "map.h"
#include "res_gfx.h"
#include "gobject.h"

const GameObjectDefinition defAnt = {
    .health = 1, .speed = FIX16(2),
    .defeatPoints = 100,
    .spriteDef = &sprAnt,
    .palette = &palAnt,
    .update = GOBJ_updatePathWalker
};
const GameObjectDefinition defHoneyPot;
const GameObjectDefinition defFly;
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