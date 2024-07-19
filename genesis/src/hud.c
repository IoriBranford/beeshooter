#include <genesis.h>
#include "hud.h"
#include "sprite.h"
#include "ui.h"
#include "res_gfx.h"

static Sprite *weaponSelectSprite, *weaponCursorSprite;
static u16 **weaponSelectFrames, **weaponCursorFrames;

static u16 bonusTimer;

#define BONUS_COLOR_COUNT 4
static const u16 bonusColors[BONUS_COLOR_COUNT] = {
    0xfff, 0xf0f, 0xff0, 0x0ff
};
#define BONUS_COLOR_INDEX ((PAL_PLAYER_AND_BG<<4) + 13)

static char string[32];

u16 HUD_loadSpriteFrames(u16 tileIndex) {
    u16 numTiles;
    weaponSelectFrames = SPR_loadAllFrames(&sprUiWeapons, tileIndex, &numTiles);
    tileIndex += numTiles;
    weaponCursorFrames = SPR_loadAllFrames(&sprUiWeaponsCursor, tileIndex, &numTiles);
    tileIndex += numTiles;
    return tileIndex;
}

void HUD_freeSpriteFrames() {
    MEM_free(weaponCursorFrames);
    MEM_free(weaponSelectFrames);
    weaponCursorFrames = NULL;
    weaponSelectFrames = NULL;
}

void HUD_init(PlayerObject *player, u16 timeLeft) {
    weaponSelectSprite = SPR_addSpriteEx(&sprUiWeapons, 208, 184, TILE_ATTR(PAL_PLAYER_AND_BG, true, false, false), 0);
    weaponCursorSprite = SPR_addSpriteEx(&sprUiWeaponsCursor, 204, 180, TILE_ATTR(PAL_PLAYER_AND_BG, true, false, false), 0);
    weaponSelectSprite->data = (u32)weaponSelectFrames;
    weaponCursorSprite->data = (u32)weaponCursorFrames;
    SPR_setFrameChangeCallback(weaponSelectSprite, SPR_defaultFrameChange);
    SPR_setFrameChangeCallback(weaponCursorSprite, SPR_defaultFrameChange);
    HUD_updateScore(0);
    HUD_updateTimeLeft(timeLeft);
    HUD_updateResult(RESULT_NONE);
    HUD_updateLives(player->lives);
    HUD_updateWeaponLevel(player->health);
    HUD_updateWeaponSelect(player->weapon);
    VDP_drawText("Speed \x7f", 23, 26);
    HUD_updateSpeed(player->speed);
#ifdef DEBUG
#ifdef DEBUG_OBJECT_COUNT
    HUD_updateObjectCount(0);
#endif
#endif
}

static const char *RESULT_MESSAGES[RESULTS] = {
    NULL,
    "COMPLETE !",
    "GAME OVER!",
    " TIME UP! "
};

void HUD_updateResult(GameResult result) {
    if (result) {
        const char *message = RESULT_MESSAGES[result];
        VDP_drawText(message, 11, 13);
    } else {
        VDP_clearText(11, 13, 10);
    }
}

void HUD_updateScore(u32 score) {
    bcdsnprint(string, 7, u32ToBCD(score));
    VDP_drawText(string, 8, 1);
}

void HUD_updateTimerMinutes(u16 minutes) {
    bcdsnprint(string, 1, u16ToBCD(minutes));
    VDP_drawText(string, 17, 1);
}

void HUD_updateTimerSeconds(u16 seconds) {
    bcdsnprint(string, 2, u16ToBCD(seconds));
    VDP_drawText(string, 19, 1);
}

void HUD_updateTimerFrames(u16 frames) {
    bcdsnprint(string, 2, u16ToBCD(frames));
    VDP_drawText(string, 22, 1);
}

void HUD_updateTimeLeft(u16 timeLeft) {
    u16 frames = timeLeft % 60;
    u16 seconds = timeLeft / 60;
    u16 minutes = min(seconds / 60, 9);
    seconds %= 60;
    string[0] = '0' + minutes;
    string[1] = ':';
    string[2] = '0' + (seconds / 10);
    string[3] = '0' + (seconds % 10);
    string[4] = ':';
    string[5] = '0' + (frames / 10);
    string[6] = '0' + (frames % 10);
    string[7] = '\0';
    VDP_drawText(string, 17, 1);
}

void HUD_updateLives(u8 lives) {
    if (lives > 9) {
        string[0] = '\x7e';
        string[1] = ' ';
        string[2] = '0' + (lives / 10);
        string[3] = '0' + (lives % 10);
        for (int i = 4; i < 9; ++i)
            string[i] = ' ';
    } else {
        int i;
        for (i = 0; i < lives; ++i)
            string[i] = '\x7e';
        for (; i < 9; ++i)
            string[i] = ' ';
    }
    string[9] = '\0';
    VDP_drawText(string, 1, 26);
}

void HUD_updateWeaponLevel(u8 playerHealth) {
    SPR_setFrame(weaponSelectSprite, max(0, playerHealth - 1));
}

void HUD_updateWeaponSelect(u8 weapon) {
    SPR_setPosition(weaponCursorSprite, weapon == WEAPON_A ? 204 : 228, 180);
}

void HUD_updateSpeed(fix16 speed) {
    string[0] = speed == PLAYER_FASTSPEED ? '\x7f' : ' ';
    string[1] = '\0';
    VDP_drawText(string, 30, 26);
}

void HUD_initBonus(u16 points) {
    bonusTimer = 120;
    VDP_drawText("BONUS!", 3, 3);
    bcdsnprint(string, 5, u16ToBCD(points));
    VDP_drawText(string, 10, 3);
}

void HUD_updateBonus() {
    if (!bonusTimer)
        return;
    u16 color = bonusColors[--bonusTimer % BONUS_COLOR_COUNT];
    PAL_setColor(BONUS_COLOR_INDEX, color);
    if (!bonusTimer)
        VDP_clearText(3, 3, 12);
}

void HUD_updateObjectCount(int n) {
    sprintf(string, "%3d obj", n);
    VDP_drawText(string, 12, 26);
}

void HUD_updateFPS(u32 fps) {
    sprintf(string, "%3ld fps", fps);
    VDP_drawText(string, 12, 25);
}

void HUD_updateCPU(u16 cpu) {
    sprintf(string, "%3d cpu", cpu);
    VDP_drawText(string, 12, 27);
}