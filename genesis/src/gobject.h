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

    u16 health;
} GameObject;

bool GOBJ_isSpriteOnScreen(GameObject *self);
Vect2D_f16 GOBJ_getAnchorPoint(GameObject *self, int ax, int ay);
bool GOBJ_isRectOverlapping(GameObject *self, fix16 x, fix16 y, fix16 w, fix16 h);

GameObject* GOBJ_createFromDef(const GameObjectDefinition *def, fix16 centerX, fix16 centerY);
void GOBJ_init(GameObject *self);
void GOBJ_initSprite(GameObject *self, u16 attr);
void GOBJ_updateSprite(GameObject *this);
void GOBJ_release(GameObject *self);

void GOBJ_updateIdleOnStage(GameObject *self);
void GOBJ_updatePathWalker(GameObject *self);
void GOBJ_followPath(GameObject *self);

#endif