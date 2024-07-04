#include "gobjdef.h"
#include <genesis.h>
#include "res_gfx.h"
#include "res_audio.h"
#include "gobject.h"
#include "bullet.h"
#include "item.h"
#include "enemy.h"

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
GameObjectDefinition defBloodSmall = {
    .spriteDef = &sprBloodSmall,
    .spriteDepth = -50,
    .palette = &palPlayer,
    .init = GOBJ_initSprite,
    .update = GOBJ_updateSpark
};
GameObjectDefinition defAnt = {
    .team = TEAM_ENEMY,
    .health = 1, .speed = FIX16(2),
    .defeatPoints = 125,
    .spriteDef = &sprAnt,
    .spriteDepth = -1,
    .palette = &palAnt,
    .bodyW = FIX16(8), .bodyH = FIX16(6),
    .defeatSoundDef = &sndBugKill1,
    .update = GOBJ_updatePathWalker,
};
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
};
GameObjectDefinition defPowerup = {
    .team = TEAM_ENEMYSHOT,
    .health = 1,
    .spriteDef = &sprPowerup,
    .spriteDepth = -20,
    .palette = &palPlayer,
    .bodyW = FIX16(8), .bodyH = FIX16(8),
    .defeatSoundDef = &sndPowerup,
    .update = GOBJ_updatePowerupRise,
};
GameObjectDefinition defFlyBullet = {
    .team = TEAM_ENEMYSHOT,
    .health = 1, .damage = 1,
    .speed = FIX16(3),
    .spriteDef = &sprFlyBullet,
    .spriteDepth = -20,
    .palette = &palFlyAndHoney,
    .bodyW = FIX16(2), .bodyH = FIX16(2),
    .update = BULLET_update,
};
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
    .shootFunction = ENEMY_shootAtPlayer
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
};
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
    .onDefeat = ENEMY_onDefeatBigAnt
};
GameObjectDefinition defAntBigHead = {
    .team = TEAM_ENEMY,
    .health = 4, .speed = FIX16(1),
    .defeatPoints = 250,
    .spriteDef = &sprAntBigHead,
    .spriteDepth = -10,
    .palette = &palAnt,
    .bodyW = FIX16(10), .bodyH = FIX16(10),
    .defeatSoundDef = &sndBugKill2,
    .update = GOBJ_updateFaller,
};
GameObjectDefinition defAntBigButt = {
    .team = TEAM_ENEMY,
    .health = 4, .speed = FIX16(1),
    .defeatPoints = 250,
    .spriteDef = &sprAntBigButt,
    .spriteDepth = -10,
    .palette = &palAnt,
    .bodyW = FIX16(10), .bodyH = FIX16(10),
    .defeatSoundDef = &sndBugKill2,
    .update = GOBJ_updateFaller,
};
GameObjectDefinition defAlienGunnerBullet = {
    .team = TEAM_ENEMYSHOT,
    .health = 1, .damage = 1,
    .speed = FIX16(4),
    .spriteDef = &sprFlyBullet,
    .spriteDepth = -20,
    .palette = &palFlyAndHoney,
    .bodyW = FIX16(2), .bodyH = FIX16(2),
    .update = BULLET_update,
};
GameObjectDefinition defAlienGunner = {
    .team = TEAM_ENEMY,
    .health = 8, .speed = FIX16(2),
    .defeatPoints = 500,
    .spriteDef = &sprAlien,
    .spriteDepth = -1,
    .palette = &palAlien,
    .bodyW = FIX16(10), .bodyH = FIX16(8),
    .defeatSoundDef = &sndBugKill2,
    .bulletDef = &defAlienGunnerBullet,
    .update = GOBJ_updatePathWalker,
    .shootFunction = ENEMY_alienGunnerShoot
};
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
};
GameObjectDefinition defAlienMind = {
    .team = TEAM_ENEMY,
    .health = 64,
    .defeatPoints = 10000,
    .spriteDef = &sprAlienMind,
    .spriteDepth = 1,
    .palette = &palAlien,
    .bodyW = FIX16(12), .bodyH = FIX16(12),
    //.update = ENEMY_updateAlienMind,
    //.onDefeat = ENEMY_onDefeatAlienMind
};
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
    &defAlienMind
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
    defAlienPillager.aniFrameTiles = defAlienGunner.aniFrameTiles;
    defAlienGunnerBullet.aniFrameTiles = defFlyBullet.aniFrameTiles;
    return tileIndex;
}

void GOBJDEF_freeSpriteFrames(int numDefs, GameObjectDefinition **defs) {
    defHoneyCell.aniFrameTiles = NULL;
    defAlienPillager.aniFrameTiles = NULL;
    defAlienGunnerBullet.aniFrameTiles = NULL;
    GameObjectDefinition **def = defs;
    for (int i = 0; i < numDefs; ++i) {
        if ((*def)->aniFrameTiles) {
            MEM_free((*def)->aniFrameTiles);
            (*def)->aniFrameTiles = NULL;
        }
    }
}