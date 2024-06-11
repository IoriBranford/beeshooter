#ifndef _GOBJDEF_H
#define _GOBJDEF_H

#include "types.h"

typedef struct GameObject GameObject;

typedef struct GameObjectDefinition {
    u16 health;
    fix16 speed;
    u32 defeatPoints;
    const unsigned char *defeatSound;
    const GameObjectDefinition *bulletDef;
    void (*update)(GameObject*);
    void (*onDefeat)(GameObject*);
} GameObjectDefinition;

#endif