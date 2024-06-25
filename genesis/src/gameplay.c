#include <genesis.h>
#include "gameplay.h"
#include "gobject.h"
#include "gobjdef.h"
#include "sounddef.h"
#include "res_gfx.h"
#include "res_audio.h"

#include "player.h"
#include "level.h"
#include "ui.h"

const u16 GAMETIME = 60*60;
static const u32 MAXSCORE = 9999999;

static const u32 EXTEND_SCORES[] = {
    10000,
    50000,
    100000,
    150000,
    250000,
    350000,
    500000,
    650000,
    800000,
    1000000,
    1200000,
    1500000,
    9999999
};

static u16 timeLeft;
static u32 score;
static u8 extendScoreIndex;
static u8 result;
static bool paused, running, timePaused;
static PlayerObject player;
static Pool *gobjPool;

#define TEAM_LIMIT 64
static u8 teamSizes[NUM_TEAMS];
static GameObject *teamObjects[NUM_TEAMS][TEAM_LIMIT];
static GameObject **playerShots = teamObjects[TEAM_PLAYERSHOT];
static GameObject **enemyShots = teamObjects[TEAM_ENEMYSHOT];
static GameObject **enemies = teamObjects[TEAM_ENEMY];

static void gameplay_joyEvent(u16 joy, u16 button, u16 state) {
    if (joy == JOY_1) {
        if (button == BUTTON_START && (state & button)) {
            if (result || (state & (BUTTON_A|BUTTON_B|BUTTON_C)) == (BUTTON_A|BUTTON_B|BUTTON_C)) {
                running = false;
            } else if (!paused) {
                paused = true;
                XGM_pausePlay();
                SND_playDef(&sndPause);
            } else {
                paused = false;
                XGM_resumePlay();
            }
        } else {
            PLAYER_joyEvent(&player, button, state);
        }
    }
}

PlayerObject* GAME_livePlayer() {
    return player.health ? &player : NULL;
}

void GAME_scorePoints(u32 points) {
    u32 newScore = score + points;
    u32 extendScore = EXTEND_SCORES[extendScoreIndex];
    if (score < extendScore && newScore >= extendScore) {
        SND_playDef(&sndExtend);
        ++player.lives;
        ++extendScoreIndex;
        UI_updateLives(player.lives);
    }
    score = min(MAXSCORE, newScore);
    UI_updateScore(score);
}

void GAME_setTimerPaused(bool paused) {
    timePaused = paused;
}

void GAME_putObjectInTeam(GameObject *gobj, Team team) {
    Team oldTeam = gobj->team;
    if (team == oldTeam)
        return;
    if (oldTeam > TEAM_NONE) {
        GameObject **objects = teamObjects[oldTeam];
        u8 n = teamSizes[oldTeam];
        for (int i = 0; i < n; ++i) {
            if (objects[i] == gobj) {
                objects[i] = objects[--n];
                objects[n] = NULL;
                teamSizes[oldTeam] = n;
                gobj->team = TEAM_NONE;
                break;
            }
        }
    }
    if (team > TEAM_NONE) {
        if (teamSizes[team] < TEAM_LIMIT) {
            teamObjects[team][teamSizes[team]] = gobj;
            teamSizes[team]++;
            gobj->team = team;
        }
    }
}

GameObject* GAME_createObject() {
    GameObject *gobj = (GameObject*)OBJ_create(gobjPool);
    GOBJ_init(gobj);
    UI_updateObjectCount(POOL_getNumAllocated(gobjPool));
    return gobj;
}

void GAME_releaseObject(GameObject *gobj) {
    GAME_putObjectInTeam(gobj, TEAM_NONE);
    GOBJ_releaseSprite(gobj);
    OBJ_release(gobjPool, (Object*)gobj, true);
    UI_updateObjectCount(POOL_getNumAllocated(gobjPool));
}

void GAME_end(GameResult r) {
    result = r;
    UI_updateResult(r);
}

