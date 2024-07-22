
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

static void saveScore(UserData *data, u8 i, u32 name, u32 bcdPoints) {
    HighScore *score = &data->highScores[i];
    score->name = name;
    score->bcdPoints = bcdPoints;
    SRAM_writeLong(fieldOffset(data, &score->name), name);
    SRAM_writeLong(fieldOffset(data, &score->bcdPoints), bcdPoints);
}

static void clearScore(UserData *data, u8 i) {
    u32 name = ('N'<<24) + ('O'<<16) + ('N'<<8) + 'E';
    u32 bcdPoints = 0;
    saveScore(data, i, name, bcdPoints);
}

static void clearScores(UserData *data) {
    for (int i = 0; i < NUM_SCORES; ++i) {
        clearScore(data, i);
    }
}

static bool isValidName(u32 name) {
    for (int i = 0; i < HISCORE_NAME_LENGTH; ++i) {
        char c = name & 0xff;
        if ('A' > c || c > 'Z') {
            return false;
        }
        name >>= 8;
    }
    return true;
}

static bool isValidScore(u32 bcdPoints) {
    for (int i = 0; i < HISCORE_SCORE_LENGTH; ++i) {
        u8 d = bcdPoints & 0xf;
        if (d > 9) {
            return false;
        }
        bcdPoints >>= 4;
    }
    return bcdPoints == 0;
}

static bool isValidData(UserData *data) {
    if (!isValidName(data->name))
        return false;
    if (!GJOY_isValidConfig(data->buttonConfig))
        return false;
    HighScore *scores = data->highScores;
    for (int i = 0; i < NUM_SCORES; ++i) {
        HighScore *score = &scores[i];
        u32 name = score->name;
        u32 bcdPoints = score->bcdPoints;
        if (!isValidName(name) || !isValidScore(bcdPoints)) {
            return false;
        }
    }
    return true;
}

static void clearData(UserData *data) {
    SRAM_enable();
    saveName(data, ('A'<<24) | ('A'<<16) | ('A'<<8) | ('A'<<0));
    saveButtonConfig(data, GJOY_getConfig());
    clearScores(data);
    SRAM_disable();
}

static void loadData(UserData *data) {
    SRAM_enableRO();
    data->name = SRAM_readLong(fieldOffset(data, &data->name));
    data->buttonConfig = SRAM_readWord(fieldOffset(data, &data->buttonConfig));
    HighScore *scores = data->highScores;
    for (int i = 0; i < NUM_SCORES; ++i) {
        HighScore *score = &scores[i];
        score->name = SRAM_readLong(fieldOffset(data, &score->name));
        score->bcdPoints = SRAM_readLong(fieldOffset(data, &score->bcdPoints));
    }
    SRAM_disable();

    if (!isValidData(data))
        clearData(data);
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

    SRAM_enable();

    for (u8 j = NUM_SCORES - 1; j > i; --j) {
        HighScore *score = &scores[j-1];
        saveScore(data, j, score->name, score->bcdPoints);
    }

    saveScore(data, i, name, bcdPoints);

    SRAM_disable();
    return i + 1;
}

static UserData userData;

void USERDATA_init() {
    loadData(&userData);
}

void USERDATA_saveButtonConfig(u16 config) {
    SRAM_enable();
    saveButtonConfig(&userData, config);
    SRAM_disable();
}

u8 USERDATA_saveScore(u32 name, u32 points) {
    return addScore(&userData, name, u32ToBCD(points));
}

const HighScore* USERDATA_getScore(u32 i) {
    return &userData.highScores[i];
}

void USERDATA_clearScores() {
    SRAM_enable();
    clearScores(&userData);
    SRAM_disable();
}

void USERDATA_reset() {
    clearData(&userData);
}

u32 USERDATA_getName() {
    return userData.name;
}

void USERDATA_updateScoreName(u32 i, const char *nameStr) {
    u32 name = (nameStr[0]<<24) | (nameStr[1]<<16) | (nameStr[2]<<8) | (nameStr[3]);
    HighScore *score = &userData.highScores[i];
    score->name = name;

    SRAM_enable();
    saveName(&userData, name);
    SRAM_writeLong(fieldOffset(&userData, &score->name), name);
    SRAM_disable();
}