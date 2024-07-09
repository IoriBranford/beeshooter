#include "level.h"
#include "gobject.h"
#include "gobjdef.h"

extern const LevelObject lobj4019, lobj4020, lobj4021, lobj4022, lobj4023, lobj4024;
const LevelObject
    *lobj_rightFly = &lobj4019,
    *lobj_leftFly = &lobj4020,
    *lobj_rightPillager = &lobj4021,
    *lobj_leftPillager = &lobj4022,
    *lobj_rightGunner = &lobj4023,
    *lobj_leftGunner = &lobj4024;

static GameObject *leftGunner, *rightGunner, *leftFly, *rightFly;
static const LevelObject *nextPillager;
static u8 reinforceTimer;

void MIDBOSS_spawnPillager(GameObject *self) {
    LEVEL_createObject(nextPillager);
    self->shotsLeft = 0xFF;
    nextPillager = (nextPillager == lobj_rightPillager) ? lobj_leftPillager : lobj_rightPillager;
}

GameObject* MIDBOSS_updateDeadSummon(GameObject *summon) {
    return (summon && GOBJ_isAllocated(summon)) ? summon : NULL;
}

void MIDBOSS_updateAlienMind(GameObject *self) {
    leftGunner = MIDBOSS_updateDeadSummon(leftGunner);
    rightGunner = MIDBOSS_updateDeadSummon(rightGunner);
    leftFly = MIDBOSS_updateDeadSummon(leftFly);
    rightFly = MIDBOSS_updateDeadSummon(rightFly);

    GOBJ_updateShooting(self);
    
    reinforceTimer = reinforceTimer + 1;
    switch (reinforceTimer) {
        case 15:
            if (!leftGunner)
                leftGunner = LEVEL_createObject(lobj_leftGunner);
            break;
        case 30:
            if (!rightGunner)
                rightGunner = LEVEL_createObject(lobj_rightGunner);
            break;
        case 120:
            if (!leftFly)
                leftFly = LEVEL_createObject(lobj_leftFly);
            break;
        case 75:
            if (!rightFly)
                rightFly = LEVEL_createObject(lobj_rightFly);
            break;
    }
    if (reinforceTimer >= 180)
        reinforceTimer = 0;
}

void startAlienMindFight(GameObject *self, GameObjectAction *action) {
    self->invulTimer = 0;
    self->update = (ObjectCallback*)MIDBOSS_updateAlienMind;
    self->shootFunction = MIDBOSS_spawnPillager;
    nextPillager = lobj_rightPillager;
    SPR_setVisibility(self->sprite, VISIBLE);
    GOBJ_startShooting(self, 0xFF, 10);
}