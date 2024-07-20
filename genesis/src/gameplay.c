#include <genesis.h>
#include "gameplay.h"
#include "gobject.h"
#include "gobjdef.h"
#include "sounddef.h"
#include "userdata.h"
#include "menu.h"
#include "res_gfx.h"
#include "res_audio.h"

#include "player.h"
#include "level.h"
#include "hud.h"

#define GAMETIME 3600
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
static u8 timerMinutes, timerSeconds, timerFrames;
static u32 score, lastFrameScore;
static u8 extendScoreIndex;
static u8 result;
static bool paused, running, timePaused;
static PlayerObject player;
static Pool *gobjPool;
static u16 tileIndex;

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
            if (paused) {
                PLAYER_joyUpdatePressed(&player);
                SPR_update();
            }
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
        HUD_updateLives(player.lives);
    }
    score = min(MAXSCORE, newScore);
}

void GAME_addTime(u16 time) {
    timeLeft += time;
    timerMinutes = timeLeft / 3600;
    timerSeconds = (timeLeft / 60) % 60;
    timerFrames = timeLeft % 60;
    HUD_updateTimerMinutes(timerMinutes);
    HUD_updateTimerSeconds(timerSeconds);
    HUD_updateTimerFrames(timerFrames);
}

void GAME_setTimerPaused(bool paused) {
    timePaused = paused;
}

void GAME_addObjectToTeams(GameObject *gobj, u16 teams) {
    for (u16 team = 0; team < NUM_TEAMS; ++team) {
        if (((1<<team) & teams)) {
            if (teamSizes[team] < TEAM_LIMIT) {
                teamObjects[team][teamSizes[team]] = gobj;
                teamSizes[team]++;
                gobj->teams |= (1<<team);
            }
        }
    }
}

void GAME_removeObjectFromTeams(GameObject *gobj) {
    u16 teams = gobj->teams;
    for (u16 team = 0; team < NUM_TEAMS; ++team) {
        if (((1<<team) & teams)) {
            GameObject **objects = teamObjects[team];
            u8 n = teamSizes[team];
            for (int i = 0; i < n; ++i) {
                if (objects[i] == gobj) {
                    objects[i] = objects[--n];
                    objects[n] = NULL;
                    teamSizes[team] = n;
                    gobj->teams &= ~(1<<team);
                    break;
                }
            }
        }
    }
}

void GAME_defeatTeam(Team team) {
    for (int i = teamSizes[team] - 1; i >= 0; --i) {
        GOBJ_defeat(teamObjects[team][i]);
    }
}

GameObject* GAME_createObject() {
    GameObject *gobj = (GameObject*)OBJ_create(gobjPool);
    GOBJ_init(gobj);
#ifdef DEBUG
#ifdef DEBUG_OBJECT_COUNT
    HUD_updateObjectCount(POOL_getNumAllocated(gobjPool));
#endif
#endif
    return gobj;
}

void GAME_releaseObject(GameObject *gobj) {
    GAME_removeObjectFromTeams(gobj);
    GOBJ_releaseSprite(gobj);
    OBJ_release(gobjPool, (Object*)gobj, true);
#ifdef DEBUG
#ifdef DEBUG_OBJECT_COUNT
    HUD_updateObjectCount(POOL_getNumAllocated(gobjPool));
#endif
#endif
}

void GAME_loadPart2Sprites() {
    tileIndex = GOBJDEF_freePart1EnemyFrames();
    tileIndex = GOBJDEF_loadPart2EnemyFrames(tileIndex);
}

void GAME_releaseAllObjects() {
    GameObject** objects = (GameObject**) POOL_getFirst(gobjPool);
    u16 num = POOL_getNumAllocated(gobjPool);

    while(num--)
    {
        GameObject* object = *objects++;
        GAME_releaseObject(object);
    }
}

void GAME_close() {
    running = false;
}

void GAME_end(GameResult r) {
    result = r;
    HUD_updateResult(r);

    GAME_releaseAllObjects();
    
    u32 name = USERDATA_getName();
    u8 rank = USERDATA_saveScore(name, score);
    MENU_showHighScoreEntry(rank);
    JOY_setEventHandler(MENU_joyEvent);
}

