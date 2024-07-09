#include "gobject.h"
#include "gobjdef.h"
#include "bullet.h"
#include "sprite.h"
#include "level.h"
#include <genesis.h>

void GOBJ_init(GameObject *self) {
    if (!self)
        return;
    // self->parentObject = 0;
    self->parentType = PARENTTYPE_NONE;
    self->definition = 0;
    self->levelObject = 0;
    self->sprite = 0;
    // self->centerX = self->centerY = 0;
    self->velX = self->velY = 0;
    // self->destX = self->destY = 0;
    self->path = 0;
    // self->pathIndex = 0;
    // self->pathPointDistLeft = 0;
    // self->speed = FIX16(1);
    // self->health = 1;
    self->team = TEAM_NONE;
    self->invulTimer = 0;
    // self->bodyX0 = self->bodyX1 = self->bodyY0 = self->bodyY1 = 0;
    GOBJ_startShooting(self, 0, 0);
}

const SpriteDefinition* GOBJ_spriteDef(GameObject *self) {
    if (self->sprite) {
        return self->sprite->definition;
    } else if (self->definition) {
        return self->definition->spriteDef;
    }
    return NULL;
}

GameObject* GOBJ_createFromDef(const GameObjectDefinition *def, fix16 centerX, fix16 centerY) {
    if (!def || !def->update)
        return NULL;
    GameObject *obj = GAME_createObject();
    if (!obj)
        return NULL;
    obj->definition = def;
    obj->centerX = centerX;
    obj->centerY = centerY;
    GOBJ_updateBody(obj);
    obj->health = def->health;
    obj->speed = def->speed;
    obj->update = (ObjectCallback*)def->update;
    GAME_putObjectInTeam(obj, def->team);
    if (def->init)
        (*def->init)(obj);
    return obj;
}

void GOBJ_initSprite(GameObject *self) {
    const GameObjectDefinition *def = self->definition;
    if (!def)
        return;
    const SpriteDefinition *spriteDef = def->spriteDef;
    if (!spriteDef)
        return;
    u16 paletteSlot = LEVEL_getPaletteSlot(def->palette);
    u16 attr = TILE_ATTR(paletteSlot, false, false, false);
    u16 animInd = 0;
    if (self->levelObject) {
        attr |= self->levelObject->flags;
        animInd = self->levelObject->animInd;
    } else {
        attr |= TILE_ATTR_PRIORITY_MASK;
        animInd = def->animInd;
    }
    Vect2D_f16 tl = GOBJ_getAnchorPoint(self, -1, -1);
    s16 sprX = fix16ToRoundedInt(tl.x), sprY = fix16ToRoundedInt(tl.y);
    if (def->aniFrameTiles) {
        self->sprite = SPR_addSpriteEx(spriteDef, sprX, sprY, attr, 0);
        self->sprite->data = (u32)def->aniFrameTiles;
        SPR_setFrameChangeCallback(self->sprite, SPR_defaultFrameChange);
    } else {
        self->sprite = SPR_addSprite(spriteDef, sprX, sprY, attr);
    }
    if (animInd)
        SPR_setAnim(self->sprite, animInd);
    SPR_setDepth(self->sprite, def->spriteDepth);
}

bool GOBJ_isAllocated(GameObject *self) {
    return (self->internalState & OBJ_ALLOCATED) != 0;
}

Vect2D_f16 GOBJ_getAnchorPoint(GameObject *self, int ax, int ay) {
    Vect2D_f16 v = {self->centerX, self->centerY};
    const SpriteDefinition *spriteDef = GOBJ_spriteDef(self);
    if (spriteDef) {
        if (ax < 0)
            v.x -= FIX16(spriteDef->w >> 1);
        else if (ax > 0)
            v.x += FIX16(spriteDef->w >> 1);
        if (ay < 0)
            v.y -= FIX16(spriteDef->h >> 1);
        else if (ay > 0)
            v.y += FIX16(spriteDef->h >> 1);
    }
    return v;
}

bool GOBJ_isRectOverlapping(GameObject *self, fix16 rx, fix16 ry, fix16 rw, fix16 rh) {
    fix16 x0 = self->centerX, y0 = self->centerY,
        x1 = self->centerX, y1 = self->centerY;
    const SpriteDefinition *spriteDef = GOBJ_spriteDef(self);
    if (spriteDef) {
        x0 -= FIX16(spriteDef->w>>1);
        x1 += FIX16(spriteDef->w>>1);
        y0 -= FIX16(spriteDef->h>>1);
        y1 += FIX16(spriteDef->h>>1);
    }
    return (x1 >= rx && x0 <= rx + rw && y1 >= ry && y0 <= ry + rh);
}

