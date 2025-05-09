#include "gobjdef.h"
#include <genesis.h>
#include "res_gfx.h"
#include "res_audio.h"
#include "gobject.h"
#include "bullet.h"
#include "item.h"
#include "enemy.h"
#include "anim.h"

GameObjectDefinition defPlayer = {
    .health = 1,
    .spriteDepth = -100,
    .spriteDef = &sprPlayer,
    .palette = &palPlayerAndBG,
    .bodyW = FIX16(4),
    .bodyH = FIX16(4),
};
GameObjectDefinition defAngleTester = {
    .spriteDef = &sprFlyBullet,
    .spriteDepth = -90,
    .palette = &palFlyAndHoney,
    .update = BULLET_updateAngleTester
};
GameObjectDefinition defHit = {
    .spriteDef = &sprHit,
    .spriteDepth = -50,
    .palette = &palAnt,
    .init = GOBJ_initSprite,
    .update = GOBJ_updateSpark
};
GameObjectDefinition defAcidHit = {
    .spriteDef = &sprHit,
    .spriteDepth = -50,
    .palette = &palAcidAndBeetle,
    .init = GOBJ_initSprite,
    .update = GOBJ_updateSpark
};
GameObjectDefinition defPlayerShot = {
    .teams = 1<<TEAM_PLAYERSHOT,
    .speed = FIX16(16),
    .spriteDef = &sprPlayerShot,
    .spriteDepth = -90,
    .palette = &palPlayerAndBG,
    .bodyW = FIX16(6), .bodyH = FIX16(6),
    // .defeatSoundDef = &sndPlayerShotHit,
    .corpseDef = &defHit,
    .update = BULLET_update
};
GameObjectDefinition defPlayerSting = {
    .teams = 1<<TEAM_PLAYERSHOT,
    .health = 1,
    .bodyW = FIX16(1),
    .bodyH = FIX16(1),
    .update = GAME_releaseObject
};
GameObjectDefinition defHoneyBlood = {
    .spriteDef = &sprBloodSmall,
    .spriteDepth = -50,
    .palette = &palPlayerAndBG,
    .init = GOBJ_initSprite,
    .update = GOBJ_updateSpark
};
GameObjectDefinition defBloodSmall = {
    .spriteDef = &sprBloodSmall,
    .spriteDepth = -50,
    .palette = &palAnt,
    .init = GOBJ_initSprite,
    .update = GOBJ_updateSpark
};
GameObjectDefinition defBloodMedium = {
    .spriteDef = &sprBloodMedium,
    .spriteDepth = -50,
    .palette = &palAnt,
    .init = GOBJ_initSprite,
    .update = GOBJ_updateSpark
};
GameObjectDefinition defAcidBloodSmall = {
    .spriteDef = &sprBloodSmall,
    .spriteDepth = -50,
    .palette = &palAcidAndBeetle,
    .init = GOBJ_initSprite,
    .update = GOBJ_updateSpark
};
GameObjectDefinition defAcidBloodMedium = {
    .spriteDef = &sprBloodMedium,
    .spriteDepth = -50,
    .palette = &palAcidAndBeetle,
    .init = GOBJ_initSprite,
    .update = GOBJ_updateSpark
};
GameObjectDefinition defPlayerBlood = {
    .spriteDef = &sprBloodMedium,
    .spriteDepth = -50,
    .palette = &palPlayerAndBG,
    .init = GOBJ_initSprite,
    .update = GOBJ_updateSpark
};
GameObjectDefinition defAnt = {
    .teams = 1<<TEAM_ENEMY,
    .health = 1, .speed = FIX16(2),
    .defeatPoints = 150,
    .spriteDef = &sprAnt,
    .spriteDepth = -1,
    .palette = &palAnt,
    .bodyW = FIX16(8), .bodyH = FIX16(6),
    .defeatSoundDef = &sndBugKill1,
    .corpseDef = &defBloodSmall,
    .update = GOBJ_updatePathWalker,
};
GameObjectDefinition defHoneyPot = {
    .teams = 1<<TEAM_ENEMY,
    .health = 1,
    .spriteDef = &sprHoneyPot,
    .spriteDepth = -1,
    .palette = &palFlyAndHoney,
    .bodyW = FIX16(8), .bodyH = FIX16(8),
    .defeatSoundDef = &sndBreakPot,
    .update = GOBJ_updateIdleOnStage,
    .onDefeat = GOBJ_openStandardHoneypot,
};
GameObjectDefinition defPowerup = {
    .teams = 1<<TEAM_ENEMYSHOT,
    .health = 1,
    .spriteDef = &sprPowerup,
    .spriteDepth = -20,
    .palette = &palPlayerAndBG,
    .bodyW = FIX16(8), .bodyH = FIX16(8),
    .defeatSoundDef = &sndPowerup,
    .update = GOBJ_updatePowerupRise,
    .onDefeat = GOBJ_pickupPowerup,
};
GameObjectDefinition defTimeExtendPowerup = {
    .teams = 1<<TEAM_ENEMYSHOT,
    .health = 1,
    .spriteDef = &sprPowerup,
    .spriteDepth = -20,
    .palette = &palPlayerAndBG,
    .bodyW = FIX16(8), .bodyH = FIX16(8),
    .defeatSoundDef = &sndPowerup,
    .update = GOBJ_updatePowerupRise,
    .onDefeat = ITEM_pickupTimeExtendPowerup,
};
GameObjectDefinition defFlyBullet = {
    .teams = 1<<TEAM_ENEMYSHOT,
    .health = 1, .damage = 1,
    .speed = FIX16(3),
    .spriteDef = &sprFlyBullet,
    .spriteDepth = -20,
    .palette = &palFlyAndHoney,
    .bodyW = FIX16(2), .bodyH = FIX16(2),
    .update = BULLET_update,
    .soundWhenFiredDef = &sndEnemyShot
};
GameObjectDefinition defWaspBullet = {
    .teams = 1<<TEAM_ENEMYSHOT,
    .health = 1, .damage = 1,
    .speed = FIX16(3),
    .spriteDef = &sprFlyBullet,
    .spriteDepth = -20,
    .palette = &palWaspShooterAndReinforcedHoney,
    .bodyW = FIX16(2), .bodyH = FIX16(2),
    .update = BULLET_update,
    .soundWhenFiredDef = &sndEnemyShot
};
GameObjectDefinition defFly = {
    .teams = 1<<TEAM_ENEMY | 1<<TEAM_ENEMYSHOT,
    .damage = 1,
    .health = 8, .speed = FIX16(2),
    .defeatPoints = 500,
    .spriteDef = &sprFly,
    .spriteDepth = -10,
    .palette = &palFlyAndHoney,
    .bodyW = FIX16(14), .bodyH = FIX16(14),
    .defeatSoundDef = &sndBugKill2,
    .pathParent = PATHPARENT_TRIGGER,
    .bulletDef = &defFlyBullet,
    .corpseDef = &defBloodSmall,
    .update = GOBJ_updatePathWalker,
    .shootFunction = ENEMY_shootAtPlayer
};
GameObjectDefinition defHoneyCell = {
    .teams = 1<<TEAM_ENEMY,
    .health = 1,
    .spriteDef = &sprPowerup,
    .spriteDepth = -1,
    .palette = &palPlayerAndBG,
    .bodyW = FIX16(8), .bodyH = FIX16(8),
    .defeatSoundDef = &sndBreakPot,
    .update = GOBJ_updateIdleOnStage,
    .onDefeat = GOBJ_openStandardHoneypot,
};
GameObjectDefinition defAntBig = {
    .teams = 1<<TEAM_ENEMY,
    .health = 16, .speed = FIX16(1),
    .defeatPoints = 2500,
    .spriteDef = &sprAntBig,
    .spriteDepth = -1,
    .palette = &palAnt,
    .bodyW = FIX16(20), .bodyH = FIX16(10),
    .defeatSoundDef = &sndBugKill2,
    .corpseDef = &defBloodMedium,
    .update = GOBJ_updateSpawner,
    .onDefeat = ENEMY_onDefeatBigAnt
};
GameObjectDefinition defAntBigHead = {
    .teams = 1<<TEAM_ENEMY,
    .health = 4, .speed = FIX16(1),
    .defeatPoints = 250,
    .spriteDef = &sprAntBigHead,
    .spriteDepth = -10,
    .palette = &palAnt,
    .bodyW = FIX16(10), .bodyH = FIX16(10),
    .defeatSoundDef = &sndBugKill2,
    .corpseDef = &defBloodSmall,
    .update = GOBJ_updateFaller,
};
GameObjectDefinition defAntBigButt = {
    .teams = 1<<TEAM_ENEMY,
    .health = 4, .speed = FIX16(1),
    .defeatPoints = 250,
    .spriteDef = &sprAntBigButt,
    .spriteDepth = -10,
    .palette = &palAnt,
    .bodyW = FIX16(10), .bodyH = FIX16(10),
    .defeatSoundDef = &sndBugKill2,
    .corpseDef = &defBloodSmall,
    .update = GOBJ_updateFaller,
};
GameObjectDefinition defAlienGunnerBullet = {
    .teams = 1<<TEAM_ENEMYSHOT,
    .health = 1, .damage = 1,
    .speed = FIX16(4),
    .spriteDef = &sprFlyBullet,
    .spriteDepth = -20,
    .palette = &palFlyAndHoney,
    .bodyW = FIX16(2), .bodyH = FIX16(2),
    .update = BULLET_update,
    .soundWhenFiredDef = &sndEnemyShot
};
GameObjectDefinition defAlienGunner = {
    .teams = 1<<TEAM_ENEMY,
    .health = 8, .speed = FIX16(2),
    .defeatPoints = 500,
    .spriteDef = &sprAlien,
    .spriteDepth = -1,
    .palette = &palAlien,
    .bodyW = FIX16(10), .bodyH = FIX16(8),
    .defeatSoundDef = &sndBugKill2,
    .bulletDef = &defAlienGunnerBullet,
    .corpseDef = &defBloodSmall,
    .update = GOBJ_updatePathWalker,
    .shootFunction = ENEMY_alienGunnerShoot
};
GameObjectDefinition defAlienPillager = {
    .teams = 1<<TEAM_ENEMY,
    .health = 4, .speed = FIX16(2),
    .defeatPoints = 250,
    .spriteDef = &sprAlien,
    .spriteDepth = -1,
    .palette = &palAlien,
    .bodyW = FIX16(10), .bodyH = FIX16(8),
    .animInd = 2,
    .defeatSoundDef = &sndBugKill2,
    .corpseDef = &defBloodSmall,
    .update = GOBJ_updatePathWalker,
};
GameObjectDefinition defAlienMind = {
    .teams = 1<<TEAM_ENEMY | 1<<TEAM_ENEMYSHOT,
    .health = 64,
    .damage = 65535,
    .defeatPoints = 10000,
    .spriteDef = &sprAlienMind,
    .spriteDepth = 1,
    .palette = &palAlien,
    .bodyW = FIX16(12), .bodyH = FIX16(12),
    .update = GOBJ_updatePathWalker,
    .onDefeat = MIDBOSS_onDefeat
};
GameObjectDefinition defAcidAntBullet = {
    .teams = 1<<TEAM_ENEMYSHOT,
    .health = 1, .damage = 1,
    .speed = FIX16(3),
    .spriteDef = &sprAcidBullet,
    .spriteDepth = -20,
    .palette = &palAcidAndBeetle,
    .bodyW = FIX16(2), .bodyH = FIX16(2),
    .update = BULLET_updateFalling,
};
GameObjectDefinition defAcidAnt = {
    .teams = 1<<TEAM_ENEMY,
    .health = 1, .speed = FIX16(2),
    .defeatPoints = 300,
    .spriteDef = &sprAnt,
    .spriteDepth = -1,
    .palette = &palAcidAndBeetle,
    .bodyW = FIX16(8), .bodyH = FIX16(6),
    .defeatSoundDef = &sndBugKill1,
    .corpseDef = &defAcidBloodSmall,
    .bulletDef = &defAcidAntBullet,
    .update = GOBJ_updatePathWalker,
    .onDefeat = ENEMY_onDefeatShootUpward
};
GameObjectDefinition defWasp = {
    .teams = 1<<TEAM_ENEMY | 1<<TEAM_ENEMYSHOT,
    .health = 3, .speed = FIX16(1),
    .damage = 1,
    .defeatPoints = 750,
    .spriteDef = &sprWasp,
    .spriteDepth = 10,
    .pathParent = PATHPARENT_TRIGGER,
    .palette = &palWaspAndHoney,
    .bodyW = FIX16(12), .bodyH = FIX16(10),
    .defeatSoundDef = &sndBugKill2,
    .corpseDef = &defAcidBloodSmall,
    .update = GOBJ_updatePathWalker,
};
GameObjectDefinition defReinforcedHoneyPot = {
    .teams = 1<<TEAM_ENEMY,
    .health = 16,
    .spriteDef = &sprHoneyPot,
    .spriteDepth = -1,
    .palette = &palWaspShooterAndReinforcedHoney,
    .bodyW = FIX16(8), .bodyH = FIX16(8),
    .defeatSoundDef = &sndBreakPot,
    .update = GOBJ_updateIdleOnStage,
    .onDefeat = GOBJ_openReinforcedHoneypot,
};
GameObjectDefinition defAntHole = {
    .bodyW = FIX16(8), .bodyH = FIX16(10),
    .spriteDef = &sprAntHole,
    .spriteDepth = 0,
    .palette = &palPlayerAndBG,
    .update = GOBJ_updateSpawner,
};
GameObjectDefinition defBeetleBullet = {
    .teams = 1<<TEAM_ENEMYSHOT,
    .health = 1, .damage = 1,
    .speed = FIX16(2),
    .spriteDef = &sprAcidBullet,
    .spriteDepth = -20,
    .palette = &palAcidAndBeetle,
    .bodyW = FIX16(2), .bodyH = FIX16(2),
    .update = BULLET_update,
    .soundWhenFiredDef = &sndLiquidShot
};
GameObjectDefinition defBeetle = {
    .teams = 1<<TEAM_ENEMY,
    .health = 25, .speed = FIX16(.5),
    .defeatPoints = 5000,
    .spriteDef = &sprBeetle,
    .spriteDepth = -1,
    .palette = &palAcidAndBeetle,
    .bodyW = FIX16(12), .bodyH = FIX16(12),
    .defeatSoundDef = &sndBugKill2,
    .corpseDef = &defAcidBloodMedium,
    .bulletDef = &defBeetleBullet,
    .update = GOBJ_updatePathWalker,
    .shootFunction = ENEMY_beetleShoot
};
GameObjectDefinition defWaspShooter = {
    .teams = 1<<TEAM_ENEMY | 1<<TEAM_ENEMYSHOT,
    .health = 2, .speed = FIX16(1),
    .damage = 1,
    .defeatPoints = 750,
    .spriteDef = &sprWasp,
    .spriteDepth = 10,
    .pathParent = PATHPARENT_TRIGGER,
    .palette = &palWaspShooterAndReinforcedHoney,
    .bodyW = FIX16(12), .bodyH = FIX16(10),
    .defeatSoundDef = &sndBugKill2,
    .corpseDef = &defAcidBloodSmall,
    .update = GOBJ_updatePathWalker,
    .bulletDef = &defWaspBullet,
    .shootFunction = ENEMY_shootAtPlayer
};
GameObjectDefinition defBGFragment = {
    .teams = 1<<TEAM_ENEMY,
    .health = 1,
    .defeatPoints = 250,
    .spriteDef = &sprBGFragment,
    .spriteDepth = -20,
    .palette = &palPlayerAndBG,
    .defeatSoundDef = &sndBreakPot,
    .corpseDef = &defHoneyBlood,
    .bodyW = FIX16(8), .bodyH = FIX16(8),
    .init = GOBJ_initExplosionFragment,
    .update = GOBJ_updateFaller,
};
GameObjectDefinition defWaspBoss = {
    .teams = 1<<TEAM_ENEMY | 1<<TEAM_ENEMYSHOT,
    .speed = FIX16(4),
    .health = 100,
    .damage = 65535,
    .defeatPoints = 25000,
    .spriteDef = &sprWaspBoss,
    .spriteDepth = 10,
    .bulletDef = &defFlyBullet,
    .palette = &palWaspAndHoney,
    .bodyW = FIX16(28), .bodyH = FIX16(12),
    .init = BOSS_init,
    .update = GOBJ_updatePathWalker,
    .onDefeat = BOSS_onDefeat
};
GameObjectDefinition defWaspEgg = {
    .teams = 1<<TEAM_ENEMY,
    .health = 6,
    .defeatSoundDef = &sndBugKill1,
    .defeatPoints = 2500,
    .spriteDef = &sprWaspEgg,
    .spriteDepth = 10,
    .palette = &palWaspAndHoney,
    .bodyW = FIX16(4), .bodyH = FIX16(4),
    .corpseDef = &defAcidBloodSmall,
    .update = ENEMY_updateEggWaitingToHatch,
    .onDefeat = ENEMY_defeatBossChild
};
GameObjectDefinition defWaspHatch = {
    .teams = 1<<TEAM_ENEMY | 1<<TEAM_ENEMYSHOT,
    .health = 3, .speed = FIX16(1),
    .damage = 1,
    .defeatPoints = 750,
    .spriteDef = &sprWasp,
    .spriteDepth = 10,
    .pathParent = PATHPARENT_TRIGGER,
    .palette = &palWaspAndHoney,
    .bodyW = FIX16(12), .bodyH = FIX16(10),
    .defeatSoundDef = &sndBugKill2,
    .corpseDef = &defAcidBloodSmall,
    .animInd = ANI_WASP_BIRTH,
    .update = ENEMY_updateWaspHatching,
    .onDefeat = ENEMY_defeatBossChild
};
GameObjectDefinition defWaspBossPiece = {
    .spriteDef = &sprWaspBoss,
    .spriteDepth = -50,
    .palette = &palWaspAndHoney,
    .init = GOBJ_initSprite,
    .update = GOBJ_updateFaller,
    .bodyW = FIX16(64), .bodyH = FIX16(64),
};
GameObjectDefinition defBonusLetter = {
    .teams = 1<<TEAM_ENEMY,
    .health = 30,
    .spriteDef = &sprBonusLetter,
    .spriteDepth = -1,
    .palette = &palPlayerAndBG,
    .bodyW = FIX16(8), .bodyH = FIX16(8),
    .corpseDef = &defHoneyBlood,
    .init = ENEMY_initBonusLetter,
    .update = ENEMY_updateBonusLetter,
    .onDefeat = ENEMY_defeatBonusLetter
};

