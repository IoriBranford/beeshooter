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
    const SpriteDefinition *spriteDef;
    const Palette *palette;
    u16 **aniFrameTiles;
    fix16 bodyW, bodyH;
    Team team;
    PathParent pathParent;
    void (*update)(GameObject*);
    void (*onDefeat)(GameObject*);
};

u16 GOBJDEF_loadSpriteFrames(u16 tileIndex, int numDefs, GameObjectDefinition **defs);
void GOBJDEF_freeSpriteFrames(int numDefs, GameObjectDefinition **defs);

extern GameObjectDefinition
    defHoneyPot,
    defPowerup,
    defAnt,
    defFlyBullet,
    defFly,
    defAntBig,
    defAntBigHead,
    defAntBigButt,
    defAlienGunner,
    defAlienPillager;

extern GameObjectDefinition *part1defs[8];

#endif