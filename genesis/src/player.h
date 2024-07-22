#ifndef _PLAYER_H
#define _PLAYER_H

#include "gobject.h"

#define PLAYER_NORMALSPEED FIX16(2)
#define PLAYER_FASTSPEED FIX16(4)

enum PlayerWeapon {
    WEAPON_A,
    WEAPON_B
};

typedef struct PlayerObject {
    GameObject;
    u8 weapon, lives;
    u16 buttonsPressed;
} PlayerObject;

void PLAYER_init(PlayerObject *self);
void PLAYER_joyEvent(PlayerObject *self, u16 button, u16 state);
void PLAYER_joyUpdateHeld(PlayerObject *self, u16 state);
void PLAYER_joyUpdatePressed(PlayerObject *self);

void PLAYER_powerUp(PlayerObject *self);
void PLAYER_giveInvul(PlayerObject *self, u8 invul);

void PLAYER_takeDamage(PlayerObject *self, u16 damage);

void PLAYER_startEndBonusTally(PlayerObject *self);

#endif