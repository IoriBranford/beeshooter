#ifndef _USERDATA_H
#define _USERDATA_H

#include "types.h"

#define NUM_SCORES 10
#define HISCORE_SCORE_LENGTH 7
#define HISCORE_NAME_LENGTH 4

typedef struct HighScore {
    u32 name, bcdPoints;
} HighScore;

void USERDATA_init();
void USERDATA_saveButtonConfig(u16 config);
u8 USERDATA_saveScore(u32 name, u32 score);
const HighScore* USERDATA_getScore(u32 i);
void USERDATA_clearScores();
u32 USERDATA_getName();
void USERDATA_updateScoreName(u32 i, const char *nameStr);

#endif