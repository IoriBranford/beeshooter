#ifndef _JOY_H
#define _JOY_H

#include "types.h"

#define BUTTONCONFIG(speed, fire, weapon) ((speed >> 4) | (fire) | (weapon << 4))
#define BUTTONCONFIG_SPEEDMASK 0x000f
#define BUTTONCONFIG_FIREMASK 0x00f0
#define BUTTONCONFIG_WEAPONMASK 0x0f00

u16 GJOY_getConfig();
u16 GJOY_changeConfig(s8 dir);

#endif