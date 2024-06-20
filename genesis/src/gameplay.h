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

typedef enum GameResult {
    RESULT_NONE,
    RESULT_WIN,
    RESULT_LOSE_KILLED,
    RESULT_LOSE_TIME,
    RESULTS
} GameResult;

typedef struct PlayerObject PlayerObject;

void GAME_scorePoints(u32 points);
void GAME_setTimerPaused(bool paused);
void GAME_end(GameResult r);

PlayerObject* GAME_livePlayer();

GameObject* GAME_createObject();
void GAME_putObjectInTeam(GameObject *gobj, Team team);
void GAME_releaseObject(GameObject *gobj);

#endif