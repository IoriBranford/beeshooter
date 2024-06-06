#include "player.h"
#include "res_gfx.h"

const fix16 MARGIN = FIX16(8);

void PLAYER_joyUpdate(PlayerObject *self, u16 state) {
    s16 velX = ((state & BUTTON_RIGHT) != 0) - ((state & BUTTON_LEFT) != 0);
    s16 velY = ((state & BUTTON_DOWN ) != 0) - ((state & BUTTON_UP  ) != 0);
    velX = FIX16(velX * self->speed);
    velY = FIX16(velY * self->speed);
    self->centerX = max(MARGIN, min(self->centerX + velX, FIX16(256) - MARGIN));
    self->centerY = max(MARGIN, min(self->centerY + velY, FIX16(224) - MARGIN));

    if (state & BUTTON_B) {
        if (self->shootTimer == 0) {
            self->shootTimer = 6;
            // fire
        }
    }
}

void PLAYER_joyEvent(PlayerObject *self, u16 button, u16 state) {
    if (state & button) {
        if (button == BUTTON_A) {
            self->speed = self->speed > 2 ? 2 : 4;
        } else if (button == BUTTON_C) {
            self->weapon = !self->weapon;
        }
    }
}

void PLAYER_updatePlay(PlayerObject *self) {
    if (self->shootTimer > 0)
        self->shootTimer--;
    PLAYER_joyUpdate(self, JOY_readJoypad(JOY_1));
    GOBJ_updateSprite((GameObject*)self);
}

void PLAYER_init(PlayerObject *self) {
    self->centerX = FIX16(128);
    self->centerY = FIX16(200);
    self->speed = 2;
    self->weapon = 0;
    self->shootTimer = 0;
    self->sprite = SPR_addSprite(&sprPlayer, 128 - 16, 200 - 16, TILE_ATTR(PAL1, TRUE, FALSE, FALSE));
    OBJ_setUpdateMethod((Object*)self, (ObjectCallback*)PLAYER_updatePlay);
}