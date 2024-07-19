#include "menu.h"
#include "gjoy.h"
#include "gameplay.h"
#include "userdata.h"
#include <genesis.h>

void MENU_defaultInput(const Menu *menu, const MenuItem *item, u16 input);
void startGame(const Menu *menu, const MenuItem *item, u16 input);
void showOptionsMenu(const Menu *menu, const MenuItem *item, u16 input);
void showHighScores(const Menu *menu, const MenuItem *item, u16 input);

void changeButtonConfig(const Menu *menu, const MenuItem *item, u16 input);
void showHighScoreClear(const Menu *menu, const MenuItem *item, u16 input);
void showMainMenu(const Menu *menu, const MenuItem *item, u16 input);

void clearHighScores(const Menu *menu, const MenuItem *item, u16 input);

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
            .activateAction = showOptionsMenu
        },
        {
            .x = 2, .y = 6,
            .name = "HIGH SCORES",
            // .activateAction = showHighScores
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
            .name = "CLEAR HIGH SCORES",
            .activateAction = showHighScoreClear,
        },
        {
            .x = 2, .y = 14,
            .name = "RETURN TO MAIN",
            .activateAction = showMainMenu
        },
    }
};

const MenuItem *OPTIONS_BUTTON_CONFIG_ITEM = &OPTIONS_MENU.items[0];

const Menu CLEAR_HISCORES_MENU = {
    .x = 2, .y = 14,
    .name = "CLEAR HIGH SCORES?",
    .length = 2,
    .items = {
        {
            .x = 2, .y = 2,
            .name = "NO",
            .activateAction = showOptionsMenu
        },
        {
            .x = 2, .y = 4,
            .name = "YES",
            .activateAction = clearHighScores
        }
    }
};

#define MENU_PLANE BG_A

static const char *CURSOR_STRING = "\x7f";
#define CURSOR_CHAR (CURSOR_STRING[0])

static const Menu *currentMenu;
static u16 cursorPos;
static char string[32];

void MENU_moveCursor(const Menu *menu, s8 dy) {
    u8 x = menu->x, y = menu->y;
    const MenuItem *item = &menu->items[cursorPos];
    u16 length = menu->length;

    VDP_clearText(x, y + item->y, 1);
    if (dy < 0 && cursorPos == 0)
        cursorPos = length - 1;
    else if (dy > 0 && cursorPos == length - 1)
        cursorPos = 0;
    else
        cursorPos += dy;
    item = &menu->items[cursorPos];
    VDP_drawText(CURSOR_STRING, x, y + item->y);
}

void MENU_show(const Menu *menu) {
    currentMenu = menu;

    u8 x = menu->x, y = menu->y;
    if (menu->name)
        VDP_drawText(menu->name, x, y);

    for (int i = 0; i < menu->length; ++i) {
        const MenuItem *item = &menu->items[i];
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
    if (input & (BUTTON_LEFT|BUTTON_RIGHT))
        MENU_moveMenuItem(menu, item, input);
    if (input & (BUTTON_A|BUTTON_B|BUTTON_C|BUTTON_START))
        MENU_activateMenuItem(menu, item, input);
}

void MENU_joyEvent(u16 joy, u16 button, u16 state) {
    if (joy != JOY_1)
        return;
    u16 press = button & state;
    if (press) {
        MenuAction inputAction = currentMenu->inputAction;
        if (!inputAction)
            inputAction = MENU_defaultInput;
        inputAction(currentMenu, &currentMenu->items[cursorPos], press);
    }
}

void showMainMenu(const Menu *menu, const MenuItem *item, u16 input) {
    VDP_clearTextArea(0, 0, 32, 28);
    MENU_show(&MAIN_MENU);
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

void changeButtonConfig(const Menu *menu, const MenuItem *item, u16 input) {
    u16 config = GJOY_getConfig();
    if (input & BUTTON_LEFT)
        config = GJOY_changeConfig(-1);
    if (input & BUTTON_RIGHT)
        config = GJOY_changeConfig(1);
    MENU_showButtonConfig(menu, item, config);
    USERDATA_saveButtonConfig(config);
}

void showHighScoreClear(const Menu *menu, const MenuItem *item, u16 input) {
    VDP_clearTextArea(0, 0, 32, 28);
    MENU_show(&CLEAR_HISCORES_MENU);
}

void clearHighScores(const Menu *menu, const MenuItem *item, u16 input) {
    USERDATA_clearScores();
    showOptionsMenu(NULL, NULL, 0);
}