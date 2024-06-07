#include <genesis.h>
#include "ui.h"

void UI_drawHud(PlayerObject *player) {
    char string[16];

    u32 score = player->score;
    sprintf(string, "%08lu", score);
    VDP_drawText(string, 7, 1);

    u16 time = player->timeLeft;
    u8 frames = time % 60;
    u8 seconds = (time / 60) % 60;
    u8 minutes = min(time / 60 / 60, 99);
    sprintf(string, "%02u:%02u:%02u", minutes, seconds, frames);
    VDP_drawText(string, 136>>3, 1);

    u8 lives = player->lives;
    int numPrinted = 0;
    if (lives > 9)
        numPrinted = sprintf(string, "\x7e %d", lives);
    else
        numPrinted = sprintf(string, "%.*s", lives, "\x7e\x7e\x7e\x7e\x7e\x7e\x7e\x7e\x7e");
    VDP_drawText(string, 1, 208>>3);
    VDP_clearText(numPrinted + 1, 208>>3, 9 - numPrinted);

    u8 speed = player->speed > 2 ? 2 : 1;
    numPrinted = sprintf(string, "Speed %.*s", speed, "\x7f\x7f");
    VDP_drawText(string, 184>>3, 208>>3);
    VDP_clearText(numPrinted + (184>>3), 208>>3, 8 - numPrinted);
}