#include "player.h"
#include "bullet.h"
#include "gameplay.h"
#include "ui.h"

#include <genesis.h>

#include "gobjdef.h"
#include "sounddef.h"
#include "res_gfx.h"
#include "res_audio.h"

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
const fix16 STARTENTERY = GAME_BOUNDH + FIX16(16);
const fix16 ENTERVELY = FIX16(-4);
const fix16 STARTFIGHTY = GAME_BOUNDH - FIX16(28);
const u8 ENTERINVUL = 240;
const u8 POWERUP_INVUL = 60;
const u8 MERCY_INVUL = 60;
#define BULLETSPEED FIX16(16)
#define BULLETDIAGONALSPEED FIX16(0.707106781 * 16)

extern const GameObjectDefinition
    defPlayer,
    defPlayerShot;

enum {
    BULLET_ANI_0,
    BULLET_ANI_45,
    BULLET_ANI_90
};

typedef struct {
    fix16 offsetX, offsetY;
    fix16 velX, velY;
    u16 animAndFlags;
} PlayerShot;

static const PlayerShot PLAYER_WEAPONSA[][2] = {
    {
        {.offsetX = -FIX16(6), .velY = -BULLETSPEED, .animAndFlags = BULLET_ANI_90|TILE_ATTR_VFLIP_MASK},
        {.offsetX = FIX16(6), .velY = -BULLETSPEED, .animAndFlags = BULLET_ANI_90|TILE_ATTR_VFLIP_MASK},
    },
    {
        {.velX = -BULLETDIAGONALSPEED, .velY = -BULLETDIAGONALSPEED, .animAndFlags = BULLET_ANI_45|TILE_ATTR_HFLIP_MASK|TILE_ATTR_VFLIP_MASK},
        {.velX = BULLETDIAGONALSPEED, .velY = -BULLETDIAGONALSPEED, .animAndFlags = BULLET_ANI_45|TILE_ATTR_VFLIP_MASK},
    },
    {
        {.velX = BULLETDIAGONALSPEED, .velY = BULLETDIAGONALSPEED, .animAndFlags = BULLET_ANI_45|0},
        {.velX = -BULLETDIAGONALSPEED, .velY = BULLETDIAGONALSPEED, .animAndFlags = BULLET_ANI_45|TILE_ATTR_HFLIP_MASK},
    },
};

static const PlayerShot PLAYER_WEAPONSB[][2] = {
    {
        {.velY = BULLETSPEED, .animAndFlags = BULLET_ANI_90},
        {.velY = -BULLETSPEED, .animAndFlags = BULLET_ANI_90|TILE_ATTR_VFLIP_MASK},
    },
    {
        {.velX = BULLETSPEED, .animAndFlags = BULLET_ANI_0},
        {.velX = -BULLETSPEED, .animAndFlags = BULLET_ANI_0|TILE_ATTR_HFLIP_MASK},
    },
    {
        {.velX = -BULLETDIAGONALSPEED, .velY = -BULLETDIAGONALSPEED, .animAndFlags = BULLET_ANI_45|TILE_ATTR_HFLIP_MASK|TILE_ATTR_VFLIP_MASK},
        {.velX = BULLETDIAGONALSPEED, .velY = -BULLETDIAGONALSPEED, .animAndFlags = BULLET_ANI_45|TILE_ATTR_VFLIP_MASK},
    },
};

void PLAYER_shoot(PlayerObject *self) {
    for (int w = 0; w < self->health; ++w) {
        PlayerShot *shots = (PlayerShot*)(self->weapon == WEAPON_B ? &PLAYER_WEAPONSB[w] : &PLAYER_WEAPONSA[w]);
        for (int s = 0; s < 2; ++s) {
            const PlayerShot *shot = &shots[s];

            GameObject *bullet = GOBJ_createFromDef(&defPlayerShot,
                self->centerX + shot->offsetX,
                self->centerY + shot->offsetY);

            if (!bullet)
                break;

            bullet->velX = shot->velX;
            bullet->velY = shot->velY;
            GOBJ_initSprite(bullet);
            SPR_setAnim(bullet->sprite, shot->animAndFlags & 0xFF);
            SPR_setHFlip(bullet->sprite, (shot->animAndFlags & TILE_ATTR_HFLIP_MASK) != 0);
            SPR_setVFlip(bullet->sprite, (shot->animAndFlags & TILE_ATTR_VFLIP_MASK) != 0);
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
            UI_updateSpeed(speed);
        } else if (button == BUTTON_C) {
            PLAYER_setWeapon(self, self->weapon == WEAPON_A ? WEAPON_B : WEAPON_A);
            SND_playDef(&sndChangeWeapon);
            UI_updateWeaponSelect(self->weapon);
        }
    }
}

void PLAYER_giveInvul(PlayerObject *self, u8 invul) {
    self->invulTimer = max(self->invulTimer, invul);
}

void PLAYER_powerUp(PlayerObject *self) {
    if (self->health < POWERLEVELS) {
        ++self->health;
        UI_updateWeaponLevel(self->health);
    } else {
        GAME_scorePoints(1000);
    }
    PLAYER_giveInvul(self, POWERUP_INVUL);
}

void PLAYER_updatePlay(PlayerObject *self) {
    if (self->shootTimer)
        self->shootTimer--;
    if (self->invulTimer) {
        self->invulTimer--;
        SPR_setVisibility(self->sprite, (self->invulTimer % 2) ? HIDDEN : VISIBLE);
    }
    PLAYER_joyUpdate(self, JOY_readJoypad(JOY_1));
    GOBJ_updateSprite((GameObject*)self);
}

void PLAYER_updateEnter(PlayerObject *self) {
    self->centerX = STARTENTERX;
    self->centerY += ENTERVELY;
    if (self->centerY <= STARTFIGHTY) {
        self->centerY = STARTFIGHTY;
        self->update = (ObjectCallback*)PLAYER_updatePlay;
    }
    GOBJ_updateSprite((GameObject*)self);
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
    UI_updateLives(self->lives);
}

void PLAYER_updateDie(PlayerObject *self) {
    if (--self->invulTimer <= 1) {
        if (self->lives) {
            if (!XGM_isPlaying())
                XGM_startPlay(bgm);
            PLAYER_spawn(self);
        } else {
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
        self->centerX = STARTENTERX;
        self->centerY = STARTENTERY;
        self->health = 0;
        self->shootTimer = 255;
        self->update = (ObjectCallback*)PLAYER_updateDie;
        if (!self->lives)
            XGM_stopPlay();
    }
    UI_updateWeaponLevel(self->health);
}

void PLAYER_init(PlayerObject *self) {
    self->definition = &defPlayer;
    self->lives = 3;
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