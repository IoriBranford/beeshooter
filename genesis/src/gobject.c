#include "gobject.h"
#include "gameplay.h"
#include "maths.h"

void GOBJ_init(GameObject *self) {
    self->velX = self->velY = 0;
}

bool GOBJ_isRectOverlapping(GameObject *self, fix16 x, fix16 y, fix16 w, fix16 h) {
    Sprite *sprite = self->sprite;
    fix16 hw = FIX16(sprite->definition->w >> 1);
    fix16 hh = FIX16(sprite->definition->h >> 1);
    return (self->centerX + hw > x && self->centerX - hw < x + w
        && self->centerY + hh > y && self->centerY - hh < y + h);
}

bool GOBJ_isSpriteOnScreen(GameObject *self) {
    return GOBJ_isRectOverlapping(self, 0, 0, GAME_BOUNDW, GAME_BOUNDH);
}

void GOBJ_updateSprite(GameObject *self) {
    Sprite *sprite = self->sprite;
    if (!sprite)
        return;
    SPR_setPosition(self->sprite,
        fix16ToRoundedInt(self->centerX) - (sprite->definition->w >> 1),
        fix16ToRoundedInt(self->centerY) - (sprite->definition->h >> 1));
}

void GOBJ_release(GameObject *self) {
    SPR_releaseSprite(self->sprite);
}