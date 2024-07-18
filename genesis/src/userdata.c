
#include "userdata.h"
#include "gjoy.h"
#include <genesis.h>

typedef struct HighScore {
    u32 name, bcdPoints;
} HighScore;

typedef struct UserData {
    u16 buttonConfig;
    HighScore highScores[NUM_SCORES];
} UserData;

static u32 fieldOffset(void* data, void *field) {
    return (u32)(field) - (u32)(data);
}

static void saveButtonConfig(UserData *data, u16 config) {
    data->buttonConfig = config;
    SRAM_writeWord(fieldOffset(data, &data->buttonConfig), config);
}

static void writeScore(u32 scoreOffset, HighScore *score) {
    SRAM_writeLong(scoreOffset + fieldOffset(score, &score->name), score->name);
    SRAM_writeLong(scoreOffset + fieldOffset(score, &score->bcdPoints), score->bcdPoints);
}

static void clearScore(u32 scoreOffset, HighScore *score) {
    score->name = ('N'<<24) + ('O'<<16) + ('N'<<8) + 'E';
    score->bcdPoints = 0;
    writeScore(scoreOffset, score);
}

static void initData(UserData *data) {
    SRAM_enable();

    u16 config = SRAM_readWord(fieldOffset(data, &data->buttonConfig));
    if (config) {
        GJOY_setConfig(config);
    } else {
        config = GJOY_getConfig();
        saveButtonConfig(data, config);
    }

    HighScore *scores = data->highScores;
    u32 scoreOffset = fieldOffset(data, &data->highScores);
    for (int i = 0; i < NUM_SCORES; ++i) {
        HighScore *score = &scores[i];
        u32 name = SRAM_readLong(scoreOffset + fieldOffset(score, &score->name));
        if (name) {
            u32 bcdPoints = SRAM_readLong(scoreOffset + fieldOffset(score, &score->bcdPoints));
            score->name = name;
            score->bcdPoints = bcdPoints;
        } else {
            clearScore(scoreOffset, score);
        }
        scoreOffset += sizeof(HighScore);
    }
}

static int saveScore(UserData *data, u32 name, u32 bcdPoints) {
    HighScore *scores = data->highScores;
    int i = 0;
    for (i = 0; i < NUM_SCORES; ++i) {
        if (bcdPoints >= scores[i].bcdPoints)
            break;
    }
    if (i >= NUM_SCORES)
        return 0;
    
    u32 scoreOffset = fieldOffset(data, &data->highScores) + (NUM_SCORES - 1) * sizeof(HighScore);
    for (int j = NUM_SCORES - 1; j > i; --j) {
        scores[j] = scores[j-1];
        writeScore(scoreOffset, &scores[j]);
        scoreOffset -= sizeof(HighScore);
    }

    HighScore *score = &scores[i];
    score->name = name;
    score->bcdPoints = bcdPoints;
    writeScore(scoreOffset, score);

    return i + 1;
}

static UserData userData;

void USERDATA_init() {
    initData(&userData);
}

void USERDATA_saveButtonConfig(u16 config) {
    saveButtonConfig(&userData, config);
}

int USERDATA_saveScore(u32 name, u32 score) {
    return saveScore(&userData, name, score);
}

void USERDATA_clearScores() {
    UserData *data = &userData;
    HighScore *scores = data->highScores;
    u32 scoreOffset = fieldOffset(data, scores);
    for (int i = 0; i < NUM_SCORES; ++i) {
        HighScore *score = &scores[i];
        clearScore(scoreOffset, score);
        scoreOffset += sizeof(HighScore);
    }
}