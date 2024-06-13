#ifndef _BULLET_H
#define _BULLET_H

#include "types.h"
#include "gobject.h"

GameObject* BULLET_createAngAndDef(fix16 centerX, fix16 centerY, u16 angle, const GameObjectDefinition *def);

void BULLET_update(GameObject *self);

#endif