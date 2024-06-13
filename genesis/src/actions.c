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
        LEVEL_createObject(object);
        object++;
    }
}

void stopStageScroll(Trigger *trigger)
{
    LEVEL_setVelY(0);
}

void faceRight(GameObject *self, PathPoint *pathPoint)
{
    SPR_setHFlip(self->sprite, false);
}

void PathPoint_SetSpeed(GameObject *self, PathPoint *pathPoint)
{
}

void climbUpToFloor(GameObject *self, PathPoint *pathPoint)
{
}

void enterForeground(GameObject *self, PathPoint *pathPoint)
{
    SPR_setPriority(self->sprite, true);
}

void startWaspAttack(GameObject *self, PathPoint *pathPoint)
{
}

void markDisappear(GameObject *self, PathPoint *pathPoint)
{
    GAME_releaseObject(self);
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
    SPR_setPriority(self->sprite, false);
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