#include <genesis.h>
#include "ui.h"

void UI_drawHud(PlayerObject *player) {
    char string[16];

    int score = 0;
    sprintf(string, "%08d", score);
    VDP_clearText(7, 1, 8);
    VDP_drawText(string, 7, 1);

    int time = 60*60;
    int frames = time % 60;
    int seconds = (time / 60) % 60;
    int minutes = min(time / 60 / 60, 99);
    sprintf(string, "%02d:%02d:%02d", minutes, seconds, frames);
    VDP_clearText(136>>3, 1, 8);
    VDP_drawText(string, 136>>3, 1);

    int lives = 2;
    if (lives > 9)
        sprintf(string, "{ %d", lives);
    else
        sprintf(string, "%.*s", lives, "{{{{{{{{{");
    VDP_clearText(1, 208>>3, 9);
    VDP_drawText(string, 1, 208>>3);

    int speed = player->speed > 2 ? 2 : 1;
    sprintf(string, "Speed %.*s", speed, "\x7f\x7f");
    VDP_clearText(184>>3, 208>>3, 8);
    VDP_drawText(string, 184>>3, 208>>3);
}