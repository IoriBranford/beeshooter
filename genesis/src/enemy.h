#ifndef _ENEMY_H
#define _ENEMY_H

typedef struct GameObject GameObject;

void ENEMY_shootAtPlayer(GameObject *self);
void ENEMY_shootAtDir(GameObject *self);
void ENEMY_alienGunnerShoot(GameObject *self);

void ENEMY_onDefeatBigAnt(GameObject *self);
void ENEMY_updateAlienStandAndShoot(GameObject *self);

void MIDBOSS_onDefeat(GameObject *self);

void ENEMY_onDefeatShootUpward(GameObject *self);

void ENEMY_chargeAtPlayer(GameObject *self);

#endif