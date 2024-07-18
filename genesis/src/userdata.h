#ifndef _USERDATA_H
#define _USERDATA_H

#include "types.h"

#define NUM_SCORES 10

void USERDATA_init();
void USERDATA_saveButtonConfig(u16 config);
int USERDATA_saveScore(u32 name, u32 score);

#endif