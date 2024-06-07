#include <genesis.h>
#include "ui.h"

void UI_drawHud(PlayerObject *player) {
    char string[16];

    int score = 0;
    sprintf(string, "%08d", score);
    VDP_drawText(string, 7, 1);

    int time = 60*60;
    int frames = time % 60;
    int seconds = (time / 60) % 60;
    int minutes = min(time / 60 / 60, 99);
    sprintf(string, "%02d:%02d:%02d", minutes, seconds, frames);
    VDP_drawText(string, 136>>3, 1);

    int lives = 2;
    int numPrinted = 0;
    if (lives > 9)
        numPrinted = sprintf(string, "{ %d", lives);
    else
        numPrinted = sprintf(string, "%.*s", lives, "{{{{{{{{{");
    VDP_drawText(string, 1, 208>>3);
    VDP_clearText(numPrinted + 1, 208>>3, 9 - numPrinted);

    int speed = player->speed > 2 ? 2 : 1;
    numPrinted = sprintf(string, "Speed %.*s", speed, "\x7f\x7f");
    VDP_drawText(string, 184>>3, 208>>3);
    VDP_clearText(numPrinted + (184>>3), 208>>3, 8 - numPrinted);
}