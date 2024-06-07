#ifndef _PLAYER_H
#define _PLAYER_H

#include "gobject.h"

typedef struct {
    GameObject;
    u8 speed, weapon, power, lives;
    u32 score;
    u16 timeLeft;
    u8 shootTimer, invulTimer;
} PlayerObject;

void PLAYER_init(PlayerObject *self);
void PLAYER_joyEvent(PlayerObject *self, u16 button, u16 state);
void PLAYER_joyUpdate(PlayerObject *self, u16 state);

#endif