void GOBJ_updateBody(GameObject *self) {
    fix16 x = self->centerX, y = self->centerY, hw = 0, hh = 0;
    const GameObjectDefinition *def = self->definition;
    if (def) {
        hw = def->bodyW;
        hh = def->bodyH;
    }
    self->bodyX0 = x - hw;
    self->bodyX1 = x + hw;
    self->bodyY0 = y - hh;
    self->bodyY1 = y + hh;
}

bool GOBJ_isHitting(GameObject *self, GameObject *other) {
    return self->bodyX1 >= other->bodyX0
        && self->bodyX0 <= other->bodyX1
        && self->bodyY1 >= other->bodyY0
        && self->bodyY0 <= other->bodyY1;
}

bool GOBJ_isBodyOnScreen(GameObject *self) {
    return self->bodyX1 >= 0
        && self->bodyX0 <= GAME_BOUNDW
        && self->bodyY1 >= 0
        && self->bodyY0 <= GAME_BOUNDH;
}

bool GOBJ_isSpriteOnScreen(GameObject *self) {
    return GOBJ_isRectOverlapping(self, 0, 0, GAME_BOUNDW, GAME_BOUNDH);
}

bool GOBJ_isSpriteOffSideOrBottom(GameObject *self) {
    fix16 x0 = self->centerX, y0 = self->centerY,
        x1 = self->centerX;
    const SpriteDefinition *spriteDef = GOBJ_spriteDef(self);
    if (spriteDef) {
        x0 -= FIX16(spriteDef->w>>1);
        x1 += FIX16(spriteDef->w>>1);
        y0 -= FIX16(spriteDef->h>>1);
    }
    bool result = 0;
    result |= (x0 >= GAME_BOUNDW) << DIR_RIGHT;
    result |= (y0 >= GAME_BOUNDH) << DIR_DOWN;
    result |= (x1 <= 0) << DIR_LEFT;
    return result;
}

bool GOBJ_isBodyOffSideOrBottom(GameObject *self) {
    bool result = 0;
    result |= (self->bodyX0 >= GAME_BOUNDW) << DIR_RIGHT;
    result |= (self->bodyY0 >= GAME_BOUNDH) << DIR_DOWN;
    result |= (self->bodyX1 <= 0) << DIR_LEFT;
    return result;
}

bool GOBJ_isBodyOffBottom(GameObject *self) {
    return (self->bodyY0 >= GAME_BOUNDH);
}

bool GOBJ_isSpriteOffBottom(GameObject *self) {
    fix16 y0 = self->centerY;
    const SpriteDefinition *spriteDef = GOBJ_spriteDef(self);
    if (spriteDef) {
        y0 -= FIX16(spriteDef->h>>1);
    }
    return (y0 >= GAME_BOUNDH);
}

void GOBJ_updateSprite(GameObject *self) {
    Sprite *sprite = self->sprite;
    if (sprite) {
        SPR_setPosition(sprite,
            fix16ToRoundedInt(self->centerX) - (sprite->definition->w >> 1),
            fix16ToRoundedInt(self->centerY) - (sprite->definition->h >> 1));
    } else {
        // const SpriteDefinition *spriteDef = GOBJ_spriteDef(self);
        if (GOBJ_isBodyOnScreen(self)) {
            GOBJ_initSprite(self);
        }
    }
}

void GOBJ_releaseSprite(GameObject *self) {
    if (self->sprite) {
        SPR_releaseSprite(self->sprite);
        self->sprite = NULL;
    }
}

void GOBJ_updateInvul(GameObject *self) {
    if (self->invulTimer) {
        --self->invulTimer;
        if (self->sprite) {
            SPR_setVisibility(self->sprite, (self->invulTimer & 1) ? HIDDEN : VISIBLE);
        }
    }
}

void GOBJ_setInForeground(GameObject *self, bool inForeground) {
    if (!self->sprite)
        GOBJ_initSprite(self);

    if (inForeground) {
        self->invulTimer = 0;
        SPR_setVisibility(self->sprite, VISIBLE);
        SPR_setPriority(self->sprite, true);
        SPR_setDepth(self->sprite, -abs(self->sprite->depth));
    } else {
        self->invulTimer = 255;
        SPR_setPriority(self->sprite, false);
        SPR_setDepth(self->sprite, abs(self->sprite->depth));
    }
}

void GOBJ_dealDamage(GameObject *self, u16 damage) {
    if (!self->health)
        return;
    
    if (damage >= self->health) {
        self->health = 0;
    } else {
        self->health -= damage;
    }
}

