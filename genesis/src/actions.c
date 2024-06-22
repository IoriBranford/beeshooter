#include "level.h"
#include "gobject.h"
#include "gameplay.h"

#include <genesis.h>

void unpauseTimer(Trigger *trigger) {
    GAME_setTimerPaused(false);
}

void spawnCharacters(Trigger *trigger)
{
    LevelObject *object = trigger->group->objects;
    if (!object)
        return;
    for (int i = 0; i < trigger->group->numObjects; ++i) {
        GameObject *gobj = LEVEL_createObject(object);
        gobj->parentType = PARENTTYPE_TRIGGER;
        gobj->parentTrigger = trigger;
        object++;
    }
}

void spawnNextCharacters(Trigger *trigger)
{
    LevelObjectGroup *group = trigger->group;
    LevelObject *object = group->objects;
    if (!object)
        return;
    int n = min(group->numObjectsSpawned + trigger->count, group->numObjects);
    object += group->numObjectsSpawned;
    for (int i = group->numObjectsSpawned; i < n; ++i) {
        GameObject *gobj = LEVEL_createObject(object);
        gobj->parentType = PARENTTYPE_TRIGGER;
        gobj->parentTrigger = trigger;
        object++;
    }
}

void stopStageScroll(Trigger *trigger)
{
    LEVEL_setVelY(0);
}

void faceRight(GameObject *self, PathPoint *pathPoint)
{
    if (self->sprite)
        SPR_setHFlip(self->sprite, false);
}

void startShooting(GameObject *self, PathPoint *pathPoint) {
    GOBJ_startShooting(self, pathPoint->shootCount, pathPoint->shootInterval);
}

void PathPoint_SetSpeed(GameObject *self, PathPoint *pathPoint)
{
}

void climbUpToFloor(GameObject *self, PathPoint *pathPoint)
{
}

void enterForeground(GameObject *self, PathPoint *pathPoint)
{
    GOBJ_setInForeground(self, true);
}

void startWaspAttack(GameObject *self, PathPoint *pathPoint)
{
}

void markDisappear(GameObject *self, PathPoint *pathPoint)
{
    // GAME_releaseObject(self);
    if (self->sprite)
        SPR_setVisibility(self->sprite, HIDDEN);
}

void BeetleShoot(GameObject *self, PathPoint *pathPoint)
{
}
void PathPoint_Rotate(GameObject *self, PathPoint *pathPoint)
{
}
void PathPoint_SlowSpeedAndShootBurstsAtTarget(GameObject *self, PathPoint *pathPoint)
{
}

void enterBackground(GameObject *self, PathPoint *pathPoint)
{
    GOBJ_setInForeground(self, false);
}

void faceLeft(GameObject *self, PathPoint *pathPoint)
{
    SPR_setHFlip(self->sprite, true);
}

void ChooseSweepPath_DamageFlashRed(GameObject *self, PathPoint *pathPoint)
{
}

void PathPoint_ShootBurstsAtAngle(GameObject *self, PathPoint *pathPoint)
{
}

void ChargeAndLayEggs_DamageFlashRed(GameObject *self, PathPoint *pathPoint)
{
}