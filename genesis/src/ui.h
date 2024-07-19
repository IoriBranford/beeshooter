#ifndef _UI_H
#define _UI_H

#include "types.h"

void bcdsnprint(char *s, u32 n, u32 bcd);

void UI_updateBonusColorFlash(u16 colorIndex, u16 timer);

#endif