#include <genesis.h>
#include "gobject.h"
#include "res_gfx.h"
#include "res_audio.h"

#include "player.h"
#include "ui.h"

static bool paused, running;
static PlayerObject player;
static Pool *gobjPool;

static void gameplay_joyEvent(u16 joy, u16 button, u16 state) {
    if (joy == JOY_1) {
        if (button == BUTTON_START && (state & button)) {
            if ((state & (BUTTON_A|BUTTON_B|BUTTON_C)) == (BUTTON_A|BUTTON_B|BUTTON_C)) {
                running = false;
            } else if (!paused) {
                paused = true;
                XGM2_pause();
                XGM2_playPCMEx(wavPause, sizeof(wavPause), SOUND_PCM_CH1, 15, false, false);
            } else {
                paused = false;
                XGM2_resume();
            }
        } else {
            PLAYER_joyEvent(&player, button, state);
        }
    }
}

GameObject* GAME_createObject() {
    GameObject *gobj = (GameObject*)OBJ_create(gobjPool);
    GOBJ_init(gobj);
    return gobj;
}

void GAME_releaseObject(GameObject *gobj) {
    GOBJ_release(gobj);
    OBJ_release(gobjPool, (Object*)gobj, true);
}

int gameplay() {
    int result = 0;

    DMA_setBufferSize(8192);
    DMA_setMaxTransferSize(8192);

    PAL_setPalette(PAL0, bgPalette.data, DMA);
    PAL_setPalette(PLAYERPAL, palPlayer.data, DMA);

    VDP_loadTileSet(&bgTileset, TILE_USER_INDEX, DMA);
    Map *bg = MAP_create(&bgMap, BG_B,
        TILE_ATTR_FULL(PAL0, FALSE, FALSE, FALSE, TILE_USER_INDEX));

    VDP_loadFont(&font, DMA);
    VDP_setTextPriority(1);
    VDP_setTextPalette(PLAYERPAL);
    VDP_setBackgroundColor(1);

    fix32 y = FIX32(4256);
    MAP_scrollTo(bg, 0, fix32ToInt(y));
    SYS_doVBlankProcess();

    XGM2_setFMVolume(50);
    XGM2_setPSGVolume(50);
    XGM2_play(bgm);

    SPR_reset();

    PLAYER_init(&player);
    JOY_setEventHandler(gameplay_joyEvent);
    UI_initHud();

    gobjPool = OBJ_createObjectPool(80, sizeof(GameObject));

    running = true;
    while(running)
    {
        if (paused) {
        } else {
            player.update((Object*)&player);
            OBJ_updateAll(gobjPool);

            y += -FIX32(3) / 4;
            MAP_scrollTo(bg, 0, fix32ToRoundedInt(y));
            SPR_update();
        }
        UI_drawHud(&player);
        SYS_doVBlankProcess();
    }

    MAP_release(bg);
    XGM2_stop();
    POOL_destroy(gobjPool);
    gobjPool = NULL;

    return result;
}
