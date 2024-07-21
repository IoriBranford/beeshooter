#include "level.h"
#include "gobject.h"
#include "gobjdef.h"
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

void postDoubleKillBonus(const Trigger *trigger) {
    const LevelObjectGroup *group = trigger->group;
    if (!group || group->numObjects < 2)
        return;
    LEVEL_postDoubleKillBonus(group->objects[0], group->objects[1], trigger->count);
}

void stopStageScroll(const Trigger *trigger)
{
    LEVEL_setVelY(0);
}

void clearEnemiesAndBullets(const Trigger *trigger) {
    GAME_defeatTeam(TEAM_ENEMYSHOT);
    GAME_defeatTeam(TEAM_ENEMY);
}

void clearObjects(const Trigger *trigger) {
    GAME_releaseAllObjects();
}

void loadBossPart(const Trigger *trigger) {
    GAME_loadBossPartSprites();
}

void startBackgroundExplosion(const Trigger *trigger) {
    LEVEL_startBackgroundExplosion();
}

void loadPart2(const Trigger *trigger)
{
    GAME_loadPart2Sprites();
}

void setInvul(GameObject *self, const GameObjectAction *action) {
    self->invulTimer = min(255, action->time);
}

void setUpdate(GameObject *self, const GameObjectAction *action) {
    if (action->update)
        self->update = (ObjectCallback*)action->update;
}

void setSpriteHFlip(GameObject *self, const GameObjectAction *action) {
    if (!self->sprite)
        GOBJ_initSprite(self);
    SPR_setHFlip(self->sprite, action->flip);
}

void setSpriteVFlip(GameObject *self, const GameObjectAction *action) {
    if (!self->sprite)
        GOBJ_initSprite(self);
    SPR_setVFlip(self->sprite, action->flip);
}

void setSpriteVisible(GameObject *self, const GameObjectAction *action)
{
    if (!self->sprite)
        GOBJ_initSprite(self);
    SPR_setVisibility(self->sprite, VISIBLE);
}

void setSpriteHidden(GameObject *self, const GameObjectAction *action)
{
    if (!self->sprite)
        GOBJ_initSprite(self);
    SPR_setVisibility(self->sprite, HIDDEN);
}

void setSpriteAnim(GameObject *self, const GameObjectAction *action) {
    if (!self->sprite)
        GOBJ_initSprite(self);
    SPR_setAnim(self->sprite, action->anim);
}

void faceRight(GameObject *self, const GameObjectAction *action)
{
    if (self->sprite)
        SPR_setHFlip(self->sprite, false);
}

void startShooting(GameObject *self, const GameObjectAction *action) {
    GOBJ_startShooting(self, action->count, action->interval);
}

void PathPoint_SetSpeed(GameObject *self, const GameObjectAction *action)
{
}

void climbUpToFloor(GameObject *self, const GameObjectAction *action)
{
}

void enterForeground(GameObject *self, const GameObjectAction *action)
{
    GOBJ_setInForeground(self, true);
}

void startWaspAttack(GameObject *self, const GameObjectAction *action)
{
    ENEMY_chargeAtPlayer(self);
}

void markDisappear(GameObject *self, const GameObjectAction *action)
{
    GAME_releaseObject(self);
}

void BeetleShoot(GameObject *self, const GameObjectAction *action)
{
    GOBJ_startShooting(self, BEETLE_SHOT_COUNT, BEETLE_SHOT_INTERVAL);
}

void PathPoint_Rotate(GameObject *self, const GameObjectAction *action)
{
}
void PathPoint_SlowSpeedAndShootBurstsAtTarget(GameObject *self, const GameObjectAction *action)
{
}

void enterBackground(GameObject *self, const GameObjectAction *action)
{
    GOBJ_setInForeground(self, false);
}

void faceLeft(GameObject *self, const GameObjectAction *action)
{
    SPR_setHFlip(self->sprite, true);
}

void ChooseSweepPath_DamageFlashRed(GameObject *self, const GameObjectAction *action)
{
}

void PathPoint_ShootBurstsAtAngle(GameObject *self, const GameObjectAction *action)
{
    u16 angle = action->angle;
    self->shootDirX = cosFix16(angle)<<4;
    self->shootDirY = sinFix16(angle)<<4;
    GOBJ_startShooting(self, action->count, action->interval);
}

void ChargeAndLayEggs_DamageFlashRed(GameObject *self, const GameObjectAction *action)
{
}