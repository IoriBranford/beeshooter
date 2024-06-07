#ifndef _GOBJECT_H
#define _GOBJECT_H

#include "types.h"
#include "object.h"
#include "sprite_eng.h"

typedef struct {
    Object;
    Sprite *sprite;
    fix16 centerX, centerY;
    fix16 velX, velY;
} GameObject;

bool GOBJ_isSpriteOnScreen(GameObject *self);
bool GOBJ_isRectOverlapping(GameObject *self, fix16 x, fix16 y, fix16 w, fix16 h);

void GOBJ_init(GameObject *self);
void GOBJ_updateSprite(GameObject *this);
void GOBJ_release(GameObject *self);

#endif