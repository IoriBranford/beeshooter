#include <genesis.h>
#include "res_gfx.h"

void PAL_updateAlternatingColors(u16 paletteSlot, const Palette *palette, u8 i, u8 j) {
    u16 color1 = palette->data[i];
    u16 color2 = palette->data[j];
    if (getTick() % 30 >= 15) {
        color1 = palette->data[j];
        color2 = palette->data[i];
    }
    PAL_setColor(paletteSlot*16 + i, color2);
    PAL_setColor(paletteSlot*16 + j, color1);
}

void PAL_update(u16 paletteSlot, const Palette *palette) {
    if (palette == &palFlyAndHoney || palette == &palWaspShooterAndReinforcedHoney) {
        PAL_updateAlternatingColors(paletteSlot, palette, 1, 2);
    } else if (palette == &palAcidAndBeetle) {
        PAL_updateAlternatingColors(paletteSlot, palette, 6, 7);
    }
}