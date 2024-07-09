#ifndef _GOBJDEF_H
#define _GOBJDEF_H

#include "types.h"
#include "sprite_eng.h"
#include "gameplay.h"
#include "sounddef.h"
#include "gobject.h"

struct GameObjectDefinition {
    u16 health;
    u16 damage;
    u16 defeatPoints;
    fix16 speed;
    u16 animInd;
    s16 spriteDepth;
    SoundDefinition *defeatSoundDef;
    const GameObjectDefinition *bulletDef;
    const GameObjectDefinition *corpseDef;
    const SpriteDefinition *spriteDef;
    const Palette *palette;
    u16 **aniFrameTiles;
    fix16 bodyW, bodyH;
    Team team;
    PathParent pathParent;
    GObjFunction init;
    GObjFunction update;
    GObjFunction onDefeat;
    GObjFunction shootFunction;
};

u16 GOBJDEF_loadCommonFrames(u16 tileIndex);
void GOBJDEF_freeCommonFrames();
u16 GOBJDEF_loadPart1EnemyFrames(u16 tileIndex);
u16 GOBJDEF_freePart1EnemyFrames();
u16 GOBJDEF_loadPart2EnemyFrames(u16 tileIndex);
u16 GOBJDEF_freePart2EnemyFrames();

extern GameObjectDefinition
    defBloodSmall,
    defAngleTester,
    defHoneyPot,
    defPowerup,
    defAnt,
    defFlyBullet,
    defFly,
    defAntBig,
    defAntBigHead,
    defAntBigButt,
    defAlienGunner,
    defAlienPillager,
    defAcidAntBullet;

#endif