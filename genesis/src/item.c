#include "item.h"
#include "gobject.h"
#include "gobjdef.h"
#include "gameplay.h"

#define HONEYPOT_ANI_OPEN 1

#define POWERUP_RISE_DESTX FIX16(128)
#define POWERUP_RISE_DESTY FIX16(36)
#define POWERUP_RISE_SPEED FIX16(8)
#define POWERUP_DESCEND_VELY (FIX16(1)/2)

const fix16 POWERUP_SWAY_SPEED = FIX16(3);
const u32 POWERUP_SWAY_PERIOD = 32;

extern GameObjectDefinition defPowerup;

void GOBJ_openHoneypot(GameObject *self) {
    const GameObjectDefinition *def = self->definition;
    if (def) {
        if (def->defeatSoundDef)
            SND_playDef(def->defeatSoundDef);
        GAME_scorePoints(def->defeatPoints);
    }
    GOBJ_createFromDef(&defPowerup, self->centerX, self->centerY);
    if (self->sprite && HONEYPOT_ANI_OPEN < def->spriteDef->numAnimation)
        SPR_setAnim(self->sprite, HONEYPOT_ANI_OPEN);
    else
        GAME_releaseObject(self);
}

void GOBJ_updatePowerupDescend(GameObject *self) {
    fix32 movedDistY = fix16ToFix32(self->centerY - POWERUP_RISE_DESTY);
    self->velX = fix16Mul(cosFix16(fix32ToInt(movedDistY * 512 / POWERUP_SWAY_PERIOD)), self->speed);
    self->centerX += self->velX;
    self->centerY += self->velY;
    GOBJ_updateSprite(self);
    if (GOBJ_isSpriteOffSideOrBottom(self)) {
        GAME_releaseObject(self);
    }
}

void GOBJ_updatePowerupRise(GameObject *self) {
    if (!self->velX && !self->velY) {
        GOBJ_startMovement(self, POWERUP_RISE_DESTX, POWERUP_RISE_DESTY, POWERUP_RISE_SPEED);
    }
    fix16 velX = self->velX;
    if (GOBJ_updateMovement(self)) {
        self->velY = POWERUP_DESCEND_VELY;
        self->speed = velX < 0 ? -POWERUP_SWAY_SPEED : POWERUP_SWAY_SPEED;
        OBJ_setUpdateMethod((Object*)self, (ObjectCallback*) GOBJ_updatePowerupDescend);
    }
    GOBJ_updateSprite(self);
}