void GAME_doCollision() {
    for (u8 e = 0; e < teamSizes[TEAM_ENEMY];) {
        GameObject *enemy = enemies[e];
        if (enemy->invulTimer || !GOBJ_isBodyOnScreen(enemy)) {
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
                        GAME_removeObjectFromTeams(enemy);
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

    GameObject *gobjPlayer = (GameObject*)&player;
    GOBJ_updateBody(gobjPlayer);
    for (u8 s = 0; s < teamSizes[TEAM_ENEMYSHOT];) {
        GameObject *enemyShot = enemyShots[s];
        if (enemyShot->invulTimer) {
            ++s;
            continue;
        }
        if (GOBJ_isHitting(gobjPlayer, enemyShot)) {
            u16 damage = enemyShot->definition->damage;
            if (damage) {
                if (!player.invulTimer) {
                    PLAYER_takeDamage(&player, damage);
                }
            } else {
                PLAYER_powerUp(&player);
            }
            if (enemyShot->health <= 1) {
                GAME_removeObjectFromTeams(enemyShot);
                GOBJ_defeat(enemyShot);
            } else {
                ++s;
            }
        } else {
            ++s;
        }
    }
}

int gameplay() {
    DMA_setBufferSize(8192);
    DMA_setMaxTransferSize(8192);

    VDP_setBackgroundColor((PAL_PLAYER_AND_BG << 4) + 14);
    VDP_setTextPalette(PAL_PLAYER_AND_BG);

    tileIndex = TILE_USER_INDEX;

    SPR_reset();
    tileIndex = HUD_loadSpriteFrames(tileIndex);

    LEVEL_init(tileIndex);
    tileIndex += bgTileset.numTile;
    tileIndex = GOBJDEF_loadCommonFrames(tileIndex);
    if (LEVEL_toWorldY(0) > FIX32(2000))
        tileIndex = GOBJDEF_loadPart1EnemyFrames(tileIndex);
    else
        tileIndex = GOBJDEF_loadPart2EnemyFrames(tileIndex);
    SYS_doVBlankProcess();

    PLAYER_init(&player);
    JOY_setEventHandler(gameplay_joyEvent);

    gobjPool = OBJ_createObjectPool(80, sizeof(GameObject));
    score = lastFrameScore = 0;
    extendScoreIndex = 0;
    result = RESULT_NONE;
    timeLeft = GAMETIME;
    timerMinutes = GAMETIME / 3600;
    timerSeconds = (GAMETIME / 60) % 60;
    timerFrames = GAMETIME % 60;
    timePaused = true; // waiting for unpauseTimer trigger
    paused = false;
    running = true;
    memset(teamSizes, 0, sizeof(teamSizes));
    memset(teamObjects, 0, sizeof(teamObjects));
    HUD_init(&player, timeLeft);

    DMA_waitCompletion();
    DMA_setBufferSizeToDefault();
    DMA_setMaxTransferSizeToDefault();
    PAL_fadeToPalette(PAL_PLAYER_AND_BG, palPlayerAndBG.data, 30, true);
    XGM_startPlay(bgm);

    while(running)
    {
        if (result) {
            MENU_updateHighScoreEntry();
        } else if (paused) {
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
                
                if (timerFrames) {
                    --timerFrames;
                } else {
                    if (timerSeconds) {
                        timerFrames = 59;
                        --timerSeconds;
                    } else {
                        if (timerMinutes) {
                            timerFrames = 59;
                            timerSeconds = 59;
                            --timerMinutes;
                        }
                        HUD_updateTimerMinutes(timerMinutes);
                    }
                    HUD_updateTimerSeconds(timerSeconds);
                }
                HUD_updateTimerFrames(timerFrames);
            }
            SPR_update();
        }

        HUD_updateBonus();
#ifdef DEBUG
#ifdef DEBUG_PERF
        HUD_updateFPS(SYS_getFPS());
        HUD_updateCPU(SYS_getCPULoad());
#endif
#endif
        if (score != lastFrameScore) {
            HUD_updateScore(score);
            lastFrameScore = score;
        }

        SYS_doVBlankProcess();
    }

    JOY_setEventHandler(NULL);
    GOBJDEF_freePart1EnemyFrames();
    GOBJDEF_freePart2EnemyFrames();
    GOBJDEF_freeCommonFrames();
    HUD_freeSpriteFrames();
    LEVEL_destroy();
    XGM_stopPlay();
    POOL_destroy(gobjPool);
    gobjPool = NULL;

    return result;
}
