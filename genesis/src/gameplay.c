#include <genesis.h>
#include "gameplay.h"
#include "gobject.h"
#include "gobjdef.h"
#include "res_gfx.h"
#include "res_audio.h"

#include "player.h"
#include "level.h"
#include "ui.h"

const u16 GAMETIME = 60*60;

static u16 timeLeft;
static bool paused, running, timePaused;
static PlayerObject player;
static Pool *gobjPool;

#define TEAM_LIMIT 32
static u8 teamSizes[NUM_TEAMS];
static GameObject *teamObjects[NUM_TEAMS][TEAM_LIMIT];
static GameObject **playerShots = teamObjects[TEAM_PLAYERSHOT];
static GameObject **enemyShots = teamObjects[TEAM_ENEMYSHOT];
static GameObject **enemies = teamObjects[TEAM_ENEMY];

static void gameplay_joyEvent(u16 joy, u16 button, u16 state) {
    if (joy == JOY_1) {
        if (button == BUTTON_START && (state & button)) {
            if ((state & (BUTTON_A|BUTTON_B|BUTTON_C)) == (BUTTON_A|BUTTON_B|BUTTON_C)) {
                running = false;
            } else if (!paused) {
                paused = true;
                XGM2_pause();
                XGM2_playPCMEx(wavPause, sizeof(wavPause), SOUND_PCM_CH1, 15, false, false);
            } else {
                paused = false;
                XGM2_resume();
            }
        } else {
            PLAYER_joyEvent(&player, button, state);
        }
    }
}

void GAME_setTimerPaused(bool paused) {
    timePaused = paused;
}

void GAME_addToTeam(GameObject *gobj, Team team) {
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
    return gobj;
}

void GAME_releaseObject(GameObject *gobj) {
    Team team = gobj->team;
    if (team > TEAM_NONE) {
        GameObject **objects = teamObjects[team];
        u8 n = teamSizes[team];
        for (int i = 0; i < n; ++i) {
            if (objects[i] == gobj) {
                objects[i] = objects[--n];
                objects[n] = NULL;
                teamSizes[team] = n;
                break;
            }
        }
    }
    GOBJ_releaseSprite(gobj);
    OBJ_release(gobjPool, (Object*)gobj, true);
}

int gameplay() {
    int result = 0;

    DMA_setBufferSize(8192);
    DMA_setMaxTransferSize(8192);

    PAL_setPalette(PLAYERPAL, palPlayer.data, DMA);

    VDP_setHilightShadow(true);

    VDP_loadFont(&font, DMA);
    VDP_setTextPriority(1);
    VDP_setTextPalette(PLAYERPAL);

    LEVEL_init();
    SYS_doVBlankProcess();

    XGM2_setFMVolume(50);
    XGM2_setPSGVolume(50);
    XGM2_play(bgm);

    SPR_reset();

    PLAYER_init(&player);
    JOY_setEventHandler(gameplay_joyEvent);
    UI_initHud();

    gobjPool = OBJ_createObjectPool(80, sizeof(GameObject));
    timeLeft = GAMETIME;
    timePaused = true; // waiting for unpauseTimer trigger
    paused = false;
    running = true;
    memset(teamSizes, 0, sizeof(teamSizes));
    memset(teamObjects, 0, sizeof(teamObjects));

    while(running)
    {
        if (paused) {
        } else {
            player.update((Object*)&player);

            for (u8 s = 0; s < teamSizes[TEAM_PLAYERSHOT];) {
                GameObject *playerShot = playerShots[s];
                bool hit = false;
                for (u8 e = 0; e < teamSizes[TEAM_ENEMY];) {
                    GameObject *enemy = enemies[e];
                    if (GOBJ_isHitting(playerShot, enemy)) {
                        if (1 >= enemy->health) {
                            if (enemy->definition->onDefeat)
                                enemy->definition->onDefeat(enemy);
                            GAME_releaseObject(enemy);
                        } else {
                            enemy->health--;
                            ++e;
                        }
                        hit = true;
                    } else {
                        ++e;
                    }
                }
                if (hit)
                    GAME_releaseObject(playerShot);
                else
                    ++s;
            }

            for (u8 s = 0; s < teamSizes[TEAM_ENEMYSHOT]; ++s) {
                GameObject *enemyShot = enemyShots[s];
                if (GOBJ_isHitting((GameObject*)&player, enemyShot)) {
                    // TODO: power down or kill player
                    GAME_releaseObject(enemyShot);
                    break;
                }
            }
            OBJ_updateAll(gobjPool);

            LEVEL_update();
            if (!timePaused && timeLeft) {
                if (!--timeLeft) {
                    // TODO: game over by time
                    // kill player
                    // create time up objects
                }
            }
        }
        UI_drawHud(&player, timeLeft);

        char objCounter[8];
        sprintf(objCounter, "%2d objs", POOL_getNumAllocated(gobjPool));
        VDP_drawText(objCounter, 12, 26);

        SPR_update();
        SYS_doVBlankProcess();
    }

    LEVEL_destroy();
    XGM2_stop();
    POOL_destroy(gobjPool);
    gobjPool = NULL;

    return result;
}
