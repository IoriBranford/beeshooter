#include "gobject.h"
#include "gobjdef.h"
#include "gameplay.h"
#include "player.h"
#include "maths.h"
#include "moremath.h"

void BULLET_update(GameObject *self) {
    self->centerX += self->velX;
    self->centerY += self->velY;
    GOBJ_updateBody(self);
    if (GOBJ_isBodyOnScreen(self)) {
        GOBJ_updateSprite(self);
    } else {
        GAME_releaseObject(self);
    }
}

void BULLET_updateFalling(GameObject *self) {
    const fix16 GRAVITY = FIX16(.125);
    fix16 lastVelY = self->velY;
    self->velY += GRAVITY;
    if (lastVelY < 0 && self->velY >= 0)
        SPR_setVFlip(self->sprite, false);
    BULLET_update(self);
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

void BULLET_updateSpriteDirectionXY(GameObject *self, fix16 dx, fix16 dy) {
    if (!self->sprite)
        GOBJ_initSprite(self);
    if (!self->sprite)
        return;

    u16 anim;
    u16 numAnim = self->sprite->definition->numAnimation;
    if (dx == 0) {
        anim = numAnim - 1;
    } else if (abs(dy) == abs(dx)) {
        anim = numAnim >> 1;
    } else if (abs(dy) < abs(dx)) {
        fix16 ratio = abs(fix16Div(dy, dx));
        fix16 fAnim = FIX16(0.5) + (ratio * numAnim >> 1);
        anim = fix16ToInt(fAnim);
    } else {
        fix16 ratio = abs(fix16Div(dx, dy));
        fix16 fAnim = FIX16(0.5) + (ratio * numAnim >> 1);
        anim = fix16ToInt(FIX16(numAnim) - fAnim);
    }

    SPR_setAnim(self->sprite, anim);
    SPR_setHFlip(self->sprite, dx < 0);
    SPR_setVFlip(self->sprite, dy < 0);
}

void BULLET_updateAngleTester(GameObject *self) {
    PlayerObject *player = GAME_livePlayer();
    if (!player)
        return;
    fix16 dx = player->centerX - self->centerX;
    fix16 dy = player->centerY - self->centerY;
    BULLET_updateSpriteDirectionXY(self, dx, dy);
}

GameObject* BULLET_shootAtVelocity(fix16 centerX, fix16 centerY, fix16 velX, fix16 velY, const GameObjectDefinition *def) {
    GameObject *self = GOBJ_createFromDef(def, centerX, centerY);
    if (self) {
        self->velX = velX;
        self->velY = velY;
        BULLET_updateSpriteDirectionXY(self, velX, velY);
        if (def->soundWhenFiredDef)
            SND_playDef(def->soundWhenFiredDef);
    }
    return self;
}

GameObject* BULLET_shootAtVector(fix16 centerX, fix16 centerY, fix16 dx, fix16 dy, const GameObjectDefinition *def) {
    fix16 dist = FIX16(getApproximatedDistance(fix16ToInt(dx), fix16ToInt(dy)));
    fix16 velX = 0, velY = 0;
    if (dist) {
        fix16 speed = def->speed;
        velX = fix16Mul(fix16Div(dx, dist), speed);
        velY = fix16Mul(fix16Div(dy, dist), speed);
    }
    return BULLET_shootAtVelocity(centerX, centerY, velX, velY, def);
}

GameObject* BULLET_shootAtAngleSpeed(fix16 centerX, fix16 centerY, u16 angle, fix16 speed, const GameObjectDefinition *def) {
    fix16 velX = fix16Mul(speed, cosFix16(angle));
    fix16 velY = fix16Mul(speed, sinFix16(angle));
    return BULLET_shootAtVelocity(centerX, centerY, velX, velY, def);
}

GameObject* BULLET_shootAtTarget(fix16 centerX, fix16 centerY, GameObject *target, const GameObjectDefinition *def) {
    fix16 dx = 0, dy = 0;
    if (target) {
        dx = target->centerX - centerX;
        dy = target->centerY - centerY;
    }
    return BULLET_shootAtVector(centerX, centerY, dx, dy, def);
}