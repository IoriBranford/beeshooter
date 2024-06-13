#include "gobject.h"
#include "gobjdef.h"
#include "gameplay.h"
#include "maths.h"
#include "types.h"

void GOBJ_init(GameObject *self) {
    self->velX = self->velY = 0;
    self->path = 0;
    self->pathIndex = 0;
    self->definition = 0;
    self->sprite = 0;
    self->levelObject = 0;
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
    return obj;
}

void GOBJ_initSprite(GameObject *self, u16 attr) {
    const SpriteDefinition *spriteDef = self->definition ? self->definition->spriteDef : NULL;
    if (!spriteDef)
        return;
    Vect2D_f16 tl = GOBJ_getAnchorPoint(self, -1, -1);
    self->sprite = SPR_addSprite(spriteDef, fix16ToRoundedInt(tl.x), fix16ToRoundedInt(tl.y), attr);
    if (self->definition->animInd)
        SPR_setAnim(self->sprite, self->definition->animInd);
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
        x0 -= (spriteDef->w>>1);
        x1 += (spriteDef->w>>1);
        y0 -= (spriteDef->h>>1);
        y1 += (spriteDef->h>>1);
    }
    return (x1 >= rx && x0 <= rx + rw && y1 >= ry && y0 <= ry + rh);
}

bool GOBJ_isSpriteOnScreen(GameObject *self) {
    return GOBJ_isRectOverlapping(self, 0, 0, GAME_BOUNDW, GAME_BOUNDH);
}

bool GOBJ_isSpriteOffSideOrBottom(GameObject *self) {
    fix16 x0 = self->centerX, y0 = self->centerY,
        x1 = self->centerX;
    const SpriteDefinition *spriteDef = GOBJ_spriteDef(self);
    if (spriteDef) {
        x0 -= (spriteDef->w>>1);
        x1 += (spriteDef->w>>1);
        y0 -= (spriteDef->h>>1);
    }
    return y0 >= GAME_BOUNDH || x0 >= GAME_BOUNDW || x1 <= 0;
}

void GOBJ_updateSprite(GameObject *self) {
    Sprite *sprite = self->sprite;
    if (sprite) {
        SPR_setPosition(sprite,
            fix16ToRoundedInt(self->centerX) - (sprite->definition->w >> 1),
            fix16ToRoundedInt(self->centerY) - (sprite->definition->h >> 1));
    } else {
        const SpriteDefinition *spriteDef = self->definition ? self->definition->spriteDef : NULL;
        if (spriteDef && GOBJ_isSpriteOnScreen(self)) {
            u16 paletteSlot = LEVEL_getPaletteSlot(self->definition->palette);
            GOBJ_initSprite(self, (paletteSlot << TILE_ATTR_PALETTE_SFT) | self->levelObject->flags);
        }
    }
}

void GOBJ_releaseSprite(GameObject *self) {
    if (self->sprite) {
        SPR_releaseSprite(self->sprite);
        self->sprite = NULL;
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

void GOBJ_startTowardsPathPoint(GameObject *self, u16 pathIndex) {
    fix16 velX = 0, velY = -fix32ToFix16(LEVEL_cameraVelY());
    fix16 speed = 0;
    fix16 dist = 0;
    Path *path = self->path;
    if (!path || pathIndex >= path->numPoints) {
        pathIndex = 0xFFFF;
        dist = 0x7FFF;
    } else {
        PathPoint *pathPoint = &path->points[pathIndex];
        speed = pathPoint->speedTo;
        if (pathIndex == 0) {
            fix16 destX = FIX16(path->x + pathPoint->x);
            fix16 destY = LEVEL_toScreenY(FIX32(path->y + pathPoint->y));
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

void GOBJ_updatePathWalker(GameObject *self) {
    Path *path = self->path;
    if (!path) {
        path = LEVEL_findNearestPath(self->levelObject->group,
            fix16ToFix32(self->centerX),
            LEVEL_toWorldY(self->centerY));
        self->path = path;
        GOBJ_startTowardsPathPoint(self, 0);
    }
    GOBJ_followPath(self);
    GOBJ_updateSprite(self);
    if (GOBJ_isSpriteOffSideOrBottom(self)) {
        if (!self->path || self->pathIndex >= self->path->numPoints)
            GAME_releaseObject(self);
    }
}

void GOBJ_followPath(GameObject *self) {
    self->pathPointDistLeft -= self->speed;
    if (self->pathPointDistLeft > 0) {
        self->centerX += self->velX;
        self->centerY += self->velY;
    } else {
        Path *path = self->path;
        u32 pathIndex = self->pathIndex;
        PathPoint *pathPoint = NULL;
        if (path && pathIndex < path->numPoints) {
            pathPoint = &path->points[pathIndex];
            fix16 destX = FIX16(path->x + pathPoint->x);
            fix16 destY = LEVEL_toScreenY(FIX32(path->y + pathPoint->y));
            self->centerX = destX;
            self->centerY = destY;
            GObjPathPointFunction *action = pathPoint->actions;
            if (action) {
                for (u32 i = 0; i < pathPoint->numActions; ++i) {
                    if (*action)
                        (*action)(self, pathPoint);
                    ++action;
                }
            }
        }
        GOBJ_startTowardsPathPoint(self, ++pathIndex);
    }
}