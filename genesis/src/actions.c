#include "level.h"
#include "gobject.h"

#include <genesis.h>

void spawnCharacters(Trigger *trigger)
{
}
void stopStageScroll(Trigger *trigger)
{
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