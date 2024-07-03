#ifndef _ENEMY_H
#define _ENEMY_H

typedef struct GameObject GameObject;

void ENEMY_shootAtPlayer(GameObject *self);
void ENEMY_shootAtDir(GameObject *self);

void ENEMY_onDefeatBigAnt(GameObject *self);
void ENEMY_updateAlienStandAndShoot(GameObject *self);

#endif