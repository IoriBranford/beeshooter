#ifndef _BULLET_H
#define _BULLET_H

#include "types.h"
#include "gobject.h"

GameObject* BULLET_createAngAndDef(fix16 centerX, fix16 centerY, u16 angle, const GameObjectDefinition *def);
GameObject* BULLET_shootAtVector(fix16 centerX, fix16 centerY, fix16 dx, fix16 dy, const GameObjectDefinition *def);
GameObject* BULLET_shootAtTarget(fix16 centerX, fix16 centerY, GameObject *target, const GameObjectDefinition *def);

void BULLET_update(GameObject *self);
void BULLET_updateAngleTester(GameObject *self);

#endif