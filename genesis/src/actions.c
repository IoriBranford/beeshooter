#include "level.h"
#include "gobject.h"
#include "gameplay.h"

#include <genesis.h>

void unpauseTimer(const Trigger *trigger) {
    GAME_setTimerPaused(false);
}

void spawnCharacters(const Trigger *trigger)
{
    const LevelObject **object = trigger->group->objects;
    if (!object)
        return;
    for (int i = 0; i < trigger->group->numObjects; ++i) {
        GameObject *gobj = LEVEL_createObject(*object);
        if (!gobj)
            continue;
        gobj->parentType = PARENTTYPE_TRIGGER;
        gobj->parentTrigger = trigger;
        object++;
    }
}

void spawnNextCharacters(const Trigger *trigger)
{
    LevelObjectGroup *group = trigger->group;
    const LevelObject **object = group->objects;
    if (!object)
        return;
    int n = min(group->numObjectsSpawned + trigger->count, group->numObjects);
    object += group->numObjectsSpawned;
    for (int i = group->numObjectsSpawned; i < n; ++i) {
        GameObject *gobj = LEVEL_createObject(*object);
        if (!gobj)
            continue;
        gobj->parentType = PARENTTYPE_TRIGGER;
        gobj->parentTrigger = trigger;
        object++;
        group->numObjectsSpawned++;
    }
}

void stopStageScroll(const Trigger *trigger)
{
    LEVEL_setVelY(0);
}

void setSpriteVisible(GameObject *self, const PathPoint *pathPoint)
{
    if (!self->sprite)
        GOBJ_initSprite(self);
    SPR_setVisibility(self->sprite, VISIBLE);
}

void setSpriteHidden(GameObject *self, const PathPoint *pathPoint)
{
    if (!self->sprite)
        GOBJ_initSprite(self);
    SPR_setVisibility(self->sprite, HIDDEN);
}

void setSpriteAnim(GameObject *self, const PathPoint *pathPoint) {
    if (!self->sprite)
        GOBJ_initSprite(self);
    SPR_setAnim(self->sprite, pathPoint->anim);
}

void faceRight(GameObject *self, const PathPoint *pathPoint)
{
    if (self->sprite)
        SPR_setHFlip(self->sprite, false);
}

void startShooting(GameObject *self, const PathPoint *pathPoint) {
    GOBJ_startShooting(self, pathPoint->shootCount, pathPoint->shootInterval);
}

void PathPoint_SetSpeed(GameObject *self, const PathPoint *pathPoint)
{
}

void climbUpToFloor(GameObject *self, const PathPoint *pathPoint)
{
}

void enterForeground(GameObject *self, const PathPoint *pathPoint)
{
    GOBJ_setInForeground(self, true);
}

void startWaspAttack(GameObject *self, const PathPoint *pathPoint)
{
}

void markDisappear(GameObject *self, const PathPoint *pathPoint)
{
    GAME_releaseObject(self);
}

void BeetleShoot(GameObject *self, const PathPoint *pathPoint)
{
}
void PathPoint_Rotate(GameObject *self, const PathPoint *pathPoint)
{
}
void PathPoint_SlowSpeedAndShootBurstsAtTarget(GameObject *self, const PathPoint *pathPoint)
{
}

void enterBackground(GameObject *self, const PathPoint *pathPoint)
{
    GOBJ_setInForeground(self, false);
}

void faceLeft(GameObject *self, const PathPoint *pathPoint)
{
    SPR_setHFlip(self->sprite, true);
}

void ChooseSweepPath_DamageFlashRed(GameObject *self, const PathPoint *pathPoint)
{
}

void PathPoint_ShootBurstsAtAngle(GameObject *self, const PathPoint *pathPoint)
{
}

void ChargeAndLayEggs_DamageFlashRed(GameObject *self, const PathPoint *pathPoint)
{
}