void GOBJ_defaultDefeatAction(GameObject *self) {
    const GameObjectDefinition *def = self->definition;
    if (def) {
        if (def->defeatSoundDef)
            SND_playDef(def->defeatSoundDef);
        GAME_scorePoints(def->defeatPoints);
        if (def->corpseDef)
            GOBJ_createFromDef(def->corpseDef, self->centerX, self->centerY);
    }
    GAME_releaseObject(self);
}

void GOBJ_defeat(GameObject *self) {
    const GameObjectDefinition *def = self->definition;
    if (def && def->onDefeat)
        def->onDefeat(self);
    else
        GOBJ_defaultDefeatAction(self);
}

void GOBJ_startShooting(GameObject *self, u8 count, u8 interval) {
    self->shootInterval = interval;
    self->shootTimer = interval;
    self->shotsLeft = count;
}

void GOBJ_updateShooting(GameObject *self) {
    if (self->shootTimer && !--self->shootTimer) {
        const GObjFunction shootFunction = self->definition ? self->definition->shootFunction : NULL;
        if (shootFunction) {
            (*shootFunction)(self);
        }
        if (--self->shotsLeft) {
            self->shootTimer = self->shootInterval;
        }
    }
}

void GOBJ_updateSpawning(GameObject *self) {
    if (self->shootTimer)
        --self->shootTimer;
    if (!self->shootTimer) {
        if (self->levelObject) {
            if (self->levelObject->child) {
                if (LEVEL_toScreenY(FIX32(self->levelObject->child->y)) < GAME_BOUNDH)
                    LEVEL_createObject(self->levelObject->child);
            }
            self->shootTimer = self->levelObject->interval;
        }
    }
}

void GOBJ_followStage(GameObject *self) {
    self->velX = 0;
    self->velY = -fix32ToFix16(LEVEL_cameraVelY());
    self->centerY += self->velY;
}

void GOBJ_updateIdleOnStage(GameObject *self) {
    GOBJ_followStage(self);
    GOBJ_updateBody(self);
    GOBJ_updateSprite(self);
    if (GOBJ_isBodyOffBottom(self)) {
        GAME_releaseObject(self);
    }
}

void GOBJ_startMovement(GameObject *self, fix16 destX, fix16 destY, fix16 speed) {
    fix16 velX = 0, velY = 0;
    fix16 distX = destX - self->centerX;
    fix16 distY = destY - self->centerY;
    fix16 dist = (distX || distY) ? FIX16(getApproximatedDistance(fix16ToInt(distX), fix16ToInt(distY))) : 0;
    if (dist > speed) {
        velX = fix16Mul(fix16Div(distX, dist), speed);
        velY = fix16Mul(fix16Div(distY, dist), speed);
    } else {
        velX = 0;
        velY = 0;
        self->centerX = destX;
        self->centerY = destY;
        GOBJ_updateBody(self);
    }
    self->pathPointDistLeft = dist;
    self->speed = speed;
    self->velX = velX;
    self->velY = velY;
    self->destX = destX;
    self->destY = destY;
}

bool GOBJ_updateMovement(GameObject *self) {
    if (self->pathPointDistLeft > self->speed) {
        self->pathPointDistLeft -= self->speed;
        self->centerX += self->velX;
        self->centerY += self->velY;
        GOBJ_updateBody(self);
        return false;
    } else {
        self->pathPointDistLeft = 0;
        self->velX = 0;
        self->velY = 0;
        self->centerX = self->destX;
        self->centerY = self->destY;
        GOBJ_updateBody(self);
        return true;
    }
}

void GOBJ_startTowardsPathPoint(GameObject *self, u16 pathIndex) {
    const Trigger *pathParentTrigger =
        self->definition->pathParent == PATHPARENT_TRIGGER
        ? self->parentTrigger : NULL;
    fix16 velX = 0, velY = pathParentTrigger ? 0 : -fix32ToFix16(LEVEL_cameraVelY());
    fix16 speed = 0;
    fix16 dist = 0;
    const Path *path = self->path;
    if (!path || pathIndex >= path->numPoints) {
        pathIndex = 0xFFFF;
        dist = 0x7FFF;
        velY = -fix32ToFix16(LEVEL_cameraVelY());
    } else {
        const PathPoint *pathPoint = &path->points[pathIndex];
        speed = pathPoint->speedTo;
        if (pathIndex == 0) {
            fix16 destX = FIX16(path->x + pathPoint->x);
            fix16 destY = path->y + pathPoint->y;
            if (pathParentTrigger)
                destY = FIX16(destY - pathParentTrigger->y);
            else
                destY = LEVEL_toScreenY(FIX32(destY));
            fix16 distX = destX - self->centerX;
            fix16 distY = destY - self->centerY;
            if (distX || distY) {
                dist = getApproximatedDistance(distX, distY);
                fix16 invTime = fix16Div(speed, dist);
                velX += fix16Mul(distX, invTime);
                velY += fix16Mul(distY, invTime);
            }
        } else {
            velX += pathPoint->xVelTo;
            velY += pathPoint->yVelTo;
            dist = pathPoint->distTo;
        }
    }
    self->pathPointDistLeft = dist;
    self->speed = speed;
    self->velX = velX;
    self->velY = velY;
    self->pathIndex = pathIndex;
}

