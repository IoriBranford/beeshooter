#include "menu.h"
#include "gjoy.h"
#include "gameplay.h"
#include "userdata.h"
#include "ui.h"
#include <genesis.h>
#include "res_gfx.h"
#include "sounddef.h"

void MENU_defaultInput(const Menu *menu, const MenuItem *item, u16 input);
void startGame(const Menu *menu, const MenuItem *item, u16 input);
void enterOptionsMenu(const Menu *menu, const MenuItem *item, u16 input);
void returnToOptionsMenu(const Menu *menu, const MenuItem *item, u16 input);
void showHighScoreTable(const Menu *menu, const MenuItem *item, u16 input);

void MENU_highScoreTableInput(const Menu *menu, const MenuItem *item, u16 input);
void MENU_highScoreEntryInput(const Menu *menu, const MenuItem *item, u16 input);

void changeButtonConfig(const Menu *menu, const MenuItem *item, u16 input);
void askDataReset(const Menu *menu, const MenuItem *item, u16 input);
void returnToMainMenu(const Menu *menu, const MenuItem *item, u16 input);

void doDataReset(const Menu *menu, const MenuItem *item, u16 input);

const Menu MAIN_MENU = {
    .x = 4, .y = 14,
    .name = "HONEY SOLDIER MD",
    .length = 3,
    .items = {
        {
            .x = 2, .y = 2,
            .name = "START",
            .activateAction = startGame
        },
        {
            .x = 2, .y = 4,
            .name = "OPTIONS",
            .activateAction = enterOptionsMenu
        },
        {
            .x = 2, .y = 6,
            .name = "HIGH SCORES",
            .activateAction = showHighScoreTable
        },
    }
};

const Menu OPTIONS_MENU = {
    .x = 2, .y = 7,
    .name = "OPTIONS",
    .length = 3,
    .items = {
        {
            .x = 2, .y = 2,
            .name = "BUTTON CONFIG",
            .moveAction = changeButtonConfig
        },
        {
            .x = 2, .y = 12,
            .name = "RESET ALL DATA",
            .activateAction = askDataReset,
        },
        {
            .x = 2, .y = 14,
            .name = "RETURN TO MAIN",
            .activateAction = returnToMainMenu
        },
    }
};

const MenuItem *OPTIONS_BUTTON_CONFIG_ITEM = &OPTIONS_MENU.items[0];

const Menu HISCORES_TABLE = {
    .x = 2, .y = 2,
    .name = "HIGH SCORES",
    .inputAction = MENU_highScoreTableInput,
    .length = 0,
    .items = {
        {
            .x = 0, .y = 2,
        }
    }
};

const Menu RESET_DATA_MENU = {
    .x = 2, .y = 10,
    .name = "RESET YOUR NAME,\nHIGH SCORES, AND\nBUTTON CONFIG?",
    .length = 2,
    .items = {
        {
            .x = 2, .y = 8,
            .name = "NO",
            .activateAction = returnToOptionsMenu
        },
        {
            .x = 2, .y = 10,
            .name = "YES",
            .activateAction = doDataReset
        }
    }
};

const Menu HISCORE_ENTRY = {
    .x = 8, .y = 6,
    .inputAction = MENU_highScoreEntryInput,
    .length = 0,
    .items = {
        {
            .x = 0, .y = 2
        }
    }
};

#define MENU_PLANE BG_A

static const char *MENU_CURSOR = "\x7f";
#define MENU_CURSOR_CHAR (MENU_CURSOR[0])
static const char *HISCORE_CURSOR = "^";

#define HISCORE_RANK_START (0)
#define HISCORE_NAME_START (4)
#define HISCORE_SCORE_START (9)

#define FLASHING_PALETTE PAL2
#define FLASHING_COLOR ((FLASHING_PALETTE<<4) + 13)

static const Menu *currentMenu;
static u16 cursorPos;
static char string[32];

void MENU_moveCursor(const Menu *menu, s8 dy) {
    u16 length = menu->length;
    if (!length)
        return;
    u8 x = menu->x, y = menu->y;
    const MenuItem *item = &menu->items[cursorPos];

    VDP_clearText(x, y + item->y, 1);
    if (dy < 0 && cursorPos == 0)
        cursorPos = length - 1;
    else if (dy > 0 && cursorPos == length - 1)
        cursorPos = 0;
    else
        cursorPos += dy;
    item = &menu->items[cursorPos];
    VDP_drawText(MENU_CURSOR, x, y + item->y);
}

