#ifndef _BULLET_H
#define _BULLET_H

#include "types.h"
#include "gobject.h"

GameObject* BULLET_createVXVY(fix16 centerX, fix16 centerY, fix16 velX, fix16 velY);
GameObject* BULLET_createAS(fix16 centerX, fix16 centerY, u16 angle, u16 speed);
GameObject* BULLET_createAngAndDef(fix16 centerX, fix16 centerY, u16 angle, const GameObjectDefinition *def);

void BULLET_update(GameObject *self);

#endif