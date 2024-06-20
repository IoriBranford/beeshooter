#include <genesis.h>
#include "res_gfx.h"

void PAL_updateFlyAndHoney(u16 paletteSlot) {
    u16 color1 = palFlyAndHoney.data[1];
    u16 color2 = palFlyAndHoney.data[2];
    if (getTick() % 30 >= 15) {
        color1 = palFlyAndHoney.data[2];
        color2 = palFlyAndHoney.data[1];
    }
    PAL_setColor(paletteSlot*16 + 1, color2);
    PAL_setColor(paletteSlot*16 + 2, color1);
}

void PAL_update(u16 paletteSlot, const Palette *palette) {
    if (palette == &palFlyAndHoney) {
        PAL_updateFlyAndHoney(paletteSlot);
    }
}