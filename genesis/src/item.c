#include "item.h"
#include "gobject.h"
#include "gobjdef.h"
#include "gameplay.h"

#define HONEYPOT_ANI_OPEN 1

#define POWERUP_RISE_DESTX FIX16(128)
#define POWERUP_RISE_DESTY FIX16(40)
#define POWERUP_RISE_SPEED FIX16(8)
#define POWERUP_DESCEND_VELY (FIX16(1)/2)

const int POWERUP_SWAY_SPEED = 3;

extern const GameObjectDefinition defPowerup;

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