GameObjectDefinition *commondefs[8] = {
    &defPlayer,
    &defPlayerShot,
    &defHit,
    &defBloodSmall,
    &defBloodMedium,
    &defPowerup,
    &defHoneyPot,
    // &defPlayerBlood,
    &defBonusLetter
};

GameObjectDefinition *part1defs[8] = {
    &defAnt,
    &defFlyBullet,
    &defFly,
    &defAntBig,
    &defAntBigHead,
    &defAntBigButt,
    &defAlienGunner,
    &defAlienMind
};

GameObjectDefinition *part2defs[6] = {
    &defAcidAnt,
    &defAcidAntBullet,
    &defWasp,
    &defWaspBullet,
    &defBeetle,
    &defAntHole
};

GameObjectDefinition *bossdefs[5] = {
    &defWaspBoss,
    &defFlyBullet,
    &defBGFragment,
    &defWaspEgg,
    &defWaspHatch,
};

static u16 levelObjectTileStart;

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
    return tileIndex;
}

void GOBJDEF_freeSpriteFrames(int numDefs, GameObjectDefinition **defs) {
    GameObjectDefinition **def = defs;
    for (int i = 0; i < numDefs; ++i) {
        if ((*def)->aniFrameTiles) {
            MEM_free((*def)->aniFrameTiles);
            (*def)->aniFrameTiles = NULL;
        }
    }
}

