#ifndef _PLAYER_H
#define _PLAYER_H

#include "gobject.h"

#define PLAYERPAL PAL3
#define PLAYER_NORMALSPEED FIX16(2)
#define PLAYER_FASTSPEED FIX16(4)

enum PlayerWeapon {
    WEAPON_A,
    WEAPON_B
};

typedef struct PlayerObject {
    GameObject;
    u8 weapon, lives;
} PlayerObject;

void PLAYER_init(PlayerObject *self);
void PLAYER_joyEvent(PlayerObject *self, u16 button, u16 state);
void PLAYER_joyUpdate(PlayerObject *self, u16 state);

void PLAYER_powerUp(PlayerObject *self);

void PLAYER_takeDamage(PlayerObject *self, u16 damage);

#endif