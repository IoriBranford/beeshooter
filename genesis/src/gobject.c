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

GameObject* GOBJ_createFromDef(const GameObjectDefinition *def, fix16 centerX, fix16 centerY) {
    GameObject *obj = GAME_createObject();
    obj->centerX = centerX;
    obj->centerY = centerY;
    obj->health = def->health;
    obj->speed = def->speed;
    obj->definition = def;
    if (def->update)
        OBJ_setUpdateMethod((Object*)obj, (ObjectCallback*)def->update);
    return obj;
}

void GOBJ_initSprite(GameObject *self, u16 attr) {
    const SpriteDefinition *spriteDef = self->definition ? self->definition->spriteDef : NULL;
    if (!spriteDef)
        return;
    Vect2D_f16 tl = GOBJ_getAnchorPoint(self, -1, -1);
    self->sprite = SPR_addSprite(spriteDef, fix16ToRoundedInt(tl.x), fix16ToRoundedInt(tl.y), attr);
}

Vect2D_f16 GOBJ_getAnchorPoint(GameObject *self, int ax, int ay) {
    Vect2D_f16 v = {self->centerX, self->centerY};
    const SpriteDefinition *spriteDef = 0;
    if (self->sprite) {
        spriteDef = self->sprite->definition;
    } else if (self->definition) {
        spriteDef = self->definition->spriteDef;
    }
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

fix16 GOBJ_getAnchorY(GameObject *self, int ay) {
    fix16 y = self->centerY;
    const SpriteDefinition *spriteDef = 0;
    if (self->sprite) {
        spriteDef = self->sprite->definition;
    } else if (self->definition) {
        spriteDef = self->definition->spriteDef;
    }
    if (spriteDef) {
        if (ay < 0)
            y -= FIX16(spriteDef->h >> 1);
        else if (ay > 0)
            y += FIX16(spriteDef->h >> 1);
    }
    return y;
}

bool GOBJ_isRectOverlapping(GameObject *self, fix16 x, fix16 y, fix16 w, fix16 h) {
    Vect2D_f16 tl = GOBJ_getAnchorPoint(self, -1, -1);
    Vect2D_f16 br = GOBJ_getAnchorPoint(self, 1, 1);
    return (br.x > x && tl.x < x + w && br.y > y && tl.y < y + h);
}

bool GOBJ_isSpriteOnScreen(GameObject *self) {
    return GOBJ_isRectOverlapping(self, 0, 0, GAME_BOUNDW, GAME_BOUNDH);
}

bool GOBJ_isSpriteOffScreenBottom(GameObject *self) {
    fix16 topY = GOBJ_getAnchorY(self, -1);
    return topY >= GAME_BOUNDH;
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
    if (GOBJ_isSpriteOffScreenBottom(self)) {
        GAME_releaseObject(self);
    }
}

void GOBJ_updatePathWalker(GameObject *self) {
    Path *path = self->path;
    if (!path) {
        path = LEVEL_findNearestPath(self->levelObject->group,
            fix16ToFix32(self->centerX),
            LEVEL_toWorldY(self->centerY));
        self->path = path;
    }
    GOBJ_followPath(self);
    GOBJ_updateSprite(self);
    if (GOBJ_isSpriteOffScreenBottom(self)) {
        if (!self->path || self->pathIndex >= self->path->numPoints)
            GAME_releaseObject(self);
    }
}

void GOBJ_followPath(GameObject *self) {
    Path *path = self->path;
    u32 pathIndex = self->pathIndex;
    if (!path || pathIndex >= path->numPoints) {
        GOBJ_followStage(self);
        return;
    }

    pathIndex = min(pathIndex, path->numPoints-1);

    PathPoint *pathPoint = &path->points[pathIndex];
    fix16 destX = FIX16(path->x + pathPoint->x);
    fix16 destY = LEVEL_toScreenY(FIX32(path->y + pathPoint->y));

    fix16 distX = destX - self->centerX;
    fix16 distY = destY - self->centerY;

    fix16 xDirTo = 0, yDirTo = 0;
    if (pathIndex == 0) {
        if (distX || distY) {
            fix16 dist = getApproximatedDistance(distX, distY);
            xDirTo = fix16Div(distX, dist);
            yDirTo = fix16Div(distY, dist);
        }
    } else {
        xDirTo = pathPoint->xDirTo;
        yDirTo = pathPoint->yDirTo;
    }

    fix16 speed = self->speed;
    fix16 velX, velY;
    fix16 dotProduct = fix16Mul(xDirTo, distX) + fix16Mul(yDirTo, distY);
    if (dotProduct <= speed) {
        velX = distX;
        velY = distY;
        pathIndex++;
    } else {
        velX = fix16Mul(speed, xDirTo);
        velY = fix16Mul(speed, yDirTo);
    }
    self->velX = velX;
    self->velY = velY - fix32ToFix16(LEVEL_cameraVelY());
    self->centerX += self->velX;
    self->centerY += self->velY;

    if (pathIndex != self->pathIndex) {
        GObjPathPointFunction *action = pathPoint->actions;
        if (action)
            for (u32 i = 0; i < pathPoint->numActions; ++i) {
                if (*action)
                    (*action)(self, pathPoint);
                ++action;
            }
        self->pathIndex = pathIndex;
    }
}