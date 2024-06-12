#ifndef _stage_caravan_h
#define _stage_caravan_h

#include "level.h"

#define stage_caravan_numTriggers (114)

extern Trigger stage_caravan_triggers[];

extern const GameObjectDefinition defAnt;
extern const GameObjectDefinition defHoneyPot;
extern const GameObjectDefinition defFly;
extern const GameObjectDefinition defHoneyCell;
extern const GameObjectDefinition defAntBig;
extern const GameObjectDefinition defAlienGunner;
extern const GameObjectDefinition defAlienPillager;
extern const GameObjectDefinition defAlienMind;
extern const GameObjectDefinition defAcidAnt;
extern const GameObjectDefinition defWasp;
extern const GameObjectDefinition defReinforcedHoneyPot;
extern const GameObjectDefinition defAntHole;
extern const GameObjectDefinition defBeetle;
extern const GameObjectDefinition defWaspShooter;
extern const GameObjectDefinition defWaspBoss;
void spawnCharacters(Trigger *trigger);
void stopStageScroll(Trigger *trigger);
void faceRight(GameObject *self, PathPoint *pathPoint);
void enterForeground(GameObject *self, PathPoint *pathPoint);
void PathPoint_SetSpeed(GameObject *self, PathPoint *pathPoint);
void faceLeft(GameObject *self, PathPoint *pathPoint);
void enterBackground(GameObject *self, PathPoint *pathPoint);
void markDisappear(GameObject *self, PathPoint *pathPoint);
void climbUpToFloor(GameObject *self, PathPoint *pathPoint);
void startWaspAttack(GameObject *self, PathPoint *pathPoint);
void BeetleShoot(GameObject *self, PathPoint *pathPoint);
void PathPoint_Rotate(GameObject *self, PathPoint *pathPoint);
void PathPoint_SlowSpeedAndShootBurstsAtTarget(GameObject *self, PathPoint *pathPoint);
void ChooseSweepPath_DamageFlashRed(GameObject *self, PathPoint *pathPoint);
void PathPoint_ShootBurstsAtAngle(GameObject *self, PathPoint *pathPoint);
void ChargeAndLayEggs_DamageFlashRed(GameObject *self, PathPoint *pathPoint);
#endif