u16 GOBJDEF_loadCommonFrames(u16 tileIndex) {
    tileIndex = GOBJDEF_loadSpriteFrames(tileIndex, sizeof(commondefs) / sizeof(GameObjectDefinition*), commondefs);
    defAcidHit.aniFrameTiles = defHit.aniFrameTiles;
    defHoneyCell.aniFrameTiles = defPowerup.aniFrameTiles;
    defTimeExtendPowerup.aniFrameTiles = defPowerup.aniFrameTiles;
    defAcidBloodSmall.aniFrameTiles = defBloodSmall.aniFrameTiles;
    defAcidBloodMedium.aniFrameTiles = defBloodMedium.aniFrameTiles;
    defPlayerBlood.aniFrameTiles = defBloodMedium.aniFrameTiles;
    defReinforcedHoneyPot.aniFrameTiles = defHoneyPot.aniFrameTiles;
    defHoneyBlood.aniFrameTiles = defBloodSmall.aniFrameTiles;
    return tileIndex;
}

void GOBJDEF_freeCommonFrames() {
    defAcidHit.aniFrameTiles = NULL;
    defHoneyCell.aniFrameTiles = NULL;
    defTimeExtendPowerup.aniFrameTiles = NULL;
    defAcidBloodSmall.aniFrameTiles = NULL;
    defAcidBloodMedium.aniFrameTiles = NULL;
    defPlayerBlood.aniFrameTiles = NULL;
    defReinforcedHoneyPot.aniFrameTiles = NULL;
    defHoneyBlood.aniFrameTiles = NULL;
    GOBJDEF_freeSpriteFrames(sizeof(commondefs) / sizeof(GameObjectDefinition*), commondefs);
}

