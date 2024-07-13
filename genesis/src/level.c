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

static Map *bg;
static fix32 cameraY, cameraVelY;
static const Trigger *nextTrigger;
static u32 nextTriggerIndex;
static u32 numTriggers;

#define PALETTE_USAGE_SLOTS 3
typedef struct PaletteUsage {
    const Palette *palette;
    fix32 cameraY;
} PaletteUsage;
PaletteUsage paletteUsage[PALETTE_USAGE_SLOTS];

static LevelObject *doubleKillBonusEnemies[2];
static fix32 doubleKillBonusEnemiesDefeatedAt[2];
static u32 doubleKillBonusPoints;

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

    VDP_setBackgroundColor((PAL_PLAYER_AND_BG << 4) + 14);
    VDP_loadTileSet(&bgTileset, tileIndex, DMA);
    bg = MAP_create(&bgMap, BG_B, TILE_ATTR_FULL(PAL_PLAYER_AND_BG, false, false, false, tileIndex));
    MAP_scrollTo(bg, 0, fix32ToRoundedInt(cameraY));

    for (int i = 0; i < PALETTE_USAGE_SLOTS; ++i) {
        paletteUsage[i].palette = NULL;
        paletteUsage[i].cameraY = cameraY;
    }

    LEVEL_postDoubleKillBonus(NULL, NULL, 0);
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
    if (palette == &palPlayerAndBG)
        return PAL_PLAYER_AND_BG;
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

void LEVEL_postDoubleKillBonus(LevelObject *enemy0, LevelObject *enemy1, u32 bonusPoints) {
    doubleKillBonusEnemies[0] = enemy0;
    doubleKillBonusEnemies[1] = enemy1;
    doubleKillBonusEnemiesDefeatedAt[0] = -1;
    doubleKillBonusEnemiesDefeatedAt[1] = -1;
    doubleKillBonusPoints = bonusPoints;
}

void LEVEL_updateDoubleKillBonus(GameObject *defeatedEnemy) {
    if (!doubleKillBonusPoints)
        return;

    LevelObject *lobj = defeatedEnemy->levelObject;
    if (!lobj)
        return;

    if (defeatedEnemy == doubleKillBonusEnemies[0]) {
        doubleKillBonusEnemiesDefeatedAt[0] = cameraY;
        if (doubleKillBonusEnemiesDefeatedAt[1] < 0)
            return;
    } else if (defeatedEnemy == doubleKillBonusEnemies[1]) {
        doubleKillBonusEnemiesDefeatedAt[1] = cameraY;
        if (doubleKillBonusEnemiesDefeatedAt[0] < 0)
            return;
    } else {
        return;
    }

    if (abs(doubleKillBonusEnemiesDefeatedAt[0] - doubleKillBonusEnemiesDefeatedAt[1]) < 30) {
        GAME_scorePoints(doubleKillBonusPoints);
        SND_playDef(&sndBonus);
        LEVEL_postDoubleKillBonus(NULL, NULL, 0);
    }
}
