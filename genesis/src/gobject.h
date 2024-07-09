#ifndef _GOBJECT_H
#define _GOBJECT_H

#include "types.h"
#include "maths.h"
#include "object.h"
#include "sprite_eng.h"

typedef struct GameObject GameObject;
typedef void (*GObjFunction)(GameObject *self);

typedef struct GameObjectAction GameObjectAction;
typedef void (*GObjActionFunction)(GameObject *self, const GameObjectAction *action);

typedef struct GameObjectDefinition GameObjectDefinition;
typedef struct Trigger Trigger;
typedef struct Path Path;
typedef struct LevelObject LevelObject;

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
        const Trigger *parentTrigger;
        GameObject *parentObject;
    };
    ParentType parentType;

    const GameObjectDefinition *definition;
    const LevelObject *levelObject;

    Sprite *sprite;
    fix16 centerX, centerY;
    fix16 velX, velY;
    fix16 destX, destY;
    fix16 bodyX0, bodyY0, bodyX1, bodyY1;

    const Path *path;
    u16 pathIndex;
    fix16 pathPointDistLeft;
    fix16 speed;

    u16 health;
    s16 team;
    u8 invulTimer;

    u8 shootTimer;
    u8 shootInterval;
    u8 shotsLeft;
    fix16 shootDirX, shootDirY;
    GObjFunction shootFunction;
} GameObject;

struct GameObjectAction {
    GObjActionFunction action;
    union {
        struct {
            u8 count, interval;
        };
        struct {
            u16 anim;
        };
        struct {
            bool flip;
        };
        struct {
            u8 invulTime;
        };
        struct {
            GObjFunction update;
        };
    };
};

enum {
    DIR_RIGHT,
    DIR_DOWN,
    DIR_LEFT,
    DIR_UP
};

bool GOBJ_isSpriteOnScreen(GameObject *self);
bool GOBJ_isSpriteOffSideOrBottom(GameObject *self);
bool GOBJ_isAllocated(GameObject *self);

Vect2D_f16 GOBJ_getAnchorPoint(GameObject *self, int ax, int ay);
bool GOBJ_isRectOverlapping(GameObject *self, fix16 x, fix16 y, fix16 w, fix16 h);
bool GOBJ_isHitting(GameObject *self, GameObject *other);
bool GOBJ_isBodyOnScreen(GameObject *self);
bool GOBJ_isBodyOffSideOrBottom(GameObject *self);
bool GOBJ_isBodyOffBottom(GameObject *self);
void GOBJ_updateBody(GameObject *self);

GameObject* GOBJ_createFromDef(const GameObjectDefinition *def, fix16 centerX, fix16 centerY);
void GOBJ_init(GameObject *self);
void GOBJ_initSprite(GameObject *self);
void GOBJ_updateSprite(GameObject *self);
void GOBJ_releaseSprite(GameObject *self);

void GOBJ_dealDamage(GameObject *self, u16 damage);
void GOBJ_defeat(GameObject *self);
void GOBJ_defaultDefeatAction(GameObject *self);

void GOBJ_startShooting(GameObject *self, u8 count, u8 interval);
void GOBJ_updateShooting(GameObject *self);

void GOBJ_setInForeground(GameObject *self, bool inForeground);

void GOBJ_startMovement(GameObject *self, fix16 destX, fix16 destY, fix16 speed);
bool GOBJ_updateMovement(GameObject *self);

void GOBJ_updateIdleOnStage(GameObject *self);
void GOBJ_updatePathWalker(GameObject *self);
void GOBJ_followPath(GameObject *self);
void GOBJ_followStage(GameObject *self);

void GOBJ_updateSpawner(GameObject *self);
void GOBJ_updateFaller(GameObject *self);

void GOBJ_updateSpark(GameObject *self);

#endif