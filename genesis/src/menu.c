#include "menu.h"
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
            // .activateAction = showOptionsMenu
        },
        {
            .x = 2, .y = 6,
            .name = "HIGH SCORES",
            // .activateAction = showHighScores
        },
    }
};

// const Menu OPTIONS_MENU = {
//     .x = 4, .y = 7,
//     .name = "OPTIONS",
//     .length = 3,
//     .items = {
//         {
//             .x = 2, .y = 2,
//             .name = "BUTTON CONFIG",
//             .moveAction = changeButtonConfig
//         },
//         {
//             .x = 2, .y = 8,
//             .name = "CLEAR HIGH SCORES",
//             .activateAction = showHighScoreClear,
//         },
//         {
//             .x = 2, .y = 10,
//             .name = "RETURN TO MAIN",
//             .activateAction = showMainMenu
//         },
//     }
// };

// const Menu CLEAR_HISCORES_MENU = {
//     .x = 4, .y = 7,
//     .name = "CLEAR HIGH SCORES?",
//     .length = 2,
//     .items = {
//         {
//             .x = 2, .y = 2,
//             .name = "NO",
//             .moveAction = showOptionsMenu
//         },
//         {
//             .x = 2, .y = 4,
//             .name = "YES",
//             .activateAction = clearHighScores
//         }
//     }
// };

#define MENU_PLANE BG_A

static const char *CURSOR_STRING = "\x7f";
#define CURSOR_CHAR (CURSOR_STRING[0])

static const Menu *currentMenu;
static u16 cursorPos;

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
    MENU_show(&MAIN_MENU);
}