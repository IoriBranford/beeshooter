#include "level.h"
#include "gobject.h"
#include "gobjdef.h"
#include "gameplay.h"
#include "player.h"
#include "palette.h"
#include "hud.h"
#include "stage_caravan.h"

#include <genesis.h>

#include "res_gfx.h"

#define STARTTRIGGER 0
#define BG_PLANE BG_B

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

#define MAX_ACTIVE_DOUBLE_KILL_BONUSES 2
typedef struct DoubleKillBonus {
    u32 points;
    const LevelObject *enemies[2];
    fix32 defeatedAt[2];
} DoubleKillBonus;

static DoubleKillBonus doubleKillBonuses[MAX_ACTIVE_DOUBLE_KILL_BONUSES];

#define BG_EXPLODE_LINES 80
#define BG_EXPLODE_FIRST_LINE (224-BG_EXPLODE_LINES)
#define BG_EXPLODE_MAX_X 256
#define BG_EXPLODE_SPEED_SHIFT 4
static fix16 bgExplodeLinesVelX[BG_EXPLODE_LINES];
static fix16 bgExplodeLinesPosX[BG_EXPLODE_LINES];
static s16 bgExplodeLinesScrollX[BG_EXPLODE_LINES];

void LEVEL_updateBackgroundExplosion() {
    if (abs(bgExplodeLinesScrollX[BG_EXPLODE_LINES-1]) >= BG_EXPLODE_MAX_X)
        return;

    for (u32 l = 0; l < BG_EXPLODE_LINES; l += 2) {
        fix16 velX = bgExplodeLinesVelX[l];
        if (!velX)
            continue;
        fix16 posX = bgExplodeLinesPosX[l];
        if (posX + velX >= FIX16(BG_EXPLODE_MAX_X) || posX + velX < posX) {
            posX = FIX16(BG_EXPLODE_MAX_X);
            bgExplodeLinesVelX[l] = 0;
        } else {
            posX += velX;
        }
        bgExplodeLinesPosX[l] = posX;
        bgExplodeLinesScrollX[l] = fix16ToInt(posX);
    }

    for (u32 l = 1; l < BG_EXPLODE_LINES; l += 2) {
        fix16 velX = bgExplodeLinesVelX[l];
        if (!velX)
            continue;
        fix16 posX = bgExplodeLinesPosX[l];
        if (posX + velX <= -FIX16(BG_EXPLODE_MAX_X) || posX + velX > posX) {
            posX = -FIX16(BG_EXPLODE_MAX_X);
            bgExplodeLinesVelX[l] = 0;
        } else {
            posX += velX;
        }
        bgExplodeLinesPosX[l] = posX;
        bgExplodeLinesScrollX[l] = fix16ToInt(posX);
    }

    VDP_setHorizontalScrollLine(BG_PLANE, BG_EXPLODE_FIRST_LINE, bgExplodeLinesScrollX, BG_EXPLODE_LINES, DMA_QUEUE);
}

void LEVEL_startBackgroundExplosion() {
    SND_playDef(&sndRocksBreak);
    VDP_setScrollingMode(HSCROLL_LINE, VSCROLL_PLANE);
}

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

    VDP_setScrollingMode(HSCROLL_PLANE, VSCROLL_PLANE);
    VDP_loadTileSet(&bgTileset, tileIndex, DMA);
    bg = MAP_create(&bgMap, BG_PLANE, TILE_ATTR_FULL(PAL_PLAYER_AND_BG, false, false, false, tileIndex));
    MAP_scrollTo(bg, 0, fix32ToRoundedInt(cameraY));

    for (int i = 0; i < PALETTE_USAGE_SLOTS; ++i) {
        paletteUsage[i].palette = NULL;
        paletteUsage[i].cameraY = cameraY;
    }

    memset(doubleKillBonuses, 0, MAX_ACTIVE_DOUBLE_KILL_BONUSES * sizeof(DoubleKillBonus));
    
    memset(bgExplodeLinesScrollX, 0, sizeof(bgExplodeLinesScrollX));
    memset(bgExplodeLinesPosX, 0, sizeof(bgExplodeLinesPosX));
    for (u32 l = 0; l < BG_EXPLODE_LINES; l += 2) {
        bgExplodeLinesVelX[l] = cosFix16((l+1)<<1)<<BG_EXPLODE_SPEED_SHIFT;
    }
    for (u32 l = 1; l < BG_EXPLODE_LINES; l += 2) {
        bgExplodeLinesVelX[l] = -cosFix16(l<<1)<<BG_EXPLODE_SPEED_SHIFT;
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
    
    if (VDP_getHorizontalScrollingMode() == HSCROLL_LINE)
        LEVEL_updateBackgroundExplosion();
    // else
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

void LEVEL_postDoubleKillBonus(const LevelObject *enemy0, const LevelObject *enemy1, u32 bonusPoints) {
    for (int i = 0; i < MAX_ACTIVE_DOUBLE_KILL_BONUSES; ++i) {
        DoubleKillBonus *bonus = &doubleKillBonuses[i];
        if (!bonus->points) {
            bonus->enemies[0] = enemy0;
            bonus->enemies[1] = enemy1;
            bonus->defeatedAt[0] = -1;
            bonus->defeatedAt[1] = -1;
            bonus->points = bonusPoints;
            break;
        }
    }
}

void LEVEL_cancelDoubleKillBonusOnEnemyEscape(GameObject *enemy) {
    const LevelObject *lobj = enemy->levelObject;
    if (!lobj)
        return;
    for (int i = 0; i < MAX_ACTIVE_DOUBLE_KILL_BONUSES; ++i) {
        DoubleKillBonus *bonus = &doubleKillBonuses[i];
        if (bonus->points) {
            if (lobj == bonus->enemies[0] || lobj == bonus->enemies[1]) {
                bonus->points = 0;
                break;
            }
        }
    }
}

void LEVEL_updateDoubleKillBonusOnEnemyDefeat(GameObject *enemy) {
    const LevelObject *lobj = enemy->levelObject;
    if (!lobj)
        return;

    for (int i = 0; i < MAX_ACTIVE_DOUBLE_KILL_BONUSES; ++i) {
        DoubleKillBonus *bonus = &doubleKillBonuses[i];
        if (!bonus->points)
            continue;

        if (lobj == bonus->enemies[0]) {
            bonus->defeatedAt[0] = cameraY;
            if (bonus->defeatedAt[1] < 0)
                break;
        } else if (lobj == bonus->enemies[1]) {
            bonus->defeatedAt[1] = cameraY;
            if (bonus->defeatedAt[0] < 0)
                break;
        } else {
            continue;
        }

        if (abs(bonus->defeatedAt[0] - bonus->defeatedAt[1]) < abs(cameraVelY)*30) {
            GAME_scorePoints(bonus->points);
            HUD_initBonus(bonus->points);
            SND_playDef(&sndBonus);
        }
        bonus->points = 0;
        break;
    }
}