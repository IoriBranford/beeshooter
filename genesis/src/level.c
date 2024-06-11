#include "level.h"
#include "gobject.h"
#include "gobjdef.h"
#include "gameplay.h"
#include "stage_caravan.h"

#include <genesis.h>

#include "res_gfx.h"

#define BG_PALETTE (PAL0)
#define BG_TILESET_START_INDEX (TILE_USER_INDEX)
#define BG_BASE_TILE (TILE_ATTR_FULL(BG_PALETTE, FALSE, FALSE, FALSE, BG_TILESET_START_INDEX))

static Map *bg;
static fix32 bgY, bgVelY;
static Trigger *nextTrigger;
static u32 nextTriggerIndex;

void LEVEL_init() {
    bgY = FIX32(4256);
    bgVelY = -FIX32(3) / 4;

    PAL_setPalette(BG_PALETTE, bgPalette.data, DMA);
    VDP_loadTileSet(&bgTileset, BG_TILESET_START_INDEX, DMA);
    bg = MAP_create(&bgMap, BG_B, BG_BASE_TILE);
    MAP_scrollTo(bg, 0, fix32ToRoundedInt(bgY));

    nextTriggerIndex = 0;
    nextTrigger = stage_caravan_triggers;
}

void LEVEL_update() {
    bgY += bgVelY;
    if (bgVelY) {
        while (nextTriggerIndex < stage_caravan_numTriggers
        && nextTrigger && FIX32(nextTrigger->y) >= bgY) {
            if (nextTrigger->action)
                nextTrigger->action(nextTrigger);
            ++nextTrigger;
            ++nextTriggerIndex;
        }
    }
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

void LEVEL_setVelY(fix32 velY) {
    bgVelY = velY;
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
    static Palette *lastPalette = 0;

    const GameObjectDefinition *def = lobj->definition;
    GameObject *obj = GOBJ_createFromDef(def, FIX16(lobj->x), LEVEL_toScreenY(FIX32(lobj->y)));
    obj->group = lobj->group;

    // To be managed by palette manager.
    // Find the slot that my palette is already in,
    // or pick the slot that no current objects are using
    u16 paletteSlot = PAL2;

    const Palette *palette = def->palette;
    if (palette && palette != lastPalette) {
        PAL_setPalette(paletteSlot, palette->data, DMA_QUEUE);
        lastPalette = palette;
    }
    GOBJ_initSprite(obj, (paletteSlot << TILE_ATTR_PALETTE_SFT) | lobj->flags);
    return obj;
}