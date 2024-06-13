#include "gobject.h"
#include "gobjdef.h"
#include "gameplay.h"
#include "maths.h"

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
    if (self)
        OBJ_setUpdateMethod((Object*)self, (ObjectCallback*)BULLET_update);
    return self;
}

GameObject* BULLET_createVXVY(fix16 centerX, fix16 centerY, fix16 velX, fix16 velY) {
    GameObject *self = BULLET_create();
    if (!self)
        return NULL;
    self->centerX = centerX;
    self->centerY = centerY;
    self->velX = velX;
    self->velY = velY;
    return self;
}

void BULLET_setVelocityAS(GameObject *self, u16 angle, fix16 speed) {
    self->velX = fix16Mul(speed, cosFix16(angle));
    self->velY = fix16Mul(speed, sinFix16(angle));
}

GameObject* BULLET_createAngAndDef(fix16 centerX, fix16 centerY, u16 angle, const GameObjectDefinition *def) {
    GameObject *self = GOBJ_createFromDef(def, centerX, centerY);
    if (!self)
        return NULL;
    BULLET_setVelocityAS(self, angle, self->speed);
    return self;
}