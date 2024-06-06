#include <genesis.h>
#include "gobject.h"
#include "res_gfx.h"
#include "res_audio.h"

#include "player.h"

static bool paused, running;
static PlayerObject player;

static void gameplay_joyEvent(u16 joy, u16 button, u16 state) {
    if (joy == JOY_1) {
        if (button == BUTTON_START && (state & button)) {
            if (state & (BUTTON_A|BUTTON_B|BUTTON_C)) {
                running = false;
            } else if (!paused) {
                paused = true;
                XGM2_pause();
            } else {
                paused = false;
                XGM2_resume();
            }
        } else {
            PLAYER_joyEvent(&player, button, state);
        }
    }
}

int gameplay() {
    int result = 0;

    DMA_setBufferSize(8192);
    DMA_setMaxTransferSize(8192);

    PAL_setPalette(PAL0, bgPalette.data, DMA);
    PAL_setPalette(PAL1, palPlayer.data, DMA);

    VDP_loadTileSet(&bgTileset, TILE_USER_INDEX, DMA);
    Map *bg = MAP_create(&bgMap, BG_A,
        TILE_ATTR_FULL(0, FALSE, FALSE, FALSE, TILE_USER_INDEX));

    VDP_setBackgroundColor(1);

    fix32 y = FIX32(4352);
    MAP_scrollTo(bg, 0, fix32ToInt(y));
    SYS_doVBlankProcess();

    XGM2_play(bgm);

    SPR_reset();

    PLAYER_init(&player);
    JOY_setEventHandler(gameplay_joyEvent);

    running = true;
    while(running)
    {
        if (paused) {
        } else {
            player.update((Object*)&player);
            y += -FIX32(3) / 4;
            MAP_scrollTo(bg, 0, fix32ToRoundedInt(y));
            SPR_update();
        }
        SYS_doVBlankProcess();
    }

    MAP_release(bg);
    XGM2_stop();

    return result;
}
