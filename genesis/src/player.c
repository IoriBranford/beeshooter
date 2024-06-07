#include "player.h"
#include "res_gfx.h"

enum PlayerWeapon {
    WEAPON_A,
    WEAPON_B
};

enum PlayerAnimation {
    ANI_FLYA,
    ANI_FLYB,
    ANI_DIE
};

const u8 SHOOTINTERVAL = 6;
const fix16 BOUNDW = FIX16(256);
const fix16 BOUNDH = FIX16(224);
const fix16 MARGIN = FIX16(8);

void PLAYER_joyUpdate(PlayerObject *self, u16 state) {
    s16 velX = ((state & BUTTON_RIGHT) != 0) - ((state & BUTTON_LEFT) != 0);
    s16 velY = ((state & BUTTON_DOWN ) != 0) - ((state & BUTTON_UP  ) != 0);
    velX = FIX16(velX * self->speed);
    velY = FIX16(velY * self->speed);
    velX = max(MARGIN - self->centerX, min(velX, BOUNDW - MARGIN - self->centerX));
    velY = max(MARGIN - self->centerY, min(velY, BOUNDH - MARGIN - self->centerY));
    self->centerX += velX;
    self->centerY += velY;

    if (state & BUTTON_B) {
        if (self->shootTimer == 0) {
            self->shootTimer = SHOOTINTERVAL;
            // fire
        }
    }
}

void PLAYER_setSpeed(PlayerObject *self, u8 speed) {
    self->speed = speed;
    s16 animInd = self->sprite->animInd;
    if (animInd == ANI_FLYA || animInd == ANI_FLYB) {
        // set appropriate animation speed
    }
}

void PLAYER_setWeapon(PlayerObject *self, u8 weapon) {
    self->weapon = weapon;
    switch (self->sprite->animInd) {
        case ANI_FLYA:
        case ANI_FLYB:
            SPR_setAnim(self->sprite, weapon == WEAPON_B ? ANI_FLYB : ANI_FLYA);
            PLAYER_setSpeed(self, self->speed);
            break;
    }
}

void PLAYER_joyEvent(PlayerObject *self, u16 button, u16 state) {
    if (state & button) {
        if (button == BUTTON_A) {
            PLAYER_setSpeed(self, self->speed > 2 ? 2 : 4);
        } else if (button == BUTTON_C) {
            PLAYER_setWeapon(self, self->weapon == WEAPON_A ? WEAPON_B : WEAPON_A);
        }
    }
}

void PLAYER_updateSprite(PlayerObject *self) {
    GOBJ_updateSprite((GameObject*)self);
}

void PLAYER_updatePlay(PlayerObject *self) {
    if (self->shootTimer > 0)
        self->shootTimer--;
    PLAYER_joyUpdate(self, JOY_readJoypad(JOY_1));
    PLAYER_updateSprite(self);
}

void PLAYER_init(PlayerObject *self) {
    self->centerX = FIX16(128);
    self->centerY = FIX16(200);
    self->speed = 2;
    self->weapon = WEAPON_A;
    self->shootTimer = 0;
    self->sprite = SPR_addSprite(&sprPlayer, 128 - 16, 200 - 16, TILE_ATTR(PAL1, TRUE, FALSE, FALSE));
    SPR_setAnim(self->sprite, self->weapon ? ANI_FLYB : ANI_FLYA);
    PLAYER_setWeapon(self, WEAPON_A);
    self->update = (ObjectCallback*)PLAYER_updatePlay;
}