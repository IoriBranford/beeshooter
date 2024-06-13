#ifndef _GAMEPLAY_H
#define _GAMEPLAY_H

#include "types.h"
#include "gobject.h"

#define GAME_BOUNDW (FIX16(256))
#define GAME_BOUNDH (FIX16(224))

typedef enum Team {
    TEAM_NONE = -1,
    TEAM_PLAYERSHOT,
    TEAM_ENEMYSHOT,
    TEAM_ENEMY,
    NUM_TEAMS
} Team;

void GAME_setTimerPaused(bool paused);

GameObject* GAME_createObject();
void GAME_releaseObject(GameObject *gobj);

#endif