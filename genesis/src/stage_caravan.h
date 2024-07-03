#ifndef _stage_caravan_h
#define _stage_caravan_h

#include "level.h"

#define stage_caravan_numTriggers (198)
extern const Trigger stage_caravan_triggers[];

#define stage_caravan_numGroups (118)
extern LevelObjectGroup *stage_caravan_groups[];

extern GameObjectDefinition defAnt;
extern GameObjectDefinition defHoneyPot;
extern GameObjectDefinition defFly;
extern GameObjectDefinition defHoneyCell;
extern GameObjectDefinition defAntBig;
extern GameObjectDefinition defAlienGunner;
extern GameObjectDefinition defAlienPillager;
extern GameObjectDefinition defAlienMind;
extern GameObjectDefinition defAcidAnt;
extern GameObjectDefinition defWasp;
extern GameObjectDefinition defReinforcedHoneyPot;
extern GameObjectDefinition defAntHole;
extern GameObjectDefinition defBeetle;
extern GameObjectDefinition defWaspShooter;
extern GameObjectDefinition defWaspBoss;
void spawnCharacters(const Trigger *trigger);
void unpauseTimer(const Trigger *trigger);
void spawnNextCharacters(const Trigger *trigger);
void stopStageScroll(const Trigger *trigger);
void faceRight(GameObject *self, const PathPoint *pathPoint);
void enterBackground(GameObject *self, const PathPoint *pathPoint);
void enterForeground(GameObject *self, const PathPoint *pathPoint);
void startShooting(GameObject *self, const PathPoint *pathPoint);
void PathPoint_SetSpeed(GameObject *self, const PathPoint *pathPoint);
void setSpriteHidden(GameObject *self, const PathPoint *pathPoint);
void faceLeft(GameObject *self, const PathPoint *pathPoint);
void setSpriteVisible(GameObject *self, const PathPoint *pathPoint);
void markDisappear(GameObject *self, const PathPoint *pathPoint);
void setSpriteAnim(GameObject *self, const PathPoint *pathPoint);
void climbUpToFloor(GameObject *self, const PathPoint *pathPoint);
void startWaspAttack(GameObject *self, const PathPoint *pathPoint);
void BeetleShoot(GameObject *self, const PathPoint *pathPoint);
void PathPoint_Rotate(GameObject *self, const PathPoint *pathPoint);
void PathPoint_SlowSpeedAndShootBurstsAtTarget(GameObject *self, const PathPoint *pathPoint);
void ChooseSweepPath_DamageFlashRed(GameObject *self, const PathPoint *pathPoint);
void PathPoint_ShootBurstsAtAngle(GameObject *self, const PathPoint *pathPoint);
void ChargeAndLayEggs_DamageFlashRed(GameObject *self, const PathPoint *pathPoint);
#endif
