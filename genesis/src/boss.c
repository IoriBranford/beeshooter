#include "level.h"
#include "gobject.h"
#include "gobjdef.h"
#include "gameplay.h"
#include "enemy.h"
#include "player.h"
#include "item.h"
#include <genesis.h>

#define LAY_EGGS_COUNT 4
#define LAY_EGGS_INTERVAL 10
#define CHARGE_SPEED FIX16(5)

extern const LevelObject lobj3200;
extern const Path path3179, path3180, path3181, path3182, path3183, path3184, path3201, path3202, path3203, path3204;

const LevelObject *lobjStartPoint = &lobj3200;
const Path *pathLeft = &path3179, *pathRight = &path3180;

const Path  *pathLeftHoriDiagonal = &path3202,
            *pathLeftHori = &path3183,
            *pathLeftVertical = &path3181,
            *pathLeftVertiDiagonal = &path3201;

const Path  *pathRightHoriDiagonal = &path3203,
            *pathRightHori = &path3184,
            *pathRightVertical = &path3182,
            *pathRightVertiDiagonal = &path3204;

static u16 numChildren;

void BOSS_startReturnToTop(GameObject *self);

void BOSS_init(GameObject *self) {
    ITEM_resetPowerupTimeExtend();
    BOSS_startReturnToTop(self);
}

const Path* BOSS_chooseEntryPath(GameObject *self) {
    PlayerObject *player = GAME_player();
    const Path *path;
    bool hflip;
    if (player->centerX < self->centerX) {
        path = pathRight;
        hflip = true;
    } else {
        path = pathLeft;
        hflip = false;
    }
    SPR_setHFlip(self->sprite, hflip);
    return path;
}

void BOSS_startSweepPath(GameObject *self) {
    s8 faceX = (self->sprite->attribut & TILE_ATTR_HFLIP_MASK) ? -1 : 1;
    const Path *pathHori, *pathHoriDiagonal, *pathVert, *pathVertiDiagonal;
    if (faceX > 0) {
        pathHori = pathLeftHori;
        pathHoriDiagonal = pathLeftHoriDiagonal;
        pathVert = pathLeftVertical;
        pathVertiDiagonal = pathLeftVertiDiagonal;
    } else {
        pathHori = pathRightHori;
        pathHoriDiagonal = pathRightHoriDiagonal;
        pathVert = pathRightVertical;
        pathVertiDiagonal = pathRightVertiDiagonal;
    }

    PlayerObject *player = GAME_player();
    fix16 toPlayerX = player->centerX - self->centerX;
    fix16 toPlayerY = player->centerY - self->centerY;
    fix16 det = faceX * toPlayerY - toPlayerX;
    fix16 dot = faceX * toPlayerX + toPlayerY;
    u32 dist = getApproximatedDistance(fix16ToInt(toPlayerX), fix16ToInt(toPlayerY));
    bool usediagonal =
        self->health<<1 <= self->definition->health &&
        dot >= fix16Mul(FIX16(1.414213562373095), cosFix16(512/3)*dist);
    const Path *path;

    if (det < 0) {
        if (usediagonal)
            path = pathHoriDiagonal;
        else
            path = pathHori;
    } else {
        if (usediagonal)
            path = pathVertiDiagonal;
        else
            path = pathVert;
    }

    GOBJ_startOnPath(self, path, 0);
}

void BOSS_updateReturnToTop(GameObject *self) {
    bool reached = GOBJ_updateMovement(self);
    GOBJ_updateSprite(self);
    if (reached) {
        self->invulTimer = 0;
        SPR_setVisibility(self->sprite, VISIBLE);
        GOBJ_startOnPath(self, BOSS_chooseEntryPath(self), 0);
    }
    GOBJ_updateInvul(self);
}

void BOSS_startReturnToTop(GameObject *self) {
    fix16 destX = FIX16(lobjStartPoint->x);
    fix16 destY = LEVEL_toScreenY(FIX32(lobjStartPoint->y));
    self->update = (ObjectCallback*)BOSS_updateReturnToTop;
    self->shootFunction = ENEMY_shootAtDir;
    self->invulTimer = 255;
    GOBJ_startShooting(self, 0, 0);
    GOBJ_startMovement(self, destX, destY, self->speed);
}

void BOSS_layEgg(GameObject *self) {
    GOBJ_createFromDef(&defWaspEgg, self->centerX, self->centerY);
}

void BOSS_updateCharge(GameObject *self) {
    self->centerX += self->velX;
    self->centerY += self->velY;
    GOBJ_updateBody(self);
    GOBJ_updateSprite(self);
    GOBJ_updateShooting(self);
    if (GOBJ_isBodyOnScreen(self)) {
    } else {
        BOSS_startReturnToTop(self);
    }
}

void BOSS_chargeAndLayEggs(GameObject *self) {
    numChildren = LAY_EGGS_COUNT;
    ENEMY_chargeAtPlayer(self);
    self->update = (ObjectCallback*)BOSS_updateCharge;
    GOBJ_startShooting(self, LAY_EGGS_COUNT, LAY_EGGS_INTERVAL);
    self->shootFunction = BOSS_layEgg;
}

void ENEMY_defeatBossChild(GameObject *self) {
    if (numChildren && !--numChildren)
        GOBJ_createFromDef(&defTimeExtendPowerup, self->centerX, self->centerY);
    GOBJ_defaultDefeatAction(self);
}

void BOSS_updateDefeat(GameObject *self) {
    fix16 width = self->bodyX1 - self->bodyX0;
    fix16 height= self->bodyY1 - self->bodyY0;
    if (self->shootTimer < 120) {
        if (self->shootTimer % 6 == 0) {
            SND_playDef(&sndBugKill1);
            GOBJ_createFromDef(&defAcidBloodSmall, self->bodyX0 + (random() % width), self->bodyY0 + (random() % height));
        }
    } else {
        SND_playDef(&sndBossKill);
        GOBJ_createFromDef(&defAcidBloodMedium, self->centerX, self->centerY);
        GAME_releaseObject(self);
        PlayerObject *player = GAME_player();
        PLAYER_startEndBonusTally(player);
        return;
    }
    self->centerX += self->velX;
    self->centerY += self->velY;
    if (abs(self->velX) <= 1)
        self->velX *= 2;
    self->velX = -self->velX;
    GOBJ_updateBody(self);
    GOBJ_updateSprite(self);
    ++self->shootTimer;
}

void BOSS_onDefeat(GameObject *self) {
    GAME_setTimerPaused(true);
    GAME_defeatTeam(TEAM_ENEMY);
    GAME_defeatTeam(TEAM_ENEMYSHOT);

    self->velX = FIX16(1);
    self->velY = FIX16(.125);
    const GameObjectDefinition *def = self->definition;
    if (def) {
        GAME_scorePoints(def->defeatPoints);
    }
    self->update = (ObjectCallback*)BOSS_updateDefeat;
    XGM_stopPlay();
    XGM_stopPlayPCM(sndBugKill1.channel);
    PlayerObject *player = GAME_livePlayer();
    if (player)
        PLAYER_giveInvul(player, 240);
    GOBJ_startShooting(self, 0, 0);
}