void GAME_doCollision() {
    for (u8 e = 0; e < teamSizes[TEAM_ENEMY];) {
        GameObject *enemy = enemies[e];
        if (enemy->invulTimer || !GOBJ_isSpriteOnScreen(enemy)) {
            ++e;
            continue;
        }

        bool hit = false;
        for (u8 s = 0; s < teamSizes[TEAM_PLAYERSHOT];) {
            GameObject *playerShot = playerShots[s];
            if (GOBJ_isHitting(playerShot, enemy)) {
                hit = true;
                GOBJ_defeat(playerShot);
                if (enemy->health) {
                    GOBJ_dealDamage(enemy, 1);
                    if (!enemy->health) {
                        GAME_putObjectInTeam(enemy, TEAM_NONE);
                        GOBJ_defeat(enemy);
                    }
                }
            } else {
                ++s;
            }
        }

        if (enemy->health) {
            if (hit) {
                SND_playDef(&sndPlayerShotHit);
            }
            ++e;
        }
    }

    for (u8 s = 0; s < teamSizes[TEAM_ENEMYSHOT];) {
        GameObject *enemyShot = enemyShots[s];
        if (GOBJ_isHitting((GameObject*)&player, enemyShot)) {
            u16 damage = enemyShot->definition->damage;
            GAME_putObjectInTeam(enemyShot, TEAM_NONE);
            GOBJ_defeat(enemyShot);
            if (damage) {
                if (!player.invulTimer) {
                    PLAYER_takeDamage(&player, damage);
                }
            } else {
                PLAYER_powerUp(&player);
            }
        } else {
            ++s;
        }
    }
}

int gameplay() {
    DMA_setBufferSize(8192);
    DMA_setMaxTransferSize(8192);

    PAL_setPalette(PLAYERPAL, palPlayer.data, DMA);

    VDP_setHilightShadow(true);

    VDP_loadFont(&font, DMA);
    VDP_setTextPriority(1);
    VDP_setTextPalette(PLAYERPAL);

    u16 tileIndex = TILE_USER_INDEX;

    SPR_reset();
    tileIndex = PLAYER_loadSpriteFrames(tileIndex);
    tileIndex = UI_loadSpriteFrames(tileIndex);

    LEVEL_init(tileIndex);
    tileIndex += bgTileset.numTile;
    tileIndex = GOBJDEF_loadSpriteFrames(tileIndex, sizeof(part1defs)/sizeof(part1defs[0]), part1defs);
    SYS_doVBlankProcess();

    PLAYER_init(&player);
    JOY_setEventHandler(gameplay_joyEvent);

    gobjPool = OBJ_createObjectPool(80, sizeof(GameObject));
    score = 0;
    extendScoreIndex = 0;
    result = RESULT_NONE;
    timeLeft = GAMETIME;
    timePaused = true; // waiting for unpauseTimer trigger
    paused = false;
    running = true;
    memset(teamSizes, 0, sizeof(teamSizes));
    memset(teamObjects, 0, sizeof(teamObjects));
    UI_initHud(&player, timeLeft);

    DMA_waitCompletion();
    DMA_setBufferSizeToDefault();
    DMA_setMaxTransferSizeToDefault();
    XGM_startPlay(bgm);

    while(running)
    {
        if (result || paused) {
        } else {
            if (player.update)
                player.update((Object*)&player);

            GAME_doCollision();
            OBJ_updateAll(gobjPool);

            LEVEL_update();
            if (!timePaused && timeLeft) {
                if (!--timeLeft) {
                    player.lives = 0;
                    PLAYER_takeDamage(&player, 0xFFFF);
                    GAME_end(RESULT_LOSE_TIME);
                    XGM_stopPlay();
                }
                UI_updateTimeLeft(timeLeft);
            }
        }

        SPR_update();
        UI_updateFPS(SYS_getFPS());
        UI_updateCPU(SYS_getCPULoad());
        SYS_doVBlankProcess();
    }

    PLAYER_freeSpriteFrames();
    UI_freeSpriteFrames();
    LEVEL_destroy();
    XGM_stopPlay();
    POOL_destroy(gobjPool);
    gobjPool = NULL;

    return result;
}
