#include "gobject.h"

void GOBJ_updateSprite(GameObject *this) {
    Sprite *sprite = this->sprite;
    if (!sprite)
        return;
    SPR_setPosition(this->sprite,
        fix16ToRoundedInt(this->centerX) - (sprite->definition->w >> 1),
        fix16ToRoundedInt(this->centerY) - (sprite->definition->h >> 1));
}