#include "gobject.h"
#include "gobjdef.h"
#include "gameplay.h"
#include "maths.h"

void GOBJ_init(GameObject *self) {
    self->velX = self->velY = 0;
}

bool GOBJ_isRectOverlapping(GameObject *self, fix16 x, fix16 y, fix16 w, fix16 h) {
    Sprite *sprite = self->sprite;
    fix16 hw = FIX16(sprite->definition->w >> 1);
    fix16 hh = FIX16(sprite->definition->h >> 1);
    return (self->centerX + hw > x && self->centerX - hw < x + w
        && self->centerY + hh > y && self->centerY - hh < y + h);
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

void GOBJ_updatePathFollow(GameObject *self) {
    Path *path = self->path;
    if (!path) {
        path = LEVEL_findNearestPath(self->group,
            fix16ToFix32(self->centerX),
            fix16ToFix32(self->centerY));
        self->path = path;
    }
    if (!path)
        return;

    u32 pathIndex = self->pathIndex;
    pathIndex = min(pathIndex, self->path->numPoints-1);

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
        pathIndex = min(pathIndex + 1, self->path->numPoints-1);
    } else {
        velX = fix16Div(fix16Mul(distX, speed), dist);
        velY = fix16Div(fix16Mul(distY, speed), dist);
    }

    self->velX = velX;
    self->velY = LEVEL_velY() + velY;
    self->centerX += self->velX;
    self->centerY += self->velY;

    if (pathIndex != self->pathIndex) {
        GObjPathPointFunction *actions = pathPoint->actions;
        for (int i = 0; i < pathPoint->numActions; ++i)
            actions[i](self, pathPoint);
        self->pathIndex = pathIndex;
    }
}