static void drawMultiLine(const char *s, u8 x, u8 y, u8 dy) {
    char *out = string;
    dy = max(1, dy);
    for (char *c = s; *c; ++c) {
        if (*c == '\n') {
            *out = '\0';
            VDP_drawText(string, x, y);
            y += dy;
            out = string;
        } else {
            *out = *c;
            ++out;
        }
    }
    *out = '\0';
    VDP_drawText(string, x, y);
}

void MENU_show(const Menu *menu) {
    currentMenu = menu;

    u8 x = menu->x, y = menu->y;
    if (menu->name)
        drawMultiLine(menu->name, x, y, 2);

    for (int i = 0; i < menu->length; ++i) {
        const MenuItem *item = &menu->items[i];
        if (item->name)
            VDP_drawText(item->name, x + item->x, y + item->y);
    }

    cursorPos = 0;
    MENU_moveCursor(menu, 0);
}

void MENU_moveMenuItem(const Menu *menu, const MenuItem *item, u16 input) {
    MenuAction moveAction = item->moveAction;
    if (moveAction)
        moveAction(menu, item, input);
}

void MENU_activateMenuItem(const Menu *menu, const MenuItem *item, u16 input) {
    MenuAction activateAction = item->activateAction;
    if (activateAction)
        activateAction(menu, item, input);
}

void MENU_defaultInput(const Menu *menu, const MenuItem *item, u16 input) {
    if (input & BUTTON_UP)
        MENU_moveCursor(menu, -1);
    if (input & BUTTON_DOWN)
        MENU_moveCursor(menu, 1);
    if (input & (BUTTON_LEFT|BUTTON_RIGHT)) {
        MENU_moveMenuItem(menu, item, input);
    }
    if (input & (BUTTON_A|BUTTON_B|BUTTON_C|BUTTON_START))
        MENU_activateMenuItem(menu, item, input);
    if (input & (BUTTON_UP|BUTTON_DOWN))
        SND_playDef(&sndEnemyShot);
}

void MENU_joyEvent(u16 joy, u16 button, u16 state) {
    if (joy != JOY_1)
        return;
    u16 press = button & state;
    if (press) {
        MenuAction inputAction = currentMenu->inputAction;
        if (!inputAction)
            inputAction = MENU_defaultInput;
        inputAction(currentMenu, &currentMenu->items[cursorPos], state);
    }
}

void showMainMenu(const Menu *menu, const MenuItem *item, u16 input) {
    VDP_clearTextArea(0, 0, 32, 28);
    MENU_show(&MAIN_MENU);
}

void returnToMainMenu(const Menu *menu, const MenuItem *item, u16 input) {
    showMainMenu(menu, item, input);
    SND_playDef(&sndChangeSpeedSlow);
}

void MENU_showButtonConfig(const Menu *menu, const MenuItem *item, u16 config) {
    const u16 BUTTONS[3] = {
        BUTTON_A, BUTTON_B, BUTTON_C
    };

    const char *ACTION_NAMES[3] = {
        "CHANGE SPEED ",
        "FIRE         ",
        "CHANGE WEAPON",
    };

    u16 x = menu->x + item->x + 1;
    u16 y = menu->y + item->y + 2;

    strcpy(string, "A: ");

    for (int b = 0; b < 3; ++b) {
        u16 button = BUTTONS[b];
        u16 cfg = config;
        for (int a = 0; a < 3; ++a) {
            u16 cfgButton = (cfg & 0xf) << 4;
            if ((cfgButton & button)) {
                strcpy(&string[3], ACTION_NAMES[a]);
                break;
            }
            cfg >>= 4;
        }
        VDP_drawText(string, x, y);
        y += 2;
        string[0]++;
    }
}

void showOptionsMenu(const Menu *menu, const MenuItem *item, u16 input) {
    VDP_clearTextArea(0, 0, 32, 28);
    MENU_show(&OPTIONS_MENU);
    MENU_showButtonConfig(&OPTIONS_MENU, OPTIONS_BUTTON_CONFIG_ITEM, GJOY_getConfig());
}

