#ifndef _LEVEL_H
#define _LEVEL_H

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
    short x, y;
    TriggerFunction action;
};
struct PathPoint {
    short x, y;
    unsigned int numActions;
    GObjPathPointFunction *actions;
};
struct Path {
    short x, y;
    unsigned int numPoints;
    PathPoint *points;
};
struct LevelObject {
    const GameObjectDefinition *definition;
    short x, y;
    unsigned short animInd, flags;
};
struct LevelObjectGroup {
    unsigned char numTriggers, numPaths, numObjects, _;
    Trigger *triggers;
    Path *paths;
    LevelObject *objects;
};

#endif