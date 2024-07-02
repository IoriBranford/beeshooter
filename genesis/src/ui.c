#include <genesis.h>
#include "ui.h"
#include "sprite.h"
#include "res_gfx.h"

Sprite *weaponSelectSprite, *weaponCursorSprite;
u16 **weaponSelectFrames, **weaponCursorFrames;

static char string[32];

u16 UI_loadSpriteFrames(u16 tileIndex) {
    u16 numTiles;
    weaponSelectFrames = SPR_loadAllFrames(&sprUiWeapons, tileIndex, &numTiles);
    tileIndex += numTiles;
    weaponCursorFrames = SPR_loadAllFrames(&sprUiWeaponsCursor, tileIndex, &numTiles);
    tileIndex += numTiles;
    return tileIndex;
}

void UI_freeSpriteFrames() {
    MEM_free(weaponCursorFrames);
    MEM_free(weaponSelectFrames);
    weaponCursorFrames = NULL;
    weaponSelectFrames = NULL;
}

void UI_initHud(PlayerObject *player, u16 timeLeft) {
    weaponSelectSprite = SPR_addSpriteEx(&sprUiWeapons, 208, 184, TILE_ATTR(PLAYERPAL, true, false, false), 0);
    weaponCursorSprite = SPR_addSpriteEx(&sprUiWeaponsCursor, 204, 180, TILE_ATTR(PLAYERPAL, true, false, false), 0);
    weaponSelectSprite->data = (u32)weaponSelectFrames;
    weaponCursorSprite->data = (u32)weaponCursorFrames;
    SPR_setFrameChangeCallback(weaponSelectSprite, SPR_defaultFrameChange);
    SPR_setFrameChangeCallback(weaponCursorSprite, SPR_defaultFrameChange);
    UI_updateScore(0);
    UI_updateTimeLeft(timeLeft);
    UI_updateResult(RESULT_NONE);
    UI_updateLives(player->lives);
    UI_updateWeaponLevel(player->health);
    UI_updateWeaponSelect(player->weapon);
    VDP_drawText("Speed \x7f", 23, 26);
    UI_updateSpeed(player->speed);
#ifdef DEBUG
#ifdef DEBUG_OBJECT_COUNT
    UI_updateObjectCount(0);
#endif
#endif
}

static const char *RESULT_MESSAGES[RESULTS] = {
    NULL,
    "COMPLETE !",
    "GAME OVER!",
    " TIME UP! "
};

void UI_updateResult(GameResult result) {
    if (result) {
        const char *message = RESULT_MESSAGES[result];
        VDP_drawText(message, 11, 13);
    } else {
        VDP_clearText(11, 13, 10);
    }
}

void UI_updateScore(u32 score) {
    score = u32ToBCD(score);
    string[7] = '\0';
    for (int i = 6; i >= 0; --i) {
        string[i] = '0' + (score & 0xF);
        score >>= 4;
    }
    VDP_drawText(string, 8, 1);
}

void UI_updateTimerMinutes(u16 minutes) {
    string[0] = '0' + minutes;
    string[1] = '\0';
    VDP_drawText(string, 17, 1);
}

void UI_updateTimerSeconds(u16 seconds) {
    seconds = u16ToBCD(seconds);
    string[0] = '0' + ((seconds >> 4) & 0xF);
    string[1] = '0' + (seconds & 0xF);
    string[2] = '\0';
    VDP_drawText(string, 19, 1);
}

void UI_updateTimerFrames(u16 frames) {
    frames = u16ToBCD(frames);
    string[0] = '0' + ((frames >> 4) & 0xF);
    string[1] = '0' + (frames & 0xF);
    string[2] = '\0';
    VDP_drawText(string, 22, 1);
}

void UI_updateTimeLeft(u16 timeLeft) {
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

void UI_updateLives(u8 lives) {
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

void UI_updateWeaponLevel(u8 playerHealth) {
    SPR_setFrame(weaponSelectSprite, max(0, playerHealth - 1));
}

void UI_updateWeaponSelect(u8 weapon) {
    SPR_setPosition(weaponCursorSprite, weapon == WEAPON_A ? 204 : 228, 180);
}

void UI_updateSpeed(fix16 speed) {
    string[0] = speed == PLAYER_FASTSPEED ? '\x7f' : ' ';
    string[1] = '\0';
    VDP_drawText(string, 30, 26);
}

void UI_updateObjectCount(int n) {
    sprintf(string, "%3d obj", n);
    VDP_drawText(string, 12, 26);
}

void UI_updateFPS(u32 fps) {
    sprintf(string, "%3ld fps", fps);
    VDP_drawText(string, 12, 25);
}

void UI_updateCPU(u16 cpu) {
    sprintf(string, "%3d cpu", cpu);
    VDP_drawText(string, 12, 27);
}