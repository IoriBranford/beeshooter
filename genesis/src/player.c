#include "player.h"
#include "bullet.h"
#include "gameplay.h"

#include <genesis.h>

#include "gobjdef.h"
#include "sounddef.h"
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
const u8 POWERUP_INVUL = 60;
const u8 MERCY_INVUL = 60;

extern const GameObjectDefinition
    defPlayer,
    defPlayerShot;

typedef struct {
    fix16 offsetX, offsetY;
    u16 angle;
} PlayerShot;

static const PlayerShot PLAYER_WEAPONSA[][2] = {
    {
        {.offsetX = -FIX16(6), .angle = 768},
        {.offsetX = FIX16(6), .angle = 768},
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
    for (int w = 0; w < self->health; ++w) {
        PlayerShot *shots = (PlayerShot*)(self->weapon == WEAPON_B ? &PLAYER_WEAPONSB[w] : &PLAYER_WEAPONSA[w]);
        for (int s = 0; s < 2; ++s) {
            const PlayerShot *shot = &shots[s];

            GameObject *bullet = BULLET_createAngAndDef(
                self->centerX + shot->offsetX,
                self->centerY + shot->offsetY,
                shot->angle, &defPlayerShot);

            if (!bullet)
                break;
        }
    }
}

void PLAYER_joyUpdate(PlayerObject *self, u16 state) {
    s16 dirX = ((state & BUTTON_RIGHT) != 0) - ((state & BUTTON_LEFT) != 0);
    s16 dirY = ((state & BUTTON_DOWN ) != 0) - ((state & BUTTON_UP  ) != 0);
    fix16 velX = (dirX * self->speed);
    fix16 velY = (dirY * self->speed);
    velX = max(MARGIN - self->centerX, min(velX, GAME_BOUNDW - MARGIN - self->centerX));
    velY = max(MARGIN - self->centerY, min(velY, GAME_BOUNDH - MARGIN - self->centerY));
    self->centerX += velX;
    self->centerY += velY;

    if (state & BUTTON_B) {
        if (self->shootTimer == 0) {
            self->shootTimer = SHOOTINTERVAL;
            PLAYER_shoot(self);
            SND_playDef(&sndPlayerShot);
        }
    }
}

void PLAYER_setSpeed(PlayerObject *self, fix16 speed) {
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
            fix16 speed = self->speed;
            if (speed > PLAYER_NORMALSPEED) {
                speed = PLAYER_NORMALSPEED;
                SND_playDef(&sndChangeSpeedSlow);
            } else {
                speed = PLAYER_FASTSPEED;
                SND_playDef(&sndChangeSpeedFast);
            }
            PLAYER_setSpeed(self, speed);
        } else if (button == BUTTON_C) {
            PLAYER_setWeapon(self, self->weapon == WEAPON_A ? WEAPON_B : WEAPON_A);
            SND_playDef(&sndChangeWeapon);
        }
    }
}

void PLAYER_giveInvul(PlayerObject *self, u8 invul) {
    self->invulTimer = max(self->invulTimer, invul);
}

void PLAYER_powerUp(PlayerObject *self) {
    if (self->health < POWERLEVELS)
        ++self->health;
    else
        GAME_scorePoints(1000);
    PLAYER_giveInvul(self, POWERUP_INVUL);
}

void PLAYER_updateSprite(PlayerObject *self) {
    SPR_setVisibility(self->sprite, (self->invulTimer % 2) ? HIDDEN : VISIBLE);
    GOBJ_updateSprite((GameObject*)self);
}

void PLAYER_updatePlay(PlayerObject *self) {
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
    self->health = 1;
    self->shootTimer = 0;
    self->invulTimer = ENTERINVUL;
    self->update = (ObjectCallback*)PLAYER_updateEnter;
    SPR_setVisibility(self->sprite, VISIBLE);
}

void PLAYER_updateDie(PlayerObject *self) {
    if (--self->invulTimer <= 1) {
        if (self->lives)
            PLAYER_spawn(self);
        else {
            GAME_end(RESULT_LOSE_KILLED);
            self->update = NULL;
        }
    }
}

void PLAYER_takeDamage(PlayerObject *self, u16 damage) {
    PLAYER_giveInvul(self, MERCY_INVUL);
    if (self->health > damage) {
        self->health -= damage;
        SND_playDef(&sndPlayerHurt);
    } else {
        SND_playDef(&sndPlayerDie);
        SPR_setVisibility(self->sprite, HIDDEN);
        self->health = 0;
        self->shootTimer = 255;
        self->update = (ObjectCallback*)PLAYER_updateDie;
    }
}

void PLAYER_init(PlayerObject *self) {
    self->definition = &defPlayer;
    self->lives =1;
    self->weapon = WEAPON_A;
    self->speed = PLAYER_NORMALSPEED;
    self->sprite = SPR_addSprite(
        &sprPlayer,
        fix16ToInt(STARTENTERX), fix16ToInt(STARTENTERY),
        TILE_ATTR(PLAYERPAL, TRUE, FALSE, FALSE));
    SPR_setAnim(self->sprite, self->weapon ? ANI_FLYB : ANI_FLYA);
    SPR_setDepth(self->sprite, self->definition->spriteDepth);
    PLAYER_setWeapon(self, WEAPON_A);
    PLAYER_spawn(self);
}