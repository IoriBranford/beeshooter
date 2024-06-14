#ifndef _GOBJDEF_H
#define _GOBJDEF_H

#include "types.h"
#include "sprite_eng.h"
#include "gameplay.h"
#include "sounddef.h"

typedef struct GameObject GameObject;
typedef struct GameObjectDefinition GameObjectDefinition;

struct GameObjectDefinition {
    u16 health;
    u16 defeatPoints;
    fix16 speed;
    u16 animInd;
    SoundDefinition *defeatSoundDef;
    const GameObjectDefinition *bulletDef;
    const SpriteDefinition *spriteDef;
    const Palette *palette;
    fix16 bodyW, bodyH;
    Team team;
    PathParent pathParent;
    void (*update)(GameObject*);
    void (*onDefeat)(GameObject*);
};

#endif