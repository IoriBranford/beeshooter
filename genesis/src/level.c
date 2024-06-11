#include "level.h"
#include "gobject.h"
#include "gobjdef.h"
#include "gameplay.h"

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

fix16 LEVEL_toScreenY(fix32 yWorld) {
    return fix32ToFix16(yWorld - bgY);
}

fix32 LEVEL_toWorldY(fix16 yScreen) {
    return fix16ToFix32(yScreen) + bgY;
}

fix32 LEVEL_velY() {
    return bgVelY;
}

Path* LEVEL_findNearestPath(LevelObjectGroup *group, fix32 xWorld, fix32 yWorld) {
    Path *path = group->paths;
    if (!path)
        return NULL;

    Path *closest = 0;
    fix32 closestDist = 0x7FFFFFFF;
    for (int i = 0; i < group->numPaths; ++i) {
        PathPoint *point0 = path->points;
        fix32 pathX = FIX32(path->x + point0->x);
        fix32 pathY = FIX32(path->y + point0->y);
        fix32 dist = getApproximatedDistance(pathX - xWorld, pathY - yWorld);
        if (dist < closestDist) {
            closest = path;
            closestDist = dist;
        }
        path++;
    }
    return closest;
}

GameObject* LEVEL_createObject(LevelObject *lobj) {
    const GameObjectDefinition *def = lobj->definition;
    GameObject *obj = GAME_createObject();
    obj->centerX = FIX16(lobj->x);
    obj->centerY = LEVEL_toScreenY(FIX32(lobj->y));
    obj->group = lobj->group;
    obj->health = def->health;
    obj->definition = def;
    const SpriteDefinition *spriteDef = def->spriteDef;
    if (spriteDef) {
        Vect2D_f16 tl = GOBJ_getAnchorPoint(obj, -1, -1);
        // TODO:
        // Palette data from def->paletteData
        // Get palette slot that palette data is already in,
        // or find free palette slot for palette data
        u16 palette = PAL3;
        SPR_addSprite(spriteDef, fix16ToInt(tl.x), fix16ToInt(tl.y),
            (palette << TILE_ATTR_PALETTE_SFT) | lobj->flags);
    }
}