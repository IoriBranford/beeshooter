#ifndef _LEVEL_H
#define _LEVEL_H

#include "types.h"
#include "pal.h"

typedef struct Trigger Trigger;
typedef struct PathPoint PathPoint;
typedef struct Path Path;
typedef struct GameObjectDefinition GameObjectDefinition;
typedef struct GameObject GameObject;
typedef struct LevelObject LevelObject;
typedef struct LevelObjectGroup LevelObjectGroup;
typedef void (*TriggerFunction)(const Trigger *self);
typedef void (*GObjPathPointFunction)(GameObject *self, const PathPoint *pathPoint);

struct Trigger {
    s16 x, y;
    u16 count;
    TriggerFunction action;
    LevelObjectGroup *group;
};
struct PathPoint {
    s16 x, y;
    fix16 xVelTo, yVelTo;
    fix16 speedTo, distTo;
    u8 shootInterval, shootCount;
    u32 numActions;
    const GObjPathPointFunction *actions;
};
struct Path {
    s16 x, y;
    u32 numPoints;
    const PathPoint points[];
};
struct LevelObject {
    const GameObjectDefinition *definition;
    s16 x, y;
    u8 animInd;
    u8 pathIndex;
    u16 flags;
    u16 interval;
    const Path *path;
    LevelObjectGroup *group;
    const LevelObject *child;
};
struct LevelObjectGroup {
    u8 numTriggers, numPaths, numObjects, numObjectsSpawned;
    const Trigger *triggers;
    const Path **paths;
    const LevelObject **objects;
};

void LEVEL_init(u16 baseTileIndex);
void LEVEL_update();
void LEVEL_destroy();

fix16 LEVEL_toScreenY(fix32 yWorld);
fix32 LEVEL_toWorldY(fix16 yScreen);

fix32 LEVEL_cameraVelY();
void LEVEL_setVelY(fix32 velY);

u16 LEVEL_getPaletteSlot(const Palette *palette);

const Path* LEVEL_findNearestPath(LevelObjectGroup *group, fix32 xWorld, fix32 yWorld);
GameObject* LEVEL_createObject(const LevelObject *lobj);

#endif