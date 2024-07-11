#ifndef _ITEM_H
#define _ITEM_H

typedef struct GameObject GameObject;

void GOBJ_openStandardHoneypot(GameObject *self);
void GOBJ_openReinforcedHoneypot(GameObject *self);
void GOBJ_updatePowerupRise(GameObject *self);

#endif