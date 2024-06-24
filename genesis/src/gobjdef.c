#include "gobjdef.h"
#include "maths.h"
#include "map.h"
#include "res_gfx.h"
#include "res_audio.h"
#include "gobject.h"
#include "bullet.h"
#include "item.h"

const GameObjectDefinition defPlayer = {
    .health = 1,
    .spriteDepth = -100,
    .spriteDef = &sprPlayer,
    .palette = &palPlayer,
    .bodyW = FIX16(4),
    .bodyH = FIX16(4),
};
const GameObjectDefinition defPlayerShot = {
    .team = TEAM_PLAYERSHOT,
    .speed = FIX16(16),
    .spriteDef = &sprPlayerShot,
    .spriteDepth = -90,
    .palette = &palPlayer,
    .bodyW = FIX16(6), .bodyH = FIX16(6),
    // .defeatSoundDef = &sndPlayerShotHit,
    .update = BULLET_update
};
const GameObjectDefinition defAnt = {
    .team = TEAM_ENEMY,
    .health = 1, .speed = FIX16(2),
    .defeatPoints = 200,
    .spriteDef = &sprAnt,
    .spriteDepth = -1,
    .palette = &palAnt,
    .bodyW = FIX16(8), .bodyH = FIX16(6),
    .defeatSoundDef = &sndBugKill1,
    .update = GOBJ_updatePathWalker
};
const GameObjectDefinition defHoneyPot = {
    .team = TEAM_ENEMY,
    .health = 1,
    .spriteDef = &sprHoneyPot,
    .spriteDepth = -1,
    .palette = &palFlyAndHoney,
    .bodyW = FIX16(8), .bodyH = FIX16(8),
    .defeatSoundDef = &sndBreakPot,
    .update = GOBJ_updateIdleOnStage,
    .onDefeat = GOBJ_openHoneypot
};
const GameObjectDefinition defPowerup = {
    .team = TEAM_ENEMYSHOT,
    .health = 1,
    .spriteDef = &sprPowerup,
    .spriteDepth = -20,
    .palette = &palPlayer,
    .bodyW = FIX16(8), .bodyH = FIX16(8),
    .defeatSoundDef = &sndPowerup,
    .update = GOBJ_updatePowerupRise
};
const GameObjectDefinition defFlyBullet = {
    .team = TEAM_ENEMYSHOT,
    .health = 1, .damage = 1,
    .speed = FIX16(3),
    .spriteDef = &sprFlyBullet,
    .spriteDepth = -20,
    .palette = &palFlyAndHoney,
    .bodyW = FIX16(2), .bodyH = FIX16(2),
    .update = BULLET_update
};
const GameObjectDefinition defFly = {
    .team = TEAM_ENEMY,
    .health = 8, .speed = FIX16(2),
    .defeatPoints = 500,
    .spriteDef = &sprFly,
    .spriteDepth = -10,
    .palette = &palFlyAndHoney,
    .bodyW = FIX16(14), .bodyH = FIX16(14),
    .defeatSoundDef = &sndBugKill2,
    .pathParent = PATHPARENT_TRIGGER,
    .bulletDef = &defFlyBullet,
    .update = GOBJ_updatePathWalker
};
const GameObjectDefinition defHoneyCell = {
    .team = TEAM_ENEMY,
    .health = 1,
    .spriteDef = &sprPowerup,
    .spriteDepth = -1,
    .palette = &palPlayer,
    .bodyW = FIX16(8), .bodyH = FIX16(8),
    .defeatSoundDef = &sndBreakPot,
    .update = GOBJ_updateIdleOnStage,
    .onDefeat = GOBJ_openHoneypot
};
const GameObjectDefinition defAntBig = {
    .team = TEAM_ENEMY,
    .health = 16, .speed = FIX16(1),
    .defeatPoints = 2500,
    .spriteDef = &sprAntBig,
    .spriteDepth = -1,
    .palette = &palAnt,
    .bodyW = FIX16(20), .bodyH = FIX16(10),
    .defeatSoundDef = &sndBugKill2,
    .update = GOBJ_updateSpawner
};
const GameObjectDefinition defAlienGunner = {
    .team = TEAM_ENEMY,
    .health = 8, .speed = FIX16(2),
    .defeatPoints = 500,
    .spriteDef = &sprAlien,
    .spriteDepth = -1,
    .palette = &palAlien,
    .bodyW = FIX16(10), .bodyH = FIX16(8),
    .defeatSoundDef = &sndBugKill2,
    .update = GOBJ_updatePathWalker
};
const GameObjectDefinition defAlienPillager = {
    .team = TEAM_ENEMY,
    .health = 4, .speed = FIX16(2),
    .defeatPoints = 250,
    .spriteDef = &sprAlien,
    .spriteDepth = -1,
    .palette = &palAlien,
    .bodyW = FIX16(10), .bodyH = FIX16(8),
    .animInd = 2,
    .defeatSoundDef = &sndBugKill2,
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