#include "level.h"
#include "gobject.h"
#include "gobjdef.h"
#include "gameplay.h"
#include "player.h"
#include "palette.h"
#include "stage_caravan.h"

#include <genesis.h>

#include "res_gfx.h"

#define STARTTRIGGER 0
#define BG_PALETTE (PAL2)

static Map *bg;
static fix32 cameraY, cameraVelY;
static const Trigger *nextTrigger;
static u32 nextTriggerIndex;
static u32 numTriggers;

#define PALETTE_USAGE_SLOTS 2
typedef struct PaletteUsage {
    const Palette *palette;
    fix32 cameraY;
} PaletteUsage;
PaletteUsage paletteUsage[PALETTE_USAGE_SLOTS];

void LEVEL_init(u16 tileIndex) {
    cameraY = FIX32(4256);
    cameraVelY = -FIX32(3) / 4;

    numTriggers = stage_caravan_numTriggers;
    nextTriggerIndex = STARTTRIGGER;
    nextTrigger = &stage_caravan_triggers[nextTriggerIndex];
    if (nextTriggerIndex > 0 && nextTriggerIndex < numTriggers)
        cameraY = FIX32(nextTrigger->y) - cameraVelY;

    for (int i = 0; i < stage_caravan_numGroups; ++i)
        stage_caravan_groups[i]->numObjectsSpawned = 0;

    PAL_setPalette(BG_PALETTE, bgPalette.data, DMA);
    VDP_setBackgroundColor((BG_PALETTE << 4) + 1);
    VDP_loadTileSet(&bgTileset, tileIndex, DMA);
    bg = MAP_create(&bgMap, BG_B, TILE_ATTR_FULL(BG_PALETTE, false, false, false, tileIndex));
    MAP_scrollTo(bg, 0, fix32ToRoundedInt(cameraY));

    for (int i = 1; i < PALETTE_USAGE_SLOTS; ++i) {
        paletteUsage[i].palette = NULL;
        paletteUsage[i].cameraY = cameraY;
    }
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

    for (int i = PAL0; i <= PAL1; ++i) {
        PAL_update(i, paletteUsage[i].palette);
    }
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

const Path* LEVEL_findNearestPath(LevelObjectGroup *group, fix32 xWorld, fix32 yWorld) {
    const Path **path = group->paths;
    if (!path)
        return NULL;

    const Path *closest = 0;
    fix32 closestDist = 0x7FFFFFFF;
    for (int i = 0; i < group->numPaths; ++i) {
        const PathPoint *point0 = (*path)->points;
        fix32 pathX = FIX32((*path)->x + point0->x);
        fix32 pathY = FIX32((*path)->y + point0->y);
        fix32 dist = getApproximatedDistance(pathX - xWorld, pathY - yWorld);
        if (dist < closestDist) {
            closest = (*path);
            closestDist = dist;
        }
        path++;
    }
    return closest;
}

u16 LEVEL_findPaletteSlot(const Palette *palette) {
    for (u16 i = 0; i < PALETTE_USAGE_SLOTS; ++i) {
        if (!paletteUsage[i].palette || palette == paletteUsage[i].palette) {
            return i;
        }
    }

    u16 slot = PAL0;
    fix32 y = 0;
    for (u16 i = 0; i < PALETTE_USAGE_SLOTS; ++i) {
        if (y < paletteUsage[i].cameraY) {
            y = paletteUsage[i].cameraY;
            slot = i;
        }
    }

    return slot;
}

u16 LEVEL_getPaletteSlot(const Palette *palette) {
    if (palette == &palPlayer)
        return PLAYERPAL;
    if (palette == &bgPalette)
        return BG_PALETTE;
    u16 slot = LEVEL_findPaletteSlot(palette);
    paletteUsage[slot].cameraY = cameraY;
    if (paletteUsage[slot].palette != palette) {
        paletteUsage[slot].palette = palette;
        PAL_setPalette(slot, palette->data, DMA_QUEUE);
    }
    return slot;
}

GameObject* LEVEL_createObject(const LevelObject *lobj) {
    GameObject *obj = GOBJ_createFromDef(lobj->definition,
        FIX16(lobj->x), LEVEL_toScreenY(FIX32(lobj->y)));
    if (!obj)
        return NULL;
    obj->levelObject = lobj;
    GOBJ_updateSprite(obj);

    if (lobj->flags & TILE_ATTR_PRIORITY_MASK) {
    } else {
        GOBJ_setInForeground(obj, false);
    }
    return obj;
}