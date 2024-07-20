#include "item.h"
#include "gobject.h"
#include "gobjdef.h"
#include "gameplay.h"
#include "anim.h"
#include "level.h"
#include "player.h"

#define POWERUP_RISE_DESTX FIX16(128)
#define POWERUP_RISE_DESTY FIX16(36)
#define POWERUP_RISE_SPEED FIX16(8)
#define POWERUP_DESCEND_VELY (FIX16(1)/2)

const fix16 POWERUP_SWAY_SPEED = FIX16(3);
const u32 POWERUP_SWAY_PERIOD = 32;

extern GameObjectDefinition defPowerup;

void GOBJ_openHoneypot(GameObject *self, u16 numPowerups) {
    const GameObjectDefinition *def = self->definition;
    if (def) {
        if (def->defeatSoundDef)
            SND_playDef(def->defeatSoundDef);
        GAME_scorePoints(def->defeatPoints);
    }
    if (numPowerups <= 1) {
        GOBJ_createFromDef(&defPowerup, self->centerX, self->centerY);
    } else {
        GOBJ_createFromDef(&defPowerup, self->centerX - FIX16(1), self->centerY);
        GOBJ_createFromDef(&defPowerup, self->centerX + FIX16(1), self->centerY);
    }
    if (self->levelObject && self->levelObject->child) {
        LEVEL_createObject(self->levelObject->child);
    }
    if (self->sprite && ANI_POT_OPEN < def->spriteDef->numAnimation)
        SPR_setAnim(self->sprite, ANI_POT_OPEN);
    else
        GAME_releaseObject(self);
}

void GOBJ_openStandardHoneypot(GameObject *self) {
    GOBJ_openHoneypot(self, 1);
}

void GOBJ_openReinforcedHoneypot(GameObject *self) {
    GOBJ_openHoneypot(self, 2);
}

void GOBJ_updatePowerupDescend(GameObject *self) {
    fix32 movedDistY = fix16ToFix32(self->centerY - POWERUP_RISE_DESTY);
    self->velX = fix16Mul(cosFix16(fix32ToInt(movedDistY * 512 / POWERUP_SWAY_PERIOD)), self->speed);
    self->centerX += self->velX;
    self->centerY += self->velY;
    GOBJ_updateBody(self);
    if (GOBJ_isBodyOffBottom(self)) {
        GAME_releaseObject(self);
    } else {
        GOBJ_updateSprite(self);
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
    GOBJ_updateBody(self);
    GOBJ_updateSprite(self);
}

void GOBJ_pickupPowerup(GameObject *self) {
    PlayerObject *player = GAME_livePlayer();
    if (player)
        PLAYER_powerUp(player);
    GOBJ_defaultDefeatAction(self);
}