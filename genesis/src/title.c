#include "menu.h"
#include "gameplay.h"
#include <genesis.h>
#include "res_gfx.h"
#include "sounddef.h"

static bool waitingToStart;

void startGame(const Menu *menu, const MenuItem *item, u16 input) {
    waitingToStart = false;
    SND_playDef(&sndExtend);
}

int title() {
    waitingToStart = true;
    DMA_setBufferSize(8192);
    DMA_setMaxTransferSize(8192);

    u16 fadeDest[64];
    memsetU16(fadeDest, 0, 64);
    PAL_setColors(0, fadeDest, 64, DMA);

    PAL_setPalette(PAL_PLAYER_AND_BG, palPlayerAndBG.data, DMA);
    VDP_setTextPalette(PAL_PLAYER_AND_BG);
    VDP_drawImageEx(BG_B, &imgTitle, TILE_ATTR_FULL(PAL0, FALSE, FALSE, FALSE, TILE_USER_INDEX), 0, 0, false, DMA);
    s16 imageX = 256;
    VDP_setHorizontalScroll(BG_B, imageX);

    DMA_waitCompletion();
    DMA_setBufferSizeToDefault();
    DMA_setMaxTransferSizeToDefault();

    PAL_fadeToPalette(PAL0, imgTitle.palette->data, 15, true);

    while (waitingToStart) {
        if (imageX) {
            VDP_setHorizontalScroll(BG_B, imageX -= 16);
            if (!imageX) {
                MENU_initFlashingPalette();
                MENU_show(&MAIN_MENU);
                JOY_setEventHandler(MENU_joyEvent);
            }
        }
        MENU_updateCurrent();
        SYS_doVBlankProcess();
    }

    JOY_setEventHandler(NULL);
    memsetU16(fadeDest, 0xffff, 64);
    PAL_fadeToAll(fadeDest, 60, false);
    VDP_clearTextArea(0, 0, 32, 28);
    VDP_clearPlane(BG_B, true);

    return gameplay();
}