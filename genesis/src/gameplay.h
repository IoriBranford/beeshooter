#ifndef _GAMEPLAY_H
#define _GAMEPLAY_H

#include "types.h"
#include "gobject.h"

#define GAME_BOUNDW (FIX16(256))
#define GAME_BOUNDH (FIX16(224))

#define PAL_PLAYER_AND_BG PAL3

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

u16 GAME_timeLeft();
void GAME_disableExtends();
void GAME_scorePoints(u32 points);
u16 GAME_addTime(s16 time);
void GAME_setTimerPaused(bool paused);
void GAME_end(GameResult r);
void GAME_loadPart2Sprites();
void GAME_loadBossPartSprites();
void GAME_defeatTeam(Team team);

PlayerObject* GAME_player();
PlayerObject* GAME_livePlayer();

GameObject* GAME_createObject();
void GAME_addObjectToTeams(GameObject *gobj, u16 teams);
void GAME_removeObjectFromTeams(GameObject *gobj);
void GAME_releaseObject(GameObject *gobj);
void GAME_releaseAllObjects();

void GAME_close();

int gameplay();

#endif