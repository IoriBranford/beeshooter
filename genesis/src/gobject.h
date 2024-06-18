#ifndef _GOBJECT_H
#define _GOBJECT_H

#include "types.h"
#include "maths.h"
#include "object.h"
#include "sprite_eng.h"
#include "level.h"

typedef enum ParentType {
    PARENTTYPE_NONE,
    PARENTTYPE_TRIGGER,
    PARENTTYPE_GAMEOBJECT
} ParentType;

typedef enum PathParent {
    PATHPARENT_LEVEL,
    PATHPARENT_TRIGGER
} PathParent;

typedef struct GameObject {
    Object;

    union {
        Trigger *parentTrigger;
        GameObject *parentObject;
    };
    ParentType parentType;

    const GameObjectDefinition *definition;
    LevelObject *levelObject;

    Sprite *sprite;
    fix16 centerX, centerY;
    fix16 velX, velY;
    fix16 destX, destY;

    Path *path;
    u16 pathIndex;
    fix16 pathPointDistLeft;
    fix16 speed;

    u16 health;
    s16 team;
    u8 invulTimer;
    u8 shootTimer;
    u8 shootInterval;
    u8 shotsLeft;
} GameObject;

bool GOBJ_isSpriteOnScreen(GameObject *self);
bool GOBJ_isSpriteOffSideOrBottom(GameObject *self);

Vect2D_f16 GOBJ_getAnchorPoint(GameObject *self, int ax, int ay);
bool GOBJ_isRectOverlapping(GameObject *self, fix16 x, fix16 y, fix16 w, fix16 h);
bool GOBJ_isHitting(GameObject *self, GameObject *other);

GameObject* GOBJ_createFromDef(const GameObjectDefinition *def, fix16 centerX, fix16 centerY);
void GOBJ_init(GameObject *self);
void GOBJ_initSprite(GameObject *self, u16 attr);
void GOBJ_updateSprite(GameObject *this);
void GOBJ_releaseSprite(GameObject *self);

void GOBJ_dealDamage(GameObject *self, u16 damage);
void GOBJ_defeat(GameObject *self);
void GOBJ_defaultDefeatAction(GameObject *self);

void GOBJ_startShooting(GameObject *self, u8 count, u8 interval);
void GOBJ_updateShooting(GameObject *self);

void GOBJ_startMovement(GameObject *self, fix16 destX, fix16 destY, fix16 speed);
bool GOBJ_updateMovement(GameObject *self);

void GOBJ_updateIdleOnStage(GameObject *self);
void GOBJ_updatePathWalker(GameObject *self);
void GOBJ_followPath(GameObject *self);

#endif