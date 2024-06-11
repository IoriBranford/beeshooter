#ifndef _LEVEL_H
#define _LEVEL_H

#include "types.h"

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
    TriggerFunction action;
    LevelObjectGroup *group;
};
struct PathPoint {
    s16 x, y;
    u32 numActions;
    GObjPathPointFunction *actions;
};
struct Path {
    s16 x, y;
    u32 numPoints;
    PathPoint *points;
};
struct LevelObject {
    const GameObjectDefinition *definition;
    s16 x, y;
    u16 animInd, flags;
    LevelObjectGroup *group;
};
struct LevelObjectGroup {
    u8 numTriggers, numPaths, numObjects, _;
    Trigger *triggers;
    Path *paths;
    LevelObject *objects;
};

void LEVEL_init();
void LEVEL_update();
void LEVEL_destroy();

fix16 LEVEL_toScreenY(fix32 yWorld);
fix32 LEVEL_toWorldY(fix16 yScreen);

fix32 LEVEL_velY();

Path* LEVEL_findNearestPath(LevelObjectGroup *group, fix32 xWorld, fix32 yWorld);
GameObject* LEVEL_createObject(LevelObject *lobj);

#endif