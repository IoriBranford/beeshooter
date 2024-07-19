#ifndef _MENU_H
#define _MENU_H

#include "types.h"

typedef struct Menu Menu;
typedef struct MenuItem MenuItem;
typedef void (*MenuAction)(const Menu *menu, const MenuItem *item, u16 input);

struct MenuItem {
    u8 x, y;
    const char *name;
    MenuAction activateAction;
    MenuAction moveAction;
};

struct Menu {
    u8 x, y;
    const char *name;
    MenuAction inputAction;
    u16 length;
    MenuItem items[];
};

extern const Menu MAIN_MENU;

void MENU_show(const Menu *menu);

void MENU_joyEvent(u16 joy, u16 button, u16 state);

void MENU_showHighScoreEntry(u8 rank);

#endif