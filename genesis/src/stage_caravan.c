#include "stage_caravan.h"
extern LevelObjectGroup room1ants1;
static PathPoint path2186_points[] = {
{
    .x = 0, .y = -40,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -40, .y = -40,
    .speedTo = 128, .distTo = 2560,
    .xVelTo = -128, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -56, .y = -56,
    .speedTo = 128, .distTo = 1448,
    .xVelTo = -91, .yVelTo = -91,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -104, .y = -56,
    .speedTo = 128, .distTo = 3072,
    .xVelTo = -128, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static PathPoint path2187_points[] = {
{
    .x = 0, .y = -48,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -48, .y = -48,
    .speedTo = 128, .distTo = 3072,
    .xVelTo = -128, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -72, .y = -72,
    .speedTo = 128, .distTo = 2172,
    .xVelTo = -91, .yVelTo = -91,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -104, .y = -72,
    .speedTo = 128, .distTo = 2048,
    .xVelTo = -128, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static PathPoint path2188_points[] = {
{
    .x = 0, .y = -56,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -56, .y = -56,
    .speedTo = 128, .distTo = 3584,
    .xVelTo = -128, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -88, .y = -88,
    .speedTo = 128, .distTo = 2896,
    .xVelTo = -91, .yVelTo = -91,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -104, .y = -88,
    .speedTo = 128, .distTo = 1024,
    .xVelTo = -128, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static GObjPathPointFunction path2189_3_actions[] = {
faceRight
};
static PathPoint path2189_points[] = {
{
    .x = 0, .y = -64,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -64, .y = -64,
    .speedTo = 128, .distTo = 4096,
    .xVelTo = -128, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -96, .y = -96,
    .speedTo = 128, .distTo = 2896,
    .xVelTo = -91, .yVelTo = -91,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -96, .y = -104,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = -128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2189_3_actions
},
{
    .x = -88, .y = -112,
    .speedTo = 128, .distTo = 724,
    .xVelTo = 90, .yVelTo = -91,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static GObjPathPointFunction path2190_3_actions[] = {
faceRight
};
static PathPoint path2190_points[] = {
{
    .x = 0, .y = -72,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -72, .y = -72,
    .speedTo = 128, .distTo = 4608,
    .xVelTo = -128, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -96, .y = -96,
    .speedTo = 128, .distTo = 2172,
    .xVelTo = -91, .yVelTo = -91,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -96, .y = -104,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = -128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2190_3_actions
},
{
    .x = -88, .y = -112,
    .speedTo = 128, .distTo = 724,
    .xVelTo = 90, .yVelTo = -91,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path room1ants1_paths[] = {
{.x = 264, .y = 4056, .numPoints = 4, .points = path2186_points},
{.x = 272, .y = 4064, .numPoints = 4, .points = path2187_points},
{.x = 280, .y = 4072, .numPoints = 4, .points = path2188_points},
{.x = 288, .y = 4080, .numPoints = 5, .points = path2189_points},
{.x = 296, .y = 4088, .numPoints = 5, .points = path2190_points}
};
static LevelObject room1ants1_objects[] = {
{
    .definition = &defAnt,
    .x = 264, .y = 4016,
    .animInd = 0, .flags = 34816,
    .group = &room1ants1, .path = &room1ants1_paths[0],
    .pathIndex = 1
},
{
    .definition = &defAnt,
    .x = 280, .y = 4016,
    .animInd = 0, .flags = 34816,
    .group = &room1ants1, .path = &room1ants1_paths[2],
    .pathIndex = 1
},
{
    .definition = &defAnt,
    .x = 296, .y = 4016,
    .animInd = 0, .flags = 34816,
    .group = &room1ants1, .path = &room1ants1_paths[4],
    .pathIndex = 1
}
};
LevelObjectGroup room1ants1 = {
    .numPaths = 5, .paths = room1ants1_paths,
    .numObjects = 3, .objects = room1ants1_objects
};
extern LevelObjectGroup room1ants2;
static PathPoint path2199_points[] = {
{
    .x = 0, .y = -40,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 56, .y = -40,
    .speedTo = 128, .distTo = 3584,
    .xVelTo = 128, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 72, .y = -56,
    .speedTo = 128, .distTo = 1448,
    .xVelTo = 90, .yVelTo = -91,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 104, .y = -56,
    .speedTo = 128, .distTo = 2048,
    .xVelTo = 128, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static PathPoint path2200_points[] = {
{
    .x = 0, .y = -32,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 56, .y = -32,
    .speedTo = 128, .distTo = 3584,
    .xVelTo = 128, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 80, .y = -56,
    .speedTo = 128, .distTo = 2172,
    .xVelTo = 90, .yVelTo = -91,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 104, .y = -56,
    .speedTo = 128, .distTo = 1536,
    .xVelTo = 128, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static PathPoint path2201_points[] = {
{
    .x = 0, .y = -24,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 56, .y = -24,
    .speedTo = 128, .distTo = 3584,
    .xVelTo = 128, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = -56,
    .speedTo = 128, .distTo = 2896,
    .xVelTo = 90, .yVelTo = -91,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 112, .y = -56,
    .speedTo = 128, .distTo = 1536,
    .xVelTo = 128, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static PathPoint path2202_points[] = {
{
    .x = 0, .y = -32,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 56, .y = -32,
    .speedTo = 128, .distTo = 3584,
    .xVelTo = 128, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = -64,
    .speedTo = 128, .distTo = 2896,
    .xVelTo = 90, .yVelTo = -91,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static PathPoint path2203_points[] = {
{
    .x = 0, .y = -40,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 56, .y = -40,
    .speedTo = 128, .distTo = 3584,
    .xVelTo = 128, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = -72,
    .speedTo = 128, .distTo = 2896,
    .xVelTo = 90, .yVelTo = -91,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = -80,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = -128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path room1ants2_paths[] = {
{.x = -8, .y = 4032, .numPoints = 4, .points = path2199_points},
{.x = -16, .y = 4024, .numPoints = 4, .points = path2200_points},
{.x = -24, .y = 4016, .numPoints = 4, .points = path2201_points},
{.x = -32, .y = 4024, .numPoints = 3, .points = path2202_points},
{.x = -40, .y = 4032, .numPoints = 4, .points = path2203_points}
};
static LevelObject room1ants2_objects[] = {
{
    .definition = &defAnt,
    .x = -24, .y = 3992,
    .animInd = 0, .flags = 32768,
    .group = &room1ants2, .path = &room1ants2_paths[2],
    .pathIndex = 1
},
{
    .definition = &defAnt,
    .x = -40, .y = 3992,
    .animInd = 0, .flags = 32768,
    .group = &room1ants2, .path = &room1ants2_paths[4],
    .pathIndex = 1
},
{
    .definition = &defAnt,
    .x = -8, .y = 3992,
    .animInd = 0, .flags = 32768,
    .group = &room1ants2, .path = &room1ants2_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup room1ants2 = {
    .numPaths = 5, .paths = room1ants2_paths,
    .numObjects = 3, .objects = room1ants2_objects
};
extern LevelObjectGroup room1ants3;
static PathPoint path2204_points[] = {
{
    .x = -8, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 0,
    .speedTo = 128, .distTo = 1024,
    .xVelTo = 128, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 24, .y = -8,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = 114, .yVelTo = -58,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = -8,
    .speedTo = 128, .distTo = 4096,
    .xVelTo = 128, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 136, .y = -32,
    .speedTo = 128, .distTo = 3434,
    .xVelTo = 114, .yVelTo = -58,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 200, .y = -32,
    .speedTo = 128, .distTo = 4096,
    .xVelTo = 128, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 232, .y = -48,
    .speedTo = 128, .distTo = 2289,
    .xVelTo = 114, .yVelTo = -58,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 272, .y = -48,
    .speedTo = 128, .distTo = 2560,
    .xVelTo = 128, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path room1ants3_paths[] = {
{.x = 0, .y = 3912, .numPoints = 8, .points = path2204_points}
};
static LevelObject room1ants3_objects[] = {
{
    .definition = &defAnt,
    .x = -8, .y = 3912,
    .animInd = 0, .flags = 32768,
    .group = &room1ants3, .path = &room1ants3_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup room1ants3 = {
    .numPaths = 1, .paths = room1ants3_paths,
    .numObjects = 1, .objects = room1ants3_objects
};
extern LevelObjectGroup room1ants4;
static PathPoint path2221_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = 0,
    .speedTo = 128, .distTo = 2048,
    .xVelTo = -128, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -64, .y = -16,
    .speedTo = 128, .distTo = 2289,
    .xVelTo = -115, .yVelTo = -58,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -168, .y = -16,
    .speedTo = 128, .distTo = 6656,
    .xVelTo = -128, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -232, .y = -48,
    .speedTo = 128, .distTo = 4579,
    .xVelTo = -115, .yVelTo = -58,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -280, .y = -48,
    .speedTo = 128, .distTo = 3072,
    .xVelTo = -128, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static PathPoint path2253_points[] = {
{
    .x = -8, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -40, .y = 0,
    .speedTo = 128, .distTo = 2048,
    .xVelTo = -128, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -72, .y = 16,
    .speedTo = 128, .distTo = 2289,
    .xVelTo = -115, .yVelTo = 57,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -144, .y = 16,
    .speedTo = 128, .distTo = 4608,
    .xVelTo = -128, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -160, .y = 24,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = -115, .yVelTo = 57,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -248, .y = 24,
    .speedTo = 128, .distTo = 5632,
    .xVelTo = -128, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -264, .y = 32,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = -115, .yVelTo = 57,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -280, .y = 32,
    .speedTo = 128, .distTo = 1024,
    .xVelTo = -128, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path room1ants4_paths[] = {
{.x = 264, .y = 3840, .numPoints = 6, .points = path2221_points},
{.x = 272, .y = 3880, .numPoints = 8, .points = path2253_points}
};
static LevelObject room1ants4_objects[] = {
{
    .definition = &defAnt,
    .x = 264, .y = 3880,
    .animInd = 0, .flags = 34816,
    .group = &room1ants4, .path = &room1ants4_paths[1],
    .pathIndex = 1
},
{
    .definition = &defAnt,
    .x = 264, .y = 3840,
    .animInd = 0, .flags = 34816,
    .group = &room1ants4, .path = &room1ants4_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup room1ants4 = {
    .numPaths = 2, .paths = room1ants4_paths,
    .numObjects = 2, .objects = room1ants4_objects
};
extern LevelObjectGroup room1powerup;
static LevelObject room1powerup_objects[] = {
{
    .definition = &defHoneyPot,
    .x = 80, .y = 3752,
    .animInd = 0, .flags = 32768,
    .group = &room1powerup, .path = 0,
    .pathIndex = 0
}
};
LevelObjectGroup room1powerup = {
    .numPaths = 0, .paths = 0,
    .numObjects = 1, .objects = room1powerup_objects
};
extern LevelObjectGroup room2ants1;
static PathPoint path2268_points[] = {
{
    .x = 0, .y = -8,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = 24,
    .speedTo = 128, .distTo = 5992,
    .xVelTo = 120, .yVelTo = 43,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static PathPoint path2269_points[] = {
{
    .x = 0, .y = -8,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -72, .y = -8,
    .speedTo = 128, .distTo = 4608,
    .xVelTo = -128, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static PathPoint path2271_points[] = {
{
    .x = 0, .y = 8,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 72, .y = 24,
    .speedTo = 128, .distTo = 4720,
    .xVelTo = 124, .yVelTo = 27,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static PathPoint path2274_points[] = {
{
    .x = 0, .y = 8,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -88, .y = -8,
    .speedTo = 128, .distTo = 5724,
    .xVelTo = -126, .yVelTo = -23,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static PathPoint path2275_points[] = {
{
    .x = 0, .y = 24,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 80, .y = 24,
    .speedTo = 128, .distTo = 5120,
    .xVelTo = 128, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path room2ants1_paths[] = {
{.x = -8, .y = 3616, .numPoints = 2, .points = path2268_points},
{.x = 264, .y = 3672, .numPoints = 2, .points = path2269_points},
{.x = -8, .y = 3648, .numPoints = 2, .points = path2271_points},
{.x = 264, .y = 3704, .numPoints = 2, .points = path2274_points},
{.x = -8, .y = 3680, .numPoints = 2, .points = path2275_points}
};
static LevelObject room2ants1_objects[] = {
{
    .definition = &defAnt,
    .x = 264, .y = 3712,
    .animInd = 0, .flags = 34816,
    .group = &room2ants1, .path = &room2ants1_paths[3],
    .pathIndex = 1
},
{
    .definition = &defAnt,
    .x = -8, .y = 3704,
    .animInd = 0, .flags = 32768,
    .group = &room2ants1, .path = &room2ants1_paths[4],
    .pathIndex = 1
},
{
    .definition = &defAnt,
    .x = 264, .y = 3664,
    .animInd = 0, .flags = 34816,
    .group = &room2ants1, .path = &room2ants1_paths[1],
    .pathIndex = 1
},
{
    .definition = &defAnt,
    .x = -8, .y = 3656,
    .animInd = 0, .flags = 32768,
    .group = &room2ants1, .path = &room2ants1_paths[2],
    .pathIndex = 1
},
{
    .definition = &defAnt,
    .x = -8, .y = 3608,
    .animInd = 0, .flags = 32768,
    .group = &room2ants1, .path = &room2ants1_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup room2ants1 = {
    .numPaths = 5, .paths = room2ants1_paths,
    .numObjects = 5, .objects = room2ants1_objects
};
extern LevelObjectGroup room2ants2;
static PathPoint path2288_points[] = {
{
    .x = 0, .y = 16,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = 24,
    .speedTo = 128, .distTo = 5655,
    .xVelTo = 127, .yVelTo = 11,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static PathPoint path2291_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -72, .y = -8,
    .speedTo = 128, .distTo = 4636,
    .xVelTo = -128, .yVelTo = -15,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static PathPoint path2293_points[] = {
{
    .x = 0, .y = 16,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -80, .y = -8,
    .speedTo = 128, .distTo = 5345,
    .xVelTo = -123, .yVelTo = -37,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static PathPoint path2294_points[] = {
{
    .x = 0, .y = 32,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 72, .y = 24,
    .speedTo = 128, .distTo = 4636,
    .xVelTo = 127, .yVelTo = -15,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static PathPoint path2297_points[] = {
{
    .x = 0, .y = 32,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -88, .y = -8,
    .speedTo = 128, .distTo = 6186,
    .xVelTo = -117, .yVelTo = -53,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path room2ants2_paths[] = {
{.x = -8, .y = 3624, .numPoints = 2, .points = path2288_points},
{.x = 264, .y = 3648, .numPoints = 2, .points = path2291_points},
{.x = 264, .y = 3680, .numPoints = 2, .points = path2293_points},
{.x = -8, .y = 3656, .numPoints = 2, .points = path2294_points},
{.x = 264, .y = 3712, .numPoints = 2, .points = path2297_points}
};
static LevelObject room2ants2_objects[] = {
{
    .definition = &defAnt,
    .x = 264, .y = 3744,
    .animInd = 0, .flags = 34816,
    .group = &room2ants2, .path = &room2ants2_paths[4],
    .pathIndex = 1
},
{
    .definition = &defAnt,
    .x = 264, .y = 3696,
    .animInd = 0, .flags = 34816,
    .group = &room2ants2, .path = &room2ants2_paths[2],
    .pathIndex = 1
},
{
    .definition = &defAnt,
    .x = -8, .y = 3688,
    .animInd = 0, .flags = 32768,
    .group = &room2ants2, .path = &room2ants2_paths[3],
    .pathIndex = 1
},
{
    .definition = &defAnt,
    .x = 264, .y = 3648,
    .animInd = 0, .flags = 34816,
    .group = &room2ants2, .path = &room2ants2_paths[1],
    .pathIndex = 1
},
{
    .definition = &defAnt,
    .x = -8, .y = 3640,
    .animInd = 0, .flags = 32768,
    .group = &room2ants2, .path = &room2ants2_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup room2ants2 = {
    .numPaths = 5, .paths = room2ants2_paths,
    .numObjects = 5, .objects = room2ants2_objects
};
extern LevelObjectGroup room2powerup;
static LevelObject room2powerup_objects[] = {
{
    .definition = &defHoneyPot,
    .x = 136, .y = 3568,
    .animInd = 0, .flags = 32768,
    .group = &room2powerup, .path = 0,
    .pathIndex = 0
}
};
LevelObjectGroup room2powerup = {
    .numPaths = 0, .paths = 0,
    .numObjects = 1, .objects = room2powerup_objects
};
extern LevelObjectGroup r3fly1;
static GObjPathPointFunction path2303_0_actions[] = {
enterBackground
};
static GObjPathPointFunction path2303_3_actions[] = {
enterForeground,
startShooting
};
static GObjPathPointFunction path2303_6_actions[] = {
startShooting
};
static GObjPathPointFunction path2303_8_actions[] = {
startShooting
};
static GObjPathPointFunction path2303_9_actions[] = {
PathPoint_SetSpeed
};
static PathPoint path2303_points[] = {
{
    .x = 64, .y = 112,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2303_0_actions
},
{
    .x = 64, .y = 96,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 72, .y = 80,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = 28, .yVelTo = -58,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = 72,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = 57, .yVelTo = -29,
    .shootCount = 3, .shootInterval = 6,
    .numActions = 2,
    .actions = path2303_3_actions
},
{
    .x = 104, .y = 80,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = 57, .yVelTo = 28,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 112, .y = 96,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = 28, .yVelTo = 57,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 104, .y = 120,
    .speedTo = 64, .distTo = 1619,
    .xVelTo = -21, .yVelTo = 60,
    .shootCount = 3, .shootInterval = 6,
    .numActions = 1,
    .actions = path2303_6_actions
},
{
    .x = 88, .y = 136,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = -46, .yVelTo = 45,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 64, .y = 144,
    .speedTo = 64, .distTo = 1619,
    .xVelTo = -61, .yVelTo = 20,
    .shootCount = 3, .shootInterval = 6,
    .numActions = 1,
    .actions = path2303_8_actions
},
{
    .x = 40, .y = 136,
    .speedTo = 64, .distTo = 1619,
    .xVelTo = -61, .yVelTo = -21,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2303_9_actions
},
{
    .x = 16, .y = 96,
    .speedTo = 128, .distTo = 2985,
    .xVelTo = -66, .yVelTo = -110,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -24, .y = 0,
    .speedTo = 128, .distTo = 6656,
    .xVelTo = -50, .yVelTo = -119,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static GObjPathPointFunction path2304_0_actions[] = {
enterBackground
};
static GObjPathPointFunction path2304_3_actions[] = {
enterForeground,
startShooting
};
static GObjPathPointFunction path2304_6_actions[] = {
startShooting
};
static GObjPathPointFunction path2304_8_actions[] = {
startShooting
};
static GObjPathPointFunction path2304_9_actions[] = {
PathPoint_SetSpeed
};
static PathPoint path2304_points[] = {
{
    .x = -32, .y = 120,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2304_0_actions
},
{
    .x = -32, .y = 104,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -40, .y = 88,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = -29, .yVelTo = -58,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -56, .y = 80,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = -58, .yVelTo = -29,
    .shootCount = 3, .shootInterval = 6,
    .numActions = 2,
    .actions = path2304_3_actions
},
{
    .x = -72, .y = 88,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = -58, .yVelTo = 28,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -80, .y = 104,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = -29, .yVelTo = 57,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -72, .y = 128,
    .speedTo = 64, .distTo = 1619,
    .xVelTo = 20, .yVelTo = 60,
    .shootCount = 3, .shootInterval = 6,
    .numActions = 1,
    .actions = path2304_6_actions
},
{
    .x = -56, .y = 144,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = 45, .yVelTo = 45,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = 152,
    .speedTo = 64, .distTo = 1619,
    .xVelTo = 60, .yVelTo = 20,
    .shootCount = 3, .shootInterval = 6,
    .numActions = 1,
    .actions = path2304_8_actions
},
{
    .x = -8, .y = 144,
    .speedTo = 64, .distTo = 1619,
    .xVelTo = 60, .yVelTo = -21,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2304_9_actions
},
{
    .x = 16, .y = 104,
    .speedTo = 128, .distTo = 2985,
    .xVelTo = 65, .yVelTo = -110,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 56, .y = 8,
    .speedTo = 128, .distTo = 6656,
    .xVelTo = 49, .yVelTo = -119,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path r3fly1_paths[] = {
{.x = 0, .y = 3504, .numPoints = 12, .points = path2303_points},
{.x = 224, .y = 3496, .numPoints = 12, .points = path2304_points}
};
static LevelObject r3fly1_objects[] = {
{
    .definition = &defFly,
    .x = 64, .y = 3616,
    .animInd = 0, .flags = 0,
    .group = &r3fly1, .path = &r3fly1_paths[0],
    .pathIndex = 1
},
{
    .definition = &defFly,
    .x = 192, .y = 3616,
    .animInd = 0, .flags = 2048,
    .group = &r3fly1, .path = &r3fly1_paths[1],
    .pathIndex = 1
}
};
LevelObjectGroup r3fly1 = {
    .numPaths = 2, .paths = r3fly1_paths,
    .numObjects = 2, .objects = r3fly1_objects
};
extern LevelObjectGroup room3fly3;
static GObjPathPointFunction path2314_1_actions[] = {
enterForeground,
startShooting
};
static GObjPathPointFunction path2314_4_actions[] = {
startShooting
};
static PathPoint path2314_points[] = {
{
    .x = 104, .y = 88,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = 72,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = -46, .yVelTo = -46,
    .shootCount = 3, .shootInterval = 6,
    .numActions = 2,
    .actions = path2314_1_actions
},
{
    .x = 80, .y = 72,
    .speedTo = 64, .distTo = 512,
    .xVelTo = -64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 72, .y = 88,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = -29, .yVelTo = 57,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 64, .y = 112,
    .speedTo = 64, .distTo = 1619,
    .xVelTo = -21, .yVelTo = 60,
    .shootCount = 3, .shootInterval = 6,
    .numActions = 1,
    .actions = path2314_4_actions
},
{
    .x = 56, .y = 120,
    .speedTo = 64, .distTo = 724,
    .xVelTo = -46, .yVelTo = 45,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 48, .y = 112,
    .speedTo = 64, .distTo = 724,
    .xVelTo = -46, .yVelTo = -46,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 40, .y = 88,
    .speedTo = 64, .distTo = 1619,
    .xVelTo = -21, .yVelTo = -61,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 32, .y = 72,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = -29, .yVelTo = -58,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -40, .y = 0,
    .speedTo = 64, .distTo = 6516,
    .xVelTo = -46, .yVelTo = -46,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static GObjPathPointFunction path2315_1_actions[] = {
enterForeground,
startShooting
};
static GObjPathPointFunction path2315_4_actions[] = {
startShooting
};
static PathPoint path2315_points[] = {
{
    .x = -72, .y = 96,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -56, .y = 80,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = 45, .yVelTo = -46,
    .shootCount = 3, .shootInterval = 6,
    .numActions = 2,
    .actions = path2315_1_actions
},
{
    .x = -48, .y = 80,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -40, .y = 96,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = 28, .yVelTo = 57,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = 120,
    .speedTo = 64, .distTo = 1619,
    .xVelTo = 20, .yVelTo = 60,
    .shootCount = 3, .shootInterval = 6,
    .numActions = 1,
    .actions = path2315_4_actions
},
{
    .x = -24, .y = 128,
    .speedTo = 64, .distTo = 724,
    .xVelTo = 45, .yVelTo = 45,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = 120,
    .speedTo = 64, .distTo = 724,
    .xVelTo = 45, .yVelTo = -46,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 96,
    .speedTo = 64, .distTo = 1619,
    .xVelTo = 20, .yVelTo = -61,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 80,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = 28, .yVelTo = -58,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 72, .y = 8,
    .speedTo = 64, .distTo = 6516,
    .xVelTo = 45, .yVelTo = -46,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path room3fly3_paths[] = {
{.x = 0, .y = 3408, .numPoints = 10, .points = path2314_points},
{.x = 224, .y = 3400, .numPoints = 10, .points = path2315_points}
};
static LevelObject room3fly3_objects[] = {
{
    .definition = &defFly,
    .x = 104, .y = 3496,
    .animInd = 0, .flags = 0,
    .group = &room3fly3, .path = &room3fly3_paths[0],
    .pathIndex = 1
},
{
    .definition = &defFly,
    .x = 152, .y = 3496,
    .animInd = 0, .flags = 2048,
    .group = &room3fly3, .path = &room3fly3_paths[1],
    .pathIndex = 1
}
};
LevelObjectGroup room3fly3 = {
    .numPaths = 2, .paths = room3fly3_paths,
    .numObjects = 2, .objects = room3fly3_objects
};
extern LevelObjectGroup room3fly4;
static GObjPathPointFunction path2323_2_actions[] = {
enterForeground,
startShooting
};
static GObjPathPointFunction path2323_5_actions[] = {
startShooting
};
static GObjPathPointFunction path2323_7_actions[] = {
PathPoint_SetSpeed
};
static PathPoint path2323_points[] = {
{
    .x = 72, .y = -16,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 64, .y = -32,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = -29, .yVelTo = -58,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 64, .y = -56,
    .speedTo = 64, .distTo = 1536,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 3, .shootInterval = 6,
    .numActions = 2,
    .actions = path2323_2_actions
},
{
    .x = 72, .y = -72,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = 28, .yVelTo = -58,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 80, .y = -88,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = 28, .yVelTo = -58,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = -112,
    .speedTo = 64, .distTo = 1619,
    .xVelTo = 20, .yVelTo = -61,
    .shootCount = 3, .shootInterval = 6,
    .numActions = 1,
    .actions = path2323_5_actions
},
{
    .x = 80, .y = -128,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = -29, .yVelTo = -58,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 72, .y = -136,
    .speedTo = 64, .distTo = 724,
    .xVelTo = -46, .yVelTo = -46,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2323_7_actions
},
{
    .x = 8, .y = -200,
    .speedTo = 128, .distTo = 5792,
    .xVelTo = -91, .yVelTo = -91,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static GObjPathPointFunction path2324_2_actions[] = {
enterForeground,
startShooting
};
static GObjPathPointFunction path2324_5_actions[] = {
startShooting
};
static GObjPathPointFunction path2324_7_actions[] = {
PathPoint_SetSpeed
};
static PathPoint path2324_points[] = {
{
    .x = -72, .y = -16,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -64, .y = -32,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = 28, .yVelTo = -58,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -64, .y = -56,
    .speedTo = 64, .distTo = 1536,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 3, .shootInterval = 6,
    .numActions = 2,
    .actions = path2324_2_actions
},
{
    .x = -72, .y = -72,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = -29, .yVelTo = -58,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -80, .y = -88,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = -29, .yVelTo = -58,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -88, .y = -112,
    .speedTo = 64, .distTo = 1619,
    .xVelTo = -21, .yVelTo = -61,
    .shootCount = 3, .shootInterval = 6,
    .numActions = 1,
    .actions = path2324_5_actions
},
{
    .x = -80, .y = -128,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = 28, .yVelTo = -58,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -72, .y = -136,
    .speedTo = 64, .distTo = 724,
    .xVelTo = 45, .yVelTo = -46,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2324_7_actions
},
{
    .x = -8, .y = -200,
    .speedTo = 128, .distTo = 5792,
    .xVelTo = 90, .yVelTo = -91,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path room3fly4_paths[] = {
{.x = -32, .y = 3560, .numPoints = 9, .points = path2323_points},
{.x = 288, .y = 3560, .numPoints = 9, .points = path2324_points}
};
static LevelObject room3fly4_objects[] = {
{
    .definition = &defFly,
    .x = 40, .y = 3544,
    .animInd = 0, .flags = 0,
    .group = &room3fly4, .path = &room3fly4_paths[0],
    .pathIndex = 1
},
{
    .definition = &defFly,
    .x = 216, .y = 3544,
    .animInd = 0, .flags = 2048,
    .group = &room3fly4, .path = &room3fly4_paths[1],
    .pathIndex = 1
}
};
LevelObjectGroup room3fly4 = {
    .numPaths = 2, .paths = room3fly4_paths,
    .numObjects = 2, .objects = room3fly4_objects
};
extern LevelObjectGroup r4r5ants;
static GObjPathPointFunction path2373_5_actions[] = {
faceRight
};
static GObjPathPointFunction path2373_8_actions[] = {
enterBackground
};
static GObjPathPointFunction path2373_11_actions[] = {
faceLeft
};
static GObjPathPointFunction path2373_14_actions[] = {
enterForeground
};
static GObjPathPointFunction path2373_16_actions[] = {
faceRight
};
static GObjPathPointFunction path2373_19_actions[] = {
enterBackground
};
static GObjPathPointFunction path2373_22_actions[] = {
faceLeft
};
static GObjPathPointFunction path2373_25_actions[] = {
enterForeground
};
static GObjPathPointFunction path2373_28_actions[] = {
faceRight
};
static GObjPathPointFunction path2373_31_actions[] = {
enterBackground
};
static GObjPathPointFunction path2373_33_actions[] = {
markDisappear
};
static PathPoint path2373_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -12, .y = 12,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = -91, .yVelTo = 90,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -20, .y = 28,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = -58, .yVelTo = 114,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -12, .y = 44,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = 57, .yVelTo = 114,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 56,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = 90, .yVelTo = 90,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 16, .y = 60,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = 124, .yVelTo = 31,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2373_5_actions
},
{
    .x = 32, .y = 64,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = 124, .yVelTo = 31,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 44, .y = 76,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = 90, .yVelTo = 90,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 52, .y = 92,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = 57, .yVelTo = 114,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2373_8_actions
},
{
    .x = 44, .y = 108,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = -58, .yVelTo = 114,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 32, .y = 120,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = -91, .yVelTo = 90,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 16, .y = 124,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = -125, .yVelTo = 31,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2373_11_actions
},
{
    .x = 0, .y = 128,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = -125, .yVelTo = 31,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -12, .y = 140,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = -91, .yVelTo = 90,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -20, .y = 156,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = -58, .yVelTo = 114,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2373_14_actions
},
{
    .x = 0, .y = 184,
    .speedTo = 128, .distTo = 2202,
    .xVelTo = 74, .yVelTo = 104,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 16, .y = 188,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = 124, .yVelTo = 31,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2373_16_actions
},
{
    .x = 32, .y = 192,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = 124, .yVelTo = 31,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 44, .y = 204,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = 90, .yVelTo = 90,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 52, .y = 220,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = 57, .yVelTo = 114,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2373_19_actions
},
{
    .x = 44, .y = 236,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = -58, .yVelTo = 114,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 32, .y = 248,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = -91, .yVelTo = 90,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 16, .y = 252,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = -125, .yVelTo = 31,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2373_22_actions
},
{
    .x = 0, .y = 256,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = -125, .yVelTo = 31,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -12, .y = 268,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = -91, .yVelTo = 90,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -20, .y = 284,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = -58, .yVelTo = 114,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2373_25_actions
},
{
    .x = -12, .y = 300,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = 57, .yVelTo = 114,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 312,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = 90, .yVelTo = 90,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 16, .y = 316,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = 124, .yVelTo = 31,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2373_28_actions
},
{
    .x = 32, .y = 320,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = 124, .yVelTo = 31,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 44, .y = 332,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = 90, .yVelTo = 90,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 52, .y = 348,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = 57, .yVelTo = 114,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2373_31_actions
},
{
    .x = 44, .y = 364,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = -58, .yVelTo = 114,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 32, .y = 376,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = -91, .yVelTo = 90,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2373_33_actions
}
};
static GObjPathPointFunction path3723_5_actions[] = {
faceLeft
};
static GObjPathPointFunction path3723_8_actions[] = {
enterBackground
};
static GObjPathPointFunction path3723_11_actions[] = {
faceRight
};
static GObjPathPointFunction path3723_14_actions[] = {
enterForeground
};
static GObjPathPointFunction path3723_16_actions[] = {
faceLeft
};
static GObjPathPointFunction path3723_19_actions[] = {
enterBackground
};
static GObjPathPointFunction path3723_22_actions[] = {
faceRight
};
static GObjPathPointFunction path3723_25_actions[] = {
enterForeground
};
static GObjPathPointFunction path3723_28_actions[] = {
faceLeft
};
static GObjPathPointFunction path3723_31_actions[] = {
enterBackground
};
static GObjPathPointFunction path3723_33_actions[] = {
markDisappear
};
static PathPoint path3723_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 12, .y = 12,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = 90, .yVelTo = 90,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 20, .y = 28,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = 57, .yVelTo = 114,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 12, .y = 44,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = -58, .yVelTo = 114,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 56,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = -91, .yVelTo = 90,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = 60,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = -125, .yVelTo = 31,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3723_5_actions
},
{
    .x = -32, .y = 64,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = -125, .yVelTo = 31,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -44, .y = 76,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = -91, .yVelTo = 90,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -52, .y = 92,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = -58, .yVelTo = 114,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3723_8_actions
},
{
    .x = -44, .y = 108,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = 57, .yVelTo = 114,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = 120,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = 90, .yVelTo = 90,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = 124,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = 124, .yVelTo = 31,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3723_11_actions
},
{
    .x = 0, .y = 128,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = 124, .yVelTo = 31,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 12, .y = 140,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = 90, .yVelTo = 90,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 20, .y = 156,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = 57, .yVelTo = 114,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3723_14_actions
},
{
    .x = 0, .y = 184,
    .speedTo = 128, .distTo = 2202,
    .xVelTo = -75, .yVelTo = 104,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = 188,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = -125, .yVelTo = 31,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3723_16_actions
},
{
    .x = -32, .y = 192,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = -125, .yVelTo = 31,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -44, .y = 204,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = -91, .yVelTo = 90,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -52, .y = 220,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = -58, .yVelTo = 114,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3723_19_actions
},
{
    .x = -44, .y = 236,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = 57, .yVelTo = 114,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = 248,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = 90, .yVelTo = 90,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = 252,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = 124, .yVelTo = 31,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3723_22_actions
},
{
    .x = 0, .y = 256,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = 124, .yVelTo = 31,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 12, .y = 268,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = 90, .yVelTo = 90,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 20, .y = 284,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = 57, .yVelTo = 114,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3723_25_actions
},
{
    .x = 12, .y = 300,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = -58, .yVelTo = 114,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 312,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = -91, .yVelTo = 90,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = 316,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = -125, .yVelTo = 31,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3723_28_actions
},
{
    .x = -32, .y = 320,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = -125, .yVelTo = 31,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -44, .y = 332,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = -91, .yVelTo = 90,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -52, .y = 348,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = -58, .yVelTo = 114,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3723_31_actions
},
{
    .x = -44, .y = 364,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = 57, .yVelTo = 114,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = 376,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = 90, .yVelTo = 90,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3723_33_actions
}
};
static Path r4r5ants_paths[] = {
{.x = 48, .y = 2936, .numPoints = 34, .points = path2373_points},
{.x = 208, .y = 2936, .numPoints = 34, .points = path3723_points}
};
static LevelObject r4r5ants_objects[] = {
{
    .definition = &defAnt,
    .x = 176, .y = 3256,
    .animInd = 1, .flags = 34816,
    .group = &r4r5ants, .path = &r4r5ants_paths[1],
    .pathIndex = 30
},
{
    .definition = &defAnt,
    .x = 80, .y = 3256,
    .animInd = 1, .flags = 32768,
    .group = &r4r5ants, .path = &r4r5ants_paths[0],
    .pathIndex = 30
},
{
    .definition = &defAnt,
    .x = 64, .y = 3252,
    .animInd = 1, .flags = 32768,
    .group = &r4r5ants, .path = &r4r5ants_paths[0],
    .pathIndex = 29
},
{
    .definition = &defAnt,
    .x = 192, .y = 3252,
    .animInd = 1, .flags = 34816,
    .group = &r4r5ants, .path = &r4r5ants_paths[1],
    .pathIndex = 29
},
{
    .definition = &defAnt,
    .x = 208, .y = 3248,
    .animInd = 1, .flags = 32768,
    .group = &r4r5ants, .path = &r4r5ants_paths[1],
    .pathIndex = 28
},
{
    .definition = &defAnt,
    .x = 48, .y = 3248,
    .animInd = 1, .flags = 34816,
    .group = &r4r5ants, .path = &r4r5ants_paths[0],
    .pathIndex = 28
},
{
    .definition = &defAnt,
    .x = 36, .y = 3236,
    .animInd = 1, .flags = 34816,
    .group = &r4r5ants, .path = &r4r5ants_paths[0],
    .pathIndex = 27
},
{
    .definition = &defAnt,
    .x = 220, .y = 3236,
    .animInd = 1, .flags = 32768,
    .group = &r4r5ants, .path = &r4r5ants_paths[1],
    .pathIndex = 27
},
{
    .definition = &defAnt,
    .x = 228, .y = 3220,
    .animInd = 1, .flags = 32768,
    .group = &r4r5ants, .path = &r4r5ants_paths[1],
    .pathIndex = 26
},
{
    .definition = &defAnt,
    .x = 28, .y = 3220,
    .animInd = 1, .flags = 34816,
    .group = &r4r5ants, .path = &r4r5ants_paths[0],
    .pathIndex = 26
},
{
    .definition = &defAnt,
    .x = 220, .y = 3204,
    .animInd = 1, .flags = 0,
    .group = &r4r5ants, .path = &r4r5ants_paths[1],
    .pathIndex = 25
},
{
    .definition = &defAnt,
    .x = 36, .y = 3204,
    .animInd = 1, .flags = 2048,
    .group = &r4r5ants, .path = &r4r5ants_paths[0],
    .pathIndex = 25
},
{
    .definition = &defAnt,
    .x = 208, .y = 3192,
    .animInd = 1, .flags = 0,
    .group = &r4r5ants, .path = &r4r5ants_paths[1],
    .pathIndex = 24
},
{
    .definition = &defAnt,
    .x = 48, .y = 3192,
    .animInd = 1, .flags = 2048,
    .group = &r4r5ants, .path = &r4r5ants_paths[0],
    .pathIndex = 24
},
{
    .definition = &defAnt,
    .x = 192, .y = 3188,
    .animInd = 1, .flags = 0,
    .group = &r4r5ants, .path = &r4r5ants_paths[1],
    .pathIndex = 23
},
{
    .definition = &defAnt,
    .x = 64, .y = 3188,
    .animInd = 1, .flags = 2048,
    .group = &r4r5ants, .path = &r4r5ants_paths[0],
    .pathIndex = 23
},
{
    .definition = &defAnt,
    .x = 80, .y = 3184,
    .animInd = 1, .flags = 0,
    .group = &r4r5ants, .path = &r4r5ants_paths[0],
    .pathIndex = 22
},
{
    .definition = &defAnt,
    .x = 176, .y = 3184,
    .animInd = 1, .flags = 2048,
    .group = &r4r5ants, .path = &r4r5ants_paths[1],
    .pathIndex = 22
},
{
    .definition = &defAnt,
    .x = 164, .y = 3172,
    .animInd = 1, .flags = 2048,
    .group = &r4r5ants, .path = &r4r5ants_paths[1],
    .pathIndex = 21
},
{
    .definition = &defAnt,
    .x = 92, .y = 3172,
    .animInd = 1, .flags = 0,
    .group = &r4r5ants, .path = &r4r5ants_paths[0],
    .pathIndex = 21
},
{
    .definition = &defAnt,
    .x = 100, .y = 3156,
    .animInd = 1, .flags = 0,
    .group = &r4r5ants, .path = &r4r5ants_paths[0],
    .pathIndex = 20
},
{
    .definition = &defAnt,
    .x = 156, .y = 3156,
    .animInd = 1, .flags = 2048,
    .group = &r4r5ants, .path = &r4r5ants_paths[1],
    .pathIndex = 20
},
{
    .definition = &defAnt,
    .x = 92, .y = 3140,
    .animInd = 1, .flags = 32768,
    .group = &r4r5ants, .path = &r4r5ants_paths[0],
    .pathIndex = 19
},
{
    .definition = &defAnt,
    .x = 164, .y = 3140,
    .animInd = 1, .flags = 34816,
    .group = &r4r5ants, .path = &r4r5ants_paths[1],
    .pathIndex = 19
},
{
    .definition = &defAnt,
    .x = 80, .y = 3128,
    .animInd = 1, .flags = 32768,
    .group = &r4r5ants, .path = &r4r5ants_paths[0],
    .pathIndex = 18
},
{
    .definition = &defAnt,
    .x = 176, .y = 3128,
    .animInd = 1, .flags = 34816,
    .group = &r4r5ants, .path = &r4r5ants_paths[1],
    .pathIndex = 18
},
{
    .definition = &defAnt,
    .x = 192, .y = 3124,
    .animInd = 1, .flags = 34816,
    .group = &r4r5ants, .path = &r4r5ants_paths[1],
    .pathIndex = 17
},
{
    .definition = &defAnt,
    .x = 64, .y = 3124,
    .animInd = 1, .flags = 32768,
    .group = &r4r5ants, .path = &r4r5ants_paths[0],
    .pathIndex = 17
},
{
    .definition = &defAnt,
    .x = 48, .y = 3120,
    .animInd = 1, .flags = 34816,
    .group = &r4r5ants, .path = &r4r5ants_paths[0],
    .pathIndex = 16
},
{
    .definition = &defAnt,
    .x = 208, .y = 3120,
    .animInd = 1, .flags = 32768,
    .group = &r4r5ants, .path = &r4r5ants_paths[1],
    .pathIndex = 16
},
{
    .definition = &defAnt,
    .x = 36, .y = 3108,
    .animInd = 1, .flags = 34816,
    .group = &r4r5ants, .path = 0,
    .pathIndex = 0
},
{
    .definition = &defAnt,
    .x = 220, .y = 3108,
    .animInd = 1, .flags = 32768,
    .group = &r4r5ants, .path = 0,
    .pathIndex = 0
},
{
    .definition = &defAnt,
    .x = 228, .y = 3092,
    .animInd = 1, .flags = 32768,
    .group = &r4r5ants, .path = &r4r5ants_paths[1],
    .pathIndex = 15
},
{
    .definition = &defAnt,
    .x = 28, .y = 3092,
    .animInd = 1, .flags = 34816,
    .group = &r4r5ants, .path = &r4r5ants_paths[0],
    .pathIndex = 15
},
{
    .definition = &defAnt,
    .x = 220, .y = 3076,
    .animInd = 1, .flags = 0,
    .group = &r4r5ants, .path = &r4r5ants_paths[1],
    .pathIndex = 14
},
{
    .definition = &defAnt,
    .x = 36, .y = 3076,
    .animInd = 1, .flags = 2048,
    .group = &r4r5ants, .path = &r4r5ants_paths[0],
    .pathIndex = 14
},
{
    .definition = &defAnt,
    .x = 48, .y = 3064,
    .animInd = 1, .flags = 2048,
    .group = &r4r5ants, .path = &r4r5ants_paths[0],
    .pathIndex = 13
},
{
    .definition = &defAnt,
    .x = 208, .y = 3064,
    .animInd = 1, .flags = 0,
    .group = &r4r5ants, .path = &r4r5ants_paths[1],
    .pathIndex = 13
},
{
    .definition = &defAnt,
    .x = 192, .y = 3060,
    .animInd = 1, .flags = 0,
    .group = &r4r5ants, .path = &r4r5ants_paths[1],
    .pathIndex = 12
},
{
    .definition = &defAnt,
    .x = 64, .y = 3060,
    .animInd = 1, .flags = 2048,
    .group = &r4r5ants, .path = &r4r5ants_paths[0],
    .pathIndex = 12
},
{
    .definition = &defAnt,
    .x = 80, .y = 3056,
    .animInd = 1, .flags = 0,
    .group = &r4r5ants, .path = &r4r5ants_paths[0],
    .pathIndex = 11
},
{
    .definition = &defAnt,
    .x = 176, .y = 3056,
    .animInd = 1, .flags = 2048,
    .group = &r4r5ants, .path = &r4r5ants_paths[1],
    .pathIndex = 11
},
{
    .definition = &defAnt,
    .x = 164, .y = 3044,
    .animInd = 1, .flags = 2048,
    .group = &r4r5ants, .path = &r4r5ants_paths[1],
    .pathIndex = 10
},
{
    .definition = &defAnt,
    .x = 92, .y = 3044,
    .animInd = 1, .flags = 0,
    .group = &r4r5ants, .path = &r4r5ants_paths[0],
    .pathIndex = 10
},
{
    .definition = &defAnt,
    .x = 156, .y = 3028,
    .animInd = 1, .flags = 2048,
    .group = &r4r5ants, .path = &r4r5ants_paths[1],
    .pathIndex = 9
},
{
    .definition = &defAnt,
    .x = 100, .y = 3028,
    .animInd = 1, .flags = 0,
    .group = &r4r5ants, .path = &r4r5ants_paths[0],
    .pathIndex = 9
},
{
    .definition = &defAnt,
    .x = 92, .y = 3012,
    .animInd = 1, .flags = 32768,
    .group = &r4r5ants, .path = &r4r5ants_paths[0],
    .pathIndex = 8
},
{
    .definition = &defAnt,
    .x = 164, .y = 3012,
    .animInd = 1, .flags = 34816,
    .group = &r4r5ants, .path = &r4r5ants_paths[1],
    .pathIndex = 8
},
{
    .definition = &defAnt,
    .x = 80, .y = 3000,
    .animInd = 1, .flags = 32768,
    .group = &r4r5ants, .path = &r4r5ants_paths[0],
    .pathIndex = 7
},
{
    .definition = &defAnt,
    .x = 176, .y = 3000,
    .animInd = 1, .flags = 34816,
    .group = &r4r5ants, .path = &r4r5ants_paths[1],
    .pathIndex = 7
},
{
    .definition = &defAnt,
    .x = 64, .y = 2996,
    .animInd = 1, .flags = 32768,
    .group = &r4r5ants, .path = &r4r5ants_paths[0],
    .pathIndex = 6
},
{
    .definition = &defAnt,
    .x = 192, .y = 2996,
    .animInd = 1, .flags = 34816,
    .group = &r4r5ants, .path = &r4r5ants_paths[1],
    .pathIndex = 6
},
{
    .definition = &defAnt,
    .x = 48, .y = 2992,
    .animInd = 1, .flags = 34816,
    .group = &r4r5ants, .path = &r4r5ants_paths[0],
    .pathIndex = 5
},
{
    .definition = &defAnt,
    .x = 208, .y = 2992,
    .animInd = 1, .flags = 32768,
    .group = &r4r5ants, .path = &r4r5ants_paths[1],
    .pathIndex = 5
},
{
    .definition = &defAnt,
    .x = 36, .y = 2980,
    .animInd = 1, .flags = 34816,
    .group = &r4r5ants, .path = &r4r5ants_paths[0],
    .pathIndex = 4
},
{
    .definition = &defAnt,
    .x = 220, .y = 2980,
    .animInd = 1, .flags = 32768,
    .group = &r4r5ants, .path = &r4r5ants_paths[1],
    .pathIndex = 4
},
{
    .definition = &defAnt,
    .x = 228, .y = 2964,
    .animInd = 1, .flags = 32768,
    .group = &r4r5ants, .path = &r4r5ants_paths[1],
    .pathIndex = 3
},
{
    .definition = &defAnt,
    .x = 28, .y = 2964,
    .animInd = 1, .flags = 34816,
    .group = &r4r5ants, .path = &r4r5ants_paths[0],
    .pathIndex = 3
},
{
    .definition = &defAnt,
    .x = 220, .y = 2948,
    .animInd = 1, .flags = 32768,
    .group = &r4r5ants, .path = &r4r5ants_paths[1],
    .pathIndex = 2
},
{
    .definition = &defAnt,
    .x = 36, .y = 2948,
    .animInd = 1, .flags = 34816,
    .group = &r4r5ants, .path = &r4r5ants_paths[0],
    .pathIndex = 2
}
};
LevelObjectGroup r4r5ants = {
    .numPaths = 2, .paths = r4r5ants_paths,
    .numObjects = 60, .objects = r4r5ants_objects
};
extern LevelObjectGroup r4fly1;
static GObjPathPointFunction path2332_3_actions[] = {
PathPoint_SetSpeed
};
static GObjPathPointFunction path2332_5_actions[] = {
enterForeground
};
static GObjPathPointFunction path2332_6_actions[] = {
faceLeft
};
static GObjPathPointFunction path2332_9_actions[] = {
startShooting
};
static GObjPathPointFunction path2332_10_actions[] = {
startShooting
};
static GObjPathPointFunction path2332_11_actions[] = {
startShooting
};
static GObjPathPointFunction path2332_12_actions[] = {
startShooting
};
static GObjPathPointFunction path2332_13_actions[] = {
startShooting
};
static PathPoint path2332_points[] = {
{
    .x = 0, .y = 88,
    .speedTo = 256, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 48, .y = 48,
    .speedTo = 256, .distTo = 3998,
    .xVelTo = 196, .yVelTo = -164,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = 32,
    .speedTo = 256, .distTo = 2757,
    .xVelTo = 237, .yVelTo = -96,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 120, .y = 32,
    .speedTo = 256, .distTo = 2048,
    .xVelTo = 256, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2332_3_actions
},
{
    .x = 144, .y = 40,
    .speedTo = 128, .distTo = 1619,
    .xVelTo = 121, .yVelTo = 40,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 160, .y = 48,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = 114, .yVelTo = 57,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2332_5_actions
},
{
    .x = 168, .y = 64,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = 57, .yVelTo = 114,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2332_6_actions
},
{
    .x = 168, .y = 72,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = 128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 160, .y = 80,
    .speedTo = 128, .distTo = 724,
    .xVelTo = -91, .yVelTo = 90,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 144, .y = 88,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = -115, .yVelTo = 57,
    .shootCount = 3, .shootInterval = 2,
    .numActions = 1,
    .actions = path2332_9_actions
},
{
    .x = 112, .y = 96,
    .speedTo = 128, .distTo = 2111,
    .xVelTo = -125, .yVelTo = 31,
    .shootCount = 3, .shootInterval = 2,
    .numActions = 1,
    .actions = path2332_10_actions
},
{
    .x = 80, .y = 112,
    .speedTo = 128, .distTo = 2289,
    .xVelTo = -115, .yVelTo = 57,
    .shootCount = 3, .shootInterval = 2,
    .numActions = 1,
    .actions = path2332_11_actions
},
{
    .x = 56, .y = 136,
    .speedTo = 128, .distTo = 2172,
    .xVelTo = -91, .yVelTo = 90,
    .shootCount = 3, .shootInterval = 2,
    .numActions = 1,
    .actions = path2332_12_actions
},
{
    .x = 48, .y = 168,
    .speedTo = 128, .distTo = 2111,
    .xVelTo = -32, .yVelTo = 124,
    .shootCount = 3, .shootInterval = 2,
    .numActions = 1,
    .actions = path2332_13_actions
},
{
    .x = 40, .y = 224,
    .speedTo = 128, .distTo = 3620,
    .xVelTo = -19, .yVelTo = 126,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 56, .y = 264,
    .speedTo = 128, .distTo = 2757,
    .xVelTo = 47, .yVelTo = 118,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = 296,
    .speedTo = 128, .distTo = 2896,
    .xVelTo = 90, .yVelTo = 90,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 160, .y = 336,
    .speedTo = 128, .distTo = 5271,
    .xVelTo = 111, .yVelTo = 62,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path r4fly1_paths[] = {
{.x = -16, .y = 3144, .numPoints = 18, .points = path2332_points}
};
static LevelObject r4fly1_objects[] = {
{
    .definition = &defFly,
    .x = -16, .y = 3232,
    .animInd = 0, .flags = 0,
    .group = &r4fly1, .path = &r4fly1_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r4fly1 = {
    .numPaths = 1, .paths = r4fly1_paths,
    .numObjects = 1, .objects = r4fly1_objects
};
extern LevelObjectGroup room4powerup;
static LevelObject room4powerup_objects[] = {
{
    .definition = &defHoneyCell,
    .x = 192, .y = 3184,
    .animInd = 0, .flags = 32768,
    .group = &room4powerup, .path = 0,
    .pathIndex = 0
}
};
LevelObjectGroup room4powerup = {
    .numPaths = 0, .paths = 0,
    .numObjects = 1, .objects = room4powerup_objects
};
extern LevelObjectGroup room5fly1;
static GObjPathPointFunction path2342_3_actions[] = {
PathPoint_SetSpeed
};
static GObjPathPointFunction path2342_5_actions[] = {
faceRight
};
static GObjPathPointFunction path2342_6_actions[] = {
enterForeground
};
static GObjPathPointFunction path2342_7_actions[] = {
startShooting
};
static GObjPathPointFunction path2342_8_actions[] = {
startShooting
};
static GObjPathPointFunction path2342_9_actions[] = {
startShooting
};
static GObjPathPointFunction path2342_10_actions[] = {
startShooting
};
static GObjPathPointFunction path2342_11_actions[] = {
startShooting
};
static PathPoint path2342_points[] = {
{
    .x = 0, .y = 88,
    .speedTo = 256, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = 72,
    .speedTo = 256, .distTo = 2289,
    .xVelTo = -229, .yVelTo = -115,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -80, .y = 64,
    .speedTo = 256, .distTo = 3114,
    .xVelTo = -253, .yVelTo = -43,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -120, .y = 56,
    .speedTo = 256, .distTo = 2610,
    .xVelTo = -252, .yVelTo = -51,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2342_3_actions
},
{
    .x = -160, .y = 32,
    .speedTo = 128, .distTo = 2985,
    .xVelTo = -110, .yVelTo = -66,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -168, .y = 16,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = -58, .yVelTo = -115,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2342_5_actions
},
{
    .x = -160, .y = -8,
    .speedTo = 128, .distTo = 1619,
    .xVelTo = 40, .yVelTo = -122,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2342_6_actions
},
{
    .x = -136, .y = -16,
    .speedTo = 128, .distTo = 1619,
    .xVelTo = 121, .yVelTo = -41,
    .shootCount = 3, .shootInterval = 2,
    .numActions = 1,
    .actions = path2342_7_actions
},
{
    .x = -104, .y = -8,
    .speedTo = 128, .distTo = 2111,
    .xVelTo = 124, .yVelTo = 31,
    .shootCount = 3, .shootInterval = 2,
    .numActions = 1,
    .actions = path2342_8_actions
},
{
    .x = -72, .y = 8,
    .speedTo = 128, .distTo = 2289,
    .xVelTo = 114, .yVelTo = 57,
    .shootCount = 3, .shootInterval = 2,
    .numActions = 1,
    .actions = path2342_9_actions
},
{
    .x = -48, .y = 32,
    .speedTo = 128, .distTo = 2172,
    .xVelTo = 90, .yVelTo = 90,
    .shootCount = 3, .shootInterval = 2,
    .numActions = 1,
    .actions = path2342_10_actions
},
{
    .x = -40, .y = 64,
    .speedTo = 128, .distTo = 2111,
    .xVelTo = 31, .yVelTo = 124,
    .shootCount = 3, .shootInterval = 2,
    .numActions = 1,
    .actions = path2342_11_actions
},
{
    .x = -24, .y = 168,
    .speedTo = 128, .distTo = 6734,
    .xVelTo = 19, .yVelTo = 126,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = 208,
    .speedTo = 128, .distTo = 2610,
    .xVelTo = 25, .yVelTo = 125,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path room5fly1_paths[] = {
{.x = 272, .y = 3104, .numPoints = 14, .points = path2342_points}
};
static LevelObject room5fly1_objects[] = {
{
    .definition = &defFly,
    .x = 272, .y = 3192,
    .animInd = 0, .flags = 2048,
    .group = &room5fly1, .path = &room5fly1_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup room5fly1 = {
    .numPaths = 1, .paths = room5fly1_paths,
    .numObjects = 1, .objects = room5fly1_objects
};
extern LevelObjectGroup r5powerup;
static LevelObject r5powerup_objects[] = {
{
    .definition = &defHoneyCell,
    .x = 64, .y = 3056,
    .animInd = 0, .flags = 32768,
    .group = &r5powerup, .path = 0,
    .pathIndex = 0
}
};
LevelObjectGroup r5powerup = {
    .numPaths = 0, .paths = 0,
    .numObjects = 1, .objects = r5powerup_objects
};
extern LevelObjectGroup r6ants;
static GObjPathPointFunction path2389_19_actions[] = {
enterBackground
};
static GObjPathPointFunction path2389_20_actions[] = {
markDisappear
};
static PathPoint path2389_points[] = {
{
    .x = 8, .y = -16,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = -8,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = 128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 0,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = 128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 8,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = 128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 16,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = 128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 24,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = 128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 32,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = 128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 40,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = 128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 48,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = 128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 56,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = 128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 64,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = 128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 72,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = 128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 80,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = 128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 88,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = 128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 96,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = 128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 104,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = 128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 112,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = 128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 120,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = 128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 128,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = 128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 144,
    .speedTo = 128, .distTo = 1024,
    .xVelTo = 0, .yVelTo = 128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2389_19_actions
},
{
    .x = -16, .y = 168,
    .speedTo = 128, .distTo = 2172,
    .xVelTo = -91, .yVelTo = 90,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2389_20_actions
}
};
static GObjPathPointFunction path3786_19_actions[] = {
enterBackground
};
static GObjPathPointFunction path3786_20_actions[] = {
markDisappear
};
static PathPoint path3786_points[] = {
{
    .x = -8, .y = -16,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = -8,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = 128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 0,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = 128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 8,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = 128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 16,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = 128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 24,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = 128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 32,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = 128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 40,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = 128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 48,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = 128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 56,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = 128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 64,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = 128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 72,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = 128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 80,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = 128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 88,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = 128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 96,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = 128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 104,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = 128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 112,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = 128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 120,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = 128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 128,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = 128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 144,
    .speedTo = 128, .distTo = 1024,
    .xVelTo = 0, .yVelTo = 128,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3786_19_actions
},
{
    .x = 16, .y = 168,
    .speedTo = 128, .distTo = 2172,
    .xVelTo = 90, .yVelTo = 90,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3786_20_actions
}
};
static Path r6ants_paths[] = {
{.x = 28, .y = 2736, .numPoints = 21, .points = path2389_points},
{.x = 228, .y = 2736, .numPoints = 21, .points = path3786_points}
};
static LevelObject r6ants_objects[] = {
{
    .definition = &defAnt,
    .x = 36, .y = 2864,
    .animInd = 1, .flags = 32768,
    .group = &r6ants, .path = &r6ants_paths[0],
    .pathIndex = 19
},
{
    .definition = &defAnt,
    .x = 220, .y = 2864,
    .animInd = 1, .flags = 34816,
    .group = &r6ants, .path = &r6ants_paths[1],
    .pathIndex = 19
},
{
    .definition = &defAnt,
    .x = 220, .y = 2856,
    .animInd = 1, .flags = 34816,
    .group = &r6ants, .path = &r6ants_paths[1],
    .pathIndex = 18
},
{
    .definition = &defAnt,
    .x = 36, .y = 2856,
    .animInd = 1, .flags = 32768,
    .group = &r6ants, .path = &r6ants_paths[0],
    .pathIndex = 18
},
{
    .definition = &defAnt,
    .x = 36, .y = 2848,
    .animInd = 1, .flags = 32768,
    .group = &r6ants, .path = &r6ants_paths[0],
    .pathIndex = 17
},
{
    .definition = &defAnt,
    .x = 220, .y = 2848,
    .animInd = 1, .flags = 34816,
    .group = &r6ants, .path = &r6ants_paths[1],
    .pathIndex = 17
},
{
    .definition = &defAnt,
    .x = 36, .y = 2840,
    .animInd = 1, .flags = 32768,
    .group = &r6ants, .path = &r6ants_paths[0],
    .pathIndex = 16
},
{
    .definition = &defAnt,
    .x = 220, .y = 2840,
    .animInd = 1, .flags = 34816,
    .group = &r6ants, .path = &r6ants_paths[1],
    .pathIndex = 16
},
{
    .definition = &defAnt,
    .x = 36, .y = 2832,
    .animInd = 1, .flags = 32768,
    .group = &r6ants, .path = &r6ants_paths[0],
    .pathIndex = 15
},
{
    .definition = &defAnt,
    .x = 220, .y = 2832,
    .animInd = 1, .flags = 34816,
    .group = &r6ants, .path = &r6ants_paths[1],
    .pathIndex = 15
},
{
    .definition = &defAnt,
    .x = 220, .y = 2824,
    .animInd = 1, .flags = 34816,
    .group = &r6ants, .path = &r6ants_paths[1],
    .pathIndex = 14
},
{
    .definition = &defAnt,
    .x = 36, .y = 2824,
    .animInd = 1, .flags = 32768,
    .group = &r6ants, .path = &r6ants_paths[0],
    .pathIndex = 14
},
{
    .definition = &defAnt,
    .x = 220, .y = 2816,
    .animInd = 1, .flags = 34816,
    .group = &r6ants, .path = &r6ants_paths[1],
    .pathIndex = 13
},
{
    .definition = &defAnt,
    .x = 36, .y = 2816,
    .animInd = 1, .flags = 32768,
    .group = &r6ants, .path = &r6ants_paths[0],
    .pathIndex = 13
},
{
    .definition = &defAnt,
    .x = 36, .y = 2808,
    .animInd = 1, .flags = 32768,
    .group = &r6ants, .path = &r6ants_paths[0],
    .pathIndex = 12
},
{
    .definition = &defAnt,
    .x = 220, .y = 2808,
    .animInd = 1, .flags = 34816,
    .group = &r6ants, .path = &r6ants_paths[1],
    .pathIndex = 12
},
{
    .definition = &defAnt,
    .x = 36, .y = 2800,
    .animInd = 1, .flags = 32768,
    .group = &r6ants, .path = &r6ants_paths[0],
    .pathIndex = 11
},
{
    .definition = &defAnt,
    .x = 220, .y = 2800,
    .animInd = 1, .flags = 34816,
    .group = &r6ants, .path = &r6ants_paths[1],
    .pathIndex = 11
},
{
    .definition = &defAnt,
    .x = 36, .y = 2792,
    .animInd = 1, .flags = 32768,
    .group = &r6ants, .path = &r6ants_paths[0],
    .pathIndex = 10
},
{
    .definition = &defAnt,
    .x = 220, .y = 2792,
    .animInd = 1, .flags = 34816,
    .group = &r6ants, .path = &r6ants_paths[1],
    .pathIndex = 10
},
{
    .definition = &defAnt,
    .x = 36, .y = 2784,
    .animInd = 1, .flags = 32768,
    .group = &r6ants, .path = &r6ants_paths[0],
    .pathIndex = 9
},
{
    .definition = &defAnt,
    .x = 220, .y = 2784,
    .animInd = 1, .flags = 34816,
    .group = &r6ants, .path = &r6ants_paths[1],
    .pathIndex = 9
},
{
    .definition = &defAnt,
    .x = 36, .y = 2776,
    .animInd = 1, .flags = 32768,
    .group = &r6ants, .path = &r6ants_paths[0],
    .pathIndex = 8
},
{
    .definition = &defAnt,
    .x = 220, .y = 2776,
    .animInd = 1, .flags = 34816,
    .group = &r6ants, .path = &r6ants_paths[1],
    .pathIndex = 8
},
{
    .definition = &defAnt,
    .x = 220, .y = 2768,
    .animInd = 1, .flags = 34816,
    .group = &r6ants, .path = &r6ants_paths[1],
    .pathIndex = 7
},
{
    .definition = &defAnt,
    .x = 36, .y = 2768,
    .animInd = 1, .flags = 32768,
    .group = &r6ants, .path = &r6ants_paths[0],
    .pathIndex = 7
},
{
    .definition = &defAnt,
    .x = 220, .y = 2760,
    .animInd = 1, .flags = 34816,
    .group = &r6ants, .path = &r6ants_paths[1],
    .pathIndex = 6
},
{
    .definition = &defAnt,
    .x = 36, .y = 2760,
    .animInd = 1, .flags = 32768,
    .group = &r6ants, .path = &r6ants_paths[0],
    .pathIndex = 6
},
{
    .definition = &defAnt,
    .x = 220, .y = 2752,
    .animInd = 1, .flags = 34816,
    .group = &r6ants, .path = &r6ants_paths[1],
    .pathIndex = 5
},
{
    .definition = &defAnt,
    .x = 36, .y = 2752,
    .animInd = 1, .flags = 32768,
    .group = &r6ants, .path = &r6ants_paths[0],
    .pathIndex = 5
},
{
    .definition = &defAnt,
    .x = 220, .y = 2744,
    .animInd = 1, .flags = 34816,
    .group = &r6ants, .path = &r6ants_paths[1],
    .pathIndex = 4
},
{
    .definition = &defAnt,
    .x = 36, .y = 2744,
    .animInd = 1, .flags = 32768,
    .group = &r6ants, .path = &r6ants_paths[0],
    .pathIndex = 4
},
{
    .definition = &defAnt,
    .x = 220, .y = 2736,
    .animInd = 1, .flags = 34816,
    .group = &r6ants, .path = &r6ants_paths[1],
    .pathIndex = 3
},
{
    .definition = &defAnt,
    .x = 36, .y = 2736,
    .animInd = 1, .flags = 32768,
    .group = &r6ants, .path = &r6ants_paths[0],
    .pathIndex = 3
},
{
    .definition = &defAnt,
    .x = 220, .y = 2728,
    .animInd = 1, .flags = 34816,
    .group = &r6ants, .path = &r6ants_paths[1],
    .pathIndex = 2
},
{
    .definition = &defAnt,
    .x = 36, .y = 2728,
    .animInd = 1, .flags = 32768,
    .group = &r6ants, .path = &r6ants_paths[0],
    .pathIndex = 2
}
};
LevelObjectGroup r6ants = {
    .numPaths = 2, .paths = r6ants_paths,
    .numObjects = 36, .objects = r6ants_objects
};
extern LevelObjectGroup room6fly;
static GObjPathPointFunction path2351_1_actions[] = {
startShooting,
faceRight,
enterForeground
};
static GObjPathPointFunction path2351_3_actions[] = {
startShooting
};
static GObjPathPointFunction path2351_5_actions[] = {
startShooting
};
static GObjPathPointFunction path2351_7_actions[] = {
startShooting
};
static GObjPathPointFunction path2351_10_actions[] = {
startShooting,
faceLeft
};
static GObjPathPointFunction path2351_13_actions[] = {
startShooting
};
static GObjPathPointFunction path2351_15_actions[] = {
startShooting
};
static GObjPathPointFunction path2351_17_actions[] = {
startShooting
};
static GObjPathPointFunction path2351_19_actions[] = {
startShooting
};
static PathPoint path2351_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 192, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -152, .y = 0,
    .speedTo = 192, .distTo = 9728,
    .xVelTo = -192, .yVelTo = 0,
    .shootCount = 3, .shootInterval = 1,
    .numActions = 3,
    .actions = path2351_1_actions
},
{
    .x = -176, .y = 8,
    .speedTo = 192, .distTo = 1619,
    .xVelTo = -183, .yVelTo = 60,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -200, .y = 24,
    .speedTo = 192, .distTo = 1846,
    .xVelTo = -160, .yVelTo = 106,
    .shootCount = 3, .shootInterval = 1,
    .numActions = 1,
    .actions = path2351_3_actions
},
{
    .x = -216, .y = 48,
    .speedTo = 192, .distTo = 1846,
    .xVelTo = -107, .yVelTo = 159,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -224, .y = 80,
    .speedTo = 192, .distTo = 2111,
    .xVelTo = -47, .yVelTo = 186,
    .shootCount = 3, .shootInterval = 1,
    .numActions = 1,
    .actions = path2351_5_actions
},
{
    .x = -216, .y = 112,
    .speedTo = 192, .distTo = 2111,
    .xVelTo = 46, .yVelTo = 186,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -200, .y = 136,
    .speedTo = 192, .distTo = 1846,
    .xVelTo = 106, .yVelTo = 159,
    .shootCount = 3, .shootInterval = 1,
    .numActions = 1,
    .actions = path2351_7_actions
},
{
    .x = -176, .y = 152,
    .speedTo = 192, .distTo = 1846,
    .xVelTo = 159, .yVelTo = 106,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -152, .y = 160,
    .speedTo = 192, .distTo = 1619,
    .xVelTo = 182, .yVelTo = 60,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -144, .y = 160,
    .speedTo = 192, .distTo = 512,
    .xVelTo = 192, .yVelTo = 0,
    .shootCount = 3, .shootInterval = 1,
    .numActions = 2,
    .actions = path2351_10_actions
},
{
    .x = -136, .y = 160,
    .speedTo = 192, .distTo = 512,
    .xVelTo = 192, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -112, .y = 152,
    .speedTo = 192, .distTo = 1619,
    .xVelTo = 182, .yVelTo = -61,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -88, .y = 136,
    .speedTo = 192, .distTo = 1846,
    .xVelTo = 159, .yVelTo = -107,
    .shootCount = 3, .shootInterval = 1,
    .numActions = 1,
    .actions = path2351_13_actions
},
{
    .x = -72, .y = 112,
    .speedTo = 192, .distTo = 1846,
    .xVelTo = 106, .yVelTo = -160,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -64, .y = 80,
    .speedTo = 192, .distTo = 2111,
    .xVelTo = 46, .yVelTo = -187,
    .shootCount = 3, .shootInterval = 1,
    .numActions = 1,
    .actions = path2351_15_actions
},
{
    .x = -72, .y = 48,
    .speedTo = 192, .distTo = 2111,
    .xVelTo = -47, .yVelTo = -187,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -88, .y = 24,
    .speedTo = 192, .distTo = 1846,
    .xVelTo = -107, .yVelTo = -160,
    .shootCount = 3, .shootInterval = 1,
    .numActions = 1,
    .actions = path2351_17_actions
},
{
    .x = -112, .y = 8,
    .speedTo = 192, .distTo = 1846,
    .xVelTo = -160, .yVelTo = -107,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -136, .y = 0,
    .speedTo = 192, .distTo = 1619,
    .xVelTo = -183, .yVelTo = -61,
    .shootCount = 3, .shootInterval = 1,
    .numActions = 1,
    .actions = path2351_19_actions
},
{
    .x = -288, .y = 0,
    .speedTo = 192, .distTo = 9728,
    .xVelTo = -192, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path room6fly_paths[] = {
{.x = 272, .y = 2832, .numPoints = 21, .points = path2351_points}
};
static LevelObject room6fly_objects[] = {
{
    .definition = &defFly,
    .x = 272, .y = 2832,
    .animInd = 0, .flags = 2048,
    .group = &room6fly, .path = &room6fly_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup room6fly = {
    .numPaths = 1, .paths = room6fly_paths,
    .numObjects = 1, .objects = room6fly_objects
};
extern LevelObjectGroup room5bigant;
static LevelObject room5bigant_objects[] = {
{
    .definition = &defAntBig,
    .x = 64, .y = 2928,
    .animInd = 0, .flags = 32768,
    .group = &room5bigant, .path = 0,
    .pathIndex = 0
},
{
    .definition = &defAntBig,
    .x = 192, .y = 2928,
    .animInd = 0, .flags = 34816,
    .group = &room5bigant, .path = 0,
    .pathIndex = 0
}
};
LevelObjectGroup room5bigant = {
    .numPaths = 0, .paths = 0,
    .numObjects = 2, .objects = room5bigant_objects
};
extern LevelObjectGroup room6bigant;
static LevelObject room6bigant_objects[] = {
{
    .definition = &defAntBig,
    .x = 216, .y = 2704,
    .animInd = 1, .flags = 38912,
    .group = &room6bigant, .path = 0,
    .pathIndex = 0
},
{
    .definition = &defAntBig,
    .x = 40, .y = 2704,
    .animInd = 1, .flags = 36864,
    .group = &room6bigant, .path = 0,
    .pathIndex = 0
}
};
LevelObjectGroup room6bigant = {
    .numPaths = 0, .paths = 0,
    .numObjects = 2, .objects = room6bigant_objects
};
extern LevelObjectGroup room7alien1;
static GObjPathPointFunction path2397_2_actions[] = {
0 /* to be assigned */
};
static PathPoint path2397_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 16,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = 28, .yVelTo = 57,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 16, .y = 40,
    .speedTo = 64, .distTo = 1619,
    .xVelTo = 20, .yVelTo = 60,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2397_2_actions
}
};
static Path room7alien1_paths[] = {
{.x = 112, .y = 2496, .numPoints = 3, .points = path2397_points}
};
static LevelObject room7alien1_objects[] = {
{
    .definition = &defAlienGunner,
    .x = 112, .y = 2496,
    .animInd = 0, .flags = 32768,
    .group = &room7alien1, .path = &room7alien1_paths[0],
    .pathIndex = 1
},
{
    .definition = &defHoneyPot,
    .x = 128, .y = 2472,
    .animInd = 0, .flags = 32768,
    .group = &room7alien1, .path = 0,
    .pathIndex = 0
}
};
LevelObjectGroup room7alien1 = {
    .numPaths = 1, .paths = room7alien1_paths,
    .numObjects = 2, .objects = room7alien1_objects
};
extern LevelObjectGroup room7alien2;
static GObjPathPointFunction path2403_2_actions[] = {
0 /* to be assigned */
};
static PathPoint path2403_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 16,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = 28, .yVelTo = 57,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 16, .y = 40,
    .speedTo = 64, .distTo = 1619,
    .xVelTo = 20, .yVelTo = 60,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2403_2_actions
}
};
static GObjPathPointFunction path2404_2_actions[] = {
0 /* to be assigned */
};
static PathPoint path2404_points[] = {
{
    .x = 32, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 24, .y = 16,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = -29, .yVelTo = 57,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 16, .y = 40,
    .speedTo = 64, .distTo = 1619,
    .xVelTo = -21, .yVelTo = 60,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2404_2_actions
}
};
static Path room7alien2_paths[] = {
{.x = 48, .y = 2440, .numPoints = 3, .points = path2403_points},
{.x = 176, .y = 2440, .numPoints = 3, .points = path2404_points}
};
static LevelObject room7alien2_objects[] = {
{
    .definition = &defAlienGunner,
    .x = 48, .y = 2440,
    .animInd = 0, .flags = 32768,
    .group = &room7alien2, .path = &room7alien2_paths[0],
    .pathIndex = 1
},
{
    .definition = &defAlienGunner,
    .x = 208, .y = 2440,
    .animInd = 0, .flags = 34816,
    .group = &room7alien2, .path = &room7alien2_paths[1],
    .pathIndex = 1
}
};
LevelObjectGroup room7alien2 = {
    .numPaths = 2, .paths = room7alien2_paths,
    .numObjects = 2, .objects = room7alien2_objects
};
extern LevelObjectGroup room7alien3;
static GObjPathPointFunction path2414_3_actions[] = {
0 /* to be assigned */
};
static PathPoint path2414_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 72, .y = -64,
    .speedTo = 64, .distTo = 6165,
    .xVelTo = 47, .yVelTo = -43,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 104, .y = -64,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 120, .y = -48,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = 45, .yVelTo = 45,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2414_3_actions
}
};
static GObjPathPointFunction path2415_3_actions[] = {
0 /* to be assigned */
};
static PathPoint path2415_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 72, .y = -64,
    .speedTo = 64, .distTo = 6165,
    .xVelTo = 47, .yVelTo = -43,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 104, .y = -64,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 120, .y = -48,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = 45, .yVelTo = 45,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2415_3_actions
}
};
static GObjPathPointFunction path2416_3_actions[] = {
0 /* to be assigned */
};
static PathPoint path2416_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 72, .y = -64,
    .speedTo = 64, .distTo = 6165,
    .xVelTo = 47, .yVelTo = -43,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 104, .y = -64,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 120, .y = -48,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = 45, .yVelTo = 45,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2416_3_actions
}
};
static GObjPathPointFunction path2417_3_actions[] = {
0 /* to be assigned */
};
static PathPoint path2417_points[] = {
{
    .x = 240, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 168, .y = -64,
    .speedTo = 64, .distTo = 6165,
    .xVelTo = -48, .yVelTo = -43,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 136, .y = -64,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = -64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 120, .y = -48,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = -46, .yVelTo = 45,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2417_3_actions
}
};
static GObjPathPointFunction path2418_3_actions[] = {
0 /* to be assigned */
};
static PathPoint path2418_points[] = {
{
    .x = 240, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 168, .y = -64,
    .speedTo = 64, .distTo = 6165,
    .xVelTo = -48, .yVelTo = -43,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 136, .y = -64,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = -64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 120, .y = -48,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = -46, .yVelTo = 45,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2418_3_actions
}
};
static GObjPathPointFunction path2419_3_actions[] = {
0 /* to be assigned */
};
static PathPoint path2419_points[] = {
{
    .x = 240, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 168, .y = -64,
    .speedTo = 64, .distTo = 6165,
    .xVelTo = -48, .yVelTo = -43,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 136, .y = -64,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = -64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 120, .y = -48,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = -46, .yVelTo = 45,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2419_3_actions
}
};
static Path room7alien3_paths[] = {
{.x = -24, .y = 2528, .numPoints = 4, .points = path2414_points},
{.x = -16, .y = 2512, .numPoints = 4, .points = path2415_points},
{.x = -8, .y = 2496, .numPoints = 4, .points = path2416_points},
{.x = 24, .y = 2496, .numPoints = 4, .points = path2417_points},
{.x = 32, .y = 2512, .numPoints = 4, .points = path2418_points},
{.x = 40, .y = 2528, .numPoints = 4, .points = path2419_points}
};
static LevelObject room7alien3_objects[] = {
{
    .definition = &defAlienPillager,
    .x = 280, .y = 2528,
    .animInd = 0, .flags = 34816,
    .group = &room7alien3, .path = &room7alien3_paths[5],
    .pathIndex = 1
},
{
    .definition = &defAlienPillager,
    .x = -24, .y = 2528,
    .animInd = 0, .flags = 32768,
    .group = &room7alien3, .path = &room7alien3_paths[0],
    .pathIndex = 1
},
{
    .definition = &defAlienPillager,
    .x = 272, .y = 2512,
    .animInd = 0, .flags = 34816,
    .group = &room7alien3, .path = &room7alien3_paths[4],
    .pathIndex = 1
},
{
    .definition = &defAlienPillager,
    .x = -16, .y = 2512,
    .animInd = 0, .flags = 32768,
    .group = &room7alien3, .path = &room7alien3_paths[1],
    .pathIndex = 1
},
{
    .definition = &defAlienPillager,
    .x = 264, .y = 2496,
    .animInd = 0, .flags = 34816,
    .group = &room7alien3, .path = &room7alien3_paths[3],
    .pathIndex = 1
},
{
    .definition = &defAlienPillager,
    .x = -8, .y = 2496,
    .animInd = 0, .flags = 32768,
    .group = &room7alien3, .path = &room7alien3_paths[2],
    .pathIndex = 1
}
};
LevelObjectGroup room7alien3 = {
    .numPaths = 6, .paths = room7alien3_paths,
    .numObjects = 6, .objects = room7alien3_objects
};
extern LevelObjectGroup room8alien1;
static LevelObject room8alien1_objects[] = {
{
    .definition = &defAlienPillager,
    .x = 120, .y = 2368,
    .animInd = 0, .flags = 32768,
    .group = &room8alien1, .path = 0,
    .pathIndex = 0
},
{
    .definition = &defAlienPillager,
    .x = 144, .y = 2360,
    .animInd = 0, .flags = 34816,
    .group = &room8alien1, .path = 0,
    .pathIndex = 0
},
{
    .definition = &defAlienPillager,
    .x = 104, .y = 2352,
    .animInd = 0, .flags = 32768,
    .group = &room8alien1, .path = 0,
    .pathIndex = 0
},
{
    .definition = &defAlienPillager,
    .x = 152, .y = 2344,
    .animInd = 0, .flags = 34816,
    .group = &room8alien1, .path = 0,
    .pathIndex = 0
},
{
    .definition = &defAlienPillager,
    .x = 112, .y = 2336,
    .animInd = 0, .flags = 32768,
    .group = &room8alien1, .path = 0,
    .pathIndex = 0
},
{
    .definition = &defAlienPillager,
    .x = 144, .y = 2336,
    .animInd = 0, .flags = 34816,
    .group = &room8alien1, .path = 0,
    .pathIndex = 0
},
{
    .definition = &defAlienPillager,
    .x = 160, .y = 2320,
    .animInd = 0, .flags = 34816,
    .group = &room8alien1, .path = 0,
    .pathIndex = 0
},
{
    .definition = &defAlienPillager,
    .x = 136, .y = 2320,
    .animInd = 0, .flags = 34816,
    .group = &room8alien1, .path = 0,
    .pathIndex = 0
},
{
    .definition = &defAlienPillager,
    .x = 96, .y = 2320,
    .animInd = 0, .flags = 32768,
    .group = &room8alien1, .path = 0,
    .pathIndex = 0
},
{
    .definition = &defAlienPillager,
    .x = 120, .y = 2312,
    .animInd = 0, .flags = 32768,
    .group = &room8alien1, .path = 0,
    .pathIndex = 0
},
{
    .definition = &defAlienPillager,
    .x = 168, .y = 2304,
    .animInd = 0, .flags = 34816,
    .group = &room8alien1, .path = 0,
    .pathIndex = 0
},
{
    .definition = &defAlienPillager,
    .x = 88, .y = 2304,
    .animInd = 0, .flags = 32768,
    .group = &room8alien1, .path = 0,
    .pathIndex = 0
}
};
LevelObjectGroup room8alien1 = {
    .numPaths = 0, .paths = 0,
    .numObjects = 12, .objects = room8alien1_objects
};
extern LevelObjectGroup room8alien2;
static GObjPathPointFunction path2442_1_actions[] = {
0 /* to be assigned */
};
static PathPoint path2442_points[] = {
{
    .x = -8, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 16,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2442_1_actions
},
{
    .x = -40, .y = 48,
    .speedTo = 64, .distTo = 2896,
    .xVelTo = -46, .yVelTo = 45,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -104, .y = 48,
    .speedTo = 64, .distTo = 4096,
    .xVelTo = -64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static GObjPathPointFunction path2443_1_actions[] = {
0 /* to be assigned */
};
static PathPoint path2443_points[] = {
{
    .x = 24, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 24, .y = 16,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2443_1_actions
},
{
    .x = 56, .y = 48,
    .speedTo = 64, .distTo = 2896,
    .xVelTo = 45, .yVelTo = 45,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 120, .y = 48,
    .speedTo = 64, .distTo = 4096,
    .xVelTo = 64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path room8alien2_paths[] = {
{.x = 88, .y = 2352, .numPoints = 4, .points = path2442_points},
{.x = 152, .y = 2352, .numPoints = 4, .points = path2443_points}
};
static LevelObject room8alien2_objects[] = {
{
    .definition = &defAlienGunner,
    .x = 80, .y = 2352,
    .animInd = 0, .flags = 32768,
    .group = &room8alien2, .path = &room8alien2_paths[0],
    .pathIndex = 1
},
{
    .definition = &defAlienGunner,
    .x = 176, .y = 2352,
    .animInd = 0, .flags = 34816,
    .group = &room8alien2, .path = &room8alien2_paths[1],
    .pathIndex = 1
}
};
LevelObjectGroup room8alien2 = {
    .numPaths = 2, .paths = room8alien2_paths,
    .numObjects = 2, .objects = room8alien2_objects
};
extern LevelObjectGroup room8alien3;
static GObjPathPointFunction path2448_1_actions[] = {
0 /* to be assigned */
};
static PathPoint path2448_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 64, .y = 0,
    .speedTo = 64, .distTo = 4096,
    .xVelTo = 64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2448_1_actions
},
{
    .x = 96, .y = -32,
    .speedTo = 64, .distTo = 2896,
    .xVelTo = 45, .yVelTo = -46,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 96, .y = -48,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 80, .y = -64,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = -46, .yVelTo = -46,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 80, .y = -88,
    .speedTo = 64, .distTo = 1536,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 96, .y = -104,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = 45, .yVelTo = -46,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 96, .y = -152,
    .speedTo = 64, .distTo = 3072,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 64, .y = -184,
    .speedTo = 64, .distTo = 2896,
    .xVelTo = -46, .yVelTo = -46,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 64, .y = -248,
    .speedTo = 64, .distTo = 4096,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 112, .y = -296,
    .speedTo = 64, .distTo = 4344,
    .xVelTo = 45, .yVelTo = -46,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static GObjPathPointFunction path2449_1_actions[] = {
0 /* to be assigned */
};
static PathPoint path2449_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -64, .y = 0,
    .speedTo = 64, .distTo = 4096,
    .xVelTo = -64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2449_1_actions
},
{
    .x = -96, .y = -32,
    .speedTo = 64, .distTo = 2896,
    .xVelTo = -46, .yVelTo = -46,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -96, .y = -48,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -80, .y = -64,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = 45, .yVelTo = -46,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -80, .y = -88,
    .speedTo = 64, .distTo = 1536,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -96, .y = -104,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = -46, .yVelTo = -46,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -96, .y = -152,
    .speedTo = 64, .distTo = 3072,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -64, .y = -184,
    .speedTo = 64, .distTo = 2896,
    .xVelTo = 45, .yVelTo = -46,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -64, .y = -248,
    .speedTo = 64, .distTo = 4096,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -120, .y = -296,
    .speedTo = 64, .distTo = 4720,
    .xVelTo = -49, .yVelTo = -42,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path room8alien3_paths[] = {
{.x = -16, .y = 2392, .numPoints = 11, .points = path2448_points},
{.x = 272, .y = 2392, .numPoints = 11, .points = path2449_points}
};
static LevelObject room8alien3_objects[] = {
{
    .definition = &defAlienGunner,
    .x = -16, .y = 2392,
    .animInd = 0, .flags = 32768,
    .group = &room8alien3, .path = &room8alien3_paths[0],
    .pathIndex = 1
},
{
    .definition = &defAlienGunner,
    .x = 272, .y = 2392,
    .animInd = 0, .flags = 34816,
    .group = &room8alien3, .path = &room8alien3_paths[1],
    .pathIndex = 1
}
};
LevelObjectGroup room8alien3 = {
    .numPaths = 2, .paths = room8alien3_paths,
    .numObjects = 2, .objects = room8alien3_objects
};
extern LevelObjectGroup room8alien4;
static GObjPathPointFunction path2457_1_actions[] = {
0 /* to be assigned */
};
static PathPoint path2457_points[] = {
{
    .x = -16, .y = 8,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 16, .y = 40,
    .speedTo = 64, .distTo = 2896,
    .xVelTo = 45, .yVelTo = 45,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2457_1_actions
}
};
static GObjPathPointFunction path2458_1_actions[] = {
0 /* to be assigned */
};
static PathPoint path2458_points[] = {
{
    .x = -16, .y = 8,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 16, .y = 40,
    .speedTo = 64, .distTo = 2896,
    .xVelTo = 45, .yVelTo = 45,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2458_1_actions
}
};
static GObjPathPointFunction path2459_1_actions[] = {
0 /* to be assigned */
};
static PathPoint path2459_points[] = {
{
    .x = 24, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = 40,
    .speedTo = 64, .distTo = 3620,
    .xVelTo = -46, .yVelTo = 45,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2459_1_actions
}
};
static GObjPathPointFunction path2460_1_actions[] = {
0 /* to be assigned */
};
static PathPoint path2460_points[] = {
{
    .x = 24, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = 40,
    .speedTo = 64, .distTo = 3620,
    .xVelTo = -46, .yVelTo = 45,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2460_1_actions
}
};
static Path room8alien4_paths[] = {
{.x = 96, .y = 2248, .numPoints = 2, .points = path2457_points},
{.x = 88, .y = 2232, .numPoints = 2, .points = path2458_points},
{.x = 160, .y = 2248, .numPoints = 2, .points = path2459_points},
{.x = 168, .y = 2232, .numPoints = 2, .points = path2460_points}
};
static LevelObject room8alien4_objects[] = {
{
    .definition = &defAlienGunner,
    .x = 80, .y = 2256,
    .animInd = 0, .flags = 32768,
    .group = &room8alien4, .path = &room8alien4_paths[0],
    .pathIndex = 1
},
{
    .definition = &defAlienGunner,
    .x = 184, .y = 2248,
    .animInd = 0, .flags = 34816,
    .group = &room8alien4, .path = &room8alien4_paths[2],
    .pathIndex = 1
},
{
    .definition = &defAlienGunner,
    .x = 72, .y = 2240,
    .animInd = 0, .flags = 32768,
    .group = &room8alien4, .path = &room8alien4_paths[1],
    .pathIndex = 1
},
{
    .definition = &defAlienGunner,
    .x = 192, .y = 2232,
    .animInd = 0, .flags = 34816,
    .group = &room8alien4, .path = &room8alien4_paths[3],
    .pathIndex = 1
}
};
LevelObjectGroup room8alien4 = {
    .numPaths = 4, .paths = room8alien4_paths,
    .numObjects = 4, .objects = room8alien4_objects
};
extern LevelObjectGroup room8powerup;
static LevelObject room8powerup_objects[] = {
{
    .definition = &defHoneyPot,
    .x = 120, .y = 2264,
    .animInd = 0, .flags = 32768,
    .group = &room8powerup, .path = 0,
    .pathIndex = 0
},
{
    .definition = &defHoneyPot,
    .x = 136, .y = 2256,
    .animInd = 0, .flags = 32768,
    .group = &room8powerup, .path = 0,
    .pathIndex = 0
}
};
LevelObjectGroup room8powerup = {
    .numPaths = 0, .paths = 0,
    .numObjects = 2, .objects = room8powerup_objects
};
extern LevelObjectGroup room9powerup;
static LevelObject room9powerup_objects[] = {
{
    .definition = &defHoneyPot,
    .x = 128, .y = 2176,
    .animInd = 0, .flags = 32768,
    .group = &room9powerup, .path = 0,
    .pathIndex = 0
},
{
    .definition = &defHoneyPot,
    .x = 144, .y = 2168,
    .animInd = 0, .flags = 32768,
    .group = &room9powerup, .path = 0,
    .pathIndex = 0
},
{
    .definition = &defHoneyPot,
    .x = 120, .y = 2160,
    .animInd = 0, .flags = 32768,
    .group = &room9powerup, .path = 0,
    .pathIndex = 0
}
};
LevelObjectGroup room9powerup = {
    .numPaths = 0, .paths = 0,
    .numObjects = 3, .objects = room9powerup_objects
};
extern LevelObjectGroup room9alienmind;
static PathPoint path2474_points[] = {
{
    .x = 0, .y = -56,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 24,
    .speedTo = 64, .distTo = 5120,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static PathPoint path2475_points[] = {
{
    .x = 24, .y = -56,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 16, .y = -56,
    .speedTo = 64, .distTo = 512,
    .xVelTo = -64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = -40,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = -29, .yVelTo = 57,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 8,
    .speedTo = 64, .distTo = 3114,
    .xVelTo = -11, .yVelTo = 63,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = 16,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = -58, .yVelTo = 28,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -40, .y = 40,
    .speedTo = 64, .distTo = 2172,
    .xVelTo = -46, .yVelTo = 45,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -48, .y = 72,
    .speedTo = 64, .distTo = 2111,
    .xVelTo = -16, .yVelTo = 62,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -48, .y = 112,
    .speedTo = 64, .distTo = 2560,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = 144,
    .speedTo = 64, .distTo = 2896,
    .xVelTo = 45, .yVelTo = 45,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = 160,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static PathPoint path2476_points[] = {
{
    .x = -24, .y = -56,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = -56,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = -40,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = 28, .yVelTo = 57,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 8,
    .speedTo = 64, .distTo = 3114,
    .xVelTo = 10, .yVelTo = 63,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 16, .y = 16,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = 57, .yVelTo = 28,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 40, .y = 40,
    .speedTo = 64, .distTo = 2172,
    .xVelTo = 45, .yVelTo = 45,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 48, .y = 72,
    .speedTo = 64, .distTo = 2111,
    .xVelTo = 15, .yVelTo = 62,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 48, .y = 128,
    .speedTo = 64, .distTo = 3584,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 16, .y = 160,
    .speedTo = 64, .distTo = 2896,
    .xVelTo = -46, .yVelTo = 45,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static GObjPathPointFunction path2477_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2477_4_actions[] = {
0 /* to be assigned */
};
static PathPoint path2477_points[] = {
{
    .x = 112, .y = -32,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2477_0_actions
},
{
    .x = 88, .y = -48,
    .speedTo = 64, .distTo = 1846,
    .xVelTo = -54, .yVelTo = -36,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 64, .y = -48,
    .speedTo = 64, .distTo = 1536,
    .xVelTo = -64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 48, .y = -24,
    .speedTo = 64, .distTo = 1846,
    .xVelTo = -36, .yVelTo = 53,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 48, .y = 0,
    .speedTo = 64, .distTo = 1536,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2477_4_actions
}
};
static GObjPathPointFunction path2478_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2478_4_actions[] = {
0 /* to be assigned */
};
static PathPoint path2478_points[] = {
{
    .x = -104, .y = -8,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2478_0_actions
},
{
    .x = -80, .y = -24,
    .speedTo = 64, .distTo = 1846,
    .xVelTo = 53, .yVelTo = -36,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -56, .y = -24,
    .speedTo = 64, .distTo = 1536,
    .xVelTo = 64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -40, .y = 0,
    .speedTo = 64, .distTo = 1846,
    .xVelTo = 35, .yVelTo = 53,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -40, .y = 24,
    .speedTo = 64, .distTo = 1536,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2478_4_actions
}
};
static GObjPathPointFunction path2479_5_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2479_7_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2479_8_actions[] = {
0 /* to be assigned */
};
static PathPoint path2479_points[] = {
{
    .x = 120, .y = -232,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 96, .y = -216,
    .speedTo = 64, .distTo = 1846,
    .xVelTo = -54, .yVelTo = 35,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 80, .y = -176,
    .speedTo = 64, .distTo = 2757,
    .xVelTo = -24, .yVelTo = 59,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 80, .y = -48,
    .speedTo = 64, .distTo = 8192,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 72, .y = -40,
    .speedTo = 64, .distTo = 724,
    .xVelTo = -46, .yVelTo = 45,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 56, .y = -32,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = -58, .yVelTo = 28,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2479_5_actions
},
{
    .x = 40, .y = -40,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = -58, .yVelTo = -29,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 32, .y = -64,
    .speedTo = 64, .distTo = 1619,
    .xVelTo = -21, .yVelTo = -61,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2479_7_actions
},
{
    .x = 32, .y = -112,
    .speedTo = 64, .distTo = 3072,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2479_8_actions
},
{
    .x = 32, .y = -48,
    .speedTo = 64, .distTo = 4096,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 24, .y = -24,
    .speedTo = 64, .distTo = 1619,
    .xVelTo = -21, .yVelTo = 60,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -16,
    .speedTo = 64, .distTo = 1619,
    .xVelTo = -61, .yVelTo = 20,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static GObjPathPointFunction path2480_5_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2480_7_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2480_8_actions[] = {
0 /* to be assigned */
};
static PathPoint path2480_points[] = {
{
    .x = -56, .y = -232,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = -216,
    .speedTo = 64, .distTo = 1846,
    .xVelTo = 53, .yVelTo = 35,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = -176,
    .speedTo = 64, .distTo = 2757,
    .xVelTo = 23, .yVelTo = 59,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = -48,
    .speedTo = 64, .distTo = 8192,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = -40,
    .speedTo = 64, .distTo = 724,
    .xVelTo = 45, .yVelTo = 45,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = -32,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = 57, .yVelTo = 28,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2480_5_actions
},
{
    .x = 24, .y = -40,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = 57, .yVelTo = -29,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 32, .y = -64,
    .speedTo = 64, .distTo = 1619,
    .xVelTo = 20, .yVelTo = -61,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2480_7_actions
},
{
    .x = 32, .y = -112,
    .speedTo = 64, .distTo = 3072,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2480_8_actions
},
{
    .x = 32, .y = -48,
    .speedTo = 64, .distTo = 4096,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 40, .y = -24,
    .speedTo = 64, .distTo = 1619,
    .xVelTo = 20, .yVelTo = 60,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 64, .y = -16,
    .speedTo = 64, .distTo = 1619,
    .xVelTo = 60, .yVelTo = 20,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path room9alienmind_paths[] = {
{.x = 128, .y = 2040, .numPoints = 2, .points = path2474_points},
{.x = 96, .y = 2096, .numPoints = 10, .points = path2475_points},
{.x = 160, .y = 2096, .numPoints = 9, .points = path2476_points},
{.x = -8, .y = 2072, .numPoints = 5, .points = path2477_points},
{.x = 256, .y = 2048, .numPoints = 5, .points = path2478_points},
{.x = -16, .y = 2256, .numPoints = 12, .points = path2479_points},
{.x = 208, .y = 2256, .numPoints = 12, .points = path2480_points}
};
static LevelObject room9alienmind_objects[] = {
{
    .definition = &defAlienMind,
    .x = 128, .y = 1984,
    .animInd = 0, .flags = 0,
    .group = &room9alienmind, .path = &room9alienmind_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup room9alienmind = {
    .numPaths = 7, .paths = room9alienmind_paths,
    .numObjects = 1, .objects = room9alienmind_objects
};
extern LevelObjectGroup part2;
LevelObjectGroup part2 = {
    .numPaths = 0, .paths = 0,
    .numObjects = 0, .objects = 0
};
extern LevelObjectGroup room10acidants;
static GObjPathPointFunction path2498_1_actions[] = {
climbUpToFloor
};
static PathPoint path2498_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 2560,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2498_1_actions
},
{
    .x = 0, .y = -56,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static GObjPathPointFunction path2499_1_actions[] = {
climbUpToFloor
};
static PathPoint path2499_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 2560,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2499_1_actions
},
{
    .x = 0, .y = -56,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static GObjPathPointFunction path2500_1_actions[] = {
climbUpToFloor
};
static PathPoint path2500_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 2560,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2500_1_actions
},
{
    .x = 0, .y = -56,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static GObjPathPointFunction path2501_1_actions[] = {
climbUpToFloor
};
static PathPoint path2501_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 2560,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2501_1_actions
},
{
    .x = 0, .y = -56,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static GObjPathPointFunction path2502_1_actions[] = {
climbUpToFloor
};
static PathPoint path2502_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 2560,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2502_1_actions
},
{
    .x = 0, .y = -56,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path room10acidants_paths[] = {
{.x = 152, .y = 1920, .numPoints = 3, .points = path2498_points},
{.x = 168, .y = 1928, .numPoints = 3, .points = path2499_points},
{.x = 184, .y = 1928, .numPoints = 3, .points = path2500_points},
{.x = 200, .y = 1920, .numPoints = 3, .points = path2501_points},
{.x = 216, .y = 1904, .numPoints = 3, .points = path2502_points}
};
static LevelObject room10acidants_objects[] = {
{
    .definition = &defAcidAnt,
    .x = 168, .y = 1928,
    .animInd = 1, .flags = 38912,
    .group = &room10acidants, .path = &room10acidants_paths[1],
    .pathIndex = 1
},
{
    .definition = &defAcidAnt,
    .x = 184, .y = 1928,
    .animInd = 1, .flags = 38912,
    .group = &room10acidants, .path = &room10acidants_paths[2],
    .pathIndex = 1
},
{
    .definition = &defAcidAnt,
    .x = 200, .y = 1920,
    .animInd = 1, .flags = 36864,
    .group = &room10acidants, .path = &room10acidants_paths[3],
    .pathIndex = 1
},
{
    .definition = &defAcidAnt,
    .x = 152, .y = 1920,
    .animInd = 1, .flags = 38912,
    .group = &room10acidants, .path = &room10acidants_paths[0],
    .pathIndex = 1
},
{
    .definition = &defAcidAnt,
    .x = 216, .y = 1904,
    .animInd = 1, .flags = 36864,
    .group = &room10acidants, .path = &room10acidants_paths[4],
    .pathIndex = 1
}
};
LevelObjectGroup room10acidants = {
    .numPaths = 5, .paths = room10acidants_paths,
    .numObjects = 5, .objects = room10acidants_objects
};
extern LevelObjectGroup room10acidants2;
static GObjPathPointFunction path2514_1_actions[] = {
climbUpToFloor
};
static PathPoint path2514_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 2560,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2514_1_actions
},
{
    .x = 0, .y = -56,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static GObjPathPointFunction path2515_1_actions[] = {
climbUpToFloor
};
static PathPoint path2515_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 2560,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2515_1_actions
},
{
    .x = 0, .y = -56,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static GObjPathPointFunction path2516_1_actions[] = {
climbUpToFloor
};
static PathPoint path2516_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 2560,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2516_1_actions
},
{
    .x = 0, .y = -56,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static GObjPathPointFunction path2517_1_actions[] = {
climbUpToFloor
};
static PathPoint path2517_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 2560,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2517_1_actions
},
{
    .x = 0, .y = -56,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static GObjPathPointFunction path2518_1_actions[] = {
climbUpToFloor
};
static PathPoint path2518_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 2560,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2518_1_actions
},
{
    .x = 0, .y = -56,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path room10acidants2_paths[] = {
{.x = 40, .y = 1888, .numPoints = 3, .points = path2514_points},
{.x = 56, .y = 1896, .numPoints = 3, .points = path2515_points},
{.x = 72, .y = 1904, .numPoints = 3, .points = path2516_points},
{.x = 88, .y = 1912, .numPoints = 3, .points = path2517_points},
{.x = 104, .y = 1904, .numPoints = 3, .points = path2518_points}
};
static LevelObject room10acidants2_objects[] = {
{
    .definition = &defAcidAnt,
    .x = 88, .y = 1912,
    .animInd = 1, .flags = 36864,
    .group = &room10acidants2, .path = &room10acidants2_paths[3],
    .pathIndex = 1
},
{
    .definition = &defAcidAnt,
    .x = 104, .y = 1904,
    .animInd = 1, .flags = 36864,
    .group = &room10acidants2, .path = &room10acidants2_paths[4],
    .pathIndex = 1
},
{
    .definition = &defAcidAnt,
    .x = 72, .y = 1904,
    .animInd = 1, .flags = 38912,
    .group = &room10acidants2, .path = &room10acidants2_paths[2],
    .pathIndex = 1
},
{
    .definition = &defAcidAnt,
    .x = 56, .y = 1896,
    .animInd = 1, .flags = 38912,
    .group = &room10acidants2, .path = &room10acidants2_paths[1],
    .pathIndex = 1
},
{
    .definition = &defAcidAnt,
    .x = 40, .y = 1888,
    .animInd = 1, .flags = 38912,
    .group = &room10acidants2, .path = &room10acidants2_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup room10acidants2 = {
    .numPaths = 5, .paths = room10acidants2_paths,
    .numObjects = 5, .objects = room10acidants2_objects
};
extern LevelObjectGroup r11acidants1a;
static GObjPathPointFunction path2526_1_actions[] = {
climbUpToFloor
};
static PathPoint path2526_points[] = {
{
    .x = -32, .y = 32,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = -8,
    .speedTo = 64, .distTo = 2560,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2526_1_actions
},
{
    .x = -32, .y = -24,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path r11acidants1a_paths[] = {
{.x = 264, .y = 1784, .numPoints = 3, .points = path2526_points}
};
static LevelObject r11acidants1a_objects[] = {
{
    .definition = &defAcidAnt,
    .x = 232, .y = 1816,
    .animInd = 1, .flags = 36864,
    .group = &r11acidants1a, .path = &r11acidants1a_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r11acidants1a = {
    .numPaths = 1, .paths = r11acidants1a_paths,
    .numObjects = 1, .objects = r11acidants1a_objects
};
extern LevelObjectGroup r11acidants1b;
static GObjPathPointFunction path2530_1_actions[] = {
climbUpToFloor
};
static PathPoint path2530_points[] = {
{
    .x = -32, .y = 32,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = -8,
    .speedTo = 64, .distTo = 2560,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2530_1_actions
},
{
    .x = -32, .y = -24,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path r11acidants1b_paths[] = {
{.x = 232, .y = 1784, .numPoints = 3, .points = path2530_points}
};
static LevelObject r11acidants1b_objects[] = {
{
    .definition = &defAcidAnt,
    .x = 200, .y = 1816,
    .animInd = 1, .flags = 38912,
    .group = &r11acidants1b, .path = &r11acidants1b_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r11acidants1b = {
    .numPaths = 1, .paths = r11acidants1b_paths,
    .numObjects = 1, .objects = r11acidants1b_objects
};
extern LevelObjectGroup r11acidants1c;
static GObjPathPointFunction path2534_1_actions[] = {
climbUpToFloor
};
static PathPoint path2534_points[] = {
{
    .x = -32, .y = 32,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = -8,
    .speedTo = 64, .distTo = 2560,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2534_1_actions
},
{
    .x = -32, .y = -24,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path r11acidants1c_paths[] = {
{.x = 200, .y = 1784, .numPoints = 3, .points = path2534_points}
};
static LevelObject r11acidants1c_objects[] = {
{
    .definition = &defAcidAnt,
    .x = 168, .y = 1816,
    .animInd = 1, .flags = 36864,
    .group = &r11acidants1c, .path = &r11acidants1c_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r11acidants1c = {
    .numPaths = 1, .paths = r11acidants1c_paths,
    .numObjects = 1, .objects = r11acidants1c_objects
};
extern LevelObjectGroup r11acidants1d;
static GObjPathPointFunction path2538_1_actions[] = {
climbUpToFloor
};
static PathPoint path2538_points[] = {
{
    .x = -32, .y = 32,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = -8,
    .speedTo = 64, .distTo = 2560,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2538_1_actions
},
{
    .x = -32, .y = -24,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path r11acidants1d_paths[] = {
{.x = 168, .y = 1784, .numPoints = 3, .points = path2538_points}
};
static LevelObject r11acidants1d_objects[] = {
{
    .definition = &defAcidAnt,
    .x = 136, .y = 1816,
    .animInd = 1, .flags = 38912,
    .group = &r11acidants1d, .path = &r11acidants1d_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r11acidants1d = {
    .numPaths = 1, .paths = r11acidants1d_paths,
    .numObjects = 1, .objects = r11acidants1d_objects
};
extern LevelObjectGroup r11acidants1e;
static GObjPathPointFunction path2542_1_actions[] = {
climbUpToFloor
};
static PathPoint path2542_points[] = {
{
    .x = -32, .y = 32,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = -8,
    .speedTo = 64, .distTo = 2560,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2542_1_actions
},
{
    .x = -32, .y = -24,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path r11acidants1e_paths[] = {
{.x = 152, .y = 1776, .numPoints = 3, .points = path2542_points}
};
static LevelObject r11acidants1e_objects[] = {
{
    .definition = &defAcidAnt,
    .x = 120, .y = 1808,
    .animInd = 1, .flags = 38912,
    .group = &r11acidants1e, .path = &r11acidants1e_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r11acidants1e = {
    .numPaths = 1, .paths = r11acidants1e_paths,
    .numObjects = 1, .objects = r11acidants1e_objects
};
extern LevelObjectGroup r11acidants1f;
static GObjPathPointFunction path2546_1_actions[] = {
climbUpToFloor
};
static PathPoint path2546_points[] = {
{
    .x = -32, .y = 32,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = -8,
    .speedTo = 64, .distTo = 2560,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2546_1_actions
},
{
    .x = -32, .y = -24,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path r11acidants1f_paths[] = {
{.x = 120, .y = 1768, .numPoints = 3, .points = path2546_points}
};
static LevelObject r11acidants1f_objects[] = {
{
    .definition = &defAcidAnt,
    .x = 88, .y = 1800,
    .animInd = 1, .flags = 38912,
    .group = &r11acidants1f, .path = &r11acidants1f_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r11acidants1f = {
    .numPaths = 1, .paths = r11acidants1f_paths,
    .numObjects = 1, .objects = r11acidants1f_objects
};
extern LevelObjectGroup r11acidants1g;
static GObjPathPointFunction path2550_1_actions[] = {
climbUpToFloor
};
static PathPoint path2550_points[] = {
{
    .x = -32, .y = 32,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = -8,
    .speedTo = 64, .distTo = 2560,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2550_1_actions
},
{
    .x = -32, .y = -24,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path r11acidants1g_paths[] = {
{.x = 88, .y = 1768, .numPoints = 3, .points = path2550_points}
};
static LevelObject r11acidants1g_objects[] = {
{
    .definition = &defAcidAnt,
    .x = 56, .y = 1800,
    .animInd = 1, .flags = 36864,
    .group = &r11acidants1g, .path = &r11acidants1g_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r11acidants1g = {
    .numPaths = 1, .paths = r11acidants1g_paths,
    .numObjects = 1, .objects = r11acidants1g_objects
};
extern LevelObjectGroup r11acidants1h;
static GObjPathPointFunction path2554_1_actions[] = {
climbUpToFloor
};
static PathPoint path2554_points[] = {
{
    .x = -32, .y = 32,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = -8,
    .speedTo = 64, .distTo = 2560,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2554_1_actions
},
{
    .x = -32, .y = -24,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path r11acidants1h_paths[] = {
{.x = 56, .y = 1768, .numPoints = 3, .points = path2554_points}
};
static LevelObject r11acidants1h_objects[] = {
{
    .definition = &defAcidAnt,
    .x = 24, .y = 1800,
    .animInd = 1, .flags = 38912,
    .group = &r11acidants1h, .path = &r11acidants1h_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r11acidants1h = {
    .numPaths = 1, .paths = r11acidants1h_paths,
    .numObjects = 1, .objects = r11acidants1h_objects
};
extern LevelObjectGroup room11acidants2a;
static GObjPathPointFunction path2567_0_actions[] = {
climbUpToFloor
};
static PathPoint path2567_points[] = {
{
    .x = 0, .y = 24,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2567_0_actions
},
{
    .x = -288, .y = -24,
    .speedTo = 64, .distTo = 18686,
    .xVelTo = -64, .yVelTo = -11,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path room11acidants2a_paths[] = {
{.x = 272, .y = 1616, .numPoints = 2, .points = path2567_points}
};
static LevelObject room11acidants2a_objects[] = {
{
    .definition = &defAcidAnt,
    .x = 272, .y = 1856,
    .animInd = 0, .flags = 2048,
    .group = &room11acidants2a, .path = 0,
    .pathIndex = 0
},
{
    .definition = &defAcidAnt,
    .x = 272, .y = 1832,
    .animInd = 0, .flags = 2048,
    .group = &room11acidants2a, .path = 0,
    .pathIndex = 0
},
{
    .definition = &defAcidAnt,
    .x = 272, .y = 1808,
    .animInd = 0, .flags = 2048,
    .group = &room11acidants2a, .path = 0,
    .pathIndex = 0
},
{
    .definition = &defAcidAnt,
    .x = 272, .y = 1784,
    .animInd = 0, .flags = 2048,
    .group = &room11acidants2a, .path = 0,
    .pathIndex = 0
},
{
    .definition = &defAcidAnt,
    .x = 272, .y = 1760,
    .animInd = 0, .flags = 2048,
    .group = &room11acidants2a, .path = 0,
    .pathIndex = 0
},
{
    .definition = &defAcidAnt,
    .x = 272, .y = 1736,
    .animInd = 0, .flags = 2048,
    .group = &room11acidants2a, .path = 0,
    .pathIndex = 0
},
{
    .definition = &defAcidAnt,
    .x = 272, .y = 1712,
    .animInd = 0, .flags = 2048,
    .group = &room11acidants2a, .path = 0,
    .pathIndex = 0
},
{
    .definition = &defAcidAnt,
    .x = 272, .y = 1688,
    .animInd = 0, .flags = 2048,
    .group = &room11acidants2a, .path = 0,
    .pathIndex = 0
},
{
    .definition = &defAcidAnt,
    .x = 272, .y = 1664,
    .animInd = 0, .flags = 2048,
    .group = &room11acidants2a, .path = 0,
    .pathIndex = 0
},
{
    .definition = &defAcidAnt,
    .x = 272, .y = 1640,
    .animInd = 0, .flags = 2048,
    .group = &room11acidants2a, .path = &room11acidants2a_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup room11acidants2a = {
    .numPaths = 1, .paths = room11acidants2a_paths,
    .numObjects = 10, .objects = room11acidants2a_objects
};
extern LevelObjectGroup room11acidants2b;
static GObjPathPointFunction path2580_0_actions[] = {
climbUpToFloor
};
static PathPoint path2580_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2580_0_actions
},
{
    .x = 288, .y = 48,
    .speedTo = 64, .distTo = 18686,
    .xVelTo = 63, .yVelTo = 10,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path room11acidants2b_paths[] = {
{.x = -16, .y = 1576, .numPoints = 2, .points = path2580_points}
};
static LevelObject room11acidants2b_objects[] = {
{
    .definition = &defAcidAnt,
    .x = -16, .y = 1792,
    .animInd = 0, .flags = 0,
    .group = &room11acidants2b, .path = 0,
    .pathIndex = 0
},
{
    .definition = &defAcidAnt,
    .x = -16, .y = 1768,
    .animInd = 0, .flags = 0,
    .group = &room11acidants2b, .path = 0,
    .pathIndex = 0
},
{
    .definition = &defAcidAnt,
    .x = -16, .y = 1744,
    .animInd = 0, .flags = 0,
    .group = &room11acidants2b, .path = 0,
    .pathIndex = 0
},
{
    .definition = &defAcidAnt,
    .x = -16, .y = 1720,
    .animInd = 0, .flags = 0,
    .group = &room11acidants2b, .path = 0,
    .pathIndex = 0
},
{
    .definition = &defAcidAnt,
    .x = -16, .y = 1696,
    .animInd = 0, .flags = 0,
    .group = &room11acidants2b, .path = 0,
    .pathIndex = 0
},
{
    .definition = &defAcidAnt,
    .x = -16, .y = 1672,
    .animInd = 0, .flags = 0,
    .group = &room11acidants2b, .path = 0,
    .pathIndex = 0
},
{
    .definition = &defAcidAnt,
    .x = -16, .y = 1648,
    .animInd = 0, .flags = 0,
    .group = &room11acidants2b, .path = 0,
    .pathIndex = 0
},
{
    .definition = &defAcidAnt,
    .x = -16, .y = 1624,
    .animInd = 0, .flags = 0,
    .group = &room11acidants2b, .path = 0,
    .pathIndex = 0
},
{
    .definition = &defAcidAnt,
    .x = -16, .y = 1600,
    .animInd = 0, .flags = 0,
    .group = &room11acidants2b, .path = 0,
    .pathIndex = 0
},
{
    .definition = &defAcidAnt,
    .x = -16, .y = 1576,
    .animInd = 0, .flags = 0,
    .group = &room11acidants2b, .path = &room11acidants2b_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup room11acidants2b = {
    .numPaths = 1, .paths = room11acidants2b_paths,
    .numObjects = 10, .objects = room11acidants2b_objects
};
extern LevelObjectGroup r11acidants3a;
static GObjPathPointFunction path2583_1_actions[] = {
climbUpToFloor
};
static PathPoint path2583_points[] = {
{
    .x = 0, .y = -16,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -24,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2583_1_actions
},
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 1536,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path r11acidants3a_paths[] = {
{.x = 248, .y = 1736, .numPoints = 3, .points = path2583_points}
};
static LevelObject r11acidants3a_objects[] = {
{
    .definition = &defAcidAnt,
    .x = 248, .y = 1720,
    .animInd = 1, .flags = 4096,
    .group = &r11acidants3a, .path = &r11acidants3a_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r11acidants3a = {
    .numPaths = 1, .paths = r11acidants3a_paths,
    .numObjects = 1, .objects = r11acidants3a_objects
};
extern LevelObjectGroup r11acidants3b;
static GObjPathPointFunction path2587_1_actions[] = {
climbUpToFloor
};
static PathPoint path2587_points[] = {
{
    .x = 0, .y = -16,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -24,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2587_1_actions
},
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 1536,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path r11acidants3b_paths[] = {
{.x = 224, .y = 1736, .numPoints = 3, .points = path2587_points}
};
static LevelObject r11acidants3b_objects[] = {
{
    .definition = &defAcidAnt,
    .x = 224, .y = 1720,
    .animInd = 1, .flags = 4096,
    .group = &r11acidants3b, .path = &r11acidants3b_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r11acidants3b = {
    .numPaths = 1, .paths = r11acidants3b_paths,
    .numObjects = 1, .objects = r11acidants3b_objects
};
extern LevelObjectGroup r11acidants3c;
static GObjPathPointFunction path2591_1_actions[] = {
climbUpToFloor
};
static PathPoint path2591_points[] = {
{
    .x = 0, .y = -16,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -24,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2591_1_actions
},
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 1536,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path r11acidants3c_paths[] = {
{.x = 200, .y = 1736, .numPoints = 3, .points = path2591_points}
};
static LevelObject r11acidants3c_objects[] = {
{
    .definition = &defAcidAnt,
    .x = 200, .y = 1720,
    .animInd = 1, .flags = 6144,
    .group = &r11acidants3c, .path = &r11acidants3c_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r11acidants3c = {
    .numPaths = 1, .paths = r11acidants3c_paths,
    .numObjects = 1, .objects = r11acidants3c_objects
};
extern LevelObjectGroup r11acidants3d;
static GObjPathPointFunction path2595_1_actions[] = {
climbUpToFloor
};
static PathPoint path2595_points[] = {
{
    .x = 0, .y = -16,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -24,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2595_1_actions
},
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 1536,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path r11acidants3d_paths[] = {
{.x = 176, .y = 1736, .numPoints = 3, .points = path2595_points}
};
static LevelObject r11acidants3d_objects[] = {
{
    .definition = &defAcidAnt,
    .x = 176, .y = 1720,
    .animInd = 1, .flags = 4096,
    .group = &r11acidants3d, .path = &r11acidants3d_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r11acidants3d = {
    .numPaths = 1, .paths = r11acidants3d_paths,
    .numObjects = 1, .objects = r11acidants3d_objects
};
extern LevelObjectGroup r11acidants3e;
static GObjPathPointFunction path2599_1_actions[] = {
climbUpToFloor
};
static PathPoint path2599_points[] = {
{
    .x = 0, .y = -16,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -24,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2599_1_actions
},
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 1536,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path r11acidants3e_paths[] = {
{.x = 152, .y = 1736, .numPoints = 3, .points = path2599_points}
};
static LevelObject r11acidants3e_objects[] = {
{
    .definition = &defAcidAnt,
    .x = 152, .y = 1720,
    .animInd = 1, .flags = 4096,
    .group = &r11acidants3e, .path = &r11acidants3e_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r11acidants3e = {
    .numPaths = 1, .paths = r11acidants3e_paths,
    .numObjects = 1, .objects = r11acidants3e_objects
};
extern LevelObjectGroup r11acidants3f;
static GObjPathPointFunction path2603_1_actions[] = {
climbUpToFloor
};
static PathPoint path2603_points[] = {
{
    .x = 0, .y = -16,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -24,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2603_1_actions
},
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 1536,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path r11acidants3f_paths[] = {
{.x = 128, .y = 1720, .numPoints = 3, .points = path2603_points}
};
static LevelObject r11acidants3f_objects[] = {
{
    .definition = &defAcidAnt,
    .x = 128, .y = 1704,
    .animInd = 1, .flags = 4096,
    .group = &r11acidants3f, .path = &r11acidants3f_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r11acidants3f = {
    .numPaths = 1, .paths = r11acidants3f_paths,
    .numObjects = 1, .objects = r11acidants3f_objects
};
extern LevelObjectGroup r11acidants3g;
static GObjPathPointFunction path2607_1_actions[] = {
climbUpToFloor
};
static PathPoint path2607_points[] = {
{
    .x = 0, .y = -16,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -24,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2607_1_actions
},
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 1536,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path r11acidants3g_paths[] = {
{.x = 104, .y = 1720, .numPoints = 3, .points = path2607_points}
};
static LevelObject r11acidants3g_objects[] = {
{
    .definition = &defAcidAnt,
    .x = 104, .y = 1704,
    .animInd = 1, .flags = 4096,
    .group = &r11acidants3g, .path = &r11acidants3g_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r11acidants3g = {
    .numPaths = 1, .paths = r11acidants3g_paths,
    .numObjects = 1, .objects = r11acidants3g_objects
};
extern LevelObjectGroup r11acidants3h;
static GObjPathPointFunction path2611_1_actions[] = {
climbUpToFloor
};
static PathPoint path2611_points[] = {
{
    .x = 0, .y = -16,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -24,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2611_1_actions
},
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 1536,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path r11acidants3h_paths[] = {
{.x = 80, .y = 1720, .numPoints = 3, .points = path2611_points}
};
static LevelObject r11acidants3h_objects[] = {
{
    .definition = &defAcidAnt,
    .x = 80, .y = 1704,
    .animInd = 1, .flags = 4096,
    .group = &r11acidants3h, .path = &r11acidants3h_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r11acidants3h = {
    .numPaths = 1, .paths = r11acidants3h_paths,
    .numObjects = 1, .objects = r11acidants3h_objects
};
extern LevelObjectGroup r11acidants3i;
static GObjPathPointFunction path2615_1_actions[] = {
climbUpToFloor
};
static PathPoint path2615_points[] = {
{
    .x = 0, .y = -16,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -24,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2615_1_actions
},
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 1536,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path r11acidants3i_paths[] = {
{.x = 56, .y = 1720, .numPoints = 3, .points = path2615_points}
};
static LevelObject r11acidants3i_objects[] = {
{
    .definition = &defAcidAnt,
    .x = 56, .y = 1704,
    .animInd = 1, .flags = 4096,
    .group = &r11acidants3i, .path = &r11acidants3i_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r11acidants3i = {
    .numPaths = 1, .paths = r11acidants3i_paths,
    .numObjects = 1, .objects = r11acidants3i_objects
};
extern LevelObjectGroup r11acidants3j;
static GObjPathPointFunction path2619_1_actions[] = {
climbUpToFloor
};
static PathPoint path2619_points[] = {
{
    .x = 0, .y = -16,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -24,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2619_1_actions
},
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 1536,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path r11acidants3j_paths[] = {
{.x = 32, .y = 1720, .numPoints = 3, .points = path2619_points}
};
static LevelObject r11acidants3j_objects[] = {
{
    .definition = &defAcidAnt,
    .x = 32, .y = 1704,
    .animInd = 1, .flags = 6144,
    .group = &r11acidants3j, .path = &r11acidants3j_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r11acidants3j = {
    .numPaths = 1, .paths = r11acidants3j_paths,
    .numObjects = 1, .objects = r11acidants3j_objects
};
extern LevelObjectGroup r11acidants3k;
static GObjPathPointFunction path2623_1_actions[] = {
climbUpToFloor
};
static PathPoint path2623_points[] = {
{
    .x = 0, .y = -16,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -24,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2623_1_actions
},
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 1536,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path r11acidants3k_paths[] = {
{.x = 8, .y = 1720, .numPoints = 3, .points = path2623_points}
};
static LevelObject r11acidants3k_objects[] = {
{
    .definition = &defAcidAnt,
    .x = 8, .y = 1704,
    .animInd = 1, .flags = 6144,
    .group = &r11acidants3k, .path = &r11acidants3k_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r11acidants3k = {
    .numPaths = 1, .paths = r11acidants3k_paths,
    .numObjects = 1, .objects = r11acidants3k_objects
};
extern LevelObjectGroup r11powerup;
static LevelObject r11powerup_objects[] = {
{
    .definition = &defHoneyPot,
    .x = 120, .y = 1656,
    .animInd = 0, .flags = 32768,
    .group = &r11powerup, .path = 0,
    .pathIndex = 0
}
};
LevelObjectGroup r11powerup = {
    .numPaths = 0, .paths = 0,
    .numObjects = 1, .objects = r11powerup_objects
};
extern LevelObjectGroup r12wasp1a;
static GObjPathPointFunction path2630_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2630_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2630_2_actions[] = {
startWaspAttack
};
static PathPoint path2630_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2630_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2630_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2630_2_actions
}
};
static Path r12wasp1a_paths[] = {
{.x = 96, .y = 1512, .numPoints = 3, .points = path2630_points}
};
static LevelObject r12wasp1a_objects[] = {
{
    .definition = &defWasp,
    .x = 96, .y = 1512,
    .animInd = 0, .flags = 0,
    .group = &r12wasp1a, .path = &r12wasp1a_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r12wasp1a = {
    .numPaths = 1, .paths = r12wasp1a_paths,
    .numObjects = 1, .objects = r12wasp1a_objects
};
extern LevelObjectGroup r12wasp1b;
static GObjPathPointFunction path2636_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2636_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2636_2_actions[] = {
startWaspAttack
};
static PathPoint path2636_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2636_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2636_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2636_2_actions
}
};
static Path r12wasp1b_paths[] = {
{.x = 128, .y = 1528, .numPoints = 3, .points = path2636_points}
};
static LevelObject r12wasp1b_objects[] = {
{
    .definition = &defWasp,
    .x = 128, .y = 1528,
    .animInd = 0, .flags = 0,
    .group = &r12wasp1b, .path = &r12wasp1b_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r12wasp1b = {
    .numPaths = 1, .paths = r12wasp1b_paths,
    .numObjects = 1, .objects = r12wasp1b_objects
};
extern LevelObjectGroup r12wasp1c;
static GObjPathPointFunction path2642_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2642_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2642_2_actions[] = {
startWaspAttack
};
static PathPoint path2642_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2642_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2642_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2642_2_actions
}
};
static Path r12wasp1c_paths[] = {
{.x = 160, .y = 1544, .numPoints = 3, .points = path2642_points}
};
static LevelObject r12wasp1c_objects[] = {
{
    .definition = &defWasp,
    .x = 160, .y = 1544,
    .animInd = 0, .flags = 0,
    .group = &r12wasp1c, .path = &r12wasp1c_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r12wasp1c = {
    .numPaths = 1, .paths = r12wasp1c_paths,
    .numObjects = 1, .objects = r12wasp1c_objects
};
extern LevelObjectGroup r12wasp2a;
static GObjPathPointFunction path2648_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2648_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2648_2_actions[] = {
startWaspAttack
};
static PathPoint path2648_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2648_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2648_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2648_2_actions
}
};
static Path r12wasp2a_paths[] = {
{.x = 80, .y = 1448, .numPoints = 3, .points = path2648_points}
};
static LevelObject r12wasp2a_objects[] = {
{
    .definition = &defWasp,
    .x = 80, .y = 1448,
    .animInd = 0, .flags = 0,
    .group = &r12wasp2a, .path = &r12wasp2a_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r12wasp2a = {
    .numPaths = 1, .paths = r12wasp2a_paths,
    .numObjects = 1, .objects = r12wasp2a_objects
};
extern LevelObjectGroup r12wasp2b;
static GObjPathPointFunction path2654_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2654_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2654_2_actions[] = {
startWaspAttack
};
static PathPoint path2654_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2654_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2654_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2654_2_actions
}
};
static Path r12wasp2b_paths[] = {
{.x = 56, .y = 1472, .numPoints = 3, .points = path2654_points}
};
static LevelObject r12wasp2b_objects[] = {
{
    .definition = &defWasp,
    .x = 56, .y = 1472,
    .animInd = 0, .flags = 0,
    .group = &r12wasp2b, .path = &r12wasp2b_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r12wasp2b = {
    .numPaths = 1, .paths = r12wasp2b_paths,
    .numObjects = 1, .objects = r12wasp2b_objects
};
extern LevelObjectGroup r12wasp2c;
static GObjPathPointFunction path2660_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2660_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2660_2_actions[] = {
startWaspAttack
};
static PathPoint path2660_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2660_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2660_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2660_2_actions
}
};
static Path r12wasp2c_paths[] = {
{.x = 32, .y = 1496, .numPoints = 3, .points = path2660_points}
};
static LevelObject r12wasp2c_objects[] = {
{
    .definition = &defWasp,
    .x = 32, .y = 1496,
    .animInd = 0, .flags = 0,
    .group = &r12wasp2c, .path = &r12wasp2c_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r12wasp2c = {
    .numPaths = 1, .paths = r12wasp2c_paths,
    .numObjects = 1, .objects = r12wasp2c_objects
};
extern LevelObjectGroup r12wasp3a;
static GObjPathPointFunction path2666_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2666_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2666_2_actions[] = {
startWaspAttack
};
static PathPoint path2666_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2666_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2666_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2666_2_actions
}
};
static Path r12wasp3a_paths[] = {
{.x = 176, .y = 1472, .numPoints = 3, .points = path2666_points}
};
static LevelObject r12wasp3a_objects[] = {
{
    .definition = &defWasp,
    .x = 176, .y = 1472,
    .animInd = 0, .flags = 0,
    .group = &r12wasp3a, .path = &r12wasp3a_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r12wasp3a = {
    .numPaths = 1, .paths = r12wasp3a_paths,
    .numObjects = 1, .objects = r12wasp3a_objects
};
extern LevelObjectGroup r12wasp3b;
static GObjPathPointFunction path2672_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2672_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2672_2_actions[] = {
startWaspAttack
};
static PathPoint path2672_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2672_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2672_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2672_2_actions
}
};
static Path r12wasp3b_paths[] = {
{.x = 200, .y = 1496, .numPoints = 3, .points = path2672_points}
};
static LevelObject r12wasp3b_objects[] = {
{
    .definition = &defWasp,
    .x = 200, .y = 1496,
    .animInd = 0, .flags = 0,
    .group = &r12wasp3b, .path = &r12wasp3b_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r12wasp3b = {
    .numPaths = 1, .paths = r12wasp3b_paths,
    .numObjects = 1, .objects = r12wasp3b_objects
};
extern LevelObjectGroup r12wasp3c;
static GObjPathPointFunction path2678_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2678_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2678_2_actions[] = {
startWaspAttack
};
static PathPoint path2678_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2678_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2678_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2678_2_actions
}
};
static Path r12wasp3c_paths[] = {
{.x = 224, .y = 1520, .numPoints = 3, .points = path2678_points}
};
static LevelObject r12wasp3c_objects[] = {
{
    .definition = &defWasp,
    .x = 224, .y = 1520,
    .animInd = 0, .flags = 0,
    .group = &r12wasp3c, .path = &r12wasp3c_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r12wasp3c = {
    .numPaths = 1, .paths = r12wasp3c_paths,
    .numObjects = 1, .objects = r12wasp3c_objects
};
extern LevelObjectGroup r12wasp4a;
static GObjPathPointFunction path2684_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2684_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2684_2_actions[] = {
startWaspAttack
};
static PathPoint path2684_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2684_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2684_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2684_2_actions
}
};
static Path r12wasp4a_paths[] = {
{.x = 48, .y = 1416, .numPoints = 3, .points = path2684_points}
};
static LevelObject r12wasp4a_objects[] = {
{
    .definition = &defWasp,
    .x = 48, .y = 1416,
    .animInd = 0, .flags = 0,
    .group = &r12wasp4a, .path = &r12wasp4a_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r12wasp4a = {
    .numPaths = 1, .paths = r12wasp4a_paths,
    .numObjects = 1, .objects = r12wasp4a_objects
};
extern LevelObjectGroup r12wasp4b;
static GObjPathPointFunction path2690_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2690_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2690_2_actions[] = {
startWaspAttack
};
static PathPoint path2690_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2690_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2690_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2690_2_actions
}
};
static Path r12wasp4b_paths[] = {
{.x = 208, .y = 1416, .numPoints = 3, .points = path2690_points}
};
static LevelObject r12wasp4b_objects[] = {
{
    .definition = &defWasp,
    .x = 208, .y = 1416,
    .animInd = 0, .flags = 0,
    .group = &r12wasp4b, .path = &r12wasp4b_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r12wasp4b = {
    .numPaths = 1, .paths = r12wasp4b_paths,
    .numObjects = 1, .objects = r12wasp4b_objects
};
extern LevelObjectGroup r12wasp4c;
static GObjPathPointFunction path2696_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2696_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2696_2_actions[] = {
startWaspAttack
};
static PathPoint path2696_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2696_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2696_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2696_2_actions
}
};
static Path r12wasp4c_paths[] = {
{.x = 32, .y = 1504, .numPoints = 3, .points = path2696_points}
};
static LevelObject r12wasp4c_objects[] = {
{
    .definition = &defWasp,
    .x = 32, .y = 1504,
    .animInd = 0, .flags = 0,
    .group = &r12wasp4c, .path = &r12wasp4c_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r12wasp4c = {
    .numPaths = 1, .paths = r12wasp4c_paths,
    .numObjects = 1, .objects = r12wasp4c_objects
};
extern LevelObjectGroup r12wasp4d;
static GObjPathPointFunction path2702_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2702_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2702_2_actions[] = {
startWaspAttack
};
static PathPoint path2702_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2702_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2702_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2702_2_actions
}
};
static Path r12wasp4d_paths[] = {
{.x = 224, .y = 1504, .numPoints = 3, .points = path2702_points}
};
static LevelObject r12wasp4d_objects[] = {
{
    .definition = &defWasp,
    .x = 224, .y = 1504,
    .animInd = 0, .flags = 0,
    .group = &r12wasp4d, .path = &r12wasp4d_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r12wasp4d = {
    .numPaths = 1, .paths = r12wasp4d_paths,
    .numObjects = 1, .objects = r12wasp4d_objects
};
extern LevelObjectGroup r12powerup;
static LevelObject r12powerup_objects[] = {
{
    .definition = &defReinforcedHoneyPot,
    .x = 128, .y = 1360,
    .animInd = 0, .flags = 32768,
    .group = &r12powerup, .path = 0,
    .pathIndex = 0
}
};
LevelObjectGroup r12powerup = {
    .numPaths = 0, .paths = 0,
    .numObjects = 1, .objects = r12powerup_objects
};
extern LevelObjectGroup r13acidants1;
static GObjPathPointFunction path2715_2_actions[] = {
markDisappear
};
static PathPoint path2715_points[] = {
{
    .x = 0, .y = 48,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 176,
    .speedTo = 64, .distTo = 8192,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 192,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2715_2_actions
}
};
static GObjPathPointFunction path2716_2_actions[] = {
markDisappear
};
static PathPoint path2716_points[] = {
{
    .x = 0, .y = 48,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 160,
    .speedTo = 64, .distTo = 7168,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 176,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2716_2_actions
}
};
static GObjPathPointFunction path2717_2_actions[] = {
markDisappear
};
static PathPoint path2717_points[] = {
{
    .x = 0, .y = 48,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 160,
    .speedTo = 64, .distTo = 7168,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 176,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2717_2_actions
}
};
static GObjPathPointFunction path2718_2_actions[] = {
markDisappear
};
static PathPoint path2718_points[] = {
{
    .x = 0, .y = 48,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 176,
    .speedTo = 64, .distTo = 8192,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 192,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2718_2_actions
}
};
static GObjPathPointFunction path2719_2_actions[] = {
markDisappear
};
static PathPoint path2719_points[] = {
{
    .x = 0, .y = 48,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 176,
    .speedTo = 64, .distTo = 8192,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 192,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2719_2_actions
}
};
static GObjPathPointFunction path2720_2_actions[] = {
markDisappear
};
static PathPoint path2720_points[] = {
{
    .x = 0, .y = 48,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 176,
    .speedTo = 64, .distTo = 8192,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 192,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2720_2_actions
}
};
static Path r13acidants1_paths[] = {
{.x = 232, .y = 1152, .numPoints = 3, .points = path2715_points},
{.x = 240, .y = 1168, .numPoints = 3, .points = path2716_points},
{.x = 16, .y = 1168, .numPoints = 3, .points = path2717_points},
{.x = 24, .y = 1152, .numPoints = 3, .points = path2718_points},
{.x = 248, .y = 1152, .numPoints = 3, .points = path2719_points},
{.x = 8, .y = 1152, .numPoints = 3, .points = path2720_points}
};
static LevelObject r13acidants1_objects[] = {
{
    .definition = &defAntHole,
    .x = 16, .y = 1216,
    .animInd = 0, .flags = 32768,
    .group = &r13acidants1, .path = &r13acidants1_paths[2],
    .pathIndex = 1
},
{
    .definition = &defAntHole,
    .x = 240, .y = 1216,
    .animInd = 0, .flags = 32768,
    .group = &r13acidants1, .path = &r13acidants1_paths[1],
    .pathIndex = 1
},
{
    .definition = &defAntHole,
    .x = 248, .y = 1200,
    .animInd = 0, .flags = 32768,
    .group = &r13acidants1, .path = &r13acidants1_paths[4],
    .pathIndex = 1
},
{
    .definition = &defAntHole,
    .x = 24, .y = 1200,
    .animInd = 0, .flags = 32768,
    .group = &r13acidants1, .path = &r13acidants1_paths[3],
    .pathIndex = 1
},
{
    .definition = &defAntHole,
    .x = 232, .y = 1200,
    .animInd = 0, .flags = 32768,
    .group = &r13acidants1, .path = &r13acidants1_paths[0],
    .pathIndex = 1
},
{
    .definition = &defAntHole,
    .x = 8, .y = 1200,
    .animInd = 0, .flags = 32768,
    .group = &r13acidants1, .path = &r13acidants1_paths[5],
    .pathIndex = 1
}
};
LevelObjectGroup r13acidants1 = {
    .numPaths = 6, .paths = r13acidants1_paths,
    .numObjects = 6, .objects = r13acidants1_objects
};
extern LevelObjectGroup r13beetle1;
static GObjPathPointFunction path2730_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2730_2_actions[] = {
BeetleShoot
};
static GObjPathPointFunction path2730_3_actions[] = {
PathPoint_Rotate
};
static GObjPathPointFunction path2730_4_actions[] = {
PathPoint_Rotate
};
static PathPoint path2730_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -16,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2730_1_actions
},
{
    .x = 0, .y = -24,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2730_2_actions
},
{
    .x = 0, .y = -144,
    .speedTo = 64, .distTo = 7680,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2730_3_actions
},
{
    .x = -16, .y = -160,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = -46, .yVelTo = -46,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2730_4_actions
},
{
    .x = -112, .y = -160,
    .speedTo = 64, .distTo = 6144,
    .xVelTo = -64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static GObjPathPointFunction path2731_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2731_2_actions[] = {
BeetleShoot
};
static GObjPathPointFunction path2731_3_actions[] = {
PathPoint_Rotate
};
static GObjPathPointFunction path2731_4_actions[] = {
PathPoint_Rotate
};
static PathPoint path2731_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -16,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2731_1_actions
},
{
    .x = 0, .y = -24,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2731_2_actions
},
{
    .x = 0, .y = -144,
    .speedTo = 64, .distTo = 7680,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2731_3_actions
},
{
    .x = 16, .y = -160,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = 45, .yVelTo = -46,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2731_4_actions
},
{
    .x = 112, .y = -160,
    .speedTo = 64, .distTo = 6144,
    .xVelTo = 64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path r13beetle1_paths[] = {
{.x = 56, .y = 1320, .numPoints = 6, .points = path2730_points},
{.x = 200, .y = 1320, .numPoints = 6, .points = path2731_points}
};
static LevelObject r13beetle1_objects[] = {
{
    .definition = &defBeetle,
    .x = 56, .y = 1320,
    .animInd = 1, .flags = 36864,
    .group = &r13beetle1, .path = &r13beetle1_paths[0],
    .pathIndex = 1
},
{
    .definition = &defBeetle,
    .x = 200, .y = 1320,
    .animInd = 1, .flags = 38912,
    .group = &r13beetle1, .path = &r13beetle1_paths[1],
    .pathIndex = 1
}
};
LevelObjectGroup r13beetle1 = {
    .numPaths = 2, .paths = r13beetle1_paths,
    .numObjects = 2, .objects = r13beetle1_objects
};
extern LevelObjectGroup r13fly1;
static GObjPathPointFunction path2742_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2742_3_actions[] = {
enterForeground,
0 /* to be assigned */,
PathPoint_SetSpeed
};
static GObjPathPointFunction path2742_4_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path2742_5_actions[] = {
startWaspAttack
};
static PathPoint path2742_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2742_0_actions
},
{
    .x = 56, .y = 0,
    .speedTo = 64, .distTo = 3584,
    .xVelTo = 64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 96, .y = -8,
    .speedTo = 64, .distTo = 2610,
    .xVelTo = 62, .yVelTo = -13,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 120, .y = -16,
    .speedTo = 64, .distTo = 1619,
    .xVelTo = 60, .yVelTo = -21,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 3,
    .actions = path2742_3_actions
},
{
    .x = 136, .y = -24,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = 57, .yVelTo = -29,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2742_4_actions
},
{
    .x = 152, .y = -40,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = 45, .yVelTo = -46,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2742_5_actions
}
};
static Path r13fly1_paths[] = {
{.x = 32, .y = 1264, .numPoints = 6, .points = path2742_points}
};
static LevelObject r13fly1_objects[] = {
{
    .definition = &defWaspShooter,
    .x = 32, .y = 1264,
    .animInd = 0, .flags = 0,
    .group = &r13fly1, .path = &r13fly1_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r13fly1 = {
    .numPaths = 1, .paths = r13fly1_paths,
    .numObjects = 1, .objects = r13fly1_objects
};
extern LevelObjectGroup r13fly2;
static GObjPathPointFunction path2751_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2751_2_actions[] = {
0 /* to be assigned */,
PathPoint_SetSpeed
};
static GObjPathPointFunction path2751_3_actions[] = {
enterForeground
};
static GObjPathPointFunction path2751_4_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path2751_5_actions[] = {
startWaspAttack
};
static PathPoint path2751_points[] = {
{
    .x = 24, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2751_0_actions
},
{
    .x = 56, .y = 0,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 96, .y = 8,
    .speedTo = 64, .distTo = 2610,
    .xVelTo = 62, .yVelTo = 12,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 2,
    .actions = path2751_2_actions
},
{
    .x = 120, .y = 16,
    .speedTo = 64, .distTo = 1619,
    .xVelTo = 60, .yVelTo = 20,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2751_3_actions
},
{
    .x = 136, .y = 24,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = 57, .yVelTo = 28,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2751_4_actions
},
{
    .x = 152, .y = 40,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = 45, .yVelTo = 45,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2751_5_actions
}
};
static Path r13fly2_paths[] = {
{.x = 24, .y = 1232, .numPoints = 6, .points = path2751_points}
};
static LevelObject r13fly2_objects[] = {
{
    .definition = &defWaspShooter,
    .x = 48, .y = 1232,
    .animInd = 0, .flags = 0,
    .group = &r13fly2, .path = &r13fly2_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r13fly2 = {
    .numPaths = 1, .paths = r13fly2_paths,
    .numObjects = 1, .objects = r13fly2_objects
};
extern LevelObjectGroup r13fly3;
static GObjPathPointFunction path2760_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2760_3_actions[] = {
enterForeground,
0 /* to be assigned */,
PathPoint_SetSpeed
};
static GObjPathPointFunction path2760_4_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path2760_5_actions[] = {
startWaspAttack
};
static PathPoint path2760_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2760_0_actions
},
{
    .x = -56, .y = 0,
    .speedTo = 64, .distTo = 3584,
    .xVelTo = -64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -96, .y = -8,
    .speedTo = 64, .distTo = 2610,
    .xVelTo = -63, .yVelTo = -13,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -120, .y = -16,
    .speedTo = 64, .distTo = 1619,
    .xVelTo = -61, .yVelTo = -21,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 3,
    .actions = path2760_3_actions
},
{
    .x = -136, .y = -24,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = -58, .yVelTo = -29,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2760_4_actions
},
{
    .x = -152, .y = -40,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = -46, .yVelTo = -46,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2760_5_actions
}
};
static Path r13fly3_paths[] = {
{.x = 224, .y = 1224, .numPoints = 6, .points = path2760_points}
};
static LevelObject r13fly3_objects[] = {
{
    .definition = &defWaspShooter,
    .x = 224, .y = 1224,
    .animInd = 0, .flags = 2048,
    .group = &r13fly3, .path = &r13fly3_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r13fly3 = {
    .numPaths = 1, .paths = r13fly3_paths,
    .numObjects = 1, .objects = r13fly3_objects
};
extern LevelObjectGroup r14fly4;
static GObjPathPointFunction path2769_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2769_2_actions[] = {
0 /* to be assigned */,
PathPoint_SetSpeed
};
static GObjPathPointFunction path2769_3_actions[] = {
enterForeground
};
static GObjPathPointFunction path2769_4_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path2769_5_actions[] = {
startWaspAttack
};
static PathPoint path2769_points[] = {
{
    .x = -24, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2769_0_actions
},
{
    .x = -56, .y = 0,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = -64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -96, .y = 8,
    .speedTo = 64, .distTo = 2610,
    .xVelTo = -63, .yVelTo = 12,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 2,
    .actions = path2769_2_actions
},
{
    .x = -120, .y = 16,
    .speedTo = 64, .distTo = 1619,
    .xVelTo = -61, .yVelTo = 20,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2769_3_actions
},
{
    .x = -136, .y = 24,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = -58, .yVelTo = 28,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2769_4_actions
},
{
    .x = -152, .y = 40,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = -46, .yVelTo = 45,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2769_5_actions
}
};
static Path r14fly4_paths[] = {
{.x = 232, .y = 1192, .numPoints = 6, .points = path2769_points}
};
static LevelObject r14fly4_objects[] = {
{
    .definition = &defWaspShooter,
    .x = 208, .y = 1192,
    .animInd = 0, .flags = 2048,
    .group = &r14fly4, .path = &r14fly4_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r14fly4 = {
    .numPaths = 1, .paths = r14fly4_paths,
    .numObjects = 1, .objects = r14fly4_objects
};
extern LevelObjectGroup r14beetles;
static GObjPathPointFunction path2779_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2779_2_actions[] = {
0 /* to be assigned */,
PathPoint_Rotate
};
static GObjPathPointFunction path2779_4_actions[] = {
PathPoint_Rotate,
faceRight,
0 /* to be assigned */
};
static GObjPathPointFunction path2779_5_actions[] = {
BeetleShoot
};
static GObjPathPointFunction path2779_6_actions[] = {
enterBackground
};
static GObjPathPointFunction path2779_7_actions[] = {
PathPoint_Rotate,
0 /* to be assigned */
};
static GObjPathPointFunction path2779_9_actions[] = {
faceLeft,
PathPoint_Rotate,
0 /* to be assigned */
};
static GObjPathPointFunction path2779_10_actions[] = {
enterForeground,
BeetleShoot
};
static GObjPathPointFunction path2779_12_actions[] = {
0 /* to be assigned */,
PathPoint_Rotate
};
static GObjPathPointFunction path2779_13_actions[] = {
PathPoint_Rotate,
faceRight,
0 /* to be assigned */
};
static GObjPathPointFunction path2779_14_actions[] = {
BeetleShoot
};
static GObjPathPointFunction path2779_15_actions[] = {
enterBackground
};
static GObjPathPointFunction path2779_16_actions[] = {
PathPoint_Rotate,
0 /* to be assigned */
};
static GObjPathPointFunction path2779_17_actions[] = {
faceLeft,
PathPoint_Rotate,
0 /* to be assigned */
};
static GObjPathPointFunction path2779_18_actions[] = {
enterForeground,
BeetleShoot
};
static GObjPathPointFunction path2779_20_actions[] = {
0 /* to be assigned */,
PathPoint_Rotate
};
static GObjPathPointFunction path2779_21_actions[] = {
PathPoint_Rotate,
faceRight,
0 /* to be assigned */
};
static GObjPathPointFunction path2779_22_actions[] = {
BeetleShoot
};
static GObjPathPointFunction path2779_23_actions[] = {
enterBackground
};
static GObjPathPointFunction path2779_24_actions[] = {
PathPoint_Rotate,
0 /* to be assigned */
};
static GObjPathPointFunction path2779_25_actions[] = {
faceLeft,
PathPoint_Rotate,
0 /* to be assigned */
};
static GObjPathPointFunction path2779_26_actions[] = {
enterForeground,
BeetleShoot
};
static GObjPathPointFunction path2779_28_actions[] = {
0 /* to be assigned */,
PathPoint_Rotate
};
static GObjPathPointFunction path2779_29_actions[] = {
PathPoint_Rotate,
faceRight,
0 /* to be assigned */
};
static GObjPathPointFunction path2779_30_actions[] = {
BeetleShoot
};
static GObjPathPointFunction path2779_31_actions[] = {
PathPoint_Rotate
};
static GObjPathPointFunction path2779_32_actions[] = {
PathPoint_Rotate
};
static PathPoint path2779_points[] = {
{
    .x = 64, .y = 240,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 64, .y = 224,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2779_1_actions
},
{
    .x = 40, .y = 208,
    .speedTo = 64, .distTo = 1846,
    .xVelTo = -54, .yVelTo = -36,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 2,
    .actions = path2779_2_actions
},
{
    .x = 32, .y = 208,
    .speedTo = 64, .distTo = 512,
    .xVelTo = -64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 24, .y = 208,
    .speedTo = 64, .distTo = 512,
    .xVelTo = -64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 3,
    .actions = path2779_4_actions
},
{
    .x = 0, .y = 192,
    .speedTo = 64, .distTo = 1846,
    .xVelTo = -54, .yVelTo = -36,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2779_5_actions
},
{
    .x = 0, .y = 176,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2779_6_actions
},
{
    .x = 24, .y = 160,
    .speedTo = 64, .distTo = 1846,
    .xVelTo = 53, .yVelTo = -36,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 2,
    .actions = path2779_7_actions
},
{
    .x = 32, .y = 160,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 40, .y = 160,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 3,
    .actions = path2779_9_actions
},
{
    .x = 64, .y = 144,
    .speedTo = 64, .distTo = 1846,
    .xVelTo = 53, .yVelTo = -36,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 2,
    .actions = path2779_10_actions
},
{
    .x = 64, .y = 128,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 40, .y = 112,
    .speedTo = 64, .distTo = 1846,
    .xVelTo = -54, .yVelTo = -36,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 2,
    .actions = path2779_12_actions
},
{
    .x = 24, .y = 112,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = -64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 3,
    .actions = path2779_13_actions
},
{
    .x = 0, .y = 96,
    .speedTo = 64, .distTo = 1846,
    .xVelTo = -54, .yVelTo = -36,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2779_14_actions
},
{
    .x = 0, .y = 80,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2779_15_actions
},
{
    .x = 24, .y = 64,
    .speedTo = 64, .distTo = 1846,
    .xVelTo = 53, .yVelTo = -36,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 2,
    .actions = path2779_16_actions
},
{
    .x = 40, .y = 64,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 3,
    .actions = path2779_17_actions
},
{
    .x = 64, .y = 48,
    .speedTo = 64, .distTo = 1846,
    .xVelTo = 53, .yVelTo = -36,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 2,
    .actions = path2779_18_actions
},
{
    .x = 64, .y = 32,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 40, .y = 16,
    .speedTo = 64, .distTo = 1846,
    .xVelTo = -54, .yVelTo = -36,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 2,
    .actions = path2779_20_actions
},
{
    .x = 24, .y = 16,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = -64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 3,
    .actions = path2779_21_actions
},
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 1846,
    .xVelTo = -54, .yVelTo = -36,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2779_22_actions
},
{
    .x = 0, .y = -16,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2779_23_actions
},
{
    .x = 24, .y = -32,
    .speedTo = 64, .distTo = 1846,
    .xVelTo = 53, .yVelTo = -36,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 2,
    .actions = path2779_24_actions
},
{
    .x = 40, .y = -32,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 3,
    .actions = path2779_25_actions
},
{
    .x = 64, .y = -48,
    .speedTo = 64, .distTo = 1846,
    .xVelTo = 53, .yVelTo = -36,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 2,
    .actions = path2779_26_actions
},
{
    .x = 64, .y = -64,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 40, .y = -80,
    .speedTo = 64, .distTo = 1846,
    .xVelTo = -54, .yVelTo = -36,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 2,
    .actions = path2779_28_actions
},
{
    .x = 24, .y = -80,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = -64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 3,
    .actions = path2779_29_actions
},
{
    .x = 0, .y = -96,
    .speedTo = 64, .distTo = 1846,
    .xVelTo = -54, .yVelTo = -36,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2779_30_actions
},
{
    .x = 0, .y = -112,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2779_31_actions
},
{
    .x = 16, .y = -128,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = 45, .yVelTo = -46,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2779_32_actions
},
{
    .x = 24, .y = -128,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static GObjPathPointFunction path2780_2_actions[] = {
0 /* to be assigned */,
PathPoint_Rotate
};
static GObjPathPointFunction path2780_4_actions[] = {
PathPoint_Rotate,
faceRight,
0 /* to be assigned */
};
static GObjPathPointFunction path2780_5_actions[] = {
enterForeground,
BeetleShoot
};
static GObjPathPointFunction path2780_7_actions[] = {
PathPoint_Rotate,
0 /* to be assigned */
};
static GObjPathPointFunction path2780_9_actions[] = {
faceLeft,
PathPoint_Rotate,
0 /* to be assigned */
};
static GObjPathPointFunction path2780_10_actions[] = {
BeetleShoot
};
static GObjPathPointFunction path2780_11_actions[] = {
enterBackground
};
static GObjPathPointFunction path2780_12_actions[] = {
0 /* to be assigned */,
PathPoint_Rotate
};
static GObjPathPointFunction path2780_13_actions[] = {
PathPoint_Rotate,
faceRight,
0 /* to be assigned */
};
static GObjPathPointFunction path2780_14_actions[] = {
enterForeground,
BeetleShoot
};
static GObjPathPointFunction path2780_16_actions[] = {
PathPoint_Rotate,
0 /* to be assigned */
};
static GObjPathPointFunction path2780_17_actions[] = {
faceLeft,
PathPoint_Rotate,
0 /* to be assigned */
};
static GObjPathPointFunction path2780_18_actions[] = {
BeetleShoot
};
static GObjPathPointFunction path2780_19_actions[] = {
enterBackground
};
static GObjPathPointFunction path2780_20_actions[] = {
0 /* to be assigned */,
PathPoint_Rotate
};
static GObjPathPointFunction path2780_21_actions[] = {
PathPoint_Rotate,
faceRight,
0 /* to be assigned */
};
static GObjPathPointFunction path2780_22_actions[] = {
enterForeground,
BeetleShoot
};
static GObjPathPointFunction path2780_24_actions[] = {
PathPoint_Rotate,
0 /* to be assigned */
};
static GObjPathPointFunction path2780_25_actions[] = {
faceLeft,
PathPoint_Rotate,
0 /* to be assigned */
};
static GObjPathPointFunction path2780_26_actions[] = {
BeetleShoot
};
static GObjPathPointFunction path2780_27_actions[] = {
enterBackground
};
static GObjPathPointFunction path2780_28_actions[] = {
0 /* to be assigned */,
PathPoint_Rotate
};
static GObjPathPointFunction path2780_29_actions[] = {
PathPoint_Rotate,
faceRight,
0 /* to be assigned */
};
static GObjPathPointFunction path2780_30_actions[] = {
enterForeground,
BeetleShoot
};
static GObjPathPointFunction path2780_31_actions[] = {
PathPoint_Rotate
};
static GObjPathPointFunction path2780_32_actions[] = {
PathPoint_Rotate
};
static PathPoint path2780_points[] = {
{
    .x = 64, .y = 240,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 64, .y = 224,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 40, .y = 208,
    .speedTo = 64, .distTo = 1846,
    .xVelTo = -54, .yVelTo = -36,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 2,
    .actions = path2780_2_actions
},
{
    .x = 32, .y = 208,
    .speedTo = 64, .distTo = 512,
    .xVelTo = -64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 24, .y = 208,
    .speedTo = 64, .distTo = 512,
    .xVelTo = -64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 3,
    .actions = path2780_4_actions
},
{
    .x = 0, .y = 192,
    .speedTo = 64, .distTo = 1846,
    .xVelTo = -54, .yVelTo = -36,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 2,
    .actions = path2780_5_actions
},
{
    .x = 0, .y = 176,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 24, .y = 160,
    .speedTo = 64, .distTo = 1846,
    .xVelTo = 53, .yVelTo = -36,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 2,
    .actions = path2780_7_actions
},
{
    .x = 32, .y = 160,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 40, .y = 160,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 3,
    .actions = path2780_9_actions
},
{
    .x = 64, .y = 144,
    .speedTo = 64, .distTo = 1846,
    .xVelTo = 53, .yVelTo = -36,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2780_10_actions
},
{
    .x = 64, .y = 128,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2780_11_actions
},
{
    .x = 40, .y = 112,
    .speedTo = 64, .distTo = 1846,
    .xVelTo = -54, .yVelTo = -36,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 2,
    .actions = path2780_12_actions
},
{
    .x = 24, .y = 112,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = -64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 3,
    .actions = path2780_13_actions
},
{
    .x = 0, .y = 96,
    .speedTo = 64, .distTo = 1846,
    .xVelTo = -54, .yVelTo = -36,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 2,
    .actions = path2780_14_actions
},
{
    .x = 0, .y = 80,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 24, .y = 64,
    .speedTo = 64, .distTo = 1846,
    .xVelTo = 53, .yVelTo = -36,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 2,
    .actions = path2780_16_actions
},
{
    .x = 40, .y = 64,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 3,
    .actions = path2780_17_actions
},
{
    .x = 64, .y = 48,
    .speedTo = 64, .distTo = 1846,
    .xVelTo = 53, .yVelTo = -36,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2780_18_actions
},
{
    .x = 64, .y = 32,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2780_19_actions
},
{
    .x = 40, .y = 16,
    .speedTo = 64, .distTo = 1846,
    .xVelTo = -54, .yVelTo = -36,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 2,
    .actions = path2780_20_actions
},
{
    .x = 24, .y = 16,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = -64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 3,
    .actions = path2780_21_actions
},
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 1846,
    .xVelTo = -54, .yVelTo = -36,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 2,
    .actions = path2780_22_actions
},
{
    .x = 0, .y = -16,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 24, .y = -32,
    .speedTo = 64, .distTo = 1846,
    .xVelTo = 53, .yVelTo = -36,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 2,
    .actions = path2780_24_actions
},
{
    .x = 40, .y = -32,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 3,
    .actions = path2780_25_actions
},
{
    .x = 64, .y = -48,
    .speedTo = 64, .distTo = 1846,
    .xVelTo = 53, .yVelTo = -36,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2780_26_actions
},
{
    .x = 64, .y = -64,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2780_27_actions
},
{
    .x = 40, .y = -80,
    .speedTo = 64, .distTo = 1846,
    .xVelTo = -54, .yVelTo = -36,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 2,
    .actions = path2780_28_actions
},
{
    .x = 24, .y = -80,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = -64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 3,
    .actions = path2780_29_actions
},
{
    .x = 0, .y = -96,
    .speedTo = 64, .distTo = 1846,
    .xVelTo = -54, .yVelTo = -36,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 2,
    .actions = path2780_30_actions
},
{
    .x = 0, .y = -112,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2780_31_actions
},
{
    .x = 16, .y = -128,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = 45, .yVelTo = -46,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2780_32_actions
},
{
    .x = 24, .y = -128,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path r14beetles_paths[] = {
{.x = 40, .y = 856, .numPoints = 34, .points = path2779_points},
{.x = 152, .y = 856, .numPoints = 34, .points = path2780_points}
};
static LevelObject r14beetles_objects[] = {
{
    .definition = &defBeetle,
    .x = 104, .y = 1096,
    .animInd = 1, .flags = 36864,
    .group = &r14beetles, .path = &r14beetles_paths[0],
    .pathIndex = 1
},
{
    .definition = &defBeetle,
    .x = 216, .y = 1096,
    .animInd = 1, .flags = 4096,
    .group = &r14beetles, .path = &r14beetles_paths[1],
    .pathIndex = 1
},
{
    .definition = 0 /* to be assigned */,
    .x = -40, .y = 996,
    .animInd = 0, .flags = 32768,
    .group = &r14beetles, .path = 0,
    .pathIndex = 0
},
{
    .definition = 0 /* to be assigned */,
    .x = 256, .y = 932,
    .animInd = 0, .flags = 32768,
    .group = &r14beetles, .path = 0,
    .pathIndex = 0
},
{
    .definition = 0 /* to be assigned */,
    .x = -40, .y = 860,
    .animInd = 0, .flags = 32768,
    .group = &r14beetles, .path = 0,
    .pathIndex = 0
},
{
    .definition = 0 /* to be assigned */,
    .x = 256, .y = 796,
    .animInd = 0, .flags = 32768,
    .group = &r14beetles, .path = 0,
    .pathIndex = 0
},
{
    .definition = 0 /* to be assigned */,
    .x = -40, .y = 728,
    .animInd = 0, .flags = 32768,
    .group = &r14beetles, .path = 0,
    .pathIndex = 0
}
};
LevelObjectGroup r14beetles = {
    .numPaths = 2, .paths = r14beetles_paths,
    .numObjects = 7, .objects = r14beetles_objects
};
extern LevelObjectGroup r14acidants1;
static GObjPathPointFunction path2891_2_actions[] = {
markDisappear
};
static PathPoint path2891_points[] = {
{
    .x = 0, .y = 16,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 144,
    .speedTo = 64, .distTo = 8192,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 160,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2891_2_actions
}
};
static GObjPathPointFunction path2892_2_actions[] = {
markDisappear
};
static PathPoint path2892_points[] = {
{
    .x = 0, .y = 16,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 144,
    .speedTo = 64, .distTo = 8192,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 160,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2892_2_actions
}
};
static Path r14acidants1_paths[] = {
{.x = 120, .y = 976, .numPoints = 3, .points = path2891_points},
{.x = 184, .y = 976, .numPoints = 3, .points = path2892_points}
};
static LevelObject r14acidants1_objects[] = {
{
    .definition = &defAntHole,
    .x = 120, .y = 992,
    .animInd = 0, .flags = 32768,
    .group = &r14acidants1, .path = &r14acidants1_paths[0],
    .pathIndex = 1
},
{
    .definition = &defAntHole,
    .x = 184, .y = 992,
    .animInd = 0, .flags = 32768,
    .group = &r14acidants1, .path = &r14acidants1_paths[1],
    .pathIndex = 1
}
};
LevelObjectGroup r14acidants1 = {
    .numPaths = 2, .paths = r14acidants1_paths,
    .numObjects = 2, .objects = r14acidants1_objects
};
extern LevelObjectGroup r14acidants2;
static GObjPathPointFunction path2898_2_actions[] = {
markDisappear
};
static PathPoint path2898_points[] = {
{
    .x = 0, .y = 16,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 128,
    .speedTo = 64, .distTo = 7168,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 144,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2898_2_actions
}
};
static GObjPathPointFunction path2899_2_actions[] = {
markDisappear
};
static PathPoint path2899_points[] = {
{
    .x = 0, .y = 16,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 128,
    .speedTo = 64, .distTo = 7168,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 144,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2899_2_actions
}
};
static Path r14acidants2_paths[] = {
{.x = 128, .y = 992, .numPoints = 3, .points = path2898_points},
{.x = 176, .y = 992, .numPoints = 3, .points = path2899_points}
};
static LevelObject r14acidants2_objects[] = {
{
    .definition = &defAntHole,
    .x = 128, .y = 1008,
    .animInd = 0, .flags = 32768,
    .group = &r14acidants2, .path = &r14acidants2_paths[0],
    .pathIndex = 1
},
{
    .definition = &defAntHole,
    .x = 176, .y = 1008,
    .animInd = 0, .flags = 32768,
    .group = &r14acidants2, .path = &r14acidants2_paths[1],
    .pathIndex = 1
}
};
LevelObjectGroup r14acidants2 = {
    .numPaths = 2, .paths = r14acidants2_paths,
    .numObjects = 2, .objects = r14acidants2_objects
};
extern LevelObjectGroup r14acidants3;
static GObjPathPointFunction path2905_2_actions[] = {
markDisappear
};
static PathPoint path2905_points[] = {
{
    .x = 0, .y = 16,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 144,
    .speedTo = 64, .distTo = 8192,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 160,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2905_2_actions
}
};
static GObjPathPointFunction path2906_2_actions[] = {
markDisappear
};
static PathPoint path2906_points[] = {
{
    .x = 0, .y = 16,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 144,
    .speedTo = 64, .distTo = 8192,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 160,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2906_2_actions
}
};
static Path r14acidants3_paths[] = {
{.x = 136, .y = 976, .numPoints = 3, .points = path2905_points},
{.x = 168, .y = 976, .numPoints = 3, .points = path2906_points}
};
static LevelObject r14acidants3_objects[] = {
{
    .definition = &defAntHole,
    .x = 168, .y = 992,
    .animInd = 0, .flags = 32768,
    .group = &r14acidants3, .path = &r14acidants3_paths[1],
    .pathIndex = 1
},
{
    .definition = &defAntHole,
    .x = 136, .y = 992,
    .animInd = 0, .flags = 32768,
    .group = &r14acidants3, .path = &r14acidants3_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r14acidants3 = {
    .numPaths = 2, .paths = r14acidants3_paths,
    .numObjects = 2, .objects = r14acidants3_objects
};
extern LevelObjectGroup r14wasp1a;
static GObjPathPointFunction path2911_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2911_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2911_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path2911_3_actions[] = {
startWaspAttack
};
static PathPoint path2911_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2911_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2911_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2911_2_actions
},
{
    .x = 0, .y = -8,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2911_3_actions
}
};
static Path r14wasp1a_paths[] = {
{.x = 136, .y = 1128, .numPoints = 4, .points = path2911_points}
};
static LevelObject r14wasp1a_objects[] = {
{
    .definition = &defWaspShooter,
    .x = 136, .y = 1128,
    .animInd = 0, .flags = 2048,
    .group = &r14wasp1a, .path = &r14wasp1a_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r14wasp1a = {
    .numPaths = 1, .paths = r14wasp1a_paths,
    .numObjects = 1, .objects = r14wasp1a_objects
};
extern LevelObjectGroup r14wasp1b;
static GObjPathPointFunction path2921_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2921_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2921_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path2921_3_actions[] = {
startWaspAttack
};
static PathPoint path2921_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2921_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2921_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2921_2_actions
},
{
    .x = 0, .y = -8,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2921_3_actions
}
};
static Path r14wasp1b_paths[] = {
{.x = 120, .y = 1136, .numPoints = 4, .points = path2921_points}
};
static LevelObject r14wasp1b_objects[] = {
{
    .definition = &defWaspShooter,
    .x = 120, .y = 1136,
    .animInd = 0, .flags = 2048,
    .group = &r14wasp1b, .path = &r14wasp1b_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r14wasp1b = {
    .numPaths = 1, .paths = r14wasp1b_paths,
    .numObjects = 1, .objects = r14wasp1b_objects
};
extern LevelObjectGroup r14wasp2a;
static GObjPathPointFunction path2928_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2928_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2928_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path2928_3_actions[] = {
startWaspAttack
};
static PathPoint path2928_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2928_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2928_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2928_2_actions
},
{
    .x = 0, .y = -8,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2928_3_actions
}
};
static Path r14wasp2a_paths[] = {
{.x = 24, .y = 1072, .numPoints = 4, .points = path2928_points}
};
static LevelObject r14wasp2a_objects[] = {
{
    .definition = &defWaspShooter,
    .x = 24, .y = 1072,
    .animInd = 0, .flags = 0,
    .group = &r14wasp2a, .path = &r14wasp2a_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r14wasp2a = {
    .numPaths = 1, .paths = r14wasp2a_paths,
    .numObjects = 1, .objects = r14wasp2a_objects
};
extern LevelObjectGroup r14wasp2b;
static GObjPathPointFunction path2935_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2935_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2935_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path2935_3_actions[] = {
startWaspAttack
};
static PathPoint path2935_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2935_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2935_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2935_2_actions
},
{
    .x = 0, .y = -8,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2935_3_actions
}
};
static Path r14wasp2b_paths[] = {
{.x = 120, .y = 1096, .numPoints = 4, .points = path2935_points}
};
static LevelObject r14wasp2b_objects[] = {
{
    .definition = &defWaspShooter,
    .x = 120, .y = 1096,
    .animInd = 0, .flags = 0,
    .group = &r14wasp2b, .path = &r14wasp2b_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r14wasp2b = {
    .numPaths = 1, .paths = r14wasp2b_paths,
    .numObjects = 1, .objects = r14wasp2b_objects
};
extern LevelObjectGroup r14wasp3a;
static GObjPathPointFunction path2942_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2942_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2942_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path2942_3_actions[] = {
startWaspAttack
};
static PathPoint path2942_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2942_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2942_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2942_2_actions
},
{
    .x = 0, .y = -8,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2942_3_actions
}
};
static Path r14wasp3a_paths[] = {
{.x = 136, .y = 1056, .numPoints = 4, .points = path2942_points}
};
static LevelObject r14wasp3a_objects[] = {
{
    .definition = &defWaspShooter,
    .x = 136, .y = 1056,
    .animInd = 0, .flags = 2048,
    .group = &r14wasp3a, .path = &r14wasp3a_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r14wasp3a = {
    .numPaths = 1, .paths = r14wasp3a_paths,
    .numObjects = 1, .objects = r14wasp3a_objects
};
extern LevelObjectGroup r14wasp3b;
static GObjPathPointFunction path2949_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2949_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2949_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path2949_3_actions[] = {
startWaspAttack
};
static PathPoint path2949_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2949_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2949_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2949_2_actions
},
{
    .x = 0, .y = -8,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2949_3_actions
}
};
static Path r14wasp3b_paths[] = {
{.x = 232, .y = 1032, .numPoints = 4, .points = path2949_points}
};
static LevelObject r14wasp3b_objects[] = {
{
    .definition = &defWaspShooter,
    .x = 232, .y = 1032,
    .animInd = 0, .flags = 2048,
    .group = &r14wasp3b, .path = &r14wasp3b_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r14wasp3b = {
    .numPaths = 1, .paths = r14wasp3b_paths,
    .numObjects = 1, .objects = r14wasp3b_objects
};
extern LevelObjectGroup r14wasp4a;
static GObjPathPointFunction path2956_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2956_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2956_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path2956_3_actions[] = {
startWaspAttack
};
static PathPoint path2956_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2956_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2956_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2956_2_actions
},
{
    .x = 0, .y = -8,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2956_3_actions
}
};
static Path r14wasp4a_paths[] = {
{.x = 24, .y = 960, .numPoints = 4, .points = path2956_points}
};
static LevelObject r14wasp4a_objects[] = {
{
    .definition = &defWaspShooter,
    .x = 24, .y = 960,
    .animInd = 0, .flags = 0,
    .group = &r14wasp4a, .path = &r14wasp4a_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r14wasp4a = {
    .numPaths = 1, .paths = r14wasp4a_paths,
    .numObjects = 1, .objects = r14wasp4a_objects
};
extern LevelObjectGroup r14wasp4b;
static GObjPathPointFunction path2963_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2963_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2963_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path2963_3_actions[] = {
startWaspAttack
};
static PathPoint path2963_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2963_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2963_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2963_2_actions
},
{
    .x = 0, .y = -8,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2963_3_actions
}
};
static Path r14wasp4b_paths[] = {
{.x = 136, .y = 952, .numPoints = 4, .points = path2963_points}
};
static LevelObject r14wasp4b_objects[] = {
{
    .definition = &defWaspShooter,
    .x = 136, .y = 952,
    .animInd = 0, .flags = 2048,
    .group = &r14wasp4b, .path = &r14wasp4b_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r14wasp4b = {
    .numPaths = 1, .paths = r14wasp4b_paths,
    .numObjects = 1, .objects = r14wasp4b_objects
};
extern LevelObjectGroup r14wasp4c;
static GObjPathPointFunction path2970_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2970_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2970_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path2970_3_actions[] = {
startWaspAttack
};
static PathPoint path2970_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2970_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2970_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2970_2_actions
},
{
    .x = 0, .y = -8,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2970_3_actions
}
};
static Path r14wasp4c_paths[] = {
{.x = 24, .y = 984, .numPoints = 4, .points = path2970_points}
};
static LevelObject r14wasp4c_objects[] = {
{
    .definition = &defWaspShooter,
    .x = 24, .y = 984,
    .animInd = 0, .flags = 0,
    .group = &r14wasp4c, .path = &r14wasp4c_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r14wasp4c = {
    .numPaths = 1, .paths = r14wasp4c_paths,
    .numObjects = 1, .objects = r14wasp4c_objects
};
extern LevelObjectGroup r14wasp5a;
static GObjPathPointFunction path2977_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2977_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2977_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path2977_3_actions[] = {
startWaspAttack
};
static PathPoint path2977_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2977_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2977_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2977_2_actions
},
{
    .x = 0, .y = -8,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2977_3_actions
}
};
static Path r14wasp5a_paths[] = {
{.x = 232, .y = 896, .numPoints = 4, .points = path2977_points}
};
static LevelObject r14wasp5a_objects[] = {
{
    .definition = &defWaspShooter,
    .x = 232, .y = 896,
    .animInd = 0, .flags = 2048,
    .group = &r14wasp5a, .path = &r14wasp5a_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r14wasp5a = {
    .numPaths = 1, .paths = r14wasp5a_paths,
    .numObjects = 1, .objects = r14wasp5a_objects
};
extern LevelObjectGroup r14wasp5b;
static GObjPathPointFunction path2984_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2984_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2984_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path2984_3_actions[] = {
startWaspAttack
};
static PathPoint path2984_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2984_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2984_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2984_2_actions
},
{
    .x = 0, .y = -8,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2984_3_actions
}
};
static Path r14wasp5b_paths[] = {
{.x = 120, .y = 888, .numPoints = 4, .points = path2984_points}
};
static LevelObject r14wasp5b_objects[] = {
{
    .definition = &defWaspShooter,
    .x = 120, .y = 888,
    .animInd = 0, .flags = 0,
    .group = &r14wasp5b, .path = &r14wasp5b_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r14wasp5b = {
    .numPaths = 1, .paths = r14wasp5b_paths,
    .numObjects = 1, .objects = r14wasp5b_objects
};
extern LevelObjectGroup r14wasp5c;
static GObjPathPointFunction path2991_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2991_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2991_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path2991_3_actions[] = {
startWaspAttack
};
static PathPoint path2991_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2991_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2991_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2991_2_actions
},
{
    .x = 0, .y = -8,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path2991_3_actions
}
};
static Path r14wasp5c_paths[] = {
{.x = 232, .y = 920, .numPoints = 4, .points = path2991_points}
};
static LevelObject r14wasp5c_objects[] = {
{
    .definition = &defWaspShooter,
    .x = 232, .y = 920,
    .animInd = 0, .flags = 2048,
    .group = &r14wasp5c, .path = &r14wasp5c_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r14wasp5c = {
    .numPaths = 1, .paths = r14wasp5c_paths,
    .numObjects = 1, .objects = r14wasp5c_objects
};
extern LevelObjectGroup r14wasp6a;
static GObjPathPointFunction path3002_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path3002_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path3002_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path3002_3_actions[] = {
startWaspAttack
};
static PathPoint path3002_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3002_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3002_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3002_2_actions
},
{
    .x = 0, .y = -8,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3002_3_actions
}
};
static GObjPathPointFunction path3003_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path3003_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path3003_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path3003_3_actions[] = {
startWaspAttack
};
static PathPoint path3003_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3003_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3003_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3003_2_actions
},
{
    .x = 0, .y = -8,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3003_3_actions
}
};
static Path r14wasp6a_paths[] = {
{.x = 24, .y = 832, .numPoints = 4, .points = path3002_points},
{.x = 120, .y = 832, .numPoints = 4, .points = path3003_points}
};
static LevelObject r14wasp6a_objects[] = {
{
    .definition = &defWaspShooter,
    .x = 24, .y = 832,
    .animInd = 0, .flags = 0,
    .group = &r14wasp6a, .path = &r14wasp6a_paths[0],
    .pathIndex = 1
},
{
    .definition = &defWaspShooter,
    .x = 120, .y = 832,
    .animInd = 0, .flags = 2048,
    .group = &r14wasp6a, .path = &r14wasp6a_paths[1],
    .pathIndex = 1
}
};
LevelObjectGroup r14wasp6a = {
    .numPaths = 2, .paths = r14wasp6a_paths,
    .numObjects = 2, .objects = r14wasp6a_objects
};
extern LevelObjectGroup r14wasp6b;
static GObjPathPointFunction path3015_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path3015_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path3015_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path3015_3_actions[] = {
startWaspAttack
};
static PathPoint path3015_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3015_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3015_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3015_2_actions
},
{
    .x = 0, .y = -8,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3015_3_actions
}
};
static GObjPathPointFunction path3016_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path3016_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path3016_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path3016_3_actions[] = {
startWaspAttack
};
static PathPoint path3016_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3016_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3016_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3016_2_actions
},
{
    .x = 0, .y = -8,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3016_3_actions
}
};
static Path r14wasp6b_paths[] = {
{.x = 24, .y = 848, .numPoints = 4, .points = path3015_points},
{.x = 120, .y = 848, .numPoints = 4, .points = path3016_points}
};
static LevelObject r14wasp6b_objects[] = {
{
    .definition = &defWaspShooter,
    .x = 24, .y = 848,
    .animInd = 0, .flags = 0,
    .group = &r14wasp6b, .path = &r14wasp6b_paths[0],
    .pathIndex = 1
},
{
    .definition = &defWaspShooter,
    .x = 120, .y = 848,
    .animInd = 0, .flags = 2048,
    .group = &r14wasp6b, .path = &r14wasp6b_paths[1],
    .pathIndex = 1
}
};
LevelObjectGroup r14wasp6b = {
    .numPaths = 2, .paths = r14wasp6b_paths,
    .numObjects = 2, .objects = r14wasp6b_objects
};
extern LevelObjectGroup Copy_of_r14wasp6a;
static GObjPathPointFunction path3028_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path3028_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path3028_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path3028_3_actions[] = {
startWaspAttack
};
static PathPoint path3028_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3028_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3028_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3028_2_actions
},
{
    .x = 0, .y = -8,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3028_3_actions
}
};
static GObjPathPointFunction path3029_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path3029_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path3029_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path3029_3_actions[] = {
startWaspAttack
};
static PathPoint path3029_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3029_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3029_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3029_2_actions
},
{
    .x = 0, .y = -8,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3029_3_actions
}
};
static Path Copy_of_r14wasp6a_paths[] = {
{.x = 136, .y = 800, .numPoints = 4, .points = path3028_points},
{.x = 232, .y = 800, .numPoints = 4, .points = path3029_points}
};
static LevelObject Copy_of_r14wasp6a_objects[] = {
{
    .definition = &defWaspShooter,
    .x = 136, .y = 800,
    .animInd = 0, .flags = 0,
    .group = &Copy_of_r14wasp6a, .path = &Copy_of_r14wasp6a_paths[0],
    .pathIndex = 1
},
{
    .definition = &defWaspShooter,
    .x = 232, .y = 800,
    .animInd = 0, .flags = 2048,
    .group = &Copy_of_r14wasp6a, .path = &Copy_of_r14wasp6a_paths[1],
    .pathIndex = 1
}
};
LevelObjectGroup Copy_of_r14wasp6a = {
    .numPaths = 2, .paths = Copy_of_r14wasp6a_paths,
    .numObjects = 2, .objects = Copy_of_r14wasp6a_objects
};
extern LevelObjectGroup Copy_of_r14wasp6b;
static GObjPathPointFunction path3041_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path3041_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path3041_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path3041_3_actions[] = {
startWaspAttack
};
static PathPoint path3041_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3041_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3041_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3041_2_actions
},
{
    .x = 0, .y = -8,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3041_3_actions
}
};
static GObjPathPointFunction path3042_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path3042_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path3042_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path3042_3_actions[] = {
startWaspAttack
};
static PathPoint path3042_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3042_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3042_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3042_2_actions
},
{
    .x = 0, .y = -8,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3042_3_actions
}
};
static Path Copy_of_r14wasp6b_paths[] = {
{.x = 136, .y = 800, .numPoints = 4, .points = path3041_points},
{.x = 232, .y = 800, .numPoints = 4, .points = path3042_points}
};
static LevelObject Copy_of_r14wasp6b_objects[] = {
{
    .definition = &defWaspShooter,
    .x = 136, .y = 800,
    .animInd = 0, .flags = 0,
    .group = &Copy_of_r14wasp6b, .path = &Copy_of_r14wasp6b_paths[0],
    .pathIndex = 1
},
{
    .definition = &defWaspShooter,
    .x = 232, .y = 800,
    .animInd = 0, .flags = 2048,
    .group = &Copy_of_r14wasp6b, .path = &Copy_of_r14wasp6b_paths[1],
    .pathIndex = 1
}
};
LevelObjectGroup Copy_of_r14wasp6b = {
    .numPaths = 2, .paths = Copy_of_r14wasp6b_paths,
    .numObjects = 2, .objects = Copy_of_r14wasp6b_objects
};
extern LevelObjectGroup r14powerup1;
static GObjPathPointFunction path3047_1_actions[] = {
markDisappear
};
static PathPoint path3047_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 120,
    .speedTo = 64, .distTo = 7680,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3047_1_actions
}
};
static Path r14powerup1_paths[] = {
{.x = 72, .y = 992, .numPoints = 2, .points = path3047_points}
};
static LevelObject r14powerup1_objects[] = {
{
    .definition = &defHoneyCell,
    .x = 72, .y = 992,
    .animInd = 0, .flags = 32768,
    .group = &r14powerup1, .path = &r14powerup1_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r14powerup1 = {
    .numPaths = 1, .paths = r14powerup1_paths,
    .numObjects = 1, .objects = r14powerup1_objects
};
extern LevelObjectGroup r14powerup2;
static GObjPathPointFunction path3051_1_actions[] = {
markDisappear
};
static PathPoint path3051_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 152,
    .speedTo = 64, .distTo = 9728,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3051_1_actions
}
};
static Path r14powerup2_paths[] = {
{.x = 184, .y = 960, .numPoints = 2, .points = path3051_points}
};
static LevelObject r14powerup2_objects[] = {
{
    .definition = &defHoneyCell,
    .x = 184, .y = 960,
    .animInd = 0, .flags = 32768,
    .group = &r14powerup2, .path = &r14powerup2_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r14powerup2 = {
    .numPaths = 1, .paths = r14powerup2_paths,
    .numObjects = 1, .objects = r14powerup2_objects
};
extern LevelObjectGroup r15powerup2;
static GObjPathPointFunction path3055_1_actions[] = {
markDisappear
};
static PathPoint path3055_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 312,
    .speedTo = 64, .distTo = 19968,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3055_1_actions
}
};
static Path r15powerup2_paths[] = {
{.x = 72, .y = 800, .numPoints = 2, .points = path3055_points}
};
static LevelObject r15powerup2_objects[] = {
{
    .definition = &defHoneyCell,
    .x = 72, .y = 800,
    .animInd = 0, .flags = 32768,
    .group = &r15powerup2, .path = &r15powerup2_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r15powerup2 = {
    .numPaths = 1, .paths = r15powerup2_paths,
    .numObjects = 1, .objects = r15powerup2_objects
};
extern LevelObjectGroup r15powerup1;
static GObjPathPointFunction path3059_1_actions[] = {
markDisappear
};
static PathPoint path3059_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 248,
    .speedTo = 64, .distTo = 15872,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3059_1_actions
}
};
static Path r15powerup1_paths[] = {
{.x = 184, .y = 864, .numPoints = 2, .points = path3059_points}
};
static LevelObject r15powerup1_objects[] = {
{
    .definition = &defHoneyCell,
    .x = 184, .y = 864,
    .animInd = 0, .flags = 32768,
    .group = &r15powerup1, .path = &r15powerup1_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r15powerup1 = {
    .numPaths = 1, .paths = r15powerup1_paths,
    .numObjects = 1, .objects = r15powerup1_objects
};
extern LevelObjectGroup r16acidants1;
static GObjPathPointFunction path3063_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path3063_2_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path3063_6_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path3063_7_actions[] = {
markDisappear
};
static PathPoint path3063_points[] = {
{
    .x = 0, .y = 16,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = 24,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = -58, .yVelTo = 28,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3063_1_actions
},
{
    .x = -16, .y = 40,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3063_2_actions
},
{
    .x = 8, .y = 64,
    .speedTo = 64, .distTo = 2172,
    .xVelTo = 45, .yVelTo = 45,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 168, .y = 64,
    .speedTo = 64, .distTo = 10240,
    .xVelTo = 64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 192, .y = 40,
    .speedTo = 64, .distTo = 2172,
    .xVelTo = 45, .yVelTo = -46,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 192, .y = 24,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3063_6_actions
},
{
    .x = 176, .y = 16,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = -58, .yVelTo = -29,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3063_7_actions
}
};
static Path r16acidants1_paths[] = {
{.x = 40, .y = 544, .numPoints = 8, .points = path3063_points}
};
static LevelObject r16acidants1_objects[] = {
{
    .definition = &defAntHole,
    .x = 40, .y = 560,
    .animInd = 0, .flags = 32768,
    .group = &r16acidants1, .path = &r16acidants1_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r16acidants1 = {
    .numPaths = 1, .paths = r16acidants1_paths,
    .numObjects = 1, .objects = r16acidants1_objects
};
extern LevelObjectGroup r16powerup;
static LevelObject r16powerup_objects[] = {
{
    .definition = &defHoneyPot,
    .x = 168, .y = 592,
    .animInd = 0, .flags = 32768,
    .group = &r16powerup, .path = 0,
    .pathIndex = 0
},
{
    .definition = &defHoneyPot,
    .x = 88, .y = 592,
    .animInd = 0, .flags = 32768,
    .group = &r16powerup, .path = 0,
    .pathIndex = 0
}
};
LevelObjectGroup r16powerup = {
    .numPaths = 0, .paths = 0,
    .numObjects = 2, .objects = r16powerup_objects
};
extern LevelObjectGroup r16acidants2;
static GObjPathPointFunction path3074_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path3074_3_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path3074_7_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path3074_8_actions[] = {
markDisappear
};
static PathPoint path3074_points[] = {
{
    .x = 0, .y = -8,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 16, .y = 8,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = 45, .yVelTo = 45,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3074_1_actions
},
{
    .x = 32, .y = 24,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = 45, .yVelTo = 45,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 32, .y = 56,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3074_3_actions
},
{
    .x = 8, .y = 80,
    .speedTo = 64, .distTo = 2172,
    .xVelTo = -46, .yVelTo = 45,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -120, .y = 80,
    .speedTo = 64, .distTo = 8192,
    .xVelTo = -64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -144, .y = 56,
    .speedTo = 64, .distTo = 2172,
    .xVelTo = -46, .yVelTo = -46,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -144, .y = 24,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3074_7_actions
},
{
    .x = -112, .y = -8,
    .speedTo = 64, .distTo = 2896,
    .xVelTo = 45, .yVelTo = -46,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3074_8_actions
}
};
static GObjPathPointFunction path3075_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path3075_2_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path3075_6_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path3075_7_actions[] = {
markDisappear
};
static PathPoint path3075_points[] = {
{
    .x = -16, .y = 16,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = 32,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = -46, .yVelTo = 45,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3075_1_actions
},
{
    .x = -32, .y = 48,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3075_2_actions
},
{
    .x = -8, .y = 72,
    .speedTo = 64, .distTo = 2172,
    .xVelTo = 45, .yVelTo = 45,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = 72,
    .speedTo = 64, .distTo = 6144,
    .xVelTo = 64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 112, .y = 48,
    .speedTo = 64, .distTo = 2172,
    .xVelTo = 45, .yVelTo = -46,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 112, .y = 32,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3075_6_actions
},
{
    .x = 96, .y = 16,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = -46, .yVelTo = -46,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3075_7_actions
}
};
static Path r16acidants2_paths[] = {
{.x = 184, .y = 464, .numPoints = 9, .points = path3074_points},
{.x = 88, .y = 456, .numPoints = 8, .points = path3075_points}
};
static LevelObject r16acidants2_objects[] = {
{
    .definition = &defAntHole,
    .x = 72, .y = 472,
    .animInd = 0, .flags = 32768,
    .group = &r16acidants2, .path = &r16acidants2_paths[1],
    .pathIndex = 1
},
{
    .definition = &defAntHole,
    .x = 184, .y = 456,
    .animInd = 0, .flags = 32768,
    .group = &r16acidants2, .path = &r16acidants2_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r16acidants2 = {
    .numPaths = 2, .paths = r16acidants2_paths,
    .numObjects = 2, .objects = r16acidants2_objects
};
extern LevelObjectGroup r16powerup2;
static LevelObject r16powerup2_objects[] = {
{
    .definition = &defReinforcedHoneyPot,
    .x = 128, .y = 512,
    .animInd = 0, .flags = 32768,
    .group = &r16powerup2, .path = 0,
    .pathIndex = 0
}
};
LevelObjectGroup r16powerup2 = {
    .numPaths = 0, .paths = 0,
    .numObjects = 1, .objects = r16powerup2_objects
};
extern LevelObjectGroup r17powerup;
static LevelObject r17powerup_objects[] = {
{
    .definition = &defHoneyPot,
    .x = 128, .y = 408,
    .animInd = 0, .flags = 32768,
    .group = &r17powerup, .path = 0,
    .pathIndex = 0
},
{
    .definition = &defHoneyPot,
    .x = 152, .y = 400,
    .animInd = 0, .flags = 32768,
    .group = &r17powerup, .path = 0,
    .pathIndex = 0
},
{
    .definition = &defHoneyPot,
    .x = 112, .y = 400,
    .animInd = 0, .flags = 32768,
    .group = &r17powerup, .path = 0,
    .pathIndex = 0
}
};
LevelObjectGroup r17powerup = {
    .numPaths = 0, .paths = 0,
    .numObjects = 3, .objects = r17powerup_objects
};
extern LevelObjectGroup r17fly1a;
static GObjPathPointFunction path3092_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path3092_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path3092_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path3092_3_actions[] = {
startWaspAttack
};
static PathPoint path3092_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3092_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3092_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3092_2_actions
},
{
    .x = 0, .y = -8,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3092_3_actions
}
};
static Path r17fly1a_paths[] = {
{.x = 40, .y = 472, .numPoints = 4, .points = path3092_points}
};
static LevelObject r17fly1a_objects[] = {
{
    .definition = &defWaspShooter,
    .x = 40, .y = 472,
    .animInd = 0, .flags = 0,
    .group = &r17fly1a, .path = &r17fly1a_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r17fly1a = {
    .numPaths = 1, .paths = r17fly1a_paths,
    .numObjects = 1, .objects = r17fly1a_objects
};
extern LevelObjectGroup r17fly1b;
static GObjPathPointFunction path3099_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path3099_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path3099_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path3099_3_actions[] = {
startWaspAttack
};
static PathPoint path3099_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3099_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3099_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3099_2_actions
},
{
    .x = 0, .y = -8,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3099_3_actions
}
};
static Path r17fly1b_paths[] = {
{.x = 208, .y = 472, .numPoints = 4, .points = path3099_points}
};
static LevelObject r17fly1b_objects[] = {
{
    .definition = &defWaspShooter,
    .x = 208, .y = 472,
    .animInd = 0, .flags = 2048,
    .group = &r17fly1b, .path = &r17fly1b_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r17fly1b = {
    .numPaths = 1, .paths = r17fly1b_paths,
    .numObjects = 1, .objects = r17fly1b_objects
};
extern LevelObjectGroup r17fly2a;
static GObjPathPointFunction path3106_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path3106_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path3106_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path3106_3_actions[] = {
startWaspAttack
};
static PathPoint path3106_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3106_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3106_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3106_2_actions
},
{
    .x = 0, .y = -8,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3106_3_actions
}
};
static Path r17fly2a_paths[] = {
{.x = 24, .y = 496, .numPoints = 4, .points = path3106_points}
};
static LevelObject r17fly2a_objects[] = {
{
    .definition = &defWaspShooter,
    .x = 24, .y = 496,
    .animInd = 0, .flags = 0,
    .group = &r17fly2a, .path = &r17fly2a_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r17fly2a = {
    .numPaths = 1, .paths = r17fly2a_paths,
    .numObjects = 1, .objects = r17fly2a_objects
};
extern LevelObjectGroup r17fly2b;
static GObjPathPointFunction path3113_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path3113_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path3113_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path3113_3_actions[] = {
startWaspAttack
};
static PathPoint path3113_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3113_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3113_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3113_2_actions
},
{
    .x = 0, .y = -8,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3113_3_actions
}
};
static Path r17fly2b_paths[] = {
{.x = 232, .y = 496, .numPoints = 4, .points = path3113_points}
};
static LevelObject r17fly2b_objects[] = {
{
    .definition = &defWaspShooter,
    .x = 232, .y = 496,
    .animInd = 0, .flags = 2048,
    .group = &r17fly2b, .path = &r17fly2b_paths[0],
    .pathIndex = 1
}
};
LevelObjectGroup r17fly2b = {
    .numPaths = 1, .paths = r17fly2b_paths,
    .numObjects = 1, .objects = r17fly2b_objects
};
extern LevelObjectGroup r17wasp1;
static GObjPathPointFunction path3121_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path3121_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path3121_2_actions[] = {
startWaspAttack
};
static PathPoint path3121_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3121_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3121_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3121_2_actions
}
};
static GObjPathPointFunction path3122_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path3122_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path3122_2_actions[] = {
startWaspAttack
};
static PathPoint path3122_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3122_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3122_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3122_2_actions
}
};
static Path r17wasp1_paths[] = {
{.x = 16, .y = 456, .numPoints = 3, .points = path3121_points},
{.x = 240, .y = 456, .numPoints = 3, .points = path3122_points}
};
static LevelObject r17wasp1_objects[] = {
{
    .definition = &defWasp,
    .x = 16, .y = 456,
    .animInd = 0, .flags = 0,
    .group = &r17wasp1, .path = &r17wasp1_paths[0],
    .pathIndex = 1
},
{
    .definition = &defWasp,
    .x = 240, .y = 456,
    .animInd = 0, .flags = 2048,
    .group = &r17wasp1, .path = &r17wasp1_paths[1],
    .pathIndex = 1
}
};
LevelObjectGroup r17wasp1 = {
    .numPaths = 2, .paths = r17wasp1_paths,
    .numObjects = 2, .objects = r17wasp1_objects
};
extern LevelObjectGroup r17wasp3;
static GObjPathPointFunction path3132_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path3132_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path3132_2_actions[] = {
startWaspAttack
};
static PathPoint path3132_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3132_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3132_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3132_2_actions
}
};
static GObjPathPointFunction path3133_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path3133_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path3133_2_actions[] = {
startWaspAttack
};
static PathPoint path3133_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3133_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3133_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3133_2_actions
}
};
static Path r17wasp3_paths[] = {
{.x = 56, .y = 408, .numPoints = 3, .points = path3132_points},
{.x = 200, .y = 408, .numPoints = 3, .points = path3133_points}
};
static LevelObject r17wasp3_objects[] = {
{
    .definition = &defWasp,
    .x = 56, .y = 408,
    .animInd = 0, .flags = 0,
    .group = &r17wasp3, .path = &r17wasp3_paths[0],
    .pathIndex = 1
},
{
    .definition = &defWasp,
    .x = 200, .y = 408,
    .animInd = 0, .flags = 2048,
    .group = &r17wasp3, .path = &r17wasp3_paths[1],
    .pathIndex = 1
}
};
LevelObjectGroup r17wasp3 = {
    .numPaths = 2, .paths = r17wasp3_paths,
    .numObjects = 2, .objects = r17wasp3_objects
};
extern LevelObjectGroup r17wasp5;
static GObjPathPointFunction path3143_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path3143_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path3143_2_actions[] = {
startWaspAttack
};
static PathPoint path3143_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3143_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3143_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3143_2_actions
}
};
static GObjPathPointFunction path3144_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path3144_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path3144_2_actions[] = {
startWaspAttack
};
static PathPoint path3144_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3144_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3144_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3144_2_actions
}
};
static Path r17wasp5_paths[] = {
{.x = 112, .y = 384, .numPoints = 3, .points = path3143_points},
{.x = 144, .y = 384, .numPoints = 3, .points = path3144_points}
};
static LevelObject r17wasp5_objects[] = {
{
    .definition = &defWasp,
    .x = 112, .y = 384,
    .animInd = 0, .flags = 0,
    .group = &r17wasp5, .path = &r17wasp5_paths[0],
    .pathIndex = 1
},
{
    .definition = &defWasp,
    .x = 144, .y = 384,
    .animInd = 0, .flags = 2048,
    .group = &r17wasp5, .path = &r17wasp5_paths[1],
    .pathIndex = 1
}
};
LevelObjectGroup r17wasp5 = {
    .numPaths = 2, .paths = r17wasp5_paths,
    .numObjects = 2, .objects = r17wasp5_objects
};
extern LevelObjectGroup r17wasp7;
static GObjPathPointFunction path3154_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path3154_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path3154_2_actions[] = {
startWaspAttack
};
static PathPoint path3154_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3154_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3154_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3154_2_actions
}
};
static GObjPathPointFunction path3155_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path3155_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path3155_2_actions[] = {
startWaspAttack
};
static PathPoint path3155_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3155_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3155_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3155_2_actions
}
};
static Path r17wasp7_paths[] = {
{.x = 80, .y = 360, .numPoints = 3, .points = path3154_points},
{.x = 176, .y = 360, .numPoints = 3, .points = path3155_points}
};
static LevelObject r17wasp7_objects[] = {
{
    .definition = &defWasp,
    .x = 80, .y = 360,
    .animInd = 0, .flags = 0,
    .group = &r17wasp7, .path = &r17wasp7_paths[0],
    .pathIndex = 1
},
{
    .definition = &defWasp,
    .x = 176, .y = 360,
    .animInd = 0, .flags = 2048,
    .group = &r17wasp7, .path = &r17wasp7_paths[1],
    .pathIndex = 1
}
};
LevelObjectGroup r17wasp7 = {
    .numPaths = 2, .paths = r17wasp7_paths,
    .numObjects = 2, .objects = r17wasp7_objects
};
extern LevelObjectGroup r17wasp9;
static GObjPathPointFunction path3165_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path3165_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path3165_2_actions[] = {
startWaspAttack
};
static PathPoint path3165_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3165_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3165_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3165_2_actions
}
};
static GObjPathPointFunction path3166_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path3166_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path3166_2_actions[] = {
startWaspAttack
};
static PathPoint path3166_points[] = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3166_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3166_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3166_2_actions
}
};
static Path r17wasp9_paths[] = {
{.x = 40, .y = 384, .numPoints = 3, .points = path3165_points},
{.x = 216, .y = 384, .numPoints = 3, .points = path3166_points}
};
static LevelObject r17wasp9_objects[] = {
{
    .definition = &defWasp,
    .x = 40, .y = 384,
    .animInd = 0, .flags = 0,
    .group = &r17wasp9, .path = &r17wasp9_paths[0],
    .pathIndex = 1
},
{
    .definition = &defWasp,
    .x = 216, .y = 384,
    .animInd = 0, .flags = 2048,
    .group = &r17wasp9, .path = &r17wasp9_paths[1],
    .pathIndex = 1
}
};
LevelObjectGroup r17wasp9 = {
    .numPaths = 2, .paths = r17wasp9_paths,
    .numObjects = 2, .objects = r17wasp9_objects
};
extern LevelObjectGroup r18powerup2;
static LevelObject r18powerup2_objects[] = {
{
    .definition = &defReinforcedHoneyPot,
    .x = 120, .y = 192,
    .animInd = 0, .flags = 32768,
    .group = &r18powerup2, .path = 0,
    .pathIndex = 0
}
};
LevelObjectGroup r18powerup2 = {
    .numPaths = 0, .paths = 0,
    .numObjects = 1, .objects = r18powerup2_objects
};
extern LevelObjectGroup r18powerup3;
static LevelObject r18powerup3_objects[] = {
{
    .definition = &defReinforcedHoneyPot,
    .x = 136, .y = 128,
    .animInd = 0, .flags = 32768,
    .group = &r18powerup3, .path = 0,
    .pathIndex = 0
}
};
LevelObjectGroup r18powerup3 = {
    .numPaths = 0, .paths = 0,
    .numObjects = 1, .objects = r18powerup3_objects
};
extern LevelObjectGroup waspboss;
static GObjPathPointFunction path3179_4_actions[] = {
ChooseSweepPath_DamageFlashRed
};
static PathPoint path3179_points[] = {
{
    .x = 208, .y = 120,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 192, .y = 136,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = -46, .yVelTo = 45,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 160, .y = 152,
    .speedTo = 64, .distTo = 2289,
    .xVelTo = -58, .yVelTo = 28,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 128, .y = 136,
    .speedTo = 64, .distTo = 2289,
    .xVelTo = -58, .yVelTo = -29,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 112, .y = 112,
    .speedTo = 64, .distTo = 1846,
    .xVelTo = -36, .yVelTo = -54,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3179_4_actions
}
};
static GObjPathPointFunction path3180_4_actions[] = {
ChooseSweepPath_DamageFlashRed
};
static PathPoint path3180_points[] = {
{
    .x = 160, .y = -24,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 176, .y = -8,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = 45, .yVelTo = 45,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 208, .y = 8,
    .speedTo = 64, .distTo = 2289,
    .xVelTo = 57, .yVelTo = 28,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 240, .y = -8,
    .speedTo = 64, .distTo = 2289,
    .xVelTo = 57, .yVelTo = -29,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 256, .y = -32,
    .speedTo = 64, .distTo = 1846,
    .xVelTo = 35, .yVelTo = -54,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3180_4_actions
}
};
static GObjPathPointFunction path3181_0_actions[] = {
PathPoint_ShootBurstsAtAngle
};
static GObjPathPointFunction path3181_2_actions[] = {
ChargeAndLayEggs_DamageFlashRed
};
static PathPoint path3181_points[] = {
{
    .x = 0, .y = 8,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3181_0_actions
},
{
    .x = 0, .y = 96,
    .speedTo = 64, .distTo = 5632,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 192,
    .speedTo = 64, .distTo = 6144,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3181_2_actions
}
};
static GObjPathPointFunction path3182_0_actions[] = {
PathPoint_ShootBurstsAtAngle
};
static GObjPathPointFunction path3182_2_actions[] = {
ChargeAndLayEggs_DamageFlashRed
};
static PathPoint path3182_points[] = {
{
    .x = 0, .y = 8,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3182_0_actions
},
{
    .x = 0, .y = 96,
    .speedTo = 64, .distTo = 5632,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 192,
    .speedTo = 64, .distTo = 6144,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3182_2_actions
}
};
static GObjPathPointFunction path3183_0_actions[] = {
PathPoint_ShootBurstsAtAngle
};
static GObjPathPointFunction path3183_2_actions[] = {
ChargeAndLayEggs_DamageFlashRed
};
static PathPoint path3183_points[] = {
{
    .x = 8, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3183_0_actions
},
{
    .x = 96, .y = 0,
    .speedTo = 64, .distTo = 5632,
    .xVelTo = 64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 208, .y = 0,
    .speedTo = 64, .distTo = 7168,
    .xVelTo = 64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3183_2_actions
}
};
static GObjPathPointFunction path3184_0_actions[] = {
PathPoint_ShootBurstsAtAngle
};
static GObjPathPointFunction path3184_2_actions[] = {
ChargeAndLayEggs_DamageFlashRed
};
static PathPoint path3184_points[] = {
{
    .x = -8, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3184_0_actions
},
{
    .x = -96, .y = 0,
    .speedTo = 64, .distTo = 5632,
    .xVelTo = -64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -208, .y = 0,
    .speedTo = 64, .distTo = 7168,
    .xVelTo = -64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3184_2_actions
}
};
static GObjPathPointFunction path3201_0_actions[] = {
PathPoint_ShootBurstsAtAngle
};
static GObjPathPointFunction path3201_2_actions[] = {
ChargeAndLayEggs_DamageFlashRed
};
static PathPoint path3201_points[] = {
{
    .x = 0, .y = 8,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3201_0_actions
},
{
    .x = 0, .y = 96,
    .speedTo = 64, .distTo = 5632,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = 8,
    .speedTo = 64, .distTo = 7964,
    .xVelTo = 45, .yVelTo = -46,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3201_2_actions
}
};
static GObjPathPointFunction path3202_0_actions[] = {
PathPoint_ShootBurstsAtAngle
};
static GObjPathPointFunction path3202_2_actions[] = {
ChargeAndLayEggs_DamageFlashRed
};
static PathPoint path3202_points[] = {
{
    .x = 8, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3202_0_actions
},
{
    .x = 96, .y = 0,
    .speedTo = 64, .distTo = 5632,
    .xVelTo = 64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 88,
    .speedTo = 64, .distTo = 7964,
    .xVelTo = -46, .yVelTo = 45,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3202_2_actions
}
};
static GObjPathPointFunction path3203_0_actions[] = {
PathPoint_ShootBurstsAtAngle
};
static GObjPathPointFunction path3203_2_actions[] = {
ChargeAndLayEggs_DamageFlashRed
};
static PathPoint path3203_points[] = {
{
    .x = -8, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3203_0_actions
},
{
    .x = -96, .y = 0,
    .speedTo = 64, .distTo = 5632,
    .xVelTo = -64, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 88,
    .speedTo = 64, .distTo = 7964,
    .xVelTo = 45, .yVelTo = 45,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3203_2_actions
}
};
static GObjPathPointFunction path3204_0_actions[] = {
PathPoint_ShootBurstsAtAngle
};
static GObjPathPointFunction path3204_2_actions[] = {
ChargeAndLayEggs_DamageFlashRed
};
static PathPoint path3204_points[] = {
{
    .x = 0, .y = 8,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3204_0_actions
},
{
    .x = 0, .y = 96,
    .speedTo = 64, .distTo = 5632,
    .xVelTo = 0, .yVelTo = 64,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -88, .y = 8,
    .speedTo = 64, .distTo = 7964,
    .xVelTo = -46, .yVelTo = -46,
    .shootCount = 0, .shootInterval = 0,
    .numActions = 1,
    .actions = path3204_2_actions
}
};
static Path waspboss_paths[] = {
{.x = -80, .y = 48, .numPoints = 5, .points = path3179_points},
{.x = -32, .y = 192, .numPoints = 5, .points = path3180_points},
{.x = 32, .y = 160, .numPoints = 3, .points = path3181_points},
{.x = 224, .y = 160, .numPoints = 3, .points = path3182_points},
{.x = 32, .y = 160, .numPoints = 3, .points = path3183_points},
{.x = 224, .y = 160, .numPoints = 3, .points = path3184_points},
{.x = 32, .y = 160, .numPoints = 3, .points = path3201_points},
{.x = 32, .y = 160, .numPoints = 3, .points = path3202_points},
{.x = 224, .y = 160, .numPoints = 3, .points = path3203_points},
{.x = 224, .y = 160, .numPoints = 3, .points = path3204_points}
};
static LevelObject waspboss_objects[] = {
{
    .definition = &defWaspBoss,
    .x = 128, .y = 440,
    .animInd = 0, .flags = 0,
    .group = &waspboss, .path = 0,
    .pathIndex = 0
},
{
    .definition = 0 /* to be assigned */,
    .x = 128, .y = 96,
    .animInd = 0, .flags = 32768,
    .group = &waspboss, .path = 0,
    .pathIndex = 0
}
};
LevelObjectGroup waspboss = {
    .numPaths = 10, .paths = waspboss_paths,
    .numObjects = 2, .objects = waspboss_objects
};
Trigger stage_caravan_triggers[] = {
/*   0 */ {.x = -32, .y = 3976, .action = spawnCharacters, .count = 0, .group = &room1ants1},
/*   1 */ {.x = -48, .y = 3976, .action = unpauseTimer, .count = 0, .group = &room1ants1},
/*   2 */ {.x = -40, .y = 3960, .action = spawnCharacters, .count = 0, .group = &room1ants2},
/*   3 */ {.x = -32, .y = 3904, .action = spawnCharacters, .count = 0, .group = &room1ants3},
/*   4 */ {.x = -32, .y = 3896, .action = spawnCharacters, .count = 0, .group = &room1ants3},
/*   5 */ {.x = -32, .y = 3888, .action = spawnCharacters, .count = 0, .group = &room1ants3},
/*   6 */ {.x = -32, .y = 3880, .action = spawnCharacters, .count = 0, .group = &room1ants3},
/*   7 */ {.x = -32, .y = 3872, .action = spawnCharacters, .count = 0, .group = &room1ants3},
/*   8 */ {.x = -32, .y = 3864, .action = spawnCharacters, .count = 0, .group = &room1ants3},
/*   9 */ {.x = -32, .y = 3856, .action = spawnCharacters, .count = 0, .group = &room1ants3},
/*  10 */ {.x = -32, .y = 3848, .action = spawnCharacters, .count = 0, .group = &room1ants3},
/*  11 */ {.x = -32, .y = 3832, .action = spawnCharacters, .count = 0, .group = &room1ants4},
/*  12 */ {.x = -32, .y = 3824, .action = spawnCharacters, .count = 0, .group = &room1ants4},
/*  13 */ {.x = -32, .y = 3816, .action = spawnCharacters, .count = 0, .group = &room1ants4},
/*  14 */ {.x = -32, .y = 3808, .action = spawnCharacters, .count = 0, .group = &room1ants4},
/*  15 */ {.x = -32, .y = 3800, .action = spawnCharacters, .count = 0, .group = &room1ants4},
/*  16 */ {.x = -32, .y = 3792, .action = spawnCharacters, .count = 0, .group = &room1ants4},
/*  17 */ {.x = -32, .y = 3784, .action = spawnCharacters, .count = 0, .group = &room1ants4},
/*  18 */ {.x = -32, .y = 3776, .action = spawnCharacters, .count = 0, .group = &room1ants4},
/*  19 */ {.x = -20, .y = 3768, .action = spawnCharacters, .count = 0, .group = &room1powerup},
/*  20 */ {.x = -56, .y = 3680, .action = spawnCharacters, .count = 0, .group = &room2ants1},
/*  21 */ {.x = -56, .y = 3616, .action = spawnCharacters, .count = 0, .group = &room2ants2},
/*  22 */ {.x = -80, .y = 3576, .action = spawnCharacters, .count = 0, .group = &room2powerup},
/*  23 */ {.x = -56, .y = 3544, .action = spawnCharacters, .count = 0, .group = &r3fly1},
/*  24 */ {.x = -56, .y = 3448, .action = spawnCharacters, .count = 0, .group = &room3fly3},
/*  25 */ {.x = -56, .y = 3352, .action = spawnCharacters, .count = 0, .group = &room3fly4},
/*  26 */ {.x = -28, .y = 3264, .action = spawnNextCharacters, .count = 2, .group = &r4r5ants},
/*  27 */ {.x = -32, .y = 3260, .action = spawnNextCharacters, .count = 2, .group = &r4r5ants},
/*  28 */ {.x = -36, .y = 3256, .action = spawnNextCharacters, .count = 2, .group = &r4r5ants},
/*  29 */ {.x = -40, .y = 3244, .action = spawnNextCharacters, .count = 2, .group = &r4r5ants},
/*  30 */ {.x = -44, .y = 3228, .action = spawnNextCharacters, .count = 2, .group = &r4r5ants},
/*  31 */ {.x = -40, .y = 3212, .action = spawnNextCharacters, .count = 2, .group = &r4r5ants},
/*  32 */ {.x = -36, .y = 3200, .action = spawnNextCharacters, .count = 2, .group = &r4r5ants},
/*  33 */ {.x = -32, .y = 3196, .action = spawnNextCharacters, .count = 2, .group = &r4r5ants},
/*  34 */ {.x = -28, .y = 3192, .action = spawnNextCharacters, .count = 2, .group = &r4r5ants},
/*  35 */ {.x = -56, .y = 3192, .action = spawnCharacters, .count = 0, .group = &room4powerup},
/*  36 */ {.x = -24, .y = 3180, .action = spawnNextCharacters, .count = 2, .group = &r4r5ants},
/*  37 */ {.x = -56, .y = 3168, .action = spawnCharacters, .count = 0, .group = &r4fly1},
/*  38 */ {.x = -20, .y = 3164, .action = spawnNextCharacters, .count = 2, .group = &r4r5ants},
/*  39 */ {.x = -24, .y = 3148, .action = spawnNextCharacters, .count = 2, .group = &r4r5ants},
/*  40 */ {.x = -28, .y = 3136, .action = spawnNextCharacters, .count = 2, .group = &r4r5ants},
/*  41 */ {.x = -32, .y = 3132, .action = spawnNextCharacters, .count = 2, .group = &r4r5ants},
/*  42 */ {.x = -36, .y = 3128, .action = spawnNextCharacters, .count = 2, .group = &r4r5ants},
/*  43 */ {.x = -40, .y = 3116, .action = spawnNextCharacters, .count = 2, .group = &r4r5ants},
/*  44 */ {.x = -44, .y = 3100, .action = spawnNextCharacters, .count = 2, .group = &r4r5ants},
/*  45 */ {.x = -40, .y = 3084, .action = spawnNextCharacters, .count = 2, .group = &r4r5ants},
/*  46 */ {.x = -36, .y = 3072, .action = spawnNextCharacters, .count = 2, .group = &r4r5ants},
/*  47 */ {.x = -32, .y = 3068, .action = spawnNextCharacters, .count = 2, .group = &r4r5ants},
/*  48 */ {.x = -28, .y = 3064, .action = spawnNextCharacters, .count = 2, .group = &r4r5ants},
/*  49 */ {.x = -56, .y = 3064, .action = spawnCharacters, .count = 0, .group = &room5fly1},
/*  50 */ {.x = -72, .y = 3064, .action = spawnCharacters, .count = 0, .group = &r5powerup},
/*  51 */ {.x = -24, .y = 3052, .action = spawnNextCharacters, .count = 2, .group = &r4r5ants},
/*  52 */ {.x = -20, .y = 3036, .action = spawnNextCharacters, .count = 2, .group = &r4r5ants},
/*  53 */ {.x = -24, .y = 3020, .action = spawnNextCharacters, .count = 2, .group = &r4r5ants},
/*  54 */ {.x = -28, .y = 3008, .action = spawnNextCharacters, .count = 2, .group = &r4r5ants},
/*  55 */ {.x = -32, .y = 3004, .action = spawnNextCharacters, .count = 2, .group = &r4r5ants},
/*  56 */ {.x = -36, .y = 3000, .action = spawnNextCharacters, .count = 2, .group = &r4r5ants},
/*  57 */ {.x = -40, .y = 2988, .action = spawnNextCharacters, .count = 2, .group = &r4r5ants},
/*  58 */ {.x = -44, .y = 2972, .action = spawnNextCharacters, .count = 2, .group = &r4r5ants},
/*  59 */ {.x = -40, .y = 2956, .action = spawnNextCharacters, .count = 2, .group = &r4r5ants},
/*  60 */ {.x = -56, .y = 2944, .action = spawnCharacters, .count = 0, .group = &room5bigant},
/*  61 */ {.x = -8, .y = 2872, .action = spawnNextCharacters, .count = 2, .group = &r6ants},
/*  62 */ {.x = -8, .y = 2864, .action = spawnNextCharacters, .count = 2, .group = &r6ants},
/*  63 */ {.x = -8, .y = 2856, .action = spawnNextCharacters, .count = 2, .group = &r6ants},
/*  64 */ {.x = -8, .y = 2848, .action = spawnNextCharacters, .count = 2, .group = &r6ants},
/*  65 */ {.x = -8, .y = 2840, .action = spawnNextCharacters, .count = 2, .group = &r6ants},
/*  66 */ {.x = -8, .y = 2832, .action = spawnNextCharacters, .count = 2, .group = &r6ants},
/*  67 */ {.x = -8, .y = 2824, .action = spawnNextCharacters, .count = 2, .group = &r6ants},
/*  68 */ {.x = -8, .y = 2816, .action = spawnNextCharacters, .count = 2, .group = &r6ants},
/*  69 */ {.x = -24, .y = 2816, .action = spawnCharacters, .count = 0, .group = &room6fly},
/*  70 */ {.x = -8, .y = 2808, .action = spawnNextCharacters, .count = 2, .group = &r6ants},
/*  71 */ {.x = -8, .y = 2800, .action = spawnNextCharacters, .count = 2, .group = &r6ants},
/*  72 */ {.x = -8, .y = 2792, .action = spawnNextCharacters, .count = 2, .group = &r6ants},
/*  73 */ {.x = -8, .y = 2784, .action = spawnNextCharacters, .count = 2, .group = &r6ants},
/*  74 */ {.x = -8, .y = 2776, .action = spawnNextCharacters, .count = 2, .group = &r6ants},
/*  75 */ {.x = -8, .y = 2768, .action = spawnNextCharacters, .count = 2, .group = &r6ants},
/*  76 */ {.x = -8, .y = 2760, .action = spawnNextCharacters, .count = 2, .group = &r6ants},
/*  77 */ {.x = -8, .y = 2752, .action = spawnNextCharacters, .count = 2, .group = &r6ants},
/*  78 */ {.x = -8, .y = 2744, .action = spawnNextCharacters, .count = 2, .group = &r6ants},
/*  79 */ {.x = -8, .y = 2736, .action = spawnNextCharacters, .count = 2, .group = &r6ants},
/*  80 */ {.x = -16, .y = 2736, .action = spawnCharacters, .count = 0, .group = &room6bigant},
/*  81 */ {.x = -56, .y = 2504, .action = spawnCharacters, .count = 0, .group = &room7alien1},
/*  82 */ {.x = -80, .y = 2448, .action = spawnCharacters, .count = 0, .group = &room7alien2},
/*  83 */ {.x = -56, .y = 2432, .action = spawnCharacters, .count = 0, .group = &room7alien3},
/*  84 */ {.x = -32, .y = 2376, .action = spawnCharacters, .count = 0, .group = &room8alien1},
/*  85 */ {.x = -56, .y = 2360, .action = spawnCharacters, .count = 0, .group = &room8alien2},
/*  86 */ {.x = -32, .y = 2272, .action = spawnCharacters, .count = 0, .group = &room8powerup},
/*  87 */ {.x = -72, .y = 2264, .action = spawnCharacters, .count = 0, .group = &room8alien4},
/*  88 */ {.x = -16, .y = 2184, .action = spawnCharacters, .count = 0, .group = &room9powerup},
/*  89 */ {.x = -16, .y = 2016, .action = spawnCharacters, .count = 0, .group = &room9alienmind},
/*  90 */ {.x = -24, .y = 2008, .action = spawnCharacters, .count = 0, .group = &part2},
/*  91 */ {.x = -32, .y = 1856, .action = spawnCharacters, .count = 0, .group = &room10acidants},
/*  92 */ {.x = -40, .y = 1856, .action = unpauseTimer, .count = 0, .group = &room10acidants},
/*  93 */ {.x = -32, .y = 1840, .action = spawnCharacters, .count = 0, .group = &room10acidants2},
/*  94 */ {.x = -48, .y = 1760, .action = spawnCharacters, .count = 0, .group = &r11acidants1a},
/*  95 */ {.x = -56, .y = 1752, .action = spawnCharacters, .count = 0, .group = &r11acidants1b},
/*  96 */ {.x = -48, .y = 1744, .action = spawnCharacters, .count = 0, .group = &r11acidants1c},
/*  97 */ {.x = -56, .y = 1736, .action = spawnCharacters, .count = 0, .group = &r11acidants1d},
/*  98 */ {.x = -48, .y = 1728, .action = spawnCharacters, .count = 0, .group = &r11acidants1e},
/*  99 */ {.x = -56, .y = 1720, .action = spawnCharacters, .count = 0, .group = &r11acidants1f},
/* 100 */ {.x = -48, .y = 1712, .action = spawnCharacters, .count = 0, .group = &r11acidants1g},
/* 101 */ {.x = -56, .y = 1704, .action = spawnCharacters, .count = 0, .group = &r11acidants1h},
/* 102 */ {.x = -96, .y = 1664, .action = spawnCharacters, .count = 0, .group = &r11powerup},
/* 103 */ {.x = -32, .y = 1632, .action = spawnCharacters, .count = 0, .group = &room11acidants2a},
/* 104 */ {.x = -48, .y = 1632, .action = spawnCharacters, .count = 0, .group = &r11acidants3a},
/* 105 */ {.x = -56, .y = 1624, .action = spawnCharacters, .count = 0, .group = &r11acidants3b},
/* 106 */ {.x = -48, .y = 1616, .action = spawnCharacters, .count = 0, .group = &r11acidants3c},
/* 107 */ {.x = -56, .y = 1608, .action = spawnCharacters, .count = 0, .group = &r11acidants3d},
/* 108 */ {.x = -48, .y = 1600, .action = spawnCharacters, .count = 0, .group = &r11acidants3e},
/* 109 */ {.x = -56, .y = 1592, .action = spawnCharacters, .count = 0, .group = &r11acidants3f},
/* 110 */ {.x = -48, .y = 1584, .action = spawnCharacters, .count = 0, .group = &r11acidants3g},
/* 111 */ {.x = -88, .y = 1584, .action = spawnCharacters, .count = 0, .group = &room11acidants2b},
/* 112 */ {.x = -56, .y = 1576, .action = spawnCharacters, .count = 0, .group = &r11acidants3h},
/* 113 */ {.x = -48, .y = 1568, .action = spawnCharacters, .count = 0, .group = &r11acidants3i},
/* 114 */ {.x = -56, .y = 1560, .action = spawnCharacters, .count = 0, .group = &r11acidants3j},
/* 115 */ {.x = -48, .y = 1552, .action = spawnCharacters, .count = 0, .group = &r11acidants3k},
/* 116 */ {.x = -40, .y = 1488, .action = spawnCharacters, .count = 0, .group = &r12wasp1c},
/* 117 */ {.x = -48, .y = 1472, .action = spawnCharacters, .count = 0, .group = &r12wasp1b},
/* 118 */ {.x = -56, .y = 1456, .action = spawnCharacters, .count = 0, .group = &r12wasp1a},
/* 119 */ {.x = -40, .y = 1416, .action = spawnCharacters, .count = 0, .group = &r12wasp3a},
/* 120 */ {.x = -32, .y = 1408, .action = spawnCharacters, .count = 0, .group = &r12wasp3b},
/* 121 */ {.x = -24, .y = 1400, .action = spawnCharacters, .count = 0, .group = &r12wasp3c},
/* 122 */ {.x = -56, .y = 1392, .action = spawnCharacters, .count = 0, .group = &r12wasp2a},
/* 123 */ {.x = -64, .y = 1384, .action = spawnCharacters, .count = 0, .group = &r12wasp2b},
/* 124 */ {.x = -72, .y = 1376, .action = spawnCharacters, .count = 0, .group = &r12wasp2c},
/* 125 */ {.x = -40, .y = 1368, .action = spawnCharacters, .count = 0, .group = &r12powerup},
/* 126 */ {.x = -16, .y = 1336, .action = spawnCharacters, .count = 0, .group = &r12wasp4b},
/* 127 */ {.x = -80, .y = 1336, .action = spawnCharacters, .count = 0, .group = &r12wasp4a},
/* 128 */ {.x = -96, .y = 1328, .action = spawnCharacters, .count = 0, .group = &r13acidants1},
/* 129 */ {.x = -32, .y = 1312, .action = spawnCharacters, .count = 0, .group = &r12wasp4d},
/* 130 */ {.x = -64, .y = 1312, .action = spawnCharacters, .count = 0, .group = &r12wasp4c},
/* 131 */ {.x = -48, .y = 1288, .action = spawnCharacters, .count = 0, .group = &r13beetle1},
/* 132 */ {.x = -64, .y = 1192, .action = spawnCharacters, .count = 0, .group = &r13fly1},
/* 133 */ {.x = -72, .y = 1184, .action = spawnCharacters, .count = 0, .group = &r13fly2},
/* 134 */ {.x = -48, .y = 1152, .action = spawnCharacters, .count = 0, .group = &r13fly3},
/* 135 */ {.x = -56, .y = 1144, .action = spawnCharacters, .count = 0, .group = &r14fly4},
/* 136 */ {.x = -48, .y = 1128, .action = spawnCharacters, .count = 0, .group = &r14acidants1},
/* 137 */ {.x = -24, .y = 1072, .action = spawnCharacters, .count = 0, .group = &r14beetles},
/* 138 */ {.x = -48, .y = 1064, .action = spawnCharacters, .count = 0, .group = &r14acidants2},
/* 139 */ {.x = -64, .y = 1064, .action = spawnCharacters, .count = 0, .group = &r14wasp1a},
/* 140 */ {.x = -72, .y = 1056, .action = spawnCharacters, .count = 0, .group = &r14wasp1b},
/* 141 */ {.x = -56, .y = 1032, .action = spawnCharacters, .count = 0, .group = &r14wasp2b},
/* 142 */ {.x = -48, .y = 1000, .action = spawnCharacters, .count = 0, .group = &r14acidants3},
/* 143 */ {.x = -136, .y = 1000, .action = spawnCharacters, .count = 0, .group = &r14powerup1},
/* 144 */ {.x = -48, .y = 992, .action = spawnCharacters, .count = 0, .group = &r14wasp2a},
/* 145 */ {.x = -88, .y = 976, .action = spawnCharacters, .count = 0, .group = &r14wasp3a},
/* 146 */ {.x = -48, .y = 968, .action = spawnCharacters, .count = 0, .group = &r14powerup2},
/* 147 */ {.x = -96, .y = 936, .action = spawnCharacters, .count = 0, .group = &r14wasp3b},
/* 148 */ {.x = -72, .y = 880, .action = spawnCharacters, .count = 0, .group = &r14wasp4b},
/* 149 */ {.x = -48, .y = 872, .action = spawnCharacters, .count = 0, .group = &r15powerup1},
/* 150 */ {.x = -88, .y = 872, .action = spawnCharacters, .count = 0, .group = &r14wasp4a},
/* 151 */ {.x = -104, .y = 864, .action = spawnCharacters, .count = 0, .group = &r14wasp4c},
/* 152 */ {.x = -104, .y = 816, .action = spawnCharacters, .count = 0, .group = &r14wasp5b},
/* 153 */ {.x = -88, .y = 808, .action = spawnCharacters, .count = 0, .group = &r14wasp5a},
/* 154 */ {.x = -136, .y = 808, .action = spawnCharacters, .count = 0, .group = &r15powerup2},
/* 155 */ {.x = -72, .y = 800, .action = spawnCharacters, .count = 0, .group = &r14wasp5c},
/* 156 */ {.x = -120, .y = 760, .action = spawnCharacters, .count = 0, .group = &r14wasp6a},
/* 157 */ {.x = -8, .y = 728, .action = spawnCharacters, .count = 0, .group = &Copy_of_r14wasp6a},
/* 158 */ {.x = -120, .y = 728, .action = spawnCharacters, .count = 0, .group = &r14wasp6b},
/* 159 */ {.x = -8, .y = 680, .action = spawnCharacters, .count = 0, .group = &Copy_of_r14wasp6b},
/* 160 */ {.x = -72, .y = 656, .action = spawnCharacters, .count = 0, .group = &r16acidants1},
/* 161 */ {.x = -32, .y = 608, .action = spawnCharacters, .count = 0, .group = &r16powerup},
/* 162 */ {.x = -56, .y = 592, .action = spawnCharacters, .count = 0, .group = &r16acidants2},
/* 163 */ {.x = -16, .y = 520, .action = spawnCharacters, .count = 0, .group = &r16powerup2},
/* 164 */ {.x = -40, .y = 424, .action = spawnCharacters, .count = 0, .group = &r17powerup},
/* 165 */ {.x = -104, .y = 408, .action = spawnCharacters, .count = 0, .group = &r17fly1b},
/* 166 */ {.x = -184, .y = 408, .action = spawnCharacters, .count = 0, .group = &r17fly1a},
/* 167 */ {.x = -120, .y = 384, .action = spawnCharacters, .count = 0, .group = &r17fly2b},
/* 168 */ {.x = -200, .y = 384, .action = spawnCharacters, .count = 0, .group = &r17fly2a},
/* 169 */ {.x = -104, .y = 344, .action = spawnCharacters, .count = 0, .group = &r17wasp1},
/* 170 */ {.x = -104, .y = 328, .action = spawnCharacters, .count = 0, .group = &r17wasp3},
/* 171 */ {.x = -104, .y = 312, .action = spawnCharacters, .count = 0, .group = &r17wasp5},
/* 172 */ {.x = -104, .y = 296, .action = spawnCharacters, .count = 0, .group = &r17wasp7},
/* 173 */ {.x = -104, .y = 280, .action = spawnCharacters, .count = 0, .group = &r17wasp9},
/* 174 */ {.x = -16, .y = 224, .action = spawnCharacters, .count = 0, .group = &waspboss},
/* 175 */ {.x = -152, .y = 208, .action = spawnCharacters, .count = 0, .group = &r18powerup2},
/* 176 */ {.x = -32, .y = 144, .action = stopStageScroll, .count = 0, .group = &waspboss},
/* 177 */ {.x = -184, .y = 144, .action = spawnCharacters, .count = 0, .group = &r18powerup3}
};
LevelObjectGroup *stage_caravan_groups[] = {
    &room1ants1,
    &room1ants2,
    &room1ants3,
    &room1ants4,
    &room1powerup,
    &room2ants1,
    &room2ants2,
    &room2powerup,
    &r3fly1,
    &room3fly3,
    &room3fly4,
    &r4r5ants,
    &r4fly1,
    &room4powerup,
    &room5fly1,
    &r5powerup,
    &r6ants,
    &room6fly,
    &room5bigant,
    &room6bigant,
    &room7alien1,
    &room7alien2,
    &room7alien3,
    &room8alien1,
    &room8alien2,
    &room8alien3,
    &room8alien4,
    &room8powerup,
    &room9powerup,
    &room9alienmind,
    &part2,
    &room10acidants,
    &room10acidants2,
    &r11acidants1a,
    &r11acidants1b,
    &r11acidants1c,
    &r11acidants1d,
    &r11acidants1e,
    &r11acidants1f,
    &r11acidants1g,
    &r11acidants1h,
    &room11acidants2a,
    &room11acidants2b,
    &r11acidants3a,
    &r11acidants3b,
    &r11acidants3c,
    &r11acidants3d,
    &r11acidants3e,
    &r11acidants3f,
    &r11acidants3g,
    &r11acidants3h,
    &r11acidants3i,
    &r11acidants3j,
    &r11acidants3k,
    &r11powerup,
    &r12wasp1a,
    &r12wasp1b,
    &r12wasp1c,
    &r12wasp2a,
    &r12wasp2b,
    &r12wasp2c,
    &r12wasp3a,
    &r12wasp3b,
    &r12wasp3c,
    &r12wasp4a,
    &r12wasp4b,
    &r12wasp4c,
    &r12wasp4d,
    &r12powerup,
    &r13acidants1,
    &r13beetle1,
    &r13fly1,
    &r13fly2,
    &r13fly3,
    &r14fly4,
    &r14beetles,
    &r14acidants1,
    &r14acidants2,
    &r14acidants3,
    &r14wasp1a,
    &r14wasp1b,
    &r14wasp2a,
    &r14wasp2b,
    &r14wasp3a,
    &r14wasp3b,
    &r14wasp4a,
    &r14wasp4b,
    &r14wasp4c,
    &r14wasp5a,
    &r14wasp5b,
    &r14wasp5c,
    &r14wasp6a,
    &r14wasp6b,
    &Copy_of_r14wasp6a,
    &Copy_of_r14wasp6b,
    &r14powerup1,
    &r14powerup2,
    &r15powerup2,
    &r15powerup1,
    &r16acidants1,
    &r16powerup,
    &r16acidants2,
    &r16powerup2,
    &r17powerup,
    &r17fly1a,
    &r17fly1b,
    &r17fly2a,
    &r17fly2b,
    &r17wasp1,
    &r17wasp3,
    &r17wasp5,
    &r17wasp7,
    &r17wasp9,
    &r18powerup2,
    &r18powerup3,
    &waspboss
};
