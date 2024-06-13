#ifndef _GOBJDEF_H
#define _GOBJDEF_H

#include "types.h"
#include "sprite_eng.h"

typedef struct GameObject GameObject;
typedef struct GameObjectDefinition GameObjectDefinition;

struct GameObjectDefinition {
    u16 health, damage;
    fix16 speed;
    u16 defeatPoints;
    const unsigned char *defeatSound;
    const GameObjectDefinition *bulletDef;
    const SpriteDefinition *spriteDef;
    const Palette *palette;
    u32 animInd;
    void (*update)(GameObject*);
    void (*onDefeat)(GameObject*);
};

#endif