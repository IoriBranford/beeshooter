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
    self->group = 0;
}

GameObject* GOBJ_createFromDef(const GameObjectDefinition *def, fix16 centerX, fix16 centerY) {
    GameObject *obj = GAME_createObject();
    obj->centerX = centerX;
    obj->centerY = centerY;
    obj->health = def->health;
    obj->definition = def;
    if (def->update)
        OBJ_setUpdateMethod((Object*)obj, (ObjectCallback*)def->update);
    return obj;
}

void GOBJ_initSprite(GameObject *self, u16 attr) {
    const SpriteDefinition *spriteDef = self->definition->spriteDef;
    if (!spriteDef)
        return;
    Vect2D_f16 tl = GOBJ_getAnchorPoint(self, -1, -1);
    SPR_addSprite(spriteDef, fix16ToInt(tl.x), fix16ToInt(tl.y), attr);
}

Vect2D_f16 GOBJ_getAnchorPoint(GameObject *self, int ax, int ay) {
    Vect2D_f16 v = {self->centerX, self->centerY};
    Sprite *sprite = self->sprite;
    if (sprite) {
        if (ax < 0)
            v.x -= FIX16(sprite->definition->w >> 1);
        else if (ax > 0)
            v.x += FIX16(sprite->definition->w >> 1);
        if (ay < 0)
            v.y -= FIX16(sprite->definition->h >> 1);
        else if (ay > 0)
            v.y += FIX16(sprite->definition->h >> 1);
    }
    return v;
}

bool GOBJ_isRectOverlapping(GameObject *self, fix16 x, fix16 y, fix16 w, fix16 h) {
    Vect2D_f16 tl = GOBJ_getAnchorPoint(self, -1, -1);
    Vect2D_f16 br = GOBJ_getAnchorPoint(self, 1, 1);
    return (br.x > x && tl.x < x + w && br.y > y && tl.y < y + h);
}

bool GOBJ_isSpriteOnScreen(GameObject *self) {
    return GOBJ_isRectOverlapping(self, 0, 0, GAME_BOUNDW, GAME_BOUNDH);
}

void GOBJ_updateSprite(GameObject *self) {
    Sprite *sprite = self->sprite;
    if (!sprite)
        return;
    SPR_setPosition(self->sprite,
        fix16ToRoundedInt(self->centerX) - (sprite->definition->w >> 1),
        fix16ToRoundedInt(self->centerY) - (sprite->definition->h >> 1));
}

void GOBJ_release(GameObject *self) {
    SPR_releaseSprite(self->sprite);
}

void GOBJ_updatePathWalker(GameObject *self) {
    Path *path = self->path;
    if (!path) {
        path = LEVEL_findNearestPath(self->group,
            fix16ToFix32(self->centerX),
            fix16ToFix32(self->centerY));
        self->path = path;
    }
    GOBJ_followPath(self);
    if (GOBJ_isSpriteOnScreen(self)) {
        GOBJ_updateSprite(self);
    } else if (!self->path || self->pathIndex >= self->path->numPoints) {
        GAME_releaseObject(self);
    }
}

void GOBJ_followPath(GameObject *self) {
    Path *path = self->path;
    u32 pathIndex = self->pathIndex;
    if (!path || pathIndex >= path->numPoints) {
        self->velY += fix32ToFix16(LEVEL_velY());
        return;
    }

    pathIndex = min(pathIndex, path->numPoints-1);

    PathPoint *pathPoint = &path->points[pathIndex];
    fix16 destX = FIX16(path->x + pathPoint->x);
    fix16 destY = LEVEL_toScreenY(FIX32(path->y + pathPoint->y));

    fix16 distX = destX - self->centerX;
    fix16 distY = destY - self->centerY;
    fix16 dist = getApproximatedDistance(distX, distY);

    fix16 speed = self->speed;
    fix16 velX, velY;
    if (dist <= speed) {
        velX = distX;
        velY = distY;
        pathIndex = pathIndex + 1;
    } else {
        velX = fix16Div(fix16Mul(distX, speed), dist);
        velY = fix16Div(fix16Mul(distY, speed), dist);
    }

    self->velX = velX;
    self->velY = fix32ToFix16(LEVEL_velY()) + velY;
    self->centerX += self->velX;
    self->centerY += self->velY;

    if (pathIndex != self->pathIndex) {
        GObjPathPointFunction *action = pathPoint->actions;
        for (u32 i = 0; i < pathPoint->numActions; ++i) {
            if (action)
                (*action)(self, pathPoint);
            ++action;
        }
        self->pathIndex = pathIndex;
    }
}