void enterOptionsMenu(const Menu *menu, const MenuItem *item, u16 input) {
    showOptionsMenu(menu, item, input);
    SND_playDef(&sndChangeSpeedFast);
}

void returnToOptionsMenu(const Menu *menu, const MenuItem *item, u16 input) {
    showOptionsMenu(menu, item, input);
    SND_playDef(&sndChangeSpeedSlow);
}

void changeButtonConfig(const Menu *menu, const MenuItem *item, u16 input) {
    u16 config = GJOY_getConfig();
    if (input & BUTTON_LEFT)
        config = GJOY_changeConfig(-1);
    if (input & BUTTON_RIGHT)
        config = GJOY_changeConfig(1);
    if (input & (BUTTON_LEFT|BUTTON_RIGHT)) {
        SND_playDef(&sndChangeWeapon);
        MENU_showButtonConfig(menu, item, config);
        USERDATA_saveButtonConfig(config);
    }
}

void MENU_highScoreTableInput(const Menu *menu, const MenuItem *item, u16 input) {
    if (input & (BUTTON_A|BUTTON_B|BUTTON_C|BUTTON_START)) {
        showMainMenu(NULL, NULL, 0);
        SND_playDef(&sndChangeSpeedSlow);
    }
}

void drawHighScore(u8 x, u8 y, u8 rank, const HighScore *score, bool flashing) {
    // "##. NAME 0123456"
    string[HISCORE_RANK_START] = rank < 10 ? ' ' : ('0' + rank / 10);
    string[HISCORE_RANK_START+1] = '0' + (rank % 10);
    strcpy(&string[HISCORE_RANK_START+2], ". ");

    char *nameString = &string[HISCORE_NAME_START];
    memcpy(nameString, (const char*)&score->name, HISCORE_NAME_LENGTH);
    string[HISCORE_NAME_START+HISCORE_NAME_LENGTH] = ' ';
    char *scoreString = &string[HISCORE_SCORE_START];
    bcdsnprint(scoreString, HISCORE_SCORE_LENGTH, score->bcdPoints);

    u16 palette = flashing ? FLASHING_PALETTE : VDP_getTextPalette();
    u16 attr = TILE_ATTR(palette, VDP_getTextPriority(), false, false);
    VDP_drawTextEx(VDP_getTextPlane(), string, attr, x, y, DMA);
}

void drawHighScores(u8 x, u8 y, u8 dy, u8 flashingRank) {
    dy = max(1, dy);
    for (int i = 0; i < NUM_SCORES; ++i) {
        const HighScore *score = USERDATA_getScore(i);
        u8 rank = i + 1;
        drawHighScore(x, y, rank, score, flashingRank == rank);
        y += dy;
    }
}

void showHighScoreTable(const Menu *menu, const MenuItem *item, u16 input) {
    VDP_clearTextArea(0, 0, 32, 28);
    MENU_show(&HISCORES_TABLE);
    SND_playDef(&sndChangeSpeedFast);

    menu = currentMenu;
    item = &currentMenu->items[0];

    drawHighScores(menu->x + item->x, menu->y + item->y, item->y, 0);
}

void askDataReset(const Menu *menu, const MenuItem *item, u16 input) {
    VDP_clearTextArea(0, 0, 32, 28);
    MENU_show(&RESET_DATA_MENU);
    SND_playDef(&sndChangeSpeedFast);
}

void doDataReset(const Menu *menu, const MenuItem *item, u16 input) {
    USERDATA_reset();
    SND_playDef(&sndBugKill2);
    showOptionsMenu(NULL, NULL, 0);
}

void hideNameCursor(u8 nameX, u8 nameY) {
    u8 cursorX = nameX + cursorPos, cursorY = nameY + 1;
    VDP_clearText(cursorX, cursorY, 1);
}

void moveNameCursor(u8 nameX, u8 nameY, s8 dx) {
    hideNameCursor(nameX, nameY);
    if (dx < 0 && cursorPos == 0)
        cursorPos = HISCORE_NAME_LENGTH - 1;
    else if (dx > 0 && cursorPos == HISCORE_NAME_LENGTH - 1)
        cursorPos = 0;
    else
        cursorPos += dx;
    u8 cursorX = nameX + cursorPos, cursorY = nameY + 1;
    VDP_drawText(HISCORE_CURSOR, cursorX, cursorY);
}

