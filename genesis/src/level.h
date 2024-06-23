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
typedef void (*TriggerFunction)(Trigger *self);
typedef void (*GObjPathPointFunction)(GameObject *self, PathPoint *pathPoint);

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
    GObjPathPointFunction *actions;
};
struct Path {
    s16 x, y;
    u32 numPoints;
    PathPoint points[];
};
struct LevelObject {
    const GameObjectDefinition *definition;
    s16 x, y;
    u16 animInd, flags;
    u16 pathIndex;
    Path *path;
    LevelObjectGroup *group;
};
struct LevelObjectGroup {
    u8 numTriggers, numPaths, numObjects, numObjectsSpawned;
    Trigger *triggers;
    Path **paths;
    LevelObject *objects;
};

void LEVEL_init();
void LEVEL_update();
void LEVEL_destroy();

fix16 LEVEL_toScreenY(fix32 yWorld);
fix32 LEVEL_toWorldY(fix16 yScreen);

fix32 LEVEL_cameraVelY();
void LEVEL_setVelY(fix32 velY);

u16 LEVEL_getPaletteSlot(const Palette *palette);

Path* LEVEL_findNearestPath(LevelObjectGroup *group, fix32 xWorld, fix32 yWorld);
GameObject* LEVEL_createObject(LevelObject *lobj);

#endif