#include "ui.h"

void bcdsnprint(char *s, u32 n, u32 bcd) {
    s[n] = '\0';
    for (int i = n-1; i >= 0; --i) {
        s[i] = '0' + (bcd & 0xF);
        bcd >>= 4;
    }
}

#define BONUS_COLOR_COUNT 4
static const u16 bonusColors[BONUS_COLOR_COUNT] = {
    0xfff, 0xf0f, 0xff0, 0x0ff
};

void UI_updateBonusColorFlash(u16 colorIndex, u16 timer) {
    u16 color = bonusColors[--timer % BONUS_COLOR_COUNT];
    PAL_setColor(colorIndex, color);
}