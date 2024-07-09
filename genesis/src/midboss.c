#include "level.h"
#include "gobject.h"
#include "player.h"
#include "gobjdef.h"
#include <genesis.h>

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

void MIDBOSS_updateDefeat(GameObject *self) {
    fix16 width = self->bodyX1 - self->bodyX0;
    fix16 height= self->bodyY1 - self->bodyY0;
    if (reinforceTimer < 120) {
        if (reinforceTimer % 6 == 0) {
            SND_playDef(&sndBugKill1);
            GOBJ_createFromDef(&defBloodSmall, self->bodyX0 + (random() % width), self->bodyY0 + (random() % height));
        }
    } else {
        SND_playDef(&sndBugKill2);
        GOBJ_createFromDef(&defBloodSmall, self->centerX, self->centerY);
        GAME_releaseObject(self);
        LEVEL_setVelY(FIX32(-.75));
    }
    self->centerY += self->velY;
    GOBJ_updateBody(self);
    reinforceTimer = reinforceTimer + 1;
}

void MIDBOSS_onDefeat(GameObject *self) {
    GAME_addTime(60*60);
    GAME_setTimerPaused(true);
    GAME_defeatTeam(TEAM_ENEMY);
    GAME_defeatTeam(TEAM_ENEMYSHOT);
    self->velY = FIX16(.125);
    const GameObjectDefinition *def = self->definition;
    if (def) {
        GAME_scorePoints(def->defeatPoints);
    }
    self->update = (ObjectCallback*)MIDBOSS_updateDefeat;
    reinforceTimer = 0;
    XGM_stopPlayPCM(sndBugKill1.channel);
    PlayerObject *player = GAME_livePlayer();
    if (player)
        PLAYER_giveInvul(player, 240);
}

void startAlienMindFight(GameObject *self, GameObjectAction *action) {
    self->invulTimer = 0;
    self->update = (ObjectCallback*)MIDBOSS_updateAlienMind;
    self->shootFunction = MIDBOSS_spawnPillager;
    nextPillager = lobj_rightPillager;
    SPR_setVisibility(self->sprite, VISIBLE);
    GOBJ_startShooting(self, 0xFF, 10);
}