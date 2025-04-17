#ifndef _MENU_H
#define _MENU_H

#include "types.h"

typedef struct Menu Menu;
typedef struct MenuItem MenuItem;
typedef void (*MenuInput)(const Menu *menu, const MenuItem *item, u16 pressed, u16 down);
typedef void (*MenuUpdate)(const Menu *menu, const MenuItem *item);

struct MenuItem {
    u8 x, y;
    const char *name;
    MenuInput activateAction;
    MenuInput moveAction;
};

struct Menu {
    u8 x, y;
    const char *name;
    MenuInput inputAction;
    MenuUpdate update;
    u16 length;
    MenuItem items[];
};

extern const Menu MAIN_MENU;

void MENU_initFlashingPalette();

void MENU_show(const Menu *menu);

void MENU_joyEvent(u16 joy, u16 button, u16 state);

void MENU_updateCurrent();

void MENU_showHighScoreEntry(u8 rank);

#endif