#ifndef _OBJECT_H
#define _OBJECT_H

#include <genesis.h>

typedef struct {
    Object;
    Sprite *sprite;
    fix16 centerX, centerY;
} GameObject;

void GOBJ_updateSprite(GameObject *this);

#endif