void GOBJ_doActions(GameObject *self, const u32 numActions, const GameObjectAction *actions) {
    const GameObjectAction *action = actions;
    if (action) {
        for (u32 i = 0; i < numActions; ++i) {
            if (*action->action) {
                (*action->action)(self, action);
                if (!GOBJ_isAllocated(self))
                    return;
            }
            ++action;
        }
    }
}

void GOBJ_followPath(GameObject *self) {
    self->pathPointDistLeft -= self->speed;
    if (self->pathPointDistLeft > 0) {
        self->centerX += self->velX;
        self->centerY += self->velY;
    } else {
        const Path *path = self->path;
        u32 pathIndex = self->pathIndex;
        const PathPoint *pathPoint = NULL;
        if (path && pathIndex < path->numPoints) {
            pathPoint = &path->points[pathIndex];
            fix16 destX = FIX16(path->x + pathPoint->x);
            fix16 destY = path->y + pathPoint->y;
            const Trigger *pathParentTrigger =
                self->definition->pathParent == PATHPARENT_TRIGGER
                ? self->parentTrigger : NULL;
            if (pathParentTrigger)
                destY = FIX16(destY - pathParentTrigger->y);
            else
                destY = LEVEL_toScreenY(FIX32(destY));
            self->centerX = destX;
            self->centerY = destY;
            GOBJ_doActions(self, pathPoint->numActions, pathPoint->actions);
            if (!GOBJ_isAllocated(self))
                return;
        }
        GOBJ_startTowardsPathPoint(self, ++pathIndex);
    }
}

void GOBJ_updatePathWalker(GameObject *self) {
    const Path *path = self->path;
    if (!path) {
        u16 pathIndex = 0;

        const LevelObject *lobj = self->levelObject;
        if (lobj) {
            path = lobj->path;
            pathIndex = lobj->pathIndex;
        }
    
        if (path && pathIndex) {
            const PathPoint *prevPoint = &path->points[pathIndex - 1];
            GOBJ_doActions(self, prevPoint->numActions, prevPoint->actions);
            if (!GOBJ_isAllocated(self))
                return;
        } else {
            self->update = (ObjectCallback*)GOBJ_updateIdleOnStage;
            GOBJ_updateIdleOnStage(self);
            return;
        }
        
        self->path = path;
        GOBJ_startTowardsPathPoint(self, pathIndex);
    }
    GOBJ_followPath(self);
    if (!GOBJ_isAllocated(self))
        return;
    GOBJ_updateBody(self);
    bool offscreen = GOBJ_isBodyOffSideOrBottom(self);
    if (offscreen) {
        if ((offscreen & (1<<DIR_DOWN)) || !self->path || self->pathIndex >= self->path->numPoints) {
            GAME_releaseObject(self);
            return;
        }
    }
    GOBJ_updateInvul(self);
    GOBJ_updateShooting(self);
    GOBJ_updateSprite(self);
}

void GOBJ_updateSpawner(GameObject *self) {
    GOBJ_followStage(self);
    GOBJ_updateBody(self);
    if (GOBJ_isBodyOffBottom(self)) {
        GAME_releaseObject(self);
        return;
    }
    GOBJ_updateSpawning(self);
    GOBJ_updateSprite(self);
}

void GOBJ_updateFaller(GameObject *self) {
    const fix16 GRAVITY = FIX16(1)/8;
    self->velY += GRAVITY;
    self->centerX += self->velX;
    self->centerY += self->velY;
    GOBJ_updateBody(self);
    if (GOBJ_isBodyOffBottom(self)) {
        GAME_releaseObject(self);
        return;
    }
    GOBJ_updateSprite(self);
}

void GOBJ_updateSpark(GameObject *self) {
    if (SPR_getAnimationWillBeDone(self->sprite))
        GAME_releaseObject(self);
}