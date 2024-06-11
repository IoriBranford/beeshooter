#include <genesis.h>

#include "res_gfx.h"

#define BG_PALETTE (PAL0)
#define BG_TILESET_START_INDEX (TILE_USER_INDEX)
#define BG_BASE_TILE (TILE_ATTR_FULL(BG_PALETTE, FALSE, FALSE, FALSE, BG_TILESET_START_INDEX))

static Map *bg;
static fix32 bgY, bgVelY;

void LEVEL_init() {
    bgY = FIX32(4256);
    bgVelY = -FIX32(3) / 4;

    PAL_setPalette(BG_PALETTE, bgPalette.data, DMA);
    VDP_loadTileSet(&bgTileset, BG_TILESET_START_INDEX, DMA);
    bg = MAP_create(&bgMap, BG_B, BG_BASE_TILE);
    MAP_scrollTo(bg, 0, fix32ToRoundedInt(bgY));
}

void LEVEL_update() {
    bgY += bgVelY;
    MAP_scrollTo(bg, 0, fix32ToRoundedInt(bgY));
}

void LEVEL_destroy() {
    MAP_release(bg);
    bg = NULL;
}

fix32 LEVEL_toScreenY(fix32 y) {
    return y - bgY;
}

fix32 LEVEL_velY() {
    return bgVelY;
}