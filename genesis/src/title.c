#include "menu.h"
#include "gameplay.h"
#include <genesis.h>
#include "res_gfx.h"

static bool waitingToStart;

void startGame(const Menu *menu, const MenuItem *item, u16 input) {
    waitingToStart = false;
}

int title() {
    waitingToStart = true;
    DMA_setBufferSize(8192);
    DMA_setMaxTransferSize(8192);

    for (int i = 0; i < 64; ++i)
        PAL_setColor(i, 0);

    PAL_setPalette(PAL_PLAYER_AND_BG, palPlayerAndBG.data, DMA);
    VDP_setTextPalette(PAL_PLAYER_AND_BG);
    VDP_drawImageEx(BG_B, &imgTitle, TILE_ATTR_FULL(PAL0, FALSE, FALSE, FALSE, TILE_USER_INDEX), 0, 0, false, DMA);

    DMA_waitCompletion();
    DMA_setBufferSizeToDefault();
    DMA_setMaxTransferSizeToDefault();

    PAL_fadeInPalette(PAL0, imgTitle.palette->data, 10, false);

    MENU_show(&MAIN_MENU);
    JOY_setEventHandler(MENU_joyEvent);

    while (waitingToStart) {
        SYS_doVBlankProcess();
    }

    JOY_setEventHandler(NULL);
    PAL_fadeOutAll(15, false);
    VDP_clearTextArea(0, 0, 32, 28);
    VDP_clearPlane(BG_B, true);

    GameResult result = gameplay();
}