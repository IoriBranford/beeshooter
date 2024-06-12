#include "level.h"
#include "gobject.h"
#include "gobjdef.h"
#include "gameplay.h"
#include "stage_caravan.h"

#include <genesis.h>

#include "res_gfx.h"

#define BG_PALETTE (PAL2)
#define BG_TILESET_START_INDEX (TILE_USER_INDEX)
#define BG_BASE_TILE (TILE_ATTR_FULL(BG_PALETTE, FALSE, FALSE, FALSE, BG_TILESET_START_INDEX))

static Map *bg;
static fix32 cameraY, cameraVelY;
static Trigger *nextTrigger;
static u32 nextTriggerIndex;
static u32 numTriggers;

typedef struct PaletteUsage {
    const Palette *palette;
    fix32 cameraY;
} PaletteUsage;
PaletteUsage paletteUsage[2];

void LEVEL_init() {
    cameraY = FIX32(4256);
    cameraVelY = -FIX32(3) / 4;

    PAL_setPalette(BG_PALETTE, bgPalette.data, DMA);
    VDP_setBackgroundColor((BG_PALETTE << 4) + 1);
    VDP_loadTileSet(&bgTileset, BG_TILESET_START_INDEX, DMA);
    bg = MAP_create(&bgMap, BG_B, BG_BASE_TILE);
    MAP_scrollTo(bg, 0, fix32ToRoundedInt(cameraY));

    numTriggers = stage_caravan_numTriggers;
    nextTriggerIndex = 0;
    nextTrigger = stage_caravan_triggers;

    paletteUsage[0].palette = NULL;
    paletteUsage[0].cameraY = cameraY;
    paletteUsage[1].palette = NULL;
    paletteUsage[1].cameraY = cameraY;
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

void LEVEL_setPalette(u16 slot, const Palette *palette) {
    paletteUsage[slot].palette = palette;
    paletteUsage[slot].cameraY = cameraY;
    PAL_setPalette(slot, palette->data, DMA_QUEUE);
}

GameObject* LEVEL_createObject(LevelObject *lobj) {
    const GameObjectDefinition *def = lobj->definition;
    GameObject *obj = GOBJ_createFromDef(def, FIX16(lobj->x), LEVEL_toScreenY(FIX32(lobj->y)));
    obj->group = lobj->group;

    u16 paletteSlot = PAL0;
    const Palette *palette = def->palette;
    if (palette == paletteUsage[PAL0].palette) {
        paletteSlot = PAL0;
    } else if (palette == paletteUsage[PAL1].palette) {
        paletteSlot = PAL1;
    } else if (!paletteUsage[PAL0].palette || paletteUsage[PAL0].cameraY > paletteUsage[PAL1].cameraY) {
        paletteSlot = PAL0;
        LEVEL_setPalette(paletteSlot, palette);
    } else {
        paletteSlot = PAL1;
        LEVEL_setPalette(paletteSlot, palette);
    }
    GOBJ_initSprite(obj, (paletteSlot << TILE_ATTR_PALETTE_SFT) | lobj->flags);
    return obj;
}