u16 GOBJDEF_loadPart1EnemyFrames(u16 tileIndex) {
    levelObjectTileStart = tileIndex;
    tileIndex = GOBJDEF_loadSpriteFrames(tileIndex, sizeof(part1defs) / sizeof(GameObjectDefinition*), part1defs);
    defAngleTester.aniFrameTiles = defFlyBullet.aniFrameTiles;
    defAlienPillager.aniFrameTiles = defAlienGunner.aniFrameTiles;
    defAlienGunnerBullet.aniFrameTiles = defFlyBullet.aniFrameTiles;
    defPlayerShot.corpseDef = &defHit;
    return tileIndex;
}

u16 GOBJDEF_freePart1EnemyFrames() {
    defAngleTester.aniFrameTiles = NULL;
    defAlienPillager.aniFrameTiles = NULL;
    defAlienGunnerBullet.aniFrameTiles = NULL;
    GOBJDEF_freeSpriteFrames(sizeof(part1defs) / sizeof(GameObjectDefinition*), part1defs);
    return levelObjectTileStart;
}

u16 GOBJDEF_loadPart2EnemyFrames(u16 tileIndex) {
    levelObjectTileStart = tileIndex;
    tileIndex = GOBJDEF_loadSpriteFrames(tileIndex, sizeof(part2defs) / sizeof(GameObjectDefinition*), part2defs);
    defWaspShooter.aniFrameTiles = defWasp.aniFrameTiles;
    defBeetleBullet.aniFrameTiles = defAcidAntBullet.aniFrameTiles;
    defPlayerShot.corpseDef = &defAcidHit;
    return tileIndex;
}

u16 GOBJDEF_freePart2EnemyFrames() {
    defWaspShooter.aniFrameTiles = NULL;
    defBeetleBullet.aniFrameTiles = NULL;
    GOBJDEF_freeSpriteFrames(sizeof(part2defs) / sizeof(GameObjectDefinition*), part2defs);
    return levelObjectTileStart;
}

u16 GOBJDEF_loadBossFrames(u16 tileIndex) {
    levelObjectTileStart = tileIndex;
    tileIndex = GOBJDEF_loadSpriteFrames(tileIndex, sizeof(bossdefs) / sizeof(GameObjectDefinition*), bossdefs);
    defWaspBossPiece.aniFrameTiles = defWaspBoss.aniFrameTiles;
    defWaspShooter.aniFrameTiles = defWaspHatch.aniFrameTiles;
    defPlayerShot.corpseDef = &defAcidHit;
    return tileIndex;
}

u16 GOBJDEF_freeBossFrames() {
    defWaspBossPiece.aniFrameTiles = NULL;
    defWaspShooter.aniFrameTiles = NULL;
    GOBJDEF_freeSpriteFrames(sizeof(bossdefs) / sizeof(GameObjectDefinition*), bossdefs);
    return levelObjectTileStart;
}