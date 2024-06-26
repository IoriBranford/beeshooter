#include "gobjdef.h"
#include <genesis.h>
#include "res_gfx.h"
#include "res_audio.h"
#include "gobject.h"
#include "bullet.h"
#include "item.h"

#define GOBJ_FRAME_CHANGE(name) void name##_frameChange(Sprite *sprite) {SPR_setVRAMTileIndex(sprite, name.aniFrameTiles[sprite->animInd][sprite->frameInd]);}

GameObjectDefinition defPlayer = {
    .health = 1,
    .spriteDepth = -100,
    .spriteDef = &sprPlayer,
    .palette = &palPlayer,
    .bodyW = FIX16(4),
    .bodyH = FIX16(4),
};
GameObjectDefinition defPlayerShot = {
    .team = TEAM_PLAYERSHOT,
    .speed = FIX16(16),
    .spriteDef = &sprPlayerShot,
    .spriteDepth = -90,
    .palette = &palPlayer,
    .bodyW = FIX16(6), .bodyH = FIX16(6),
    // .defeatSoundDef = &sndPlayerShotHit,
    .update = BULLET_update
};
GOBJ_FRAME_CHANGE(defAnt)
GameObjectDefinition defAnt = {
    .team = TEAM_ENEMY,
    .health = 1, .speed = FIX16(2),
    .defeatPoints = 200,
    .spriteDef = &sprAnt,
    .spriteDepth = -1,
    .palette = &palAnt,
    .bodyW = FIX16(8), .bodyH = FIX16(6),
    .defeatSoundDef = &sndBugKill1,
    .update = GOBJ_updatePathWalker,
    .onFrameChange = defAnt_frameChange
};
GOBJ_FRAME_CHANGE(defHoneyPot)
GameObjectDefinition defHoneyPot = {
    .team = TEAM_ENEMY,
    .health = 1,
    .spriteDef = &sprHoneyPot,
    .spriteDepth = -1,
    .palette = &palFlyAndHoney,
    .bodyW = FIX16(8), .bodyH = FIX16(8),
    .defeatSoundDef = &sndBreakPot,
    .update = GOBJ_updateIdleOnStage,
    .onDefeat = GOBJ_openHoneypot,
    .onFrameChange = defHoneyPot_frameChange
};
GOBJ_FRAME_CHANGE(defPowerup)
GameObjectDefinition defPowerup = {
    .team = TEAM_ENEMYSHOT,
    .health = 1,
    .spriteDef = &sprPowerup,
    .spriteDepth = -20,
    .palette = &palPlayer,
    .bodyW = FIX16(8), .bodyH = FIX16(8),
    .defeatSoundDef = &sndPowerup,
    .update = GOBJ_updatePowerupRise,
    .onFrameChange = defPowerup_frameChange
};
GOBJ_FRAME_CHANGE(defFlyBullet)
GameObjectDefinition defFlyBullet = {
    .team = TEAM_ENEMYSHOT,
    .health = 1, .damage = 1,
    .speed = FIX16(3),
    .spriteDef = &sprFlyBullet,
    .spriteDepth = -20,
    .palette = &palFlyAndHoney,
    .bodyW = FIX16(2), .bodyH = FIX16(2),
    .update = BULLET_update,
    .onFrameChange = defFlyBullet_frameChange
};
GOBJ_FRAME_CHANGE(defFly)
GameObjectDefinition defFly = {
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
    .update = GOBJ_updatePathWalker,
    .onFrameChange = defFly_frameChange
};
GameObjectDefinition defHoneyCell = {
    .team = TEAM_ENEMY,
    .health = 1,
    .spriteDef = &sprPowerup,
    .spriteDepth = -1,
    .palette = &palPlayer,
    .bodyW = FIX16(8), .bodyH = FIX16(8),
    .defeatSoundDef = &sndBreakPot,
    .update = GOBJ_updateIdleOnStage,
    .onDefeat = GOBJ_openHoneypot,
    .onFrameChange = defPowerup_frameChange
};
GOBJ_FRAME_CHANGE(defAntBig)
GameObjectDefinition defAntBig = {
    .team = TEAM_ENEMY,
    .health = 16, .speed = FIX16(1),
    .defeatPoints = 2500,
    .spriteDef = &sprAntBig,
    .spriteDepth = -1,
    .palette = &palAnt,
    .bodyW = FIX16(20), .bodyH = FIX16(10),
    .defeatSoundDef = &sndBugKill2,
    .update = GOBJ_updateSpawner,
    .onFrameChange = defAntBig_frameChange
};
GOBJ_FRAME_CHANGE(defAlienGunner)
GameObjectDefinition defAlienGunner = {
    .team = TEAM_ENEMY,
    .health = 8, .speed = FIX16(2),
    .defeatPoints = 500,
    .spriteDef = &sprAlien,
    .spriteDepth = -1,
    .palette = &palAlien,
    .bodyW = FIX16(10), .bodyH = FIX16(8),
    .defeatSoundDef = &sndBugKill2,
    .update = GOBJ_updatePathWalker,
    .onFrameChange = defAlienGunner_frameChange
};
GOBJ_FRAME_CHANGE(defAlienPillager)
GameObjectDefinition defAlienPillager = {
    .team = TEAM_ENEMY,
    .health = 4, .speed = FIX16(2),
    .defeatPoints = 250,
    .spriteDef = &sprAlien,
    .spriteDepth = -1,
    .palette = &palAlien,
    .bodyW = FIX16(10), .bodyH = FIX16(8),
    .animInd = 2,
    .defeatSoundDef = &sndBugKill2,
    .update = GOBJ_updatePathWalker,
    .onFrameChange = defAlienPillager_frameChange
};
GameObjectDefinition defAlienMind;
GameObjectDefinition defAcidAnt;
GameObjectDefinition defWasp;
GameObjectDefinition defReinforcedHoneyPot;
GameObjectDefinition defAntHole;
GameObjectDefinition defBeetle;
GameObjectDefinition defWaspShooter;
GameObjectDefinition defWaspBoss;
GameObjectDefinition defTick;
GameObjectDefinition defWaspEgg;

GameObjectDefinition *part1defs[8] = {
    &defHoneyPot,
    &defPowerup,
    &defAnt,
    &defFlyBullet,
    &defFly,
    &defAntBig,
    &defAlienGunner,
    &defAlienPillager
};

u16 GOBJDEF_loadSpriteFrames(u16 tileIndex, int numDefs, GameObjectDefinition **defs) {
    u16 numTiles;
    GameObjectDefinition **def = defs;
    for (int i = 0; i < numDefs; ++i) {
        const SpriteDefinition *spriteDef = (*def)->spriteDef;
        if (spriteDef) {
            (*def)->aniFrameTiles = SPR_loadAllFrames(spriteDef, tileIndex, &numTiles);
            tileIndex += numTiles;
        }
        ++def;
    }
    defHoneyCell.aniFrameTiles = defPowerup.aniFrameTiles;
    return tileIndex;
}

void GOBJDEF_freeSpriteFrames(int numDefs, GameObjectDefinition **defs) {
    defHoneyCell.aniFrameTiles = NULL;
    GameObjectDefinition **def = defs;
    for (int i = 0; i < numDefs; ++i) {
        if ((*def)->aniFrameTiles) {
            MEM_free((*def)->aniFrameTiles);
            (*def)->aniFrameTiles = NULL;
        }
    }
}