static u8 highScoreRank = 0;
static char highScoreName[HISCORE_NAME_LENGTH+1];
static u32 tickWhenHighScoreEntryDone;

#define TICKS_TO_SHOW_HIGH_SCORE_ENTRY_DONE 900

void changeLetter(u8 nameX, u8 nameY, u8 i, u8 delta, bool flashing) {
    i = i % HISCORE_NAME_LENGTH;
    char *c = highScoreName + i;
    char newC = *c + delta;
    if (newC > 'Z')
        newC = 'A';
    else if (newC < 'A')
        newC = 'Z';
    *c = newC;

    u16 palette = flashing ? FLASHING_PALETTE : VDP_getTextPalette();
    u16 attr = TILE_ATTR(palette, VDP_getTextPriority(), false, false);
    VDP_drawTextEx(VDP_getTextPlane(), highScoreName, attr, nameX, nameY, DMA);
}

void MENU_showHighScoreEntry(u8 rank) {
    highScoreRank = rank;
    u32 name = USERDATA_getName();
    memcpy(highScoreName, (char*)&name, HISCORE_NAME_LENGTH);
    tickWhenHighScoreEntryDone = rank == 0 ? getTick() : 0;

    MENU_show(&HISCORE_ENTRY);

    PAL_setPalette(FLASHING_PALETTE, palPlayerAndBG.data, DMA);

    const Menu *menu = currentMenu;
    const MenuItem *item = &currentMenu->items[0];

    u8 scoresX = menu->x, scoresY = menu->y;
    u8 dy = item->y;
    drawHighScores(scoresX, scoresY, dy, 0);

    if (rank) {
        u8 rankY = scoresY + dy*(rank-1);
        u16 attr = TILE_ATTR(FLASHING_PALETTE, VDP_getTextPriority(), false, false);
        VDP_drawTextEx(VDP_getTextPlane(), MENU_CURSOR, attr, scoresX - 2, rankY, DMA);
        attr |= TILE_ATTR_HFLIP_MASK;
        VDP_drawTextEx(VDP_getTextPlane(), MENU_CURSOR, attr, scoresX + 17, rankY, DMA);
        cursorPos = 0;
        moveNameCursor(scoresX + HISCORE_NAME_START, rankY, 0);
    }
}

void MENU_highScoreEntryInput(const Menu *menu, const MenuItem *item, u16 input) {
    if (tickWhenHighScoreEntryDone) {
        if (input & (BUTTON_START))
            GAME_close();
        return;
    }

    menu = &HISCORE_ENTRY;
    item = &HISCORE_ENTRY.items[0];
    u8 nameX = menu->x + HISCORE_NAME_START;
    u8 nameY = menu->y + item->y*(highScoreRank-1);

    if (input & BUTTON_LEFT)
        moveNameCursor(nameX, nameY, -1);
    if (input & BUTTON_RIGHT)
        moveNameCursor(nameX, nameY, 1);
    if (input & BUTTON_UP)
        changeLetter(nameX, nameY, cursorPos, -1, false);
    if (input & BUTTON_DOWN)
        changeLetter(nameX, nameY, cursorPos, 1, false);
    if (input & (BUTTON_UP|BUTTON_DOWN))
        SND_playDef(&sndChangeWeapon);
    if (input & (BUTTON_LEFT|BUTTON_RIGHT))
        SND_playDef(&sndEnemyShot);
    if (input & (BUTTON_START)) {
        hideNameCursor(nameX, nameY);
        USERDATA_updateScoreName(highScoreRank-1, highScoreName);
        tickWhenHighScoreEntryDone = getTick();
        SND_playDef(&sndExtend);
        u8 scoresX = menu->x, scoresY = menu->y;
        u8 dy = item->y;
        drawHighScores(scoresX, scoresY, dy, highScoreRank);
    }
}

void MENU_updateHighScoreEntry() {
    u32 now = getTick();
    UI_updateBonusColorFlash(FLASHING_COLOR, now/5);
    if (tickWhenHighScoreEntryDone) {
        if (tickWhenHighScoreEntryDone + TICKS_TO_SHOW_HIGH_SCORE_ENTRY_DONE < now)
            GAME_close();
    }
}