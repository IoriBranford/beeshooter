#include <genesis.h>
#include "ui.h"
#include "res_gfx.h"

Sprite *weaponSelectSprite, *weaponCursorSprite;

static char string[32];

void UI_initHud(PlayerObject *player, u16 timeLeft) {
    weaponSelectSprite = SPR_addSprite(&sprUiWeapons, 208, 184, TILE_ATTR(PLAYERPAL, true, false, false));
    weaponCursorSprite = SPR_addSprite(&sprUiWeaponsCursor, 204, 180, TILE_ATTR(PLAYERPAL, true, false, false));
    UI_updateScore(0);
    UI_updateTimeLeft(timeLeft);
    UI_updateResult(RESULT_NONE);
    UI_updateLives(player->lives);
    UI_updateWeaponLevel(player->health);
    UI_updateWeaponSelect(player->weapon);
    UI_updateSpeed(player->speed);
    UI_updateObjectCount(0);
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
    sprintf(string, "%07lu", score);
    VDP_drawText(string, 8, 1);
}

void UI_updateTimeLeft(u16 timeLeft) {
    u8 frames = timeLeft % 60;
    u8 seconds = (timeLeft / 60) % 60;
    u8 minutes = min(timeLeft / 60 / 60, 99);
    sprintf(string, "%01u:%02u:%02u", minutes, seconds, frames);
    VDP_drawText(string, 136>>3, 1);
}

void UI_updateLives(u8 lives) {
    int numPrinted = 0;
    if (lives > 9)
        numPrinted = sprintf(string, "\x7e %d", lives);
    else
        numPrinted = sprintf(string, "%.*s", lives, "\x7e\x7e\x7e\x7e\x7e\x7e\x7e\x7e\x7e");
    VDP_drawText(string, 1, 208>>3);
    VDP_clearText(numPrinted + 1, 208>>3, 9 - numPrinted);
}

void UI_updateWeaponLevel(u8 playerHealth) {
    SPR_setFrame(weaponSelectSprite, max(0, playerHealth - 1));
}

void UI_updateWeaponSelect(u8 weapon) {
    SPR_setPosition(weaponCursorSprite, weapon == WEAPON_A ? 204 : 228, 180);
}

void UI_updateSpeed(fix16 speed) {
    speed = speed == PLAYER_FASTSPEED ? 2 : 1;
    int numPrinted = sprintf(string, "Speed %.*s", speed, "\x7f\x7f");
    VDP_drawText(string, 184>>3, 208>>3);
    VDP_clearText(numPrinted + (184>>3), 208>>3, 8 - numPrinted);
}

void UI_updateObjectCount(int n) {
    sprintf(string, "%2d objs", n);
    VDP_drawText(string, 12, 26);
}