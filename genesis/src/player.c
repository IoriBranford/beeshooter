#include "player.h"
#include "bullet.h"
#include "gameplay.h"

#include <genesis.h>

#include "res_audio.h"
#include "res_gfx.h"

enum PlayerAnimation {
    ANI_FLYA,
    ANI_FLYB,
    ANI_DIE
};

const u8 SHOOTINTERVAL = 6;
const fix16 MARGIN = FIX16(8);
static const u32 POWERLEVELS = 3;
const SoundPCMChannel WAVCHANNEL = SOUND_PCM_CH2;
const fix16 STARTENTERX = GAME_BOUNDW >> 1;
const fix16 STARTENTERY = GAME_BOUNDH + 16;
const fix16 ENTERVELY = FIX16(-4);
const fix16 STARTFIGHTY = GAME_BOUNDH - FIX16(28);
const u8 ENTERINVUL = 240;
const u16 GAMETIME = 60*60;

typedef struct {
    fix16 offsetX, offsetY;
    u16 angle;
} PlayerShot;

static const PlayerShot PLAYER_WEAPONSA[][2] = {
    {
        {.offsetX = -FIX16(8), .angle = 768},
        {.offsetX = FIX16(8), .angle = 768},
    },
    {
        {.angle = 768 - 128},
        {.angle = 768 + 128},
    },
    {
        {.angle = 256 - 128},
        {.angle = 256 + 128},
    },
};

static const PlayerShot PLAYER_WEAPONSB[][2] = {
    {
        {.angle = 768},
        {.angle = 256},
    },
    {
        {.angle = 512},
        {.angle = 0},
    },
    {
        {.angle = 768 - 128},
        {.angle = 768 + 128},
    },
};

void PLAYER_shoot(PlayerObject *self) {
    u16 speed = 16;
    for (int w = 0; w < self->power; ++w) {
        PlayerShot *shots = (PlayerShot*)(self->weapon == WEAPON_B ? &PLAYER_WEAPONSB[w] : &PLAYER_WEAPONSA[w]);
        for (int s = 0; s < 2; ++s) {
            const PlayerShot *shot = &shots[s];

            GameObject *bullet = BULLET_createAS(
                self->centerX + shot->offsetX,
                self->centerY + shot->offsetY,
                shot->angle, speed);

            bullet->sprite = SPR_addSprite(
                &sprPlayerShot,
                fix16ToInt(bullet->centerX), fix16ToInt(bullet->centerY),
                TILE_ATTR(PLAYERPAL, TRUE, bullet->velY < 0, bullet->velX < 0));

            s16 anim = fix16ToInt(abs(sinFix16(shot->angle)) * 2);
            SPR_setAnim(bullet->sprite, anim);
        }
    }
}

void PLAYER_joyUpdate(PlayerObject *self, u16 state) {
    s16 velX = ((state & BUTTON_RIGHT) != 0) - ((state & BUTTON_LEFT) != 0);
    s16 velY = ((state & BUTTON_DOWN ) != 0) - ((state & BUTTON_UP  ) != 0);
    velX = FIX16(velX * self->speed);
    velY = FIX16(velY * self->speed);
    velX = max(MARGIN - self->centerX, min(velX, GAME_BOUNDW - MARGIN - self->centerX));
    velY = max(MARGIN - self->centerY, min(velY, GAME_BOUNDH - MARGIN - self->centerY));
    self->centerX += velX;
    self->centerY += velY;

    if (state & BUTTON_B) {
        if (self->shootTimer == 0) {
            self->shootTimer = SHOOTINTERVAL;
            PLAYER_shoot(self);
            XGM2_playPCMEx(wavPlayerShot, sizeof(wavPlayerShot), WAVCHANNEL, 8, false, false);
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
            u8 speed;
            if (self->speed > 2) {
                speed = 2;
                XGM2_playPCMEx(wavChangeSpeedSlow, sizeof(wavChangeSpeedSlow), WAVCHANNEL, 15, false, false);
            } else {
                speed = 4;
                XGM2_playPCMEx(wavChangeSpeedFast, sizeof(wavChangeSpeedFast), WAVCHANNEL, 15, false, false);
            }
            PLAYER_setSpeed(self, speed);
        } else if (button == BUTTON_C) {
            PLAYER_setWeapon(self, self->weapon == WEAPON_A ? WEAPON_B : WEAPON_A);
            XGM2_playPCMEx(wavChangeWeapon, sizeof(wavChangeWeapon), WAVCHANNEL, 15, false, false);
        }
    }
}

void PLAYER_updateSprite(PlayerObject *self) {
    SPR_setVisibility(self->sprite, (self->invulTimer % 2) ? HIDDEN : VISIBLE);
    GOBJ_updateSprite((GameObject*)self);
}

void PLAYER_updatePlay(PlayerObject *self) {
    if (self->timeLeft)
        self->timeLeft--;
    if (self->shootTimer)
        self->shootTimer--;
    if (self->invulTimer)
        self->invulTimer--;
    PLAYER_joyUpdate(self, JOY_readJoypad(JOY_1));
    PLAYER_updateSprite(self);
}

void PLAYER_updateEnter(PlayerObject *self) {
    self->centerX = STARTENTERX;
    self->centerY += ENTERVELY;
    if (self->centerY <= STARTFIGHTY) {
        self->centerY = STARTFIGHTY;
        self->update = (ObjectCallback*)PLAYER_updatePlay;
    }
    PLAYER_updateSprite(self);
}

void PLAYER_spawn(PlayerObject *self) {
    self->lives--;
    self->centerX = STARTENTERX;
    self->centerY = STARTENTERY;
    self->power = 1;
    self->shootTimer = 0;
    self->invulTimer = ENTERINVUL;
    self->update = (ObjectCallback*)PLAYER_updateEnter;
}

void PLAYER_init(PlayerObject *self) {
    self->score = 0;
    self->timeLeft = GAMETIME;
    self->lives = 3;
    self->weapon = WEAPON_A;
    self->speed = 2;
    self->sprite = SPR_addSprite(
        &sprPlayer,
        fix16ToInt(STARTENTERX), fix16ToInt(STARTENTERY),
        TILE_ATTR(PLAYERPAL, TRUE, FALSE, FALSE));
    SPR_setAnim(self->sprite, self->weapon ? ANI_FLYB : ANI_FLYA);
    PLAYER_setWeapon(self, WEAPON_A);
    PLAYER_spawn(self);
}