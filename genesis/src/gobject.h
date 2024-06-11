#ifndef _GOBJECT_H
#define _GOBJECT_H

#include "types.h"
#include "maths.h"
#include "object.h"
#include "sprite_eng.h"
#include "level.h"

typedef struct GameObject {
    Object;

    const GameObjectDefinition *definition;
    LevelObjectGroup *group;

    Sprite *sprite;
    fix16 centerX, centerY;
    fix16 velX, velY;
    Path *path;
    u16 pathIndex;
    fix16 speed;
} GameObject;

bool GOBJ_isSpriteOnScreen(GameObject *self);
Vect2D_f16 GOBJ_getAnchorPoint(GameObject *self, int ax, int ay);
bool GOBJ_isRectOverlapping(GameObject *self, fix16 x, fix16 y, fix16 w, fix16 h);

void GOBJ_init(GameObject *self);
void GOBJ_updateSprite(GameObject *this);
void GOBJ_release(GameObject *self);

#endif