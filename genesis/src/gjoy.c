#include "gjoy.h"
#include <genesis.h>

#define NUM_BUTTON_CONFIGS 6
const u16 BUTTON_CONFIGS[NUM_BUTTON_CONFIGS] = {
    BUTTONCONFIG(BUTTON_A, BUTTON_B, BUTTON_C),
    BUTTONCONFIG(BUTTON_A, BUTTON_C, BUTTON_B),
    BUTTONCONFIG(BUTTON_B, BUTTON_A, BUTTON_C),
    BUTTONCONFIG(BUTTON_B, BUTTON_C, BUTTON_A),
    BUTTONCONFIG(BUTTON_C, BUTTON_B, BUTTON_A),
    BUTTONCONFIG(BUTTON_C, BUTTON_A, BUTTON_B),
};

static u16 config = BUTTONCONFIG(BUTTON_A, BUTTON_B, BUTTON_C);

u16 GJOY_getConfig() {
    return config;
}

u16 GJOY_changeConfig(s8 dir) {
    int i;
    for (i = 0; i < NUM_BUTTON_CONFIGS; ++i) {
        if (BUTTON_CONFIGS[i] == config)
            break;
    }

    if (dir < 0 && i == 0) {
        i = NUM_BUTTON_CONFIGS - 1;
    } else if (dir > 0 && i >= NUM_BUTTON_CONFIGS - 1) {
        i = 0;
    } else {
        i += dir;
    }

    config = BUTTON_CONFIGS[i];
    return config;
}
