#ifndef _stage_caravan_h
#define _stage_caravan_h

#include "level.h"

#define stage_caravan_numTriggers (212)
extern const Trigger stage_caravan_triggers[];

#define stage_caravan_numGroups (105)
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
void loadPart2(const Trigger *trigger);
void faceRight(GameObject *self, const GameObjectAction *action);
void enterBackground(GameObject *self, const GameObjectAction *action);
void enterForeground(GameObject *self, const GameObjectAction *action);
void startShooting(GameObject *self, const GameObjectAction *action);
void PathPoint_SetSpeed(GameObject *self, const GameObjectAction *action);
void setSpriteHidden(GameObject *self, const GameObjectAction *action);
void faceLeft(GameObject *self, const GameObjectAction *action);
void setSpriteVisible(GameObject *self, const GameObjectAction *action);
void markDisappear(GameObject *self, const GameObjectAction *action);
void setSpriteAnim(GameObject *self, const GameObjectAction *action);
void startAlienMindFight(GameObject *self, const GameObjectAction *action);
void setUpdate(GameObject *self, const GameObjectAction *action);
void setInvul(GameObject *self, const GameObjectAction *action);
void setSpriteVFlip(GameObject *self, const GameObjectAction *action);
void setSpriteHFlip(GameObject *self, const GameObjectAction *action);
void startWaspAttack(GameObject *self, const GameObjectAction *action);
void BeetleShoot(GameObject *self, const GameObjectAction *action);
void ChooseSweepPath_DamageFlashRed(GameObject *self, const GameObjectAction *action);
void PathPoint_ShootBurstsAtAngle(GameObject *self, const GameObjectAction *action);
void ChargeAndLayEggs_DamageFlashRed(GameObject *self, const GameObjectAction *action);
#endif
