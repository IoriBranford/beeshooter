#include "gobject.h"
#include "gameplay.h"

typedef struct BulletDefinition BulletDefinition;

void BULLET_update(GameObject *self) {
    self->centerX += self->velX;
    self->centerY += self->velY;
    if (GOBJ_isSpriteOnScreen(self)) {
        GOBJ_updateSprite(self);
    } else {
        GAME_releaseObject(self);
    }
}

GameObject* BULLET_create() {
    GameObject *self = GAME_createObject();
    OBJ_setUpdateMethod((Object*)self, (ObjectCallback*)BULLET_update);
    return self;
}

GameObject* BULLET_createVXVY(fix16 centerX, fix16 centerY, fix16 velX, fix16 velY) {
    GameObject *self = BULLET_create();
    self->centerX = centerX;
    self->centerY = centerY;
    self->velX = velX;
    self->velY = velY;
    return self;
}

GameObject* BULLET_createAS(fix16 centerX, fix16 centerY, u16 angle, u16 speed) {
    return BULLET_createVXVY(
        centerX, centerY,
        speed * cosFix16(angle), speed * sinFix16(angle));
}