#include "gobject.h"
#include "gobjdef.h"
#include "bullet.h"
#include <genesis.h>

void GOBJ_init(GameObject *self) {
    if (!self)
        return;
    self->parentObject = 0;
    self->parentType = 0;
    self->definition = 0;
    self->levelObject = 0;
    self->sprite = 0;
    self->centerX = self->centerY = 0;
    self->velX = self->velY = 0;
    self->destX = self->destY = 0;
    self->path = 0;
    self->pathIndex = 0;
    self->pathPointDistLeft = 0;
    self->speed = FIX16(1);
    self->health = 1;
    self->team = TEAM_NONE;
    self->invulTimer = 0;
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
    obj->centerX = centerX;
    obj->centerY = centerY;
    obj->health = def->health;
    obj->speed = def->speed;
    obj->definition = def;
    OBJ_setUpdateMethod((Object*)obj, (ObjectCallback*)def->update);
    GAME_putObjectInTeam(obj, def->team);
    return obj;
}

void GOBJ_initSprite(GameObject *self) {
    const SpriteDefinition *spriteDef = self->definition ? self->definition->spriteDef : NULL;
    if (!spriteDef)
        return;
    u16 paletteSlot = LEVEL_getPaletteSlot(self->definition->palette);
    u16 attr = TILE_ATTR(paletteSlot, false, false, false);
    u16 animInd = 0;
    if (self->levelObject) {
        attr |= self->levelObject->flags;
        animInd = self->levelObject->animInd;
    } else {
        attr |= TILE_ATTR_PRIORITY_MASK;
        animInd = self->definition->animInd;
    }
    Vect2D_f16 tl = GOBJ_getAnchorPoint(self, -1, -1);
    self->sprite = SPR_addSprite(spriteDef, fix16ToRoundedInt(tl.x), fix16ToRoundedInt(tl.y), attr);
    if (animInd)
        SPR_setAnim(self->sprite, animInd);
    SPR_setDepth(self->sprite, self->definition->spriteDepth);
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

bool GOBJ_isHitting(GameObject *self, GameObject *other) {
    fix16 x = self->centerX, y = self->centerY, hw = 0, hh = 0;
    fix16 x2 = other->centerX, y2 = other->centerY, hw2 = 0, hh2 = 0;
    const GameObjectDefinition *myDef = self->definition;
    const GameObjectDefinition *theirDef = other->definition;
    if (myDef) {
        hw = myDef->bodyW;
        hh = myDef->bodyH;
    }
    if (theirDef) {
        hw2 = theirDef->bodyW;
        hh2 = theirDef->bodyH;
    }
    return (x + hw >= x2 - hw2)
        && (x - hw <= x2 + hw2)
        && (y + hh >= y2 - hh2)
        && (y - hh <= y2 + hh2);
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
        const SpriteDefinition *spriteDef = GOBJ_spriteDef(self);
        if (spriteDef && GOBJ_isSpriteOnScreen(self)) {
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
            SPR_setVisibility(self->sprite, self->invulTimer % 2 ? HIDDEN : VISIBLE);
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
        const GameObjectDefinition *bulletDef = self->definition ? self->definition->bulletDef : NULL;
        GameObject *player = (GameObject*)GAME_livePlayer();
        if (player && bulletDef) {
            BULLET_shootAtTarget(self->centerX, self->centerY, player, bulletDef);
        }
        if (--self->shotsLeft) {
            self->shootTimer = self->shootInterval;
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
    GOBJ_updateSprite(self);
    if (GOBJ_isSpriteOffSideOrBottom(self)) {
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
        return false;
    } else {
        self->pathPointDistLeft = 0;
        self->velX = 0;
        self->velY = 0;
        self->centerX = self->destX;
        self->centerY = self->destY;
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

void GOBJ_doPathPointActions(GameObject *self, const PathPoint *pathPoint) {
    const GObjPathPointFunction *action = pathPoint->actions;
    if (action) {
        for (u32 i = 0; i < pathPoint->numActions; ++i) {
            if (*action) {
                (*action)(self, pathPoint);
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
            GOBJ_doPathPointActions(self, pathPoint);
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
            if (pathIndex) {
                const PathPoint *prevPoint = &path->points[pathIndex - 1];
                GOBJ_doPathPointActions(self, prevPoint);
                if (!GOBJ_isAllocated(self))
                    return;
            }
        }
    
        if (!path) {
            path = LEVEL_findNearestPath(self->levelObject->group,
                fix16ToFix32(self->centerX),
                LEVEL_toWorldY(self->centerY));
        }
        self->path = path;
        GOBJ_startTowardsPathPoint(self, pathIndex);
    }
    GOBJ_followPath(self);
    if (!GOBJ_isAllocated(self))
        return;
    GOBJ_updateInvul(self);
    GOBJ_updateShooting(self);
    GOBJ_updateSprite(self);
    bool offscreen = GOBJ_isSpriteOffSideOrBottom(self);
    if (offscreen) {
        if ((offscreen & (1<<DIR_DOWN)) || !self->path || self->pathIndex >= self->path->numPoints)
            GAME_releaseObject(self);
    }
}