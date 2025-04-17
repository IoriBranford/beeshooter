#include "player.h"
#include "bullet.h"
#include "gameplay.h"
#include "hud.h"
#include "sprite.h"
#include "gjoy.h"
#include <genesis.h>

#include "gobjdef.h"
#include "sounddef.h"
#include "res_gfx.h"
#include "res_audio.h"
#include "anim.h"

const u8 SHOOTINTERVAL = 6;
const fix16 MARGIN = FIX16(8);
static const u32 POWERLEVELS = 3;
const SoundPCMChannel WAVCHANNEL = SOUND_PCM_CH2;
const fix16 STARTENTERX = GAME_BOUNDW >> 1;
const fix16 STARTENTERY = GAME_BOUNDH + FIX16(16);
const fix16 ENTERVELY = FIX16(-4);
const fix16 STARTFIGHTY = GAME_BOUNDH - FIX16(28);
const fix16 STARTWINY = -FIX16(28);
#define WIN_BONUS_PER_LIFE 10000
#define WIN_BONUS_PER_SECOND 100
#define WIN_BONUS_FRAMES_PER_LIFE 15
#define WIN_BONUS_FRAMES_PER_SECOND 1
const u8 ENTERINVUL = 240;
const u8 POWERUP_INVUL = 60;
const u8 MERCY_INVUL = 60;
#define BULLETSPEED FIX16(16)
#define BULLETDIAGONALSPEED FIX16(0.707106781 * 16)
#define STING_OFFSET_Y FIX16(12)
#define STING_INTERVAL 3

extern GameObjectDefinition
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
    const GameObjectDefinition *bulletDef = &defPlayerShot;
    const SpriteDefinition *bulletSpriteDef = bulletDef->spriteDef;
    u16 **shotAniFrame = bulletDef->aniFrameTiles;
    for (int w = 0; w < self->health; ++w) {
        PlayerShot *shots = (PlayerShot*)(self->weapon == WEAPON_B ? &PLAYER_WEAPONSB[w] : &PLAYER_WEAPONSA[w]);
        for (int s = 0; s < 2; ++s) {
            const PlayerShot *shot = &shots[s];

            GameObject *bullet = GOBJ_createFromDef(bulletDef,
                self->centerX + shot->offsetX,
                self->centerY + shot->offsetY);

            if (!bullet)
                break;

            bullet->velX = shot->velX;
            bullet->velY = shot->velY;

            u16 attr = TILE_ATTR(PAL_PLAYER_AND_BG, true,
                (shot->animAndFlags & TILE_ATTR_VFLIP_MASK) != 0,
                (shot->animAndFlags & TILE_ATTR_HFLIP_MASK) != 0);
            bullet->sprite = SPR_addSpriteEx(bulletSpriteDef,
                fix16ToRoundedInt(bullet->centerX - FIX16(bulletSpriteDef->w>>1)),
                fix16ToRoundedInt(bullet->centerY - FIX16(bulletSpriteDef->h>>1)),
                attr, 0);
            bullet->sprite->data = (u32)shotAniFrame;
            SPR_setFrameChangeCallback(bullet->sprite, SPR_defaultFrameChange);
            
            u16 anim = shot->animAndFlags & 0xFF;
            SPR_setAnim(bullet->sprite, anim);
            SPR_setDepth(bullet->sprite, bullet->definition->spriteDepth);
        }
    }
}

void PLAYER_initSpriteFrameTimer(PlayerObject *self) {
    switch (self->sprite->animInd) {
        case ANI_PLAYER_FLYA:
        case ANI_PLAYER_FLYB:
            self->sprite->timer = self->speed == PLAYER_FASTSPEED ? 6 : 12;
            break;
    }
}

void PLAYERsprite_onFrameChange(Sprite *sprite) {
    PlayerObject *self = (PlayerObject*)sprite->data;
    u16 **shipAniFrame = self->definition->aniFrameTiles;
    SPR_setVRAMTileIndex(sprite, shipAniFrame[sprite->animInd][sprite->frameInd]);
    PLAYER_initSpriteFrameTimer(self);
}

void PLAYER_updateSpriteFrameTimer(PlayerObject *self) {
    if (!--self->sprite->timer)
        SPR_nextFrame(self->sprite);
}

void PLAYER_setSpeed(PlayerObject *self, fix16 speed) {
    self->speed = speed;
    PLAYER_initSpriteFrameTimer(self);
}

void PLAYER_setWeapon(PlayerObject *self, u8 weapon) {
    self->weapon = weapon;
    switch (self->sprite->animInd) {
        case ANI_PLAYER_FLYA:
        case ANI_PLAYER_FLYB:
            SPR_setAnim(self->sprite, weapon == WEAPON_B ? ANI_PLAYER_FLYB : ANI_PLAYER_FLYA);
            PLAYER_initSpriteFrameTimer(self);
            break;
    }
}

void PLAYER_joyEvent(PlayerObject *self, u16 button, u16 state) {
    if (button & state)
        self->buttonsPressed |= button;
}

void PLAYER_joyUpdateHeld(PlayerObject *self, u16 state) {
    s16 dirX = ((state & BUTTON_RIGHT) != 0) - ((state & BUTTON_LEFT) != 0);
    s16 dirY = ((state & BUTTON_DOWN ) != 0) - ((state & BUTTON_UP  ) != 0);
    fix16 velX = (dirX * self->speed);
    fix16 velY = (dirY * self->speed);
    velX = max(MARGIN - self->centerX, min(velX, GAME_BOUNDW - MARGIN - self->centerX));
    velY = max(MARGIN - self->centerY, min(velY, GAME_BOUNDH - MARGIN - self->centerY));
    self->centerX += velX;
    self->centerY += velY;

    u16 fireButton = GJOY_getConfig() & BUTTONCONFIG_FIREMASK;

    if (state & fireButton) {
        if (self->shootTimer == 0) {
            self->shootTimer = SHOOTINTERVAL;
            PLAYER_shoot(self);
            SND_playDef(&sndPlayerShot);
        }
    }
}

void PLAYER_joyUpdatePressed(PlayerObject *self) {
    u16 speedButton = (GJOY_getConfig() & BUTTONCONFIG_SPEEDMASK) << 4;
    u16 weaponButton = (GJOY_getConfig() & BUTTONCONFIG_WEAPONMASK) >> 4;

    if (self->buttonsPressed & speedButton) {
        fix16 speed = self->speed;
        if (speed > PLAYER_NORMALSPEED) {
            speed = PLAYER_NORMALSPEED;
            SND_playDef(&sndChangeSpeedSlow);
        } else {
            speed = PLAYER_FASTSPEED;
            SND_playDef(&sndChangeSpeedFast);
        }
        PLAYER_setSpeed(self, speed);
        HUD_updateSpeed(speed);
    }

    if (self->buttonsPressed & weaponButton) {
        PLAYER_setWeapon(self, self->weapon == WEAPON_A ? WEAPON_B : WEAPON_A);
        SND_playDef(&sndChangeWeapon);
        HUD_updateWeaponSelect(self->weapon);
    }

    self->buttonsPressed = 0;
}

void PLAYER_giveInvul(PlayerObject *self, u8 invul) {
    self->invulTimer = max(self->invulTimer, invul);
}

void PLAYER_powerUp(PlayerObject *self) {
    if (self->health < POWERLEVELS) {
        ++self->health;
        HUD_updateWeaponLevel(self->health);
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
        SPR_setVisibility(self->sprite, (self->invulTimer & 1) ? HIDDEN : VISIBLE);
    }
    if (!--self->stingTimer) {
        self->stingTimer = STING_INTERVAL;
        GOBJ_createFromDef(&defPlayerSting, self->centerX, self->centerY + STING_OFFSET_Y);
    }
    PLAYER_joyUpdateHeld(self, JOY_readJoypad(JOY_1));
    PLAYER_joyUpdatePressed(self);
    GOBJ_updateSprite((GameObject*)self);
    PLAYER_updateSpriteFrameTimer(self);
}

void PLAYER_updateEnter(PlayerObject *self) {
    self->centerX = STARTENTERX;
    self->centerY += ENTERVELY;
    if (self->centerY <= STARTFIGHTY) {
        self->centerY = STARTFIGHTY;
        self->stingTimer = STING_INTERVAL;
        self->update = (ObjectCallback*)PLAYER_updatePlay;
    }
    GOBJ_updateSprite((GameObject*)self);
    PLAYER_updateSpriteFrameTimer(self);
}

void PLAYER_spawn(PlayerObject *self) {
    self->lives--;
    self->centerX = STARTENTERX;
    self->centerY = STARTENTERY;
    self->health = 1;
    self->shootTimer = 0;
    self->invulTimer = ENTERINVUL;
    self->update = (ObjectCallback*)PLAYER_updateEnter;
    GOBJ_updateSprite((GameObject*)self);
    SPR_setAutoAnimation(self->sprite, false);
    SPR_setAnimationLoop(self->sprite, true);
    SPR_setAnim(self->sprite, self->weapon == WEAPON_B ? ANI_PLAYER_FLYB : ANI_PLAYER_FLYA);
    PLAYER_initSpriteFrameTimer(self);
    SPR_setVisibility(self->sprite, VISIBLE);
    HUD_updateLives(self->lives);
}

void PLAYER_updateDie(PlayerObject *self) {
    if (SPR_getVisibility(self->sprite) != HIDDEN)
        if (SPR_getAnimationDone(self->sprite))
            SPR_setVisibility(self->sprite, HIDDEN);
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
        GOBJ_createFromDef(&defPlayerBlood, self->centerX, self->centerY - FIX16(16));
        SND_playDef(&sndPlayerDie);
        SPR_setAutoAnimation(self->sprite, true);
        SPR_setAnimationLoop(self->sprite, false);
        SPR_setAnim(self->sprite, ANI_PLAYER_DIE);
        self->centerX = STARTENTERX;
        self->centerY = STARTENTERY;
        self->health = 0;
        self->shootTimer = 255;
        self->update = (ObjectCallback*)PLAYER_updateDie;
        if (!self->lives)
            XGM_stopPlay();
    }
    HUD_updateWeaponLevel(self->health);
}

void PLAYER_init(PlayerObject *self) {
    self->definition = &defPlayer;
    self->lives = 3;
    self->weapon = WEAPON_A;
    self->speed = PLAYER_NORMALSPEED;
    self->buttonsPressed = 0;
    self->sprite = SPR_addSpriteEx(
        &sprPlayer,
        fix16ToInt(STARTENTERX), fix16ToInt(STARTENTERY),
        TILE_ATTR(PAL_PLAYER_AND_BG, TRUE, FALSE, FALSE), 0);
    self->sprite->data = (u32)self;
    SPR_setFrameChangeCallback(self->sprite, PLAYERsprite_onFrameChange);
    SPR_setDepth(self->sprite, self->definition->spriteDepth);
    PLAYER_setWeapon(self, WEAPON_A);
    PLAYER_spawn(self);
}

void PLAYER_updateEndBonusTally(PlayerObject *self) {
    u32 timeLeft = GAME_timeLeft();
    if (self->lives) {
        if (++self->shootTimer >= WIN_BONUS_FRAMES_PER_LIFE) {
            GAME_scorePoints(WIN_BONUS_PER_LIFE);
            HUD_updateLives(--self->lives);
            self->shootTimer = 0;
        }
    } else if (timeLeft) {
        if (++self->shootTimer >= WIN_BONUS_FRAMES_PER_SECOND) {
            GAME_scorePoints(WIN_BONUS_PER_SECOND);
            timeLeft = GAME_addTime(-60);
            self->shootTimer = 0;
        }
    }

    if (self->centerY > STARTWINY) {
        self->centerY += ENTERVELY;
        GOBJ_updateBody((GameObject*)self);
        GOBJ_updateSprite((GameObject*)self);
        PLAYER_updateSpriteFrameTimer(self);
    } else if (!timeLeft && !self->lives) {
        self->update = NULL;
        GAME_end(RESULT_WIN);
    }
}

void PLAYER_startEndBonusTally(PlayerObject *self) {
    GAME_disableExtends();
    SPR_setAutoAnimation(self->sprite, false);
    SPR_setAnimationLoop(self->sprite, true);
    SPR_setAnim(self->sprite, self->weapon == WEAPON_B ? ANI_PLAYER_FLYB : ANI_PLAYER_FLYA);
    PLAYER_initSpriteFrameTimer(self);
    SPR_setVisibility(self->sprite, VISIBLE);
    self->shootTimer = 0;
    self->update = (ObjectCallback*)PLAYER_updateEndBonusTally;
}