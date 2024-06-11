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
static fix32 cameraY, cameraVelY;
static Trigger *nextTrigger;
static u32 nextTriggerIndex;
static u32 numTriggers;

void LEVEL_init() {
    cameraY = FIX32(4256);
    cameraVelY = -FIX32(3) / 4;

    PAL_setPalette(BG_PALETTE, bgPalette.data, DMA);
    VDP_loadTileSet(&bgTileset, BG_TILESET_START_INDEX, DMA);
    bg = MAP_create(&bgMap, BG_B, BG_BASE_TILE);
    MAP_scrollTo(bg, 0, fix32ToRoundedInt(cameraY));

    numTriggers = stage_caravan_numTriggers;
    nextTriggerIndex = 0;
    nextTrigger = stage_caravan_triggers;
}

void LEVEL_update() {
    cameraY += cameraVelY;
    if (cameraVelY) {
        while (nextTriggerIndex < numTriggers
        && nextTrigger && FIX32(nextTrigger->y) >= cameraY) {
            if (nextTrigger->action)
                nextTrigger->action(nextTrigger);
            ++nextTrigger;
            ++nextTriggerIndex;
        }
    }
    MAP_scrollTo(bg, 0, fix32ToRoundedInt(cameraY));
}

void LEVEL_destroy() {
    MAP_release(bg);
    bg = NULL;
}

fix16 LEVEL_toScreenY(fix32 yWorld) {
    return fix32ToFix16(yWorld - cameraY);
}

fix32 LEVEL_toWorldY(fix16 yScreen) {
    return fix16ToFix32(yScreen) + cameraY;
}

fix32 LEVEL_cameraVelY() {
    return cameraVelY;
}

void LEVEL_setVelY(fix32 velY) {
    cameraVelY = velY;
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
    static const Palette *lastPalette = 0;

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