
#include "userdata.h"
#include "gjoy.h"
#include <genesis.h>

typedef struct UserData {
    u16 buttonConfig;
    HighScore highScores[NUM_SCORES];
    u32 name;
} UserData;

static u32 fieldOffset(void* data, void *field) {
    return (u32)(field) - (u32)(data);
}

static void saveButtonConfig(UserData *data, u16 config) {
    data->buttonConfig = config;
    SRAM_writeWord(fieldOffset(data, &data->buttonConfig), config);
}

static void saveName(UserData *data, u32 name) {
    data->name = name;
    SRAM_writeLong(fieldOffset(data, &data->name), name);
}

static void writeScore(UserData *data, u8 i) {
    HighScore *score = &data->highScores[i];
    SRAM_writeLong(fieldOffset(data, &score->name), score->name);
    SRAM_writeLong(fieldOffset(data, &score->bcdPoints), score->bcdPoints);
}

static void clearScore(UserData *data, u8 i) {
    HighScore *score = &data->highScores[i];
    score->name = ('N'<<24) + ('O'<<16) + ('N'<<8) + 'E';
    score->bcdPoints = 0;
    writeScore(data, i);
}

static void initData(UserData *data) {
    SRAM_enable();

    u32 name = SRAM_readLong(fieldOffset(data, &data->name));
    if (!name) {
        name = ('A'<<24) | ('A'<<16) | ('A'<<8) | ('A'<<0);
        saveName(data, name);
    }

    u16 config = SRAM_readWord(fieldOffset(data, &data->buttonConfig));
    if (config) {
        GJOY_setConfig(config);
    } else {
        config = GJOY_getConfig();
        saveButtonConfig(data, config);
    }

    HighScore *scores = data->highScores;
    for (int i = 0; i < NUM_SCORES; ++i) {
        HighScore *score = &scores[i];
        u32 name = SRAM_readLong(fieldOffset(data, &score->name));
        if (name) {
            u32 bcdPoints = SRAM_readLong(fieldOffset(data, &score->bcdPoints));
            score->name = name;
            score->bcdPoints = bcdPoints;
        } else {
            clearScore(data, i);
        }
    }
}

static u8 addScore(UserData *data, u32 name, u32 bcdPoints) {
    if (!bcdPoints)
        return 0;

    HighScore *scores = data->highScores;
    u8 i = 0;
    for (i = 0; i < NUM_SCORES; ++i) {
        if (bcdPoints >= scores[i].bcdPoints)
            break;
    }
    if (i >= NUM_SCORES)
        return 0;
    
    for (u8 j = NUM_SCORES - 1; j > i; --j) {
        scores[j] = scores[j-1];
        writeScore(data, j);
    }

    HighScore *score = &scores[i];
    score->name = name;
    score->bcdPoints = bcdPoints;
    writeScore(data, i);

    return i + 1;
}

static UserData userData;

void USERDATA_init() {
    initData(&userData);
}

void USERDATA_saveButtonConfig(u16 config) {
    saveButtonConfig(&userData, config);
}

u8 USERDATA_saveScore(u32 name, u32 points) {
    return addScore(&userData, name, u32ToBCD(points));
}

const HighScore* USERDATA_getScore(u32 i) {
    return &userData.highScores[i];
}

void USERDATA_clearScores() {
    UserData *data = &userData;
    for (int i = 0; i < NUM_SCORES; ++i) {
        clearScore(data, i);
    }
}

u32 USERDATA_getName() {
    return userData.name;
}