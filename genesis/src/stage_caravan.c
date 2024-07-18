#include "stage_caravan.h"
extern LevelObjectGroup room1ants1;
static const Path path2186 = {
.x = 264, .y = 4056, .numPoints = 4, .points = {
{
    .x = 0, .y = -40,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -40, .y = -40,
    .speedTo = 128, .distTo = 2560,
    .xVelTo = -128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -56, .y = -56,
    .speedTo = 128, .distTo = 1448,
    .xVelTo = -91, .yVelTo = -91,
    .numActions = 0,
    .actions = 0
},
{
    .x = -104, .y = -56,
    .speedTo = 128, .distTo = 3072,
    .xVelTo = -128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path path2187 = {
.x = 272, .y = 4064, .numPoints = 4, .points = {
{
    .x = 0, .y = -48,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -48, .y = -48,
    .speedTo = 128, .distTo = 3072,
    .xVelTo = -128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -72, .y = -72,
    .speedTo = 128, .distTo = 2172,
    .xVelTo = -91, .yVelTo = -91,
    .numActions = 0,
    .actions = 0
},
{
    .x = -104, .y = -72,
    .speedTo = 128, .distTo = 2048,
    .xVelTo = -128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path path2188 = {
.x = 280, .y = 4072, .numPoints = 4, .points = {
{
    .x = 0, .y = -56,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -56, .y = -56,
    .speedTo = 128, .distTo = 3584,
    .xVelTo = -128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -88, .y = -88,
    .speedTo = 128, .distTo = 2896,
    .xVelTo = -91, .yVelTo = -91,
    .numActions = 0,
    .actions = 0
},
{
    .x = -104, .y = -88,
    .speedTo = 128, .distTo = 1024,
    .xVelTo = -128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
}
}
};
static const GameObjectAction path2189_3_actions[] = {
{.action = faceRight, }
};
static const Path path2189 = {
.x = 288, .y = 4080, .numPoints = 5, .points = {
{
    .x = 0, .y = -64,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -64, .y = -64,
    .speedTo = 128, .distTo = 4096,
    .xVelTo = -128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -96, .y = -96,
    .speedTo = 128, .distTo = 2896,
    .xVelTo = -91, .yVelTo = -91,
    .numActions = 0,
    .actions = 0
},
{
    .x = -96, .y = -104,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 1,
    .actions = path2189_3_actions
},
{
    .x = -88, .y = -112,
    .speedTo = 128, .distTo = 724,
    .xVelTo = 90, .yVelTo = -91,
    .numActions = 0,
    .actions = 0
}
}
};
static const GameObjectAction path2190_3_actions[] = {
{.action = faceRight, }
};
static const Path path2190 = {
.x = 296, .y = 4088, .numPoints = 5, .points = {
{
    .x = 0, .y = -72,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -72, .y = -72,
    .speedTo = 128, .distTo = 4608,
    .xVelTo = -128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -96, .y = -96,
    .speedTo = 128, .distTo = 2172,
    .xVelTo = -91, .yVelTo = -91,
    .numActions = 0,
    .actions = 0
},
{
    .x = -96, .y = -104,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 1,
    .actions = path2190_3_actions
},
{
    .x = -88, .y = -112,
    .speedTo = 128, .distTo = 724,
    .xVelTo = 90, .yVelTo = -91,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path *room1ants1_paths[] = {
    &path2186,
    &path2187,
    &path2188,
    &path2189,
    &path2190
};
extern const LevelObject lobj2184;
extern const LevelObject lobj3858;
extern const LevelObject lobj3857;
extern const LevelObject lobj2181;
extern const LevelObject lobj2183;
const LevelObject lobj2184 = {
    .definition = &defAnt,
    .x = 296, .y = 4016,
    .palette = 0,
    .animInd = 0, .flags = 34816,
    .group = &room1ants1, .path = &path2190,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj3858 = {
    .definition = &defAnt,
    .x = 288, .y = 4016,
    .palette = 0,
    .animInd = 0, .flags = 34816,
    .group = &room1ants1, .path = &path2189,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj3857 = {
    .definition = &defAnt,
    .x = 272, .y = 4016,
    .palette = 0,
    .animInd = 0, .flags = 34816,
    .group = &room1ants1, .path = &path2187,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2181 = {
    .definition = &defAnt,
    .x = 264, .y = 4016,
    .palette = 0,
    .animInd = 0, .flags = 34816,
    .group = &room1ants1, .path = &path2186,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2183 = {
    .definition = &defAnt,
    .x = 280, .y = 4016,
    .palette = 0,
    .animInd = 0, .flags = 34816,
    .group = &room1ants1, .path = &path2188,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *room1ants1_objects[] = {
    &lobj2184,
    &lobj3858,
    &lobj3857,
    &lobj2181,
    &lobj2183
};
LevelObjectGroup room1ants1 = {
    .numPaths = 5, .paths = room1ants1_paths,
    .numObjects = 5, .objects = room1ants1_objects
};
extern LevelObjectGroup room1ants2;
static const Path path2199 = {
.x = -8, .y = 4032, .numPoints = 4, .points = {
{
    .x = 0, .y = -40,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 56, .y = -40,
    .speedTo = 128, .distTo = 3584,
    .xVelTo = 128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 72, .y = -56,
    .speedTo = 128, .distTo = 1448,
    .xVelTo = 90, .yVelTo = -91,
    .numActions = 0,
    .actions = 0
},
{
    .x = 104, .y = -56,
    .speedTo = 128, .distTo = 2048,
    .xVelTo = 128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path path2200 = {
.x = -16, .y = 4024, .numPoints = 4, .points = {
{
    .x = 0, .y = -32,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 56, .y = -32,
    .speedTo = 128, .distTo = 3584,
    .xVelTo = 128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 80, .y = -56,
    .speedTo = 128, .distTo = 2172,
    .xVelTo = 90, .yVelTo = -91,
    .numActions = 0,
    .actions = 0
},
{
    .x = 104, .y = -56,
    .speedTo = 128, .distTo = 1536,
    .xVelTo = 128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path path2201 = {
.x = -24, .y = 4016, .numPoints = 4, .points = {
{
    .x = 0, .y = -24,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 56, .y = -24,
    .speedTo = 128, .distTo = 3584,
    .xVelTo = 128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = -56,
    .speedTo = 128, .distTo = 2896,
    .xVelTo = 90, .yVelTo = -91,
    .numActions = 0,
    .actions = 0
},
{
    .x = 112, .y = -56,
    .speedTo = 128, .distTo = 1536,
    .xVelTo = 128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path path2202 = {
.x = -32, .y = 4024, .numPoints = 3, .points = {
{
    .x = 0, .y = -32,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 56, .y = -32,
    .speedTo = 128, .distTo = 3584,
    .xVelTo = 128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = -64,
    .speedTo = 128, .distTo = 2896,
    .xVelTo = 90, .yVelTo = -91,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path path2203 = {
.x = -40, .y = 4032, .numPoints = 4, .points = {
{
    .x = 0, .y = -40,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 56, .y = -40,
    .speedTo = 128, .distTo = 3584,
    .xVelTo = 128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = -72,
    .speedTo = 128, .distTo = 2896,
    .xVelTo = 90, .yVelTo = -91,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = -80,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path *room1ants2_paths[] = {
    &path2199,
    &path2200,
    &path2201,
    &path2202,
    &path2203
};
extern const LevelObject lobj3855;
extern const LevelObject lobj2196;
extern const LevelObject lobj2195;
extern const LevelObject lobj2194;
extern const LevelObject lobj3856;
const LevelObject lobj3855 = {
    .definition = &defAnt,
    .x = -32, .y = 3992,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room1ants2, .path = &path2202,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2196 = {
    .definition = &defAnt,
    .x = -8, .y = 3992,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room1ants2, .path = &path2199,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2195 = {
    .definition = &defAnt,
    .x = -40, .y = 3992,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room1ants2, .path = &path2203,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2194 = {
    .definition = &defAnt,
    .x = -24, .y = 3992,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room1ants2, .path = &path2201,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj3856 = {
    .definition = &defAnt,
    .x = -16, .y = 3992,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room1ants2, .path = &path2200,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *room1ants2_objects[] = {
    &lobj3855,
    &lobj2196,
    &lobj2195,
    &lobj2194,
    &lobj3856
};
LevelObjectGroup room1ants2 = {
    .numPaths = 5, .paths = room1ants2_paths,
    .numObjects = 5, .objects = room1ants2_objects
};
extern LevelObjectGroup room1ants3;
static const Path path2204 = {
.x = 0, .y = 3912, .numPoints = 8, .points = {
{
    .x = -8, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 0,
    .speedTo = 128, .distTo = 1024,
    .xVelTo = 128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 24, .y = -8,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = 114, .yVelTo = -58,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = -8,
    .speedTo = 128, .distTo = 4096,
    .xVelTo = 128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 136, .y = -32,
    .speedTo = 128, .distTo = 3434,
    .xVelTo = 114, .yVelTo = -58,
    .numActions = 0,
    .actions = 0
},
{
    .x = 200, .y = -32,
    .speedTo = 128, .distTo = 4096,
    .xVelTo = 128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 232, .y = -48,
    .speedTo = 128, .distTo = 2289,
    .xVelTo = 114, .yVelTo = -58,
    .numActions = 0,
    .actions = 0
},
{
    .x = 272, .y = -48,
    .speedTo = 128, .distTo = 2560,
    .xVelTo = 128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path *room1ants3_paths[] = {
    &path2204
};
extern const LevelObject lobj2205;
const LevelObject lobj2205 = {
    .definition = &defAnt,
    .x = -8, .y = 3912,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room1ants3, .path = &path2204,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *room1ants3_objects[] = {
    &lobj2205
};
LevelObjectGroup room1ants3 = {
    .numPaths = 1, .paths = room1ants3_paths,
    .numObjects = 1, .objects = room1ants3_objects
};
extern LevelObjectGroup room1ants4;
static const Path path2221 = {
.x = 264, .y = 3840, .numPoints = 6, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = 0,
    .speedTo = 128, .distTo = 2048,
    .xVelTo = -128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -64, .y = -16,
    .speedTo = 128, .distTo = 2289,
    .xVelTo = -115, .yVelTo = -58,
    .numActions = 0,
    .actions = 0
},
{
    .x = -168, .y = -16,
    .speedTo = 128, .distTo = 6656,
    .xVelTo = -128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -232, .y = -48,
    .speedTo = 128, .distTo = 4579,
    .xVelTo = -115, .yVelTo = -58,
    .numActions = 0,
    .actions = 0
},
{
    .x = -280, .y = -48,
    .speedTo = 128, .distTo = 3072,
    .xVelTo = -128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path path2253 = {
.x = 272, .y = 3880, .numPoints = 8, .points = {
{
    .x = -8, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -40, .y = 0,
    .speedTo = 128, .distTo = 2048,
    .xVelTo = -128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -72, .y = 16,
    .speedTo = 128, .distTo = 2289,
    .xVelTo = -115, .yVelTo = 57,
    .numActions = 0,
    .actions = 0
},
{
    .x = -144, .y = 16,
    .speedTo = 128, .distTo = 4608,
    .xVelTo = -128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -160, .y = 24,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = -115, .yVelTo = 57,
    .numActions = 0,
    .actions = 0
},
{
    .x = -248, .y = 24,
    .speedTo = 128, .distTo = 5632,
    .xVelTo = -128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -264, .y = 32,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = -115, .yVelTo = 57,
    .numActions = 0,
    .actions = 0
},
{
    .x = -280, .y = 32,
    .speedTo = 128, .distTo = 1024,
    .xVelTo = -128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path *room1ants4_paths[] = {
    &path2221,
    &path2253
};
extern const LevelObject lobj2223;
extern const LevelObject lobj2222;
const LevelObject lobj2223 = {
    .definition = &defAnt,
    .x = 264, .y = 3880,
    .palette = 0,
    .animInd = 0, .flags = 34816,
    .group = &room1ants4, .path = &path2253,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2222 = {
    .definition = &defAnt,
    .x = 264, .y = 3840,
    .palette = 0,
    .animInd = 0, .flags = 34816,
    .group = &room1ants4, .path = &path2221,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *room1ants4_objects[] = {
    &lobj2223,
    &lobj2222
};
LevelObjectGroup room1ants4 = {
    .numPaths = 2, .paths = room1ants4_paths,
    .numObjects = 2, .objects = room1ants4_objects
};
extern LevelObjectGroup room1powerup;
extern const LevelObject lobj2254;
const LevelObject lobj2254 = {
    .definition = &defHoneyPot,
    .x = 80, .y = 3752,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room1powerup, .path = 0,
    .pathIndex = 0, .child = 0, .interval = 0
};
static const LevelObject *room1powerup_objects[] = {
    &lobj2254
};
LevelObjectGroup room1powerup = {
    .numPaths = 0, .paths = 0,
    .numObjects = 1, .objects = room1powerup_objects
};
extern LevelObjectGroup room2ants1;
static const Path path3891 = {
.x = -8, .y = 3632, .numPoints = 2, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 80, .y = 24,
    .speedTo = 128, .distTo = 5345,
    .xVelTo = 122, .yVelTo = 36,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path path3892 = {
.x = -8, .y = 3616, .numPoints = 2, .points = {
{
    .x = 0, .y = -8,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = 24,
    .speedTo = 128, .distTo = 5992,
    .xVelTo = 120, .yVelTo = 43,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path path3893 = {
.x = 264, .y = 3672, .numPoints = 2, .points = {
{
    .x = 0, .y = -8,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -72, .y = -8,
    .speedTo = 128, .distTo = 4608,
    .xVelTo = -128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path path3894 = {
.x = 264, .y = 3656, .numPoints = 2, .points = {
{
    .x = 0, .y = -16,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -72, .y = -8,
    .speedTo = 128, .distTo = 4636,
    .xVelTo = -128, .yVelTo = 14,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path path3895 = {
.x = -8, .y = 3648, .numPoints = 2, .points = {
{
    .x = 0, .y = 8,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 72, .y = 24,
    .speedTo = 128, .distTo = 4720,
    .xVelTo = 124, .yVelTo = 27,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path path3896 = {
.x = 264, .y = 3688, .numPoints = 2, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -88, .y = -8,
    .speedTo = 128, .distTo = 5655,
    .xVelTo = -128, .yVelTo = -12,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path path3897 = {
.x = -8, .y = 3664, .numPoints = 2, .points = {
{
    .x = 0, .y = 16,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 72, .y = 24,
    .speedTo = 128, .distTo = 4636,
    .xVelTo = 127, .yVelTo = 14,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path path3898 = {
.x = 264, .y = 3704, .numPoints = 2, .points = {
{
    .x = 0, .y = 8,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -88, .y = -8,
    .speedTo = 128, .distTo = 5724,
    .xVelTo = -126, .yVelTo = -23,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path path3899 = {
.x = -8, .y = 3680, .numPoints = 2, .points = {
{
    .x = 0, .y = 24,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 80, .y = 24,
    .speedTo = 128, .distTo = 5120,
    .xVelTo = 128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path path3900 = {
.x = 264, .y = 3720, .numPoints = 2, .points = {
{
    .x = 0, .y = 16,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -88, .y = -8,
    .speedTo = 128, .distTo = 5837,
    .xVelTo = -124, .yVelTo = -34,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path *room2ants1_paths[] = {
    &path3891,
    &path3892,
    &path3893,
    &path3894,
    &path3895,
    &path3896,
    &path3897,
    &path3898,
    &path3899,
    &path3900
};
extern const LevelObject lobj3889;
extern const LevelObject lobj3887;
extern const LevelObject lobj3888;
extern const LevelObject lobj3885;
extern const LevelObject lobj3886;
extern const LevelObject lobj3882;
extern const LevelObject lobj3884;
extern const LevelObject lobj3883;
extern const LevelObject lobj3880;
extern const LevelObject lobj3881;
const LevelObject lobj3889 = {
    .definition = &defAnt,
    .x = 264, .y = 3736,
    .palette = 0,
    .animInd = 0, .flags = 34816,
    .group = &room2ants1, .path = &path3900,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj3887 = {
    .definition = &defAnt,
    .x = 264, .y = 3712,
    .palette = 0,
    .animInd = 0, .flags = 34816,
    .group = &room2ants1, .path = &path3898,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj3888 = {
    .definition = &defAnt,
    .x = -8, .y = 3704,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room2ants1, .path = &path3899,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj3885 = {
    .definition = &defAnt,
    .x = 264, .y = 3688,
    .palette = 0,
    .animInd = 0, .flags = 34816,
    .group = &room2ants1, .path = &path3896,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj3886 = {
    .definition = &defAnt,
    .x = -8, .y = 3680,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room2ants1, .path = &path3897,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj3882 = {
    .definition = &defAnt,
    .x = 264, .y = 3664,
    .palette = 0,
    .animInd = 0, .flags = 34816,
    .group = &room2ants1, .path = &path3893,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj3884 = {
    .definition = &defAnt,
    .x = -8, .y = 3656,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room2ants1, .path = &path3895,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj3883 = {
    .definition = &defAnt,
    .x = 264, .y = 3640,
    .palette = 0,
    .animInd = 0, .flags = 34816,
    .group = &room2ants1, .path = &path3894,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj3880 = {
    .definition = &defAnt,
    .x = -8, .y = 3632,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room2ants1, .path = &path3891,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj3881 = {
    .definition = &defAnt,
    .x = -8, .y = 3608,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room2ants1, .path = &path3892,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *room2ants1_objects[] = {
    &lobj3889,
    &lobj3887,
    &lobj3888,
    &lobj3885,
    &lobj3886,
    &lobj3882,
    &lobj3884,
    &lobj3883,
    &lobj3880,
    &lobj3881
};
LevelObjectGroup room2ants1 = {
    .numPaths = 10, .paths = room2ants1_paths,
    .numObjects = 10, .objects = room2ants1_objects
};
extern LevelObjectGroup room2ants2;
static const Path path3870 = {
.x = -8, .y = 3624, .numPoints = 2, .points = {
{
    .x = 0, .y = 16,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = 24,
    .speedTo = 128, .distTo = 5655,
    .xVelTo = 127, .yVelTo = 11,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path path3871 = {
.x = -8, .y = 3608, .numPoints = 2, .points = {
{
    .x = 0, .y = 8,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = 24,
    .speedTo = 128, .distTo = 5724,
    .xVelTo = 125, .yVelTo = 22,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path path3872 = {
.x = 264, .y = 3664, .numPoints = 2, .points = {
{
    .x = 0, .y = 8,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -72, .y = -8,
    .speedTo = 128, .distTo = 4720,
    .xVelTo = -125, .yVelTo = -28,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path path3873 = {
.x = 264, .y = 3648, .numPoints = 2, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -72, .y = -8,
    .speedTo = 128, .distTo = 4636,
    .xVelTo = -128, .yVelTo = -15,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path path3874 = {
.x = -8, .y = 3640, .numPoints = 2, .points = {
{
    .x = 0, .y = 24,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 72, .y = 24,
    .speedTo = 128, .distTo = 4608,
    .xVelTo = 128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path path3875 = {
.x = 264, .y = 3680, .numPoints = 2, .points = {
{
    .x = 0, .y = 16,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -80, .y = -8,
    .speedTo = 128, .distTo = 5345,
    .xVelTo = -123, .yVelTo = -37,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path path3876 = {
.x = -8, .y = 3656, .numPoints = 2, .points = {
{
    .x = 0, .y = 32,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 72, .y = 24,
    .speedTo = 128, .distTo = 4636,
    .xVelTo = 127, .yVelTo = -15,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path path3877 = {
.x = 264, .y = 3696, .numPoints = 2, .points = {
{
    .x = 0, .y = 24,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -88, .y = -8,
    .speedTo = 128, .distTo = 5992,
    .xVelTo = -121, .yVelTo = -44,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path path3878 = {
.x = -8, .y = 3672, .numPoints = 2, .points = {
{
    .x = 0, .y = 40,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 72, .y = 24,
    .speedTo = 128, .distTo = 4720,
    .xVelTo = 124, .yVelTo = -28,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path path3879 = {
.x = 264, .y = 3712, .numPoints = 2, .points = {
{
    .x = 0, .y = 32,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -88, .y = -8,
    .speedTo = 128, .distTo = 6186,
    .xVelTo = -117, .yVelTo = -53,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path *room2ants2_paths[] = {
    &path3870,
    &path3871,
    &path3872,
    &path3873,
    &path3874,
    &path3875,
    &path3876,
    &path3877,
    &path3878,
    &path3879
};
extern const LevelObject lobj3868;
extern const LevelObject lobj3866;
extern const LevelObject lobj3867;
extern const LevelObject lobj3864;
extern const LevelObject lobj3865;
extern const LevelObject lobj3861;
extern const LevelObject lobj3863;
extern const LevelObject lobj3862;
extern const LevelObject lobj3859;
extern const LevelObject lobj3860;
const LevelObject lobj3868 = {
    .definition = &defAnt,
    .x = 264, .y = 3744,
    .palette = 0,
    .animInd = 0, .flags = 34816,
    .group = &room2ants2, .path = &path3879,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj3866 = {
    .definition = &defAnt,
    .x = 264, .y = 3720,
    .palette = 0,
    .animInd = 0, .flags = 34816,
    .group = &room2ants2, .path = &path3877,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj3867 = {
    .definition = &defAnt,
    .x = -8, .y = 3712,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room2ants2, .path = &path3878,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj3864 = {
    .definition = &defAnt,
    .x = 264, .y = 3696,
    .palette = 0,
    .animInd = 0, .flags = 34816,
    .group = &room2ants2, .path = &path3875,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj3865 = {
    .definition = &defAnt,
    .x = -8, .y = 3688,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room2ants2, .path = &path3876,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj3861 = {
    .definition = &defAnt,
    .x = 264, .y = 3672,
    .palette = 0,
    .animInd = 0, .flags = 34816,
    .group = &room2ants2, .path = &path3872,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj3863 = {
    .definition = &defAnt,
    .x = -8, .y = 3664,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room2ants2, .path = &path3874,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj3862 = {
    .definition = &defAnt,
    .x = 264, .y = 3648,
    .palette = 0,
    .animInd = 0, .flags = 34816,
    .group = &room2ants2, .path = &path3873,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj3859 = {
    .definition = &defAnt,
    .x = -8, .y = 3640,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room2ants2, .path = &path3870,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj3860 = {
    .definition = &defAnt,
    .x = -8, .y = 3616,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room2ants2, .path = &path3871,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *room2ants2_objects[] = {
    &lobj3868,
    &lobj3866,
    &lobj3867,
    &lobj3864,
    &lobj3865,
    &lobj3861,
    &lobj3863,
    &lobj3862,
    &lobj3859,
    &lobj3860
};
LevelObjectGroup room2ants2 = {
    .numPaths = 10, .paths = room2ants2_paths,
    .numObjects = 10, .objects = room2ants2_objects
};
extern LevelObjectGroup room2powerup;
extern const LevelObject lobj2298;
const LevelObject lobj2298 = {
    .definition = &defHoneyPot,
    .x = 136, .y = 3568,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room2powerup, .path = 0,
    .pathIndex = 0, .child = 0, .interval = 0
};
static const LevelObject *room2powerup_objects[] = {
    &lobj2298
};
LevelObjectGroup room2powerup = {
    .numPaths = 0, .paths = 0,
    .numObjects = 1, .objects = room2powerup_objects
};
extern LevelObjectGroup r3fly1;
static const GameObjectAction path2303_0_actions[] = {
{.action = enterBackground, }
};
static const GameObjectAction path2303_3_actions[] = {
{.action = enterForeground, },
{.action = startShooting, .count = 3, .interval = 6}
};
static const GameObjectAction path2303_6_actions[] = {
{.action = startShooting, .count = 3, .interval = 6}
};
static const GameObjectAction path2303_8_actions[] = {
{.action = startShooting, .count = 3, .interval = 6}
};
static const GameObjectAction path2303_9_actions[] = {
{.action = PathPoint_SetSpeed, }
};
static const Path path2303 = {
.x = 0, .y = 3504, .numPoints = 12, .points = {
{
    .x = 64, .y = 112,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2303_0_actions
},
{
    .x = 64, .y = 96,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 72, .y = 80,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = 28, .yVelTo = -58,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = 72,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = 57, .yVelTo = -29,
    .numActions = 2,
    .actions = path2303_3_actions
},
{
    .x = 104, .y = 80,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = 57, .yVelTo = 28,
    .numActions = 0,
    .actions = 0
},
{
    .x = 112, .y = 96,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = 28, .yVelTo = 57,
    .numActions = 0,
    .actions = 0
},
{
    .x = 104, .y = 120,
    .speedTo = 64, .distTo = 1619,
    .xVelTo = -21, .yVelTo = 60,
    .numActions = 1,
    .actions = path2303_6_actions
},
{
    .x = 88, .y = 136,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = -46, .yVelTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = 64, .y = 144,
    .speedTo = 64, .distTo = 1619,
    .xVelTo = -61, .yVelTo = 20,
    .numActions = 1,
    .actions = path2303_8_actions
},
{
    .x = 40, .y = 136,
    .speedTo = 64, .distTo = 1619,
    .xVelTo = -61, .yVelTo = -21,
    .numActions = 1,
    .actions = path2303_9_actions
},
{
    .x = 16, .y = 96,
    .speedTo = 128, .distTo = 2985,
    .xVelTo = -66, .yVelTo = -110,
    .numActions = 0,
    .actions = 0
},
{
    .x = -24, .y = 0,
    .speedTo = 128, .distTo = 6656,
    .xVelTo = -50, .yVelTo = -119,
    .numActions = 0,
    .actions = 0
}
}
};
static const GameObjectAction path2304_0_actions[] = {
{.action = enterBackground, }
};
static const GameObjectAction path2304_3_actions[] = {
{.action = enterForeground, },
{.action = startShooting, .count = 3, .interval = 6}
};
static const GameObjectAction path2304_6_actions[] = {
{.action = startShooting, .count = 3, .interval = 6}
};
static const GameObjectAction path2304_8_actions[] = {
{.action = startShooting, .count = 3, .interval = 6}
};
static const GameObjectAction path2304_9_actions[] = {
{.action = PathPoint_SetSpeed, }
};
static const Path path2304 = {
.x = 224, .y = 3496, .numPoints = 12, .points = {
{
    .x = -32, .y = 120,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2304_0_actions
},
{
    .x = -32, .y = 104,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 0,
    .actions = 0
},
{
    .x = -40, .y = 88,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = -29, .yVelTo = -58,
    .numActions = 0,
    .actions = 0
},
{
    .x = -56, .y = 80,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = -58, .yVelTo = -29,
    .numActions = 2,
    .actions = path2304_3_actions
},
{
    .x = -72, .y = 88,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = -58, .yVelTo = 28,
    .numActions = 0,
    .actions = 0
},
{
    .x = -80, .y = 104,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = -29, .yVelTo = 57,
    .numActions = 0,
    .actions = 0
},
{
    .x = -72, .y = 128,
    .speedTo = 64, .distTo = 1619,
    .xVelTo = 20, .yVelTo = 60,
    .numActions = 1,
    .actions = path2304_6_actions
},
{
    .x = -56, .y = 144,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = 45, .yVelTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = 152,
    .speedTo = 64, .distTo = 1619,
    .xVelTo = 60, .yVelTo = 20,
    .numActions = 1,
    .actions = path2304_8_actions
},
{
    .x = -8, .y = 144,
    .speedTo = 64, .distTo = 1619,
    .xVelTo = 60, .yVelTo = -21,
    .numActions = 1,
    .actions = path2304_9_actions
},
{
    .x = 16, .y = 104,
    .speedTo = 128, .distTo = 2985,
    .xVelTo = 65, .yVelTo = -110,
    .numActions = 0,
    .actions = 0
},
{
    .x = 56, .y = 8,
    .speedTo = 128, .distTo = 6656,
    .xVelTo = 49, .yVelTo = -119,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path *r3fly1_paths[] = {
    &path2303,
    &path2304
};
extern const LevelObject lobj2301;
extern const LevelObject lobj2302;
const LevelObject lobj2301 = {
    .definition = &defFly,
    .x = 64, .y = 3616,
    .palette = 0,
    .animInd = 0, .flags = 0,
    .group = &r3fly1, .path = &path2303,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2302 = {
    .definition = &defFly,
    .x = 192, .y = 3616,
    .palette = 0,
    .animInd = 0, .flags = 2048,
    .group = &r3fly1, .path = &path2304,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r3fly1_objects[] = {
    &lobj2301,
    &lobj2302
};
LevelObjectGroup r3fly1 = {
    .numPaths = 2, .paths = r3fly1_paths,
    .numObjects = 2, .objects = r3fly1_objects
};
extern LevelObjectGroup room3fly3;
static const GameObjectAction path2314_1_actions[] = {
{.action = enterForeground, },
{.action = startShooting, .count = 3, .interval = 6}
};
static const GameObjectAction path2314_4_actions[] = {
{.action = startShooting, .count = 3, .interval = 6}
};
static const Path path2314 = {
.x = 0, .y = 3408, .numPoints = 10, .points = {
{
    .x = 104, .y = 88,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = 72,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = -46, .yVelTo = -46,
    .numActions = 2,
    .actions = path2314_1_actions
},
{
    .x = 80, .y = 72,
    .speedTo = 64, .distTo = 512,
    .xVelTo = -64, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 72, .y = 88,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = -29, .yVelTo = 57,
    .numActions = 0,
    .actions = 0
},
{
    .x = 64, .y = 112,
    .speedTo = 64, .distTo = 1619,
    .xVelTo = -21, .yVelTo = 60,
    .numActions = 1,
    .actions = path2314_4_actions
},
{
    .x = 56, .y = 120,
    .speedTo = 64, .distTo = 724,
    .xVelTo = -46, .yVelTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = 48, .y = 112,
    .speedTo = 64, .distTo = 724,
    .xVelTo = -46, .yVelTo = -46,
    .numActions = 0,
    .actions = 0
},
{
    .x = 40, .y = 88,
    .speedTo = 64, .distTo = 1619,
    .xVelTo = -21, .yVelTo = -61,
    .numActions = 0,
    .actions = 0
},
{
    .x = 32, .y = 72,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = -29, .yVelTo = -58,
    .numActions = 0,
    .actions = 0
},
{
    .x = -40, .y = 0,
    .speedTo = 64, .distTo = 6516,
    .xVelTo = -46, .yVelTo = -46,
    .numActions = 0,
    .actions = 0
}
}
};
static const GameObjectAction path2315_1_actions[] = {
{.action = enterForeground, },
{.action = startShooting, .count = 3, .interval = 6}
};
static const GameObjectAction path2315_4_actions[] = {
{.action = startShooting, .count = 3, .interval = 6}
};
static const Path path2315 = {
.x = 224, .y = 3400, .numPoints = 10, .points = {
{
    .x = -72, .y = 96,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -56, .y = 80,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = 45, .yVelTo = -46,
    .numActions = 2,
    .actions = path2315_1_actions
},
{
    .x = -48, .y = 80,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 64, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -40, .y = 96,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = 28, .yVelTo = 57,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = 120,
    .speedTo = 64, .distTo = 1619,
    .xVelTo = 20, .yVelTo = 60,
    .numActions = 1,
    .actions = path2315_4_actions
},
{
    .x = -24, .y = 128,
    .speedTo = 64, .distTo = 724,
    .xVelTo = 45, .yVelTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = 120,
    .speedTo = 64, .distTo = 724,
    .xVelTo = 45, .yVelTo = -46,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 96,
    .speedTo = 64, .distTo = 1619,
    .xVelTo = 20, .yVelTo = -61,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 80,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = 28, .yVelTo = -58,
    .numActions = 0,
    .actions = 0
},
{
    .x = 72, .y = 8,
    .speedTo = 64, .distTo = 6516,
    .xVelTo = 45, .yVelTo = -46,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path *room3fly3_paths[] = {
    &path2314,
    &path2315
};
extern const LevelObject lobj2312;
extern const LevelObject lobj2313;
const LevelObject lobj2312 = {
    .definition = &defFly,
    .x = 104, .y = 3496,
    .palette = 0,
    .animInd = 0, .flags = 0,
    .group = &room3fly3, .path = &path2314,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2313 = {
    .definition = &defFly,
    .x = 152, .y = 3496,
    .palette = 0,
    .animInd = 0, .flags = 2048,
    .group = &room3fly3, .path = &path2315,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *room3fly3_objects[] = {
    &lobj2312,
    &lobj2313
};
LevelObjectGroup room3fly3 = {
    .numPaths = 2, .paths = room3fly3_paths,
    .numObjects = 2, .objects = room3fly3_objects
};
extern LevelObjectGroup room3fly4;
static const GameObjectAction path2323_2_actions[] = {
{.action = enterForeground, },
{.action = startShooting, .count = 3, .interval = 6}
};
static const GameObjectAction path2323_5_actions[] = {
{.action = startShooting, .count = 3, .interval = 6}
};
static const GameObjectAction path2323_7_actions[] = {
{.action = PathPoint_SetSpeed, }
};
static const Path path2323 = {
.x = -32, .y = 3560, .numPoints = 9, .points = {
{
    .x = 72, .y = -16,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 64, .y = -32,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = -29, .yVelTo = -58,
    .numActions = 0,
    .actions = 0
},
{
    .x = 64, .y = -56,
    .speedTo = 64, .distTo = 1536,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 2,
    .actions = path2323_2_actions
},
{
    .x = 72, .y = -72,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = 28, .yVelTo = -58,
    .numActions = 0,
    .actions = 0
},
{
    .x = 80, .y = -88,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = 28, .yVelTo = -58,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = -112,
    .speedTo = 64, .distTo = 1619,
    .xVelTo = 20, .yVelTo = -61,
    .numActions = 1,
    .actions = path2323_5_actions
},
{
    .x = 80, .y = -128,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = -29, .yVelTo = -58,
    .numActions = 0,
    .actions = 0
},
{
    .x = 72, .y = -136,
    .speedTo = 64, .distTo = 724,
    .xVelTo = -46, .yVelTo = -46,
    .numActions = 1,
    .actions = path2323_7_actions
},
{
    .x = 8, .y = -200,
    .speedTo = 128, .distTo = 5792,
    .xVelTo = -91, .yVelTo = -91,
    .numActions = 0,
    .actions = 0
}
}
};
static const GameObjectAction path2324_2_actions[] = {
{.action = enterForeground, },
{.action = startShooting, .count = 3, .interval = 6}
};
static const GameObjectAction path2324_5_actions[] = {
{.action = startShooting, .count = 3, .interval = 6}
};
static const GameObjectAction path2324_7_actions[] = {
{.action = PathPoint_SetSpeed, }
};
static const Path path2324 = {
.x = 288, .y = 3560, .numPoints = 9, .points = {
{
    .x = -72, .y = -16,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -64, .y = -32,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = 28, .yVelTo = -58,
    .numActions = 0,
    .actions = 0
},
{
    .x = -64, .y = -56,
    .speedTo = 64, .distTo = 1536,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 2,
    .actions = path2324_2_actions
},
{
    .x = -72, .y = -72,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = -29, .yVelTo = -58,
    .numActions = 0,
    .actions = 0
},
{
    .x = -80, .y = -88,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = -29, .yVelTo = -58,
    .numActions = 0,
    .actions = 0
},
{
    .x = -88, .y = -112,
    .speedTo = 64, .distTo = 1619,
    .xVelTo = -21, .yVelTo = -61,
    .numActions = 1,
    .actions = path2324_5_actions
},
{
    .x = -80, .y = -128,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = 28, .yVelTo = -58,
    .numActions = 0,
    .actions = 0
},
{
    .x = -72, .y = -136,
    .speedTo = 64, .distTo = 724,
    .xVelTo = 45, .yVelTo = -46,
    .numActions = 1,
    .actions = path2324_7_actions
},
{
    .x = -8, .y = -200,
    .speedTo = 128, .distTo = 5792,
    .xVelTo = 90, .yVelTo = -91,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path *room3fly4_paths[] = {
    &path2323,
    &path2324
};
extern const LevelObject lobj2321;
extern const LevelObject lobj2322;
const LevelObject lobj2321 = {
    .definition = &defFly,
    .x = 40, .y = 3544,
    .palette = 0,
    .animInd = 0, .flags = 0,
    .group = &room3fly4, .path = &path2323,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2322 = {
    .definition = &defFly,
    .x = 216, .y = 3544,
    .palette = 0,
    .animInd = 0, .flags = 2048,
    .group = &room3fly4, .path = &path2324,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *room3fly4_objects[] = {
    &lobj2321,
    &lobj2322
};
LevelObjectGroup room3fly4 = {
    .numPaths = 2, .paths = room3fly4_paths,
    .numObjects = 2, .objects = room3fly4_objects
};
extern LevelObjectGroup r4r5ants;
static const GameObjectAction path2373_5_actions[] = {
{.action = faceRight, }
};
static const GameObjectAction path2373_8_actions[] = {
{.action = enterBackground, }
};
static const GameObjectAction path2373_9_actions[] = {
{.action = setSpriteHidden, }
};
static const GameObjectAction path2373_11_actions[] = {
{.action = faceLeft, }
};
static const GameObjectAction path2373_13_actions[] = {
{.action = setSpriteVisible, }
};
static const GameObjectAction path2373_14_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path2373_17_actions[] = {
{.action = faceRight, }
};
static const GameObjectAction path2373_20_actions[] = {
{.action = enterBackground, }
};
static const GameObjectAction path2373_21_actions[] = {
{.action = setSpriteHidden, }
};
static const GameObjectAction path2373_23_actions[] = {
{.action = faceLeft, }
};
static const GameObjectAction path2373_25_actions[] = {
{.action = setSpriteVisible, }
};
static const GameObjectAction path2373_26_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path2373_29_actions[] = {
{.action = faceRight, }
};
static const GameObjectAction path2373_32_actions[] = {
{.action = enterBackground, }
};
static const GameObjectAction path2373_33_actions[] = {
{.action = setSpriteHidden, }
};
static const GameObjectAction path2373_34_actions[] = {
{.action = markDisappear, }
};
static const Path path2373 = {
.x = 48, .y = 2936, .numPoints = 35, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -12, .y = 12,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = -91, .yVelTo = 90,
    .numActions = 0,
    .actions = 0
},
{
    .x = -20, .y = 28,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = -58, .yVelTo = 114,
    .numActions = 0,
    .actions = 0
},
{
    .x = -12, .y = 44,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = 57, .yVelTo = 114,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 56,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = 90, .yVelTo = 90,
    .numActions = 0,
    .actions = 0
},
{
    .x = 16, .y = 60,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = 124, .yVelTo = 31,
    .numActions = 1,
    .actions = path2373_5_actions
},
{
    .x = 32, .y = 64,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = 124, .yVelTo = 31,
    .numActions = 0,
    .actions = 0
},
{
    .x = 44, .y = 76,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = 90, .yVelTo = 90,
    .numActions = 0,
    .actions = 0
},
{
    .x = 52, .y = 92,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = 57, .yVelTo = 114,
    .numActions = 1,
    .actions = path2373_8_actions
},
{
    .x = 44, .y = 108,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = -58, .yVelTo = 114,
    .numActions = 1,
    .actions = path2373_9_actions
},
{
    .x = 32, .y = 120,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = -91, .yVelTo = 90,
    .numActions = 0,
    .actions = 0
},
{
    .x = 16, .y = 124,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = -125, .yVelTo = 31,
    .numActions = 1,
    .actions = path2373_11_actions
},
{
    .x = 0, .y = 128,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = -125, .yVelTo = 31,
    .numActions = 0,
    .actions = 0
},
{
    .x = -12, .y = 140,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = -91, .yVelTo = 90,
    .numActions = 1,
    .actions = path2373_13_actions
},
{
    .x = -20, .y = 156,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = -58, .yVelTo = 114,
    .numActions = 1,
    .actions = path2373_14_actions
},
{
    .x = -12, .y = 172,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = 57, .yVelTo = 114,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 184,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = 90, .yVelTo = 90,
    .numActions = 0,
    .actions = 0
},
{
    .x = 16, .y = 188,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = 124, .yVelTo = 31,
    .numActions = 1,
    .actions = path2373_17_actions
},
{
    .x = 32, .y = 192,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = 124, .yVelTo = 31,
    .numActions = 0,
    .actions = 0
},
{
    .x = 44, .y = 204,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = 90, .yVelTo = 90,
    .numActions = 0,
    .actions = 0
},
{
    .x = 52, .y = 220,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = 57, .yVelTo = 114,
    .numActions = 1,
    .actions = path2373_20_actions
},
{
    .x = 44, .y = 236,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = -58, .yVelTo = 114,
    .numActions = 1,
    .actions = path2373_21_actions
},
{
    .x = 32, .y = 248,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = -91, .yVelTo = 90,
    .numActions = 0,
    .actions = 0
},
{
    .x = 16, .y = 252,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = -125, .yVelTo = 31,
    .numActions = 1,
    .actions = path2373_23_actions
},
{
    .x = 0, .y = 256,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = -125, .yVelTo = 31,
    .numActions = 0,
    .actions = 0
},
{
    .x = -12, .y = 268,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = -91, .yVelTo = 90,
    .numActions = 1,
    .actions = path2373_25_actions
},
{
    .x = -20, .y = 284,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = -58, .yVelTo = 114,
    .numActions = 1,
    .actions = path2373_26_actions
},
{
    .x = -12, .y = 300,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = 57, .yVelTo = 114,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 312,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = 90, .yVelTo = 90,
    .numActions = 0,
    .actions = 0
},
{
    .x = 16, .y = 316,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = 124, .yVelTo = 31,
    .numActions = 1,
    .actions = path2373_29_actions
},
{
    .x = 32, .y = 320,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = 124, .yVelTo = 31,
    .numActions = 0,
    .actions = 0
},
{
    .x = 44, .y = 332,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = 90, .yVelTo = 90,
    .numActions = 0,
    .actions = 0
},
{
    .x = 52, .y = 348,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = 57, .yVelTo = 114,
    .numActions = 1,
    .actions = path2373_32_actions
},
{
    .x = 44, .y = 364,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = -58, .yVelTo = 114,
    .numActions = 1,
    .actions = path2373_33_actions
},
{
    .x = 32, .y = 376,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = -91, .yVelTo = 90,
    .numActions = 1,
    .actions = path2373_34_actions
}
}
};
static const GameObjectAction path3723_5_actions[] = {
{.action = faceLeft, }
};
static const GameObjectAction path3723_8_actions[] = {
{.action = enterBackground, }
};
static const GameObjectAction path3723_9_actions[] = {
{.action = setSpriteHidden, }
};
static const GameObjectAction path3723_11_actions[] = {
{.action = faceRight, }
};
static const GameObjectAction path3723_13_actions[] = {
{.action = setSpriteVisible, }
};
static const GameObjectAction path3723_14_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path3723_17_actions[] = {
{.action = faceLeft, }
};
static const GameObjectAction path3723_20_actions[] = {
{.action = enterBackground, }
};
static const GameObjectAction path3723_21_actions[] = {
{.action = setSpriteHidden, }
};
static const GameObjectAction path3723_23_actions[] = {
{.action = faceRight, }
};
static const GameObjectAction path3723_25_actions[] = {
{.action = setSpriteVisible, }
};
static const GameObjectAction path3723_26_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path3723_29_actions[] = {
{.action = faceLeft, }
};
static const GameObjectAction path3723_32_actions[] = {
{.action = enterBackground, }
};
static const GameObjectAction path3723_33_actions[] = {
{.action = setSpriteHidden, }
};
static const GameObjectAction path3723_34_actions[] = {
{.action = markDisappear, }
};
static const Path path3723 = {
.x = 208, .y = 2936, .numPoints = 35, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 12, .y = 12,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = 90, .yVelTo = 90,
    .numActions = 0,
    .actions = 0
},
{
    .x = 20, .y = 28,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = 57, .yVelTo = 114,
    .numActions = 0,
    .actions = 0
},
{
    .x = 12, .y = 44,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = -58, .yVelTo = 114,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 56,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = -91, .yVelTo = 90,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = 60,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = -125, .yVelTo = 31,
    .numActions = 1,
    .actions = path3723_5_actions
},
{
    .x = -32, .y = 64,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = -125, .yVelTo = 31,
    .numActions = 0,
    .actions = 0
},
{
    .x = -44, .y = 76,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = -91, .yVelTo = 90,
    .numActions = 0,
    .actions = 0
},
{
    .x = -52, .y = 92,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = -58, .yVelTo = 114,
    .numActions = 1,
    .actions = path3723_8_actions
},
{
    .x = -44, .y = 108,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = 57, .yVelTo = 114,
    .numActions = 1,
    .actions = path3723_9_actions
},
{
    .x = -32, .y = 120,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = 90, .yVelTo = 90,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = 124,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = 124, .yVelTo = 31,
    .numActions = 1,
    .actions = path3723_11_actions
},
{
    .x = 0, .y = 128,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = 124, .yVelTo = 31,
    .numActions = 0,
    .actions = 0
},
{
    .x = 12, .y = 140,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = 90, .yVelTo = 90,
    .numActions = 1,
    .actions = path3723_13_actions
},
{
    .x = 20, .y = 156,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = 57, .yVelTo = 114,
    .numActions = 1,
    .actions = path3723_14_actions
},
{
    .x = 12, .y = 172,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = -58, .yVelTo = 114,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 184,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = -91, .yVelTo = 90,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = 188,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = -125, .yVelTo = 31,
    .numActions = 1,
    .actions = path3723_17_actions
},
{
    .x = -32, .y = 192,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = -125, .yVelTo = 31,
    .numActions = 0,
    .actions = 0
},
{
    .x = -44, .y = 204,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = -91, .yVelTo = 90,
    .numActions = 0,
    .actions = 0
},
{
    .x = -52, .y = 220,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = -58, .yVelTo = 114,
    .numActions = 1,
    .actions = path3723_20_actions
},
{
    .x = -44, .y = 236,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = 57, .yVelTo = 114,
    .numActions = 1,
    .actions = path3723_21_actions
},
{
    .x = -32, .y = 248,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = 90, .yVelTo = 90,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = 252,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = 124, .yVelTo = 31,
    .numActions = 1,
    .actions = path3723_23_actions
},
{
    .x = 0, .y = 256,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = 124, .yVelTo = 31,
    .numActions = 0,
    .actions = 0
},
{
    .x = 12, .y = 268,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = 90, .yVelTo = 90,
    .numActions = 1,
    .actions = path3723_25_actions
},
{
    .x = 20, .y = 284,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = 57, .yVelTo = 114,
    .numActions = 1,
    .actions = path3723_26_actions
},
{
    .x = 12, .y = 300,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = -58, .yVelTo = 114,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 312,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = -91, .yVelTo = 90,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = 316,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = -125, .yVelTo = 31,
    .numActions = 1,
    .actions = path3723_29_actions
},
{
    .x = -32, .y = 320,
    .speedTo = 128, .distTo = 1055,
    .xVelTo = -125, .yVelTo = 31,
    .numActions = 0,
    .actions = 0
},
{
    .x = -44, .y = 332,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = -91, .yVelTo = 90,
    .numActions = 0,
    .actions = 0
},
{
    .x = -52, .y = 348,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = -58, .yVelTo = 114,
    .numActions = 1,
    .actions = path3723_32_actions
},
{
    .x = -44, .y = 364,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = 57, .yVelTo = 114,
    .numActions = 1,
    .actions = path3723_33_actions
},
{
    .x = -32, .y = 376,
    .speedTo = 128, .distTo = 1086,
    .xVelTo = 90, .yVelTo = 90,
    .numActions = 1,
    .actions = path3723_34_actions
}
}
};
static const Path *r4r5ants_paths[] = {
    &path2373,
    &path3723
};
extern const LevelObject lobj3682;
extern const LevelObject lobj3688;
extern const LevelObject lobj3617;
extern const LevelObject lobj3690;
extern const LevelObject lobj3681;
extern const LevelObject lobj3691;
extern const LevelObject lobj3692;
extern const LevelObject lobj3616;
extern const LevelObject lobj3680;
extern const LevelObject lobj3693;
extern const LevelObject lobj3695;
extern const LevelObject lobj3615;
extern const LevelObject lobj3696;
extern const LevelObject lobj3679;
extern const LevelObject lobj3614;
extern const LevelObject lobj3698;
extern const LevelObject lobj3699;
extern const LevelObject lobj3678;
extern const LevelObject lobj3700;
extern const LevelObject lobj3613;
extern const LevelObject lobj3677;
extern const LevelObject lobj3701;
extern const LevelObject lobj3611;
extern const LevelObject lobj3703;
extern const LevelObject lobj3704;
extern const LevelObject lobj3676;
extern const LevelObject lobj3610;
extern const LevelObject lobj3706;
extern const LevelObject lobj3675;
extern const LevelObject lobj3707;
extern const LevelObject lobj3708;
extern const LevelObject lobj3609;
extern const LevelObject lobj3709;
extern const LevelObject lobj3674;
extern const LevelObject lobj3608;
extern const LevelObject lobj3711;
extern const LevelObject lobj3673;
extern const LevelObject lobj3712;
extern const LevelObject lobj3607;
extern const LevelObject lobj3714;
extern const LevelObject lobj3672;
extern const LevelObject lobj3715;
extern const LevelObject lobj3716;
extern const LevelObject lobj3606;
extern const LevelObject lobj3717;
extern const LevelObject lobj3671;
extern const LevelObject lobj3719;
extern const LevelObject lobj3605;
extern const LevelObject lobj3670;
extern const LevelObject lobj3720;
extern const LevelObject lobj3721;
extern const LevelObject lobj3604;
extern const LevelObject lobj3802;
extern const LevelObject lobj3683;
const LevelObject lobj3682 = {
    .definition = &defAnt,
    .x = 36, .y = 3236,
    .palette = 0,
    .animInd = 1, .flags = 34816,
    .group = &r4r5ants, .path = &path2373,
    .pathIndex = 28, .child = 0, .interval = 0
};
const LevelObject lobj3688 = {
    .definition = &defAnt,
    .x = 220, .y = 3236,
    .palette = 0,
    .animInd = 1, .flags = 32768,
    .group = &r4r5ants, .path = &path3723,
    .pathIndex = 28, .child = 0, .interval = 0
};
const LevelObject lobj3617 = {
    .definition = &defAnt,
    .x = 28, .y = 3220,
    .palette = 0,
    .animInd = 1, .flags = 34816,
    .group = &r4r5ants, .path = &path2373,
    .pathIndex = 27, .child = 0, .interval = 0
};
const LevelObject lobj3690 = {
    .definition = &defAnt,
    .x = 228, .y = 3220,
    .palette = 0,
    .animInd = 1, .flags = 32768,
    .group = &r4r5ants, .path = &path3723,
    .pathIndex = 27, .child = 0, .interval = 0
};
const LevelObject lobj3681 = {
    .definition = &defAnt,
    .x = 36, .y = 3204,
    .palette = 0,
    .animInd = 1, .flags = 2048,
    .group = &r4r5ants, .path = &path2373,
    .pathIndex = 26, .child = 0, .interval = 0
};
const LevelObject lobj3691 = {
    .definition = &defAnt,
    .x = 220, .y = 3204,
    .palette = 0,
    .animInd = 1, .flags = 0,
    .group = &r4r5ants, .path = &path3723,
    .pathIndex = 26, .child = 0, .interval = 0
};
const LevelObject lobj3692 = {
    .definition = &defAnt,
    .x = 208, .y = 3192,
    .palette = 0,
    .animInd = 1, .flags = 0,
    .group = &r4r5ants, .path = &path3723,
    .pathIndex = 25, .child = 0, .interval = 0
};
const LevelObject lobj3616 = {
    .definition = &defAnt,
    .x = 48, .y = 3192,
    .palette = 0,
    .animInd = 1, .flags = 2048,
    .group = &r4r5ants, .path = &path2373,
    .pathIndex = 25, .child = 0, .interval = 0
};
const LevelObject lobj3680 = {
    .definition = &defAnt,
    .x = 64, .y = 3188,
    .palette = 0,
    .animInd = 1, .flags = 2048,
    .group = &r4r5ants, .path = &path2373,
    .pathIndex = 24, .child = 0, .interval = 0
};
const LevelObject lobj3693 = {
    .definition = &defAnt,
    .x = 192, .y = 3188,
    .palette = 0,
    .animInd = 1, .flags = 0,
    .group = &r4r5ants, .path = &path3723,
    .pathIndex = 24, .child = 0, .interval = 0
};
const LevelObject lobj3695 = {
    .definition = &defAnt,
    .x = 176, .y = 3184,
    .palette = 0,
    .animInd = 1, .flags = 2048,
    .group = &r4r5ants, .path = &path3723,
    .pathIndex = 23, .child = 0, .interval = 0
};
const LevelObject lobj3615 = {
    .definition = &defAnt,
    .x = 80, .y = 3184,
    .palette = 0,
    .animInd = 1, .flags = 0,
    .group = &r4r5ants, .path = &path2373,
    .pathIndex = 23, .child = 0, .interval = 0
};
const LevelObject lobj3696 = {
    .definition = &defAnt,
    .x = 164, .y = 3172,
    .palette = 0,
    .animInd = 1, .flags = 2048,
    .group = &r4r5ants, .path = &path3723,
    .pathIndex = 22, .child = 0, .interval = 0
};
const LevelObject lobj3679 = {
    .definition = &defAnt,
    .x = 92, .y = 3172,
    .palette = 0,
    .animInd = 1, .flags = 0,
    .group = &r4r5ants, .path = &path2373,
    .pathIndex = 22, .child = 0, .interval = 0
};
const LevelObject lobj3614 = {
    .definition = &defAnt,
    .x = 100, .y = 3156,
    .palette = 0,
    .animInd = 1, .flags = 0,
    .group = &r4r5ants, .path = &path2373,
    .pathIndex = 21, .child = 0, .interval = 0
};
const LevelObject lobj3698 = {
    .definition = &defAnt,
    .x = 156, .y = 3156,
    .palette = 0,
    .animInd = 1, .flags = 2048,
    .group = &r4r5ants, .path = &path3723,
    .pathIndex = 21, .child = 0, .interval = 0
};
const LevelObject lobj3699 = {
    .definition = &defAnt,
    .x = 164, .y = 3140,
    .palette = 0,
    .animInd = 1, .flags = 34816,
    .group = &r4r5ants, .path = &path3723,
    .pathIndex = 20, .child = 0, .interval = 0
};
const LevelObject lobj3678 = {
    .definition = &defAnt,
    .x = 92, .y = 3140,
    .palette = 0,
    .animInd = 1, .flags = 32768,
    .group = &r4r5ants, .path = &path2373,
    .pathIndex = 20, .child = 0, .interval = 0
};
const LevelObject lobj3700 = {
    .definition = &defAnt,
    .x = 176, .y = 3128,
    .palette = 0,
    .animInd = 1, .flags = 34816,
    .group = &r4r5ants, .path = &path3723,
    .pathIndex = 19, .child = 0, .interval = 0
};
const LevelObject lobj3613 = {
    .definition = &defAnt,
    .x = 80, .y = 3128,
    .palette = 0,
    .animInd = 1, .flags = 32768,
    .group = &r4r5ants, .path = &path2373,
    .pathIndex = 19, .child = 0, .interval = 0
};
const LevelObject lobj3677 = {
    .definition = &defAnt,
    .x = 64, .y = 3124,
    .palette = 0,
    .animInd = 1, .flags = 32768,
    .group = &r4r5ants, .path = &path2373,
    .pathIndex = 18, .child = 0, .interval = 0
};
const LevelObject lobj3701 = {
    .definition = &defAnt,
    .x = 192, .y = 3124,
    .palette = 0,
    .animInd = 1, .flags = 34816,
    .group = &r4r5ants, .path = &path3723,
    .pathIndex = 18, .child = 0, .interval = 0
};
const LevelObject lobj3611 = {
    .definition = &defAnt,
    .x = 48, .y = 3120,
    .palette = 0,
    .animInd = 1, .flags = 34816,
    .group = &r4r5ants, .path = &path2373,
    .pathIndex = 17, .child = 0, .interval = 0
};
const LevelObject lobj3703 = {
    .definition = &defAnt,
    .x = 208, .y = 3120,
    .palette = 0,
    .animInd = 1, .flags = 32768,
    .group = &r4r5ants, .path = &path3723,
    .pathIndex = 17, .child = 0, .interval = 0
};
const LevelObject lobj3704 = {
    .definition = &defAnt,
    .x = 220, .y = 3108,
    .palette = 0,
    .animInd = 1, .flags = 32768,
    .group = &r4r5ants, .path = &path3723,
    .pathIndex = 16, .child = 0, .interval = 0
};
const LevelObject lobj3676 = {
    .definition = &defAnt,
    .x = 36, .y = 3108,
    .palette = 0,
    .animInd = 1, .flags = 34816,
    .group = &r4r5ants, .path = &path2373,
    .pathIndex = 16, .child = 0, .interval = 0
};
const LevelObject lobj3610 = {
    .definition = &defAnt,
    .x = 28, .y = 3092,
    .palette = 0,
    .animInd = 1, .flags = 34816,
    .group = &r4r5ants, .path = &path2373,
    .pathIndex = 15, .child = 0, .interval = 0
};
const LevelObject lobj3706 = {
    .definition = &defAnt,
    .x = 228, .y = 3092,
    .palette = 0,
    .animInd = 1, .flags = 32768,
    .group = &r4r5ants, .path = &path3723,
    .pathIndex = 15, .child = 0, .interval = 0
};
const LevelObject lobj3675 = {
    .definition = &defAnt,
    .x = 36, .y = 3076,
    .palette = 0,
    .animInd = 1, .flags = 2048,
    .group = &r4r5ants, .path = &path2373,
    .pathIndex = 14, .child = 0, .interval = 0
};
const LevelObject lobj3707 = {
    .definition = &defAnt,
    .x = 220, .y = 3076,
    .palette = 0,
    .animInd = 1, .flags = 0,
    .group = &r4r5ants, .path = &path3723,
    .pathIndex = 14, .child = 0, .interval = 0
};
const LevelObject lobj3708 = {
    .definition = &defAnt,
    .x = 208, .y = 3064,
    .palette = 0,
    .animInd = 1, .flags = 0,
    .group = &r4r5ants, .path = &path3723,
    .pathIndex = 13, .child = 0, .interval = 0
};
const LevelObject lobj3609 = {
    .definition = &defAnt,
    .x = 48, .y = 3064,
    .palette = 0,
    .animInd = 1, .flags = 2048,
    .group = &r4r5ants, .path = &path2373,
    .pathIndex = 13, .child = 0, .interval = 0
};
const LevelObject lobj3709 = {
    .definition = &defAnt,
    .x = 192, .y = 3060,
    .palette = 0,
    .animInd = 1, .flags = 0,
    .group = &r4r5ants, .path = &path3723,
    .pathIndex = 12, .child = 0, .interval = 0
};
const LevelObject lobj3674 = {
    .definition = &defAnt,
    .x = 64, .y = 3060,
    .palette = 0,
    .animInd = 1, .flags = 2048,
    .group = &r4r5ants, .path = &path2373,
    .pathIndex = 12, .child = 0, .interval = 0
};
const LevelObject lobj3608 = {
    .definition = &defAnt,
    .x = 80, .y = 3056,
    .palette = 0,
    .animInd = 1, .flags = 0,
    .group = &r4r5ants, .path = &path2373,
    .pathIndex = 11, .child = 0, .interval = 0
};
const LevelObject lobj3711 = {
    .definition = &defAnt,
    .x = 176, .y = 3056,
    .palette = 0,
    .animInd = 1, .flags = 2048,
    .group = &r4r5ants, .path = &path3723,
    .pathIndex = 11, .child = 0, .interval = 0
};
const LevelObject lobj3673 = {
    .definition = &defAnt,
    .x = 92, .y = 3044,
    .palette = 0,
    .animInd = 1, .flags = 0,
    .group = &r4r5ants, .path = &path2373,
    .pathIndex = 10, .child = 0, .interval = 0
};
const LevelObject lobj3712 = {
    .definition = &defAnt,
    .x = 164, .y = 3044,
    .palette = 0,
    .animInd = 1, .flags = 2048,
    .group = &r4r5ants, .path = &path3723,
    .pathIndex = 10, .child = 0, .interval = 0
};
const LevelObject lobj3607 = {
    .definition = &defAnt,
    .x = 100, .y = 3028,
    .palette = 0,
    .animInd = 1, .flags = 0,
    .group = &r4r5ants, .path = &path2373,
    .pathIndex = 9, .child = 0, .interval = 0
};
const LevelObject lobj3714 = {
    .definition = &defAnt,
    .x = 156, .y = 3028,
    .palette = 0,
    .animInd = 1, .flags = 2048,
    .group = &r4r5ants, .path = &path3723,
    .pathIndex = 9, .child = 0, .interval = 0
};
const LevelObject lobj3672 = {
    .definition = &defAnt,
    .x = 92, .y = 3012,
    .palette = 0,
    .animInd = 1, .flags = 32768,
    .group = &r4r5ants, .path = &path2373,
    .pathIndex = 8, .child = 0, .interval = 0
};
const LevelObject lobj3715 = {
    .definition = &defAnt,
    .x = 164, .y = 3012,
    .palette = 0,
    .animInd = 1, .flags = 34816,
    .group = &r4r5ants, .path = &path3723,
    .pathIndex = 8, .child = 0, .interval = 0
};
const LevelObject lobj3716 = {
    .definition = &defAnt,
    .x = 176, .y = 3000,
    .palette = 0,
    .animInd = 1, .flags = 34816,
    .group = &r4r5ants, .path = &path3723,
    .pathIndex = 7, .child = 0, .interval = 0
};
const LevelObject lobj3606 = {
    .definition = &defAnt,
    .x = 80, .y = 3000,
    .palette = 0,
    .animInd = 1, .flags = 32768,
    .group = &r4r5ants, .path = &path2373,
    .pathIndex = 7, .child = 0, .interval = 0
};
const LevelObject lobj3717 = {
    .definition = &defAnt,
    .x = 192, .y = 2996,
    .palette = 0,
    .animInd = 1, .flags = 34816,
    .group = &r4r5ants, .path = &path3723,
    .pathIndex = 6, .child = 0, .interval = 0
};
const LevelObject lobj3671 = {
    .definition = &defAnt,
    .x = 64, .y = 2996,
    .palette = 0,
    .animInd = 1, .flags = 32768,
    .group = &r4r5ants, .path = &path2373,
    .pathIndex = 6, .child = 0, .interval = 0
};
const LevelObject lobj3719 = {
    .definition = &defAnt,
    .x = 208, .y = 2992,
    .palette = 0,
    .animInd = 1, .flags = 32768,
    .group = &r4r5ants, .path = &path3723,
    .pathIndex = 5, .child = 0, .interval = 0
};
const LevelObject lobj3605 = {
    .definition = &defAnt,
    .x = 48, .y = 2992,
    .palette = 0,
    .animInd = 1, .flags = 34816,
    .group = &r4r5ants, .path = &path2373,
    .pathIndex = 5, .child = 0, .interval = 0
};
const LevelObject lobj3670 = {
    .definition = &defAnt,
    .x = 36, .y = 2980,
    .palette = 0,
    .animInd = 1, .flags = 34816,
    .group = &r4r5ants, .path = &path2373,
    .pathIndex = 4, .child = 0, .interval = 0
};
const LevelObject lobj3720 = {
    .definition = &defAnt,
    .x = 220, .y = 2980,
    .palette = 0,
    .animInd = 1, .flags = 32768,
    .group = &r4r5ants, .path = &path3723,
    .pathIndex = 4, .child = 0, .interval = 0
};
const LevelObject lobj3721 = {
    .definition = &defAnt,
    .x = 228, .y = 2964,
    .palette = 0,
    .animInd = 1, .flags = 32768,
    .group = &r4r5ants, .path = &path3723,
    .pathIndex = 3, .child = 0, .interval = 0
};
const LevelObject lobj3604 = {
    .definition = &defAnt,
    .x = 28, .y = 2964,
    .palette = 0,
    .animInd = 1, .flags = 34816,
    .group = &r4r5ants, .path = &path2373,
    .pathIndex = 3, .child = 0, .interval = 0
};
const LevelObject lobj3802 = {
    .definition = &defAnt,
    .x = 220, .y = 2948,
    .palette = 0,
    .animInd = 1, .flags = 32768,
    .group = &r4r5ants, .path = &path3723,
    .pathIndex = 2, .child = 0, .interval = 0
};
const LevelObject lobj3683 = {
    .definition = &defAnt,
    .x = 36, .y = 2948,
    .palette = 0,
    .animInd = 1, .flags = 34816,
    .group = &r4r5ants, .path = &path2373,
    .pathIndex = 2, .child = 0, .interval = 0
};
static const LevelObject *r4r5ants_objects[] = {
    &lobj3682,
    &lobj3688,
    &lobj3617,
    &lobj3690,
    &lobj3681,
    &lobj3691,
    &lobj3692,
    &lobj3616,
    &lobj3680,
    &lobj3693,
    &lobj3695,
    &lobj3615,
    &lobj3696,
    &lobj3679,
    &lobj3614,
    &lobj3698,
    &lobj3699,
    &lobj3678,
    &lobj3700,
    &lobj3613,
    &lobj3677,
    &lobj3701,
    &lobj3611,
    &lobj3703,
    &lobj3704,
    &lobj3676,
    &lobj3610,
    &lobj3706,
    &lobj3675,
    &lobj3707,
    &lobj3708,
    &lobj3609,
    &lobj3709,
    &lobj3674,
    &lobj3608,
    &lobj3711,
    &lobj3673,
    &lobj3712,
    &lobj3607,
    &lobj3714,
    &lobj3672,
    &lobj3715,
    &lobj3716,
    &lobj3606,
    &lobj3717,
    &lobj3671,
    &lobj3719,
    &lobj3605,
    &lobj3670,
    &lobj3720,
    &lobj3721,
    &lobj3604,
    &lobj3802,
    &lobj3683
};
LevelObjectGroup r4r5ants = {
    .numPaths = 2, .paths = r4r5ants_paths,
    .numObjects = 54, .objects = r4r5ants_objects
};
extern LevelObjectGroup r4fly1;
static const GameObjectAction path2332_3_actions[] = {
{.action = PathPoint_SetSpeed, }
};
static const GameObjectAction path2332_5_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path2332_6_actions[] = {
{.action = faceLeft, }
};
static const GameObjectAction path2332_9_actions[] = {
{.action = startShooting, .count = 3, .interval = 2}
};
static const GameObjectAction path2332_10_actions[] = {
{.action = startShooting, .count = 3, .interval = 2}
};
static const GameObjectAction path2332_11_actions[] = {
{.action = startShooting, .count = 3, .interval = 2}
};
static const GameObjectAction path2332_12_actions[] = {
{.action = startShooting, .count = 3, .interval = 2}
};
static const GameObjectAction path2332_13_actions[] = {
{.action = startShooting, .count = 3, .interval = 2}
};
static const Path path2332 = {
.x = -16, .y = 3144, .numPoints = 18, .points = {
{
    .x = 0, .y = 88,
    .speedTo = 256, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 48, .y = 48,
    .speedTo = 256, .distTo = 3998,
    .xVelTo = 196, .yVelTo = -164,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = 32,
    .speedTo = 256, .distTo = 2757,
    .xVelTo = 237, .yVelTo = -96,
    .numActions = 0,
    .actions = 0
},
{
    .x = 120, .y = 32,
    .speedTo = 256, .distTo = 2048,
    .xVelTo = 256, .yVelTo = 0,
    .numActions = 1,
    .actions = path2332_3_actions
},
{
    .x = 144, .y = 40,
    .speedTo = 128, .distTo = 1619,
    .xVelTo = 121, .yVelTo = 40,
    .numActions = 0,
    .actions = 0
},
{
    .x = 160, .y = 48,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = 114, .yVelTo = 57,
    .numActions = 1,
    .actions = path2332_5_actions
},
{
    .x = 168, .y = 64,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = 57, .yVelTo = 114,
    .numActions = 1,
    .actions = path2332_6_actions
},
{
    .x = 168, .y = 72,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
},
{
    .x = 160, .y = 80,
    .speedTo = 128, .distTo = 724,
    .xVelTo = -91, .yVelTo = 90,
    .numActions = 0,
    .actions = 0
},
{
    .x = 144, .y = 88,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = -115, .yVelTo = 57,
    .numActions = 1,
    .actions = path2332_9_actions
},
{
    .x = 112, .y = 96,
    .speedTo = 128, .distTo = 2111,
    .xVelTo = -125, .yVelTo = 31,
    .numActions = 1,
    .actions = path2332_10_actions
},
{
    .x = 80, .y = 112,
    .speedTo = 128, .distTo = 2289,
    .xVelTo = -115, .yVelTo = 57,
    .numActions = 1,
    .actions = path2332_11_actions
},
{
    .x = 56, .y = 136,
    .speedTo = 128, .distTo = 2172,
    .xVelTo = -91, .yVelTo = 90,
    .numActions = 1,
    .actions = path2332_12_actions
},
{
    .x = 48, .y = 168,
    .speedTo = 128, .distTo = 2111,
    .xVelTo = -32, .yVelTo = 124,
    .numActions = 1,
    .actions = path2332_13_actions
},
{
    .x = 40, .y = 224,
    .speedTo = 128, .distTo = 3620,
    .xVelTo = -19, .yVelTo = 126,
    .numActions = 0,
    .actions = 0
},
{
    .x = 56, .y = 264,
    .speedTo = 128, .distTo = 2757,
    .xVelTo = 47, .yVelTo = 118,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = 296,
    .speedTo = 128, .distTo = 2896,
    .xVelTo = 90, .yVelTo = 90,
    .numActions = 0,
    .actions = 0
},
{
    .x = 160, .y = 336,
    .speedTo = 128, .distTo = 5271,
    .xVelTo = 111, .yVelTo = 62,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path *r4fly1_paths[] = {
    &path2332
};
extern const LevelObject lobj2333;
const LevelObject lobj2333 = {
    .definition = &defFly,
    .x = -16, .y = 3232,
    .palette = 0,
    .animInd = 0, .flags = 0,
    .group = &r4fly1, .path = &path2332,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r4fly1_objects[] = {
    &lobj2333
};
LevelObjectGroup r4fly1 = {
    .numPaths = 1, .paths = r4fly1_paths,
    .numObjects = 1, .objects = r4fly1_objects
};
extern LevelObjectGroup room4powerup;
extern const LevelObject lobj2339;
const LevelObject lobj2339 = {
    .definition = &defHoneyCell,
    .x = 192, .y = 3184,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room4powerup, .path = 0,
    .pathIndex = 0, .child = 0, .interval = 0
};
static const LevelObject *room4powerup_objects[] = {
    &lobj2339
};
LevelObjectGroup room4powerup = {
    .numPaths = 0, .paths = 0,
    .numObjects = 1, .objects = room4powerup_objects
};
extern LevelObjectGroup r5antsfrombigant;
extern const LevelObject lobj3801;
extern const LevelObject lobj3722;
const LevelObject lobj3801 = {
    .definition = &defAnt,
    .x = 48, .y = 2936,
    .palette = 0,
    .animInd = 1, .flags = 34816,
    .group = &r5antsfrombigant, .path = &path2373,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj3722 = {
    .definition = &defAnt,
    .x = 208, .y = 2936,
    .palette = 0,
    .animInd = 1, .flags = 32768,
    .group = &r5antsfrombigant, .path = &path3723,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r5antsfrombigant_objects[] = {
    &lobj3801,
    &lobj3722
};
LevelObjectGroup r5antsfrombigant = {
    .numPaths = 0, .paths = 0,
    .numObjects = 2, .objects = r5antsfrombigant_objects
};
extern LevelObjectGroup room5fly1;
static const GameObjectAction path2342_3_actions[] = {
{.action = PathPoint_SetSpeed, }
};
static const GameObjectAction path2342_5_actions[] = {
{.action = faceRight, }
};
static const GameObjectAction path2342_6_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path2342_7_actions[] = {
{.action = startShooting, .count = 3, .interval = 2}
};
static const GameObjectAction path2342_8_actions[] = {
{.action = startShooting, .count = 3, .interval = 2}
};
static const GameObjectAction path2342_9_actions[] = {
{.action = startShooting, .count = 3, .interval = 2}
};
static const GameObjectAction path2342_10_actions[] = {
{.action = startShooting, .count = 3, .interval = 2}
};
static const GameObjectAction path2342_11_actions[] = {
{.action = startShooting, .count = 3, .interval = 2}
};
static const Path path2342 = {
.x = 272, .y = 3104, .numPoints = 14, .points = {
{
    .x = 0, .y = 88,
    .speedTo = 256, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = 72,
    .speedTo = 256, .distTo = 2289,
    .xVelTo = -229, .yVelTo = -115,
    .numActions = 0,
    .actions = 0
},
{
    .x = -80, .y = 64,
    .speedTo = 256, .distTo = 3114,
    .xVelTo = -253, .yVelTo = -43,
    .numActions = 0,
    .actions = 0
},
{
    .x = -120, .y = 56,
    .speedTo = 256, .distTo = 2610,
    .xVelTo = -252, .yVelTo = -51,
    .numActions = 1,
    .actions = path2342_3_actions
},
{
    .x = -160, .y = 32,
    .speedTo = 128, .distTo = 2985,
    .xVelTo = -110, .yVelTo = -66,
    .numActions = 0,
    .actions = 0
},
{
    .x = -168, .y = 16,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = -58, .yVelTo = -115,
    .numActions = 1,
    .actions = path2342_5_actions
},
{
    .x = -160, .y = -8,
    .speedTo = 128, .distTo = 1619,
    .xVelTo = 40, .yVelTo = -122,
    .numActions = 1,
    .actions = path2342_6_actions
},
{
    .x = -136, .y = -16,
    .speedTo = 128, .distTo = 1619,
    .xVelTo = 121, .yVelTo = -41,
    .numActions = 1,
    .actions = path2342_7_actions
},
{
    .x = -104, .y = -8,
    .speedTo = 128, .distTo = 2111,
    .xVelTo = 124, .yVelTo = 31,
    .numActions = 1,
    .actions = path2342_8_actions
},
{
    .x = -72, .y = 8,
    .speedTo = 128, .distTo = 2289,
    .xVelTo = 114, .yVelTo = 57,
    .numActions = 1,
    .actions = path2342_9_actions
},
{
    .x = -48, .y = 32,
    .speedTo = 128, .distTo = 2172,
    .xVelTo = 90, .yVelTo = 90,
    .numActions = 1,
    .actions = path2342_10_actions
},
{
    .x = -40, .y = 64,
    .speedTo = 128, .distTo = 2111,
    .xVelTo = 31, .yVelTo = 124,
    .numActions = 1,
    .actions = path2342_11_actions
},
{
    .x = -24, .y = 168,
    .speedTo = 128, .distTo = 6734,
    .xVelTo = 19, .yVelTo = 126,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = 208,
    .speedTo = 128, .distTo = 2610,
    .xVelTo = 25, .yVelTo = 125,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path *room5fly1_paths[] = {
    &path2342
};
extern const LevelObject lobj2343;
const LevelObject lobj2343 = {
    .definition = &defFly,
    .x = 272, .y = 3192,
    .palette = 0,
    .animInd = 0, .flags = 2048,
    .group = &room5fly1, .path = &path2342,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *room5fly1_objects[] = {
    &lobj2343
};
LevelObjectGroup room5fly1 = {
    .numPaths = 1, .paths = room5fly1_paths,
    .numObjects = 1, .objects = room5fly1_objects
};
extern LevelObjectGroup r5powerup;
extern const LevelObject lobj2349;
const LevelObject lobj2349 = {
    .definition = &defHoneyCell,
    .x = 64, .y = 3056,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &r5powerup, .path = 0,
    .pathIndex = 0, .child = 0, .interval = 0
};
static const LevelObject *r5powerup_objects[] = {
    &lobj2349
};
LevelObjectGroup r5powerup = {
    .numPaths = 0, .paths = 0,
    .numObjects = 1, .objects = r5powerup_objects
};
extern LevelObjectGroup r6ants;
static const GameObjectAction path2389_12_actions[] = {
{.action = enterBackground, }
};
static const GameObjectAction path2389_13_actions[] = {
{.action = markDisappear, }
};
static const Path path2389 = {
.x = 28, .y = 2736, .numPoints = 14, .points = {
{
    .x = 8, .y = -4,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 8,
    .speedTo = 128, .distTo = 768,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 20,
    .speedTo = 128, .distTo = 768,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 32,
    .speedTo = 128, .distTo = 768,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 44,
    .speedTo = 128, .distTo = 768,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 56,
    .speedTo = 128, .distTo = 768,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 68,
    .speedTo = 128, .distTo = 768,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 80,
    .speedTo = 128, .distTo = 768,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 92,
    .speedTo = 128, .distTo = 768,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 104,
    .speedTo = 128, .distTo = 768,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 116,
    .speedTo = 128, .distTo = 768,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 128,
    .speedTo = 128, .distTo = 768,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 144,
    .speedTo = 128, .distTo = 1024,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 1,
    .actions = path2389_12_actions
},
{
    .x = -16, .y = 168,
    .speedTo = 128, .distTo = 2172,
    .xVelTo = -91, .yVelTo = 90,
    .numActions = 1,
    .actions = path2389_13_actions
}
}
};
static const GameObjectAction path3786_12_actions[] = {
{.action = enterBackground, }
};
static const GameObjectAction path3786_13_actions[] = {
{.action = markDisappear, }
};
static const Path path3786 = {
.x = 228, .y = 2736, .numPoints = 14, .points = {
{
    .x = -8, .y = -4,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 8,
    .speedTo = 128, .distTo = 768,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 20,
    .speedTo = 128, .distTo = 768,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 32,
    .speedTo = 128, .distTo = 768,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 44,
    .speedTo = 128, .distTo = 768,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 56,
    .speedTo = 128, .distTo = 768,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 68,
    .speedTo = 128, .distTo = 768,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 80,
    .speedTo = 128, .distTo = 768,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 92,
    .speedTo = 128, .distTo = 768,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 104,
    .speedTo = 128, .distTo = 768,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 116,
    .speedTo = 128, .distTo = 768,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 128,
    .speedTo = 128, .distTo = 768,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 144,
    .speedTo = 128, .distTo = 1024,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 1,
    .actions = path3786_12_actions
},
{
    .x = 16, .y = 168,
    .speedTo = 128, .distTo = 2172,
    .xVelTo = 90, .yVelTo = 90,
    .numActions = 1,
    .actions = path3786_13_actions
}
}
};
static const Path *r6ants_paths[] = {
    &path2389,
    &path3786
};
extern const LevelObject lobj3645;
extern const LevelObject lobj3649;
extern const LevelObject lobj3769;
extern const LevelObject lobj3770;
extern const LevelObject lobj3741;
extern const LevelObject lobj3747;
extern const LevelObject lobj3772;
extern const LevelObject lobj3773;
extern const LevelObject lobj3647;
extern const LevelObject lobj3650;
extern const LevelObject lobj3775;
extern const LevelObject lobj3776;
extern const LevelObject lobj3748;
extern const LevelObject lobj3743;
extern const LevelObject lobj3778;
extern const LevelObject lobj3779;
extern const LevelObject lobj3651;
extern const LevelObject lobj3646;
extern const LevelObject lobj3781;
extern const LevelObject lobj3782;
extern const LevelObject lobj3749;
extern const LevelObject lobj3745;
const LevelObject lobj3645 = {
    .definition = &defAnt,
    .x = 220, .y = 2864,
    .palette = 0,
    .animInd = 1, .flags = 34816,
    .group = &r6ants, .path = &path3786,
    .pathIndex = 12, .child = 0, .interval = 0
};
const LevelObject lobj3649 = {
    .definition = &defAnt,
    .x = 36, .y = 2864,
    .palette = 0,
    .animInd = 1, .flags = 32768,
    .group = &r6ants, .path = &path2389,
    .pathIndex = 12, .child = 0, .interval = 0
};
const LevelObject lobj3769 = {
    .definition = &defAnt,
    .x = 36, .y = 2852,
    .palette = 0,
    .animInd = 1, .flags = 32768,
    .group = &r6ants, .path = &path2389,
    .pathIndex = 11, .child = 0, .interval = 0
};
const LevelObject lobj3770 = {
    .definition = &defAnt,
    .x = 220, .y = 2852,
    .palette = 0,
    .animInd = 1, .flags = 34816,
    .group = &r6ants, .path = &path3786,
    .pathIndex = 11, .child = 0, .interval = 0
};
const LevelObject lobj3741 = {
    .definition = &defAnt,
    .x = 36, .y = 2840,
    .palette = 0,
    .animInd = 1, .flags = 32768,
    .group = &r6ants, .path = &path2389,
    .pathIndex = 10, .child = 0, .interval = 0
};
const LevelObject lobj3747 = {
    .definition = &defAnt,
    .x = 220, .y = 2840,
    .palette = 0,
    .animInd = 1, .flags = 34816,
    .group = &r6ants, .path = &path3786,
    .pathIndex = 10, .child = 0, .interval = 0
};
const LevelObject lobj3772 = {
    .definition = &defAnt,
    .x = 36, .y = 2828,
    .palette = 0,
    .animInd = 1, .flags = 32768,
    .group = &r6ants, .path = &path2389,
    .pathIndex = 9, .child = 0, .interval = 0
};
const LevelObject lobj3773 = {
    .definition = &defAnt,
    .x = 220, .y = 2828,
    .palette = 0,
    .animInd = 1, .flags = 34816,
    .group = &r6ants, .path = &path3786,
    .pathIndex = 9, .child = 0, .interval = 0
};
const LevelObject lobj3647 = {
    .definition = &defAnt,
    .x = 220, .y = 2816,
    .palette = 0,
    .animInd = 1, .flags = 34816,
    .group = &r6ants, .path = &path3786,
    .pathIndex = 8, .child = 0, .interval = 0
};
const LevelObject lobj3650 = {
    .definition = &defAnt,
    .x = 36, .y = 2816,
    .palette = 0,
    .animInd = 1, .flags = 32768,
    .group = &r6ants, .path = &path2389,
    .pathIndex = 8, .child = 0, .interval = 0
};
const LevelObject lobj3775 = {
    .definition = &defAnt,
    .x = 36, .y = 2804,
    .palette = 0,
    .animInd = 1, .flags = 32768,
    .group = &r6ants, .path = &path2389,
    .pathIndex = 7, .child = 0, .interval = 0
};
const LevelObject lobj3776 = {
    .definition = &defAnt,
    .x = 220, .y = 2804,
    .palette = 0,
    .animInd = 1, .flags = 34816,
    .group = &r6ants, .path = &path3786,
    .pathIndex = 7, .child = 0, .interval = 0
};
const LevelObject lobj3748 = {
    .definition = &defAnt,
    .x = 220, .y = 2792,
    .palette = 0,
    .animInd = 1, .flags = 34816,
    .group = &r6ants, .path = &path3786,
    .pathIndex = 6, .child = 0, .interval = 0
};
const LevelObject lobj3743 = {
    .definition = &defAnt,
    .x = 36, .y = 2792,
    .palette = 0,
    .animInd = 1, .flags = 32768,
    .group = &r6ants, .path = &path2389,
    .pathIndex = 6, .child = 0, .interval = 0
};
const LevelObject lobj3778 = {
    .definition = &defAnt,
    .x = 36, .y = 2780,
    .palette = 0,
    .animInd = 1, .flags = 32768,
    .group = &r6ants, .path = &path2389,
    .pathIndex = 5, .child = 0, .interval = 0
};
const LevelObject lobj3779 = {
    .definition = &defAnt,
    .x = 220, .y = 2780,
    .palette = 0,
    .animInd = 1, .flags = 34816,
    .group = &r6ants, .path = &path3786,
    .pathIndex = 5, .child = 0, .interval = 0
};
const LevelObject lobj3651 = {
    .definition = &defAnt,
    .x = 36, .y = 2768,
    .palette = 0,
    .animInd = 1, .flags = 32768,
    .group = &r6ants, .path = &path2389,
    .pathIndex = 4, .child = 0, .interval = 0
};
const LevelObject lobj3646 = {
    .definition = &defAnt,
    .x = 220, .y = 2768,
    .palette = 0,
    .animInd = 1, .flags = 34816,
    .group = &r6ants, .path = &path3786,
    .pathIndex = 4, .child = 0, .interval = 0
};
const LevelObject lobj3781 = {
    .definition = &defAnt,
    .x = 36, .y = 2756,
    .palette = 0,
    .animInd = 1, .flags = 32768,
    .group = &r6ants, .path = &path2389,
    .pathIndex = 3, .child = 0, .interval = 0
};
const LevelObject lobj3782 = {
    .definition = &defAnt,
    .x = 220, .y = 2756,
    .palette = 0,
    .animInd = 1, .flags = 34816,
    .group = &r6ants, .path = &path3786,
    .pathIndex = 3, .child = 0, .interval = 0
};
const LevelObject lobj3749 = {
    .definition = &defAnt,
    .x = 220, .y = 2744,
    .palette = 0,
    .animInd = 1, .flags = 34816,
    .group = &r6ants, .path = &path3786,
    .pathIndex = 2, .child = 0, .interval = 0
};
const LevelObject lobj3745 = {
    .definition = &defAnt,
    .x = 36, .y = 2744,
    .palette = 0,
    .animInd = 1, .flags = 32768,
    .group = &r6ants, .path = &path2389,
    .pathIndex = 2, .child = 0, .interval = 0
};
static const LevelObject *r6ants_objects[] = {
    &lobj3645,
    &lobj3649,
    &lobj3769,
    &lobj3770,
    &lobj3741,
    &lobj3747,
    &lobj3772,
    &lobj3773,
    &lobj3647,
    &lobj3650,
    &lobj3775,
    &lobj3776,
    &lobj3748,
    &lobj3743,
    &lobj3778,
    &lobj3779,
    &lobj3651,
    &lobj3646,
    &lobj3781,
    &lobj3782,
    &lobj3749,
    &lobj3745
};
LevelObjectGroup r6ants = {
    .numPaths = 2, .paths = r6ants_paths,
    .numObjects = 22, .objects = r6ants_objects
};
extern LevelObjectGroup room6fly;
static const GameObjectAction path2351_1_actions[] = {
{.action = startShooting, .count = 3, .interval = 1},
{.action = faceRight, },
{.action = enterForeground, }
};
static const GameObjectAction path2351_3_actions[] = {
{.action = startShooting, .count = 3, .interval = 1}
};
static const GameObjectAction path2351_5_actions[] = {
{.action = startShooting, .count = 3, .interval = 1}
};
static const GameObjectAction path2351_7_actions[] = {
{.action = startShooting, .count = 3, .interval = 1}
};
static const GameObjectAction path2351_10_actions[] = {
{.action = startShooting, .count = 3, .interval = 1},
{.action = faceLeft, }
};
static const GameObjectAction path2351_13_actions[] = {
{.action = startShooting, .count = 3, .interval = 1}
};
static const GameObjectAction path2351_15_actions[] = {
{.action = startShooting, .count = 3, .interval = 1}
};
static const GameObjectAction path2351_17_actions[] = {
{.action = startShooting, .count = 3, .interval = 1}
};
static const GameObjectAction path2351_19_actions[] = {
{.action = startShooting, .count = 3, .interval = 1}
};
static const Path path2351 = {
.x = 272, .y = 2832, .numPoints = 21, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 192, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -152, .y = 0,
    .speedTo = 192, .distTo = 9728,
    .xVelTo = -192, .yVelTo = 0,
    .numActions = 3,
    .actions = path2351_1_actions
},
{
    .x = -176, .y = 8,
    .speedTo = 192, .distTo = 1619,
    .xVelTo = -183, .yVelTo = 60,
    .numActions = 0,
    .actions = 0
},
{
    .x = -200, .y = 24,
    .speedTo = 192, .distTo = 1846,
    .xVelTo = -160, .yVelTo = 106,
    .numActions = 1,
    .actions = path2351_3_actions
},
{
    .x = -216, .y = 48,
    .speedTo = 192, .distTo = 1846,
    .xVelTo = -107, .yVelTo = 159,
    .numActions = 0,
    .actions = 0
},
{
    .x = -224, .y = 80,
    .speedTo = 192, .distTo = 2111,
    .xVelTo = -47, .yVelTo = 186,
    .numActions = 1,
    .actions = path2351_5_actions
},
{
    .x = -216, .y = 112,
    .speedTo = 192, .distTo = 2111,
    .xVelTo = 46, .yVelTo = 186,
    .numActions = 0,
    .actions = 0
},
{
    .x = -200, .y = 136,
    .speedTo = 192, .distTo = 1846,
    .xVelTo = 106, .yVelTo = 159,
    .numActions = 1,
    .actions = path2351_7_actions
},
{
    .x = -176, .y = 152,
    .speedTo = 192, .distTo = 1846,
    .xVelTo = 159, .yVelTo = 106,
    .numActions = 0,
    .actions = 0
},
{
    .x = -152, .y = 160,
    .speedTo = 192, .distTo = 1619,
    .xVelTo = 182, .yVelTo = 60,
    .numActions = 0,
    .actions = 0
},
{
    .x = -144, .y = 160,
    .speedTo = 192, .distTo = 512,
    .xVelTo = 192, .yVelTo = 0,
    .numActions = 2,
    .actions = path2351_10_actions
},
{
    .x = -136, .y = 160,
    .speedTo = 192, .distTo = 512,
    .xVelTo = 192, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -112, .y = 152,
    .speedTo = 192, .distTo = 1619,
    .xVelTo = 182, .yVelTo = -61,
    .numActions = 0,
    .actions = 0
},
{
    .x = -88, .y = 136,
    .speedTo = 192, .distTo = 1846,
    .xVelTo = 159, .yVelTo = -107,
    .numActions = 1,
    .actions = path2351_13_actions
},
{
    .x = -72, .y = 112,
    .speedTo = 192, .distTo = 1846,
    .xVelTo = 106, .yVelTo = -160,
    .numActions = 0,
    .actions = 0
},
{
    .x = -64, .y = 80,
    .speedTo = 192, .distTo = 2111,
    .xVelTo = 46, .yVelTo = -187,
    .numActions = 1,
    .actions = path2351_15_actions
},
{
    .x = -72, .y = 48,
    .speedTo = 192, .distTo = 2111,
    .xVelTo = -47, .yVelTo = -187,
    .numActions = 0,
    .actions = 0
},
{
    .x = -88, .y = 24,
    .speedTo = 192, .distTo = 1846,
    .xVelTo = -107, .yVelTo = -160,
    .numActions = 1,
    .actions = path2351_17_actions
},
{
    .x = -112, .y = 8,
    .speedTo = 192, .distTo = 1846,
    .xVelTo = -160, .yVelTo = -107,
    .numActions = 0,
    .actions = 0
},
{
    .x = -136, .y = 0,
    .speedTo = 192, .distTo = 1619,
    .xVelTo = -183, .yVelTo = -61,
    .numActions = 1,
    .actions = path2351_19_actions
},
{
    .x = -288, .y = 0,
    .speedTo = 192, .distTo = 9728,
    .xVelTo = -192, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path *room6fly_paths[] = {
    &path2351
};
extern const LevelObject lobj2352;
const LevelObject lobj2352 = {
    .definition = &defFly,
    .x = 272, .y = 2832,
    .palette = 0,
    .animInd = 0, .flags = 2048,
    .group = &room6fly, .path = &path2351,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *room6fly_objects[] = {
    &lobj2352
};
LevelObjectGroup room6fly = {
    .numPaths = 1, .paths = room6fly_paths,
    .numObjects = 1, .objects = room6fly_objects
};
extern LevelObjectGroup room5bigant;
extern const LevelObject lobj2369;
extern const LevelObject lobj2370;
const LevelObject lobj2369 = {
    .definition = &defAntBig,
    .x = 64, .y = 2928,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room5bigant, .path = 0,
    .pathIndex = 0, .child = &lobj3801, .interval = 24
};
const LevelObject lobj2370 = {
    .definition = &defAntBig,
    .x = 192, .y = 2928,
    .palette = 0,
    .animInd = 0, .flags = 34816,
    .group = &room5bigant, .path = 0,
    .pathIndex = 0, .child = &lobj3722, .interval = 24
};
static const LevelObject *room5bigant_objects[] = {
    &lobj2369,
    &lobj2370
};
LevelObjectGroup room5bigant = {
    .numPaths = 0, .paths = 0,
    .numObjects = 2, .objects = room5bigant_objects
};
extern LevelObjectGroup room6antsfrombigants;
extern const LevelObject lobj3834;
extern const LevelObject lobj3835;
const LevelObject lobj3834 = {
    .definition = &defAnt,
    .x = 36, .y = 2732,
    .palette = 0,
    .animInd = 1, .flags = 32768,
    .group = &room6antsfrombigants, .path = &path2389,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj3835 = {
    .definition = &defAnt,
    .x = 220, .y = 2732,
    .palette = 0,
    .animInd = 1, .flags = 34816,
    .group = &room6antsfrombigants, .path = &path3786,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *room6antsfrombigants_objects[] = {
    &lobj3834,
    &lobj3835
};
LevelObjectGroup room6antsfrombigants = {
    .numPaths = 0, .paths = 0,
    .numObjects = 2, .objects = room6antsfrombigants_objects
};
extern LevelObjectGroup room6bigant;
extern const LevelObject lobj2386;
extern const LevelObject lobj2387;
const LevelObject lobj2386 = {
    .definition = &defAntBig,
    .x = 216, .y = 2708,
    .palette = 0,
    .animInd = 1, .flags = 38912,
    .group = &room6bigant, .path = 0,
    .pathIndex = 0, .child = &lobj3835, .interval = 16
};
const LevelObject lobj2387 = {
    .definition = &defAntBig,
    .x = 40, .y = 2708,
    .palette = 0,
    .animInd = 1, .flags = 36864,
    .group = &room6bigant, .path = 0,
    .pathIndex = 0, .child = &lobj3834, .interval = 16
};
static const LevelObject *room6bigant_objects[] = {
    &lobj2386,
    &lobj2387
};
LevelObjectGroup room6bigant = {
    .numPaths = 0, .paths = 0,
    .numObjects = 2, .objects = room6bigant_objects
};
extern LevelObjectGroup room7alien1;
static const GameObjectAction path2397_2_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_GUN_STAND},
{.action = startShooting, .count = 5, .interval = 40}
};
static const Path path2397 = {
.x = 112, .y = 2496, .numPoints = 3, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 16,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = 57, .yVelTo = 114,
    .numActions = 0,
    .actions = 0
},
{
    .x = 16, .y = 40,
    .speedTo = 128, .distTo = 1619,
    .xVelTo = 40, .yVelTo = 121,
    .numActions = 2,
    .actions = path2397_2_actions
}
}
};
static const Path *room7alien1_paths[] = {
    &path2397
};
extern const LevelObject lobj2396;
extern const LevelObject lobj2399;
const LevelObject lobj2396 = {
    .definition = &defAlienGunner,
    .x = 112, .y = 2496,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room7alien1, .path = &path2397,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2399 = {
    .definition = &defHoneyPot,
    .x = 128, .y = 2472,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room7alien1, .path = 0,
    .pathIndex = 0, .child = 0, .interval = 0
};
static const LevelObject *room7alien1_objects[] = {
    &lobj2396,
    &lobj2399
};
LevelObjectGroup room7alien1 = {
    .numPaths = 1, .paths = room7alien1_paths,
    .numObjects = 2, .objects = room7alien1_objects
};
extern LevelObjectGroup room7alien2;
static const GameObjectAction path2403_2_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_GUN_STAND},
{.action = startShooting, .count = 5, .interval = 40}
};
static const Path path2403 = {
.x = 48, .y = 2440, .numPoints = 3, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 16,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = 57, .yVelTo = 114,
    .numActions = 0,
    .actions = 0
},
{
    .x = 16, .y = 40,
    .speedTo = 128, .distTo = 1619,
    .xVelTo = 40, .yVelTo = 121,
    .numActions = 2,
    .actions = path2403_2_actions
}
}
};
static const GameObjectAction path2404_2_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_GUN_STAND},
{.action = startShooting, .count = 5, .interval = 40}
};
static const Path path2404 = {
.x = 176, .y = 2440, .numPoints = 3, .points = {
{
    .x = 32, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 24, .y = 16,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = -58, .yVelTo = 114,
    .numActions = 0,
    .actions = 0
},
{
    .x = 16, .y = 40,
    .speedTo = 128, .distTo = 1619,
    .xVelTo = -41, .yVelTo = 121,
    .numActions = 2,
    .actions = path2404_2_actions
}
}
};
static const Path *room7alien2_paths[] = {
    &path2403,
    &path2404
};
extern const LevelObject lobj2401;
extern const LevelObject lobj2402;
const LevelObject lobj2401 = {
    .definition = &defAlienGunner,
    .x = 48, .y = 2440,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room7alien2, .path = &path2403,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2402 = {
    .definition = &defAlienGunner,
    .x = 208, .y = 2440,
    .palette = 0,
    .animInd = 0, .flags = 34816,
    .group = &room7alien2, .path = &path2404,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *room7alien2_objects[] = {
    &lobj2401,
    &lobj2402
};
LevelObjectGroup room7alien2 = {
    .numPaths = 2, .paths = room7alien2_paths,
    .numObjects = 2, .objects = room7alien2_objects
};
extern LevelObjectGroup room7alien3;
static const GameObjectAction path2414_0_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_CLAW_RUN}
};
static const GameObjectAction path2414_3_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_CLAW_STAND}
};
static const Path path2414 = {
.x = -24, .y = 2528, .numPoints = 4, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2414_0_actions
},
{
    .x = 72, .y = -64,
    .speedTo = 128, .distTo = 6165,
    .xVelTo = 95, .yVelTo = -86,
    .numActions = 0,
    .actions = 0
},
{
    .x = 104, .y = -64,
    .speedTo = 128, .distTo = 2048,
    .xVelTo = 128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 120, .y = -48,
    .speedTo = 128, .distTo = 1448,
    .xVelTo = 90, .yVelTo = 90,
    .numActions = 1,
    .actions = path2414_3_actions
}
}
};
static const GameObjectAction path2415_0_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_CLAW_RUN}
};
static const GameObjectAction path2415_3_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_CLAW_STAND}
};
static const Path path2415 = {
.x = -16, .y = 2512, .numPoints = 4, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2415_0_actions
},
{
    .x = 72, .y = -64,
    .speedTo = 128, .distTo = 6165,
    .xVelTo = 95, .yVelTo = -86,
    .numActions = 0,
    .actions = 0
},
{
    .x = 104, .y = -64,
    .speedTo = 128, .distTo = 2048,
    .xVelTo = 128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 120, .y = -48,
    .speedTo = 128, .distTo = 1448,
    .xVelTo = 90, .yVelTo = 90,
    .numActions = 1,
    .actions = path2415_3_actions
}
}
};
static const GameObjectAction path2416_0_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_CLAW_RUN}
};
static const GameObjectAction path2416_3_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_CLAW_STAND}
};
static const Path path2416 = {
.x = -8, .y = 2496, .numPoints = 4, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2416_0_actions
},
{
    .x = 72, .y = -64,
    .speedTo = 128, .distTo = 6165,
    .xVelTo = 95, .yVelTo = -86,
    .numActions = 0,
    .actions = 0
},
{
    .x = 104, .y = -64,
    .speedTo = 128, .distTo = 2048,
    .xVelTo = 128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 120, .y = -48,
    .speedTo = 128, .distTo = 1448,
    .xVelTo = 90, .yVelTo = 90,
    .numActions = 1,
    .actions = path2416_3_actions
}
}
};
static const GameObjectAction path2417_0_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_CLAW_RUN}
};
static const GameObjectAction path2417_3_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_CLAW_STAND}
};
static const Path path2417 = {
.x = 24, .y = 2496, .numPoints = 4, .points = {
{
    .x = 240, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2417_0_actions
},
{
    .x = 168, .y = -64,
    .speedTo = 128, .distTo = 6165,
    .xVelTo = -96, .yVelTo = -86,
    .numActions = 0,
    .actions = 0
},
{
    .x = 136, .y = -64,
    .speedTo = 128, .distTo = 2048,
    .xVelTo = -128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 120, .y = -48,
    .speedTo = 128, .distTo = 1448,
    .xVelTo = -91, .yVelTo = 90,
    .numActions = 1,
    .actions = path2417_3_actions
}
}
};
static const GameObjectAction path2418_0_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_CLAW_RUN}
};
static const GameObjectAction path2418_3_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_CLAW_STAND}
};
static const Path path2418 = {
.x = 32, .y = 2512, .numPoints = 4, .points = {
{
    .x = 240, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2418_0_actions
},
{
    .x = 168, .y = -64,
    .speedTo = 128, .distTo = 6165,
    .xVelTo = -96, .yVelTo = -86,
    .numActions = 0,
    .actions = 0
},
{
    .x = 136, .y = -64,
    .speedTo = 128, .distTo = 2048,
    .xVelTo = -128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 120, .y = -48,
    .speedTo = 128, .distTo = 1448,
    .xVelTo = -91, .yVelTo = 90,
    .numActions = 1,
    .actions = path2418_3_actions
}
}
};
static const GameObjectAction path2419_0_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_CLAW_RUN}
};
static const GameObjectAction path2419_3_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_CLAW_STAND}
};
static const Path path2419 = {
.x = 40, .y = 2528, .numPoints = 4, .points = {
{
    .x = 240, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2419_0_actions
},
{
    .x = 168, .y = -64,
    .speedTo = 128, .distTo = 6165,
    .xVelTo = -96, .yVelTo = -86,
    .numActions = 0,
    .actions = 0
},
{
    .x = 136, .y = -64,
    .speedTo = 128, .distTo = 2048,
    .xVelTo = -128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 120, .y = -48,
    .speedTo = 128, .distTo = 1448,
    .xVelTo = -91, .yVelTo = 90,
    .numActions = 1,
    .actions = path2419_3_actions
}
}
};
static const Path *room7alien3_paths[] = {
    &path2414,
    &path2415,
    &path2416,
    &path2417,
    &path2418,
    &path2419
};
extern const LevelObject lobj2413;
extern const LevelObject lobj2412;
extern const LevelObject lobj2411;
extern const LevelObject lobj2410;
extern const LevelObject lobj2409;
extern const LevelObject lobj2408;
const LevelObject lobj2413 = {
    .definition = &defAlienPillager,
    .x = 280, .y = 2528,
    .palette = 0,
    .animInd = 0, .flags = 34816,
    .group = &room7alien3, .path = &path2419,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2412 = {
    .definition = &defAlienPillager,
    .x = -24, .y = 2528,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room7alien3, .path = &path2414,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2411 = {
    .definition = &defAlienPillager,
    .x = 272, .y = 2512,
    .palette = 0,
    .animInd = 0, .flags = 34816,
    .group = &room7alien3, .path = &path2418,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2410 = {
    .definition = &defAlienPillager,
    .x = -16, .y = 2512,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room7alien3, .path = &path2415,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2409 = {
    .definition = &defAlienPillager,
    .x = 264, .y = 2496,
    .palette = 0,
    .animInd = 0, .flags = 34816,
    .group = &room7alien3, .path = &path2417,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2408 = {
    .definition = &defAlienPillager,
    .x = -8, .y = 2496,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room7alien3, .path = &path2416,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *room7alien3_objects[] = {
    &lobj2413,
    &lobj2412,
    &lobj2411,
    &lobj2410,
    &lobj2409,
    &lobj2408
};
LevelObjectGroup room7alien3 = {
    .numPaths = 6, .paths = room7alien3_paths,
    .numObjects = 6, .objects = room7alien3_objects
};
extern LevelObjectGroup room8alien1;
static const GameObjectAction path3962_0_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_CLAW_RUN}
};
static const GameObjectAction path3962_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_CLAW_STAND}
};
static const Path path3962 = {
.x = 112, .y = 2368, .numPoints = 2, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path3962_0_actions
},
{
    .x = 8, .y = 0,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 64, .yVelTo = 0,
    .numActions = 1,
    .actions = path3962_1_actions
}
}
};
static const GameObjectAction path3965_0_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_CLAW_RUN}
};
static const GameObjectAction path3965_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_CLAW_STAND}
};
static const Path path3965 = {
.x = 96, .y = 2352, .numPoints = 2, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path3965_0_actions
},
{
    .x = 8, .y = 0,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 64, .yVelTo = 0,
    .numActions = 1,
    .actions = path3965_1_actions
}
}
};
static const GameObjectAction path3968_0_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_CLAW_RUN}
};
static const GameObjectAction path3968_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_CLAW_STAND}
};
static const Path path3968 = {
.x = 104, .y = 2336, .numPoints = 2, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path3968_0_actions
},
{
    .x = 8, .y = 0,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 64, .yVelTo = 0,
    .numActions = 1,
    .actions = path3968_1_actions
}
}
};
static const GameObjectAction path3971_0_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_CLAW_RUN}
};
static const GameObjectAction path3971_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_CLAW_STAND}
};
static const Path path3971 = {
.x = 88, .y = 2320, .numPoints = 2, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path3971_0_actions
},
{
    .x = 8, .y = 0,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 64, .yVelTo = 0,
    .numActions = 1,
    .actions = path3971_1_actions
}
}
};
static const GameObjectAction path3974_0_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_CLAW_RUN}
};
static const GameObjectAction path3974_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_CLAW_STAND}
};
static const Path path3974 = {
.x = 112, .y = 2312, .numPoints = 2, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path3974_0_actions
},
{
    .x = 8, .y = 0,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 64, .yVelTo = 0,
    .numActions = 1,
    .actions = path3974_1_actions
}
}
};
static const GameObjectAction path3977_0_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_CLAW_RUN}
};
static const GameObjectAction path3977_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_CLAW_STAND}
};
static const Path path3977 = {
.x = 80, .y = 2304, .numPoints = 2, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path3977_0_actions
},
{
    .x = 8, .y = 0,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 64, .yVelTo = 0,
    .numActions = 1,
    .actions = path3977_1_actions
}
}
};
static const GameObjectAction path3980_0_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_CLAW_RUN}
};
static const GameObjectAction path3980_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_CLAW_STAND}
};
static const Path path3980 = {
.x = 152, .y = 2360, .numPoints = 2, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path3980_0_actions
},
{
    .x = -8, .y = 0,
    .speedTo = 64, .distTo = 512,
    .xVelTo = -64, .yVelTo = 0,
    .numActions = 1,
    .actions = path3980_1_actions
}
}
};
static const GameObjectAction path3983_0_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_CLAW_RUN}
};
static const GameObjectAction path3983_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_CLAW_STAND}
};
static const Path path3983 = {
.x = 160, .y = 2344, .numPoints = 2, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path3983_0_actions
},
{
    .x = -8, .y = 0,
    .speedTo = 64, .distTo = 512,
    .xVelTo = -64, .yVelTo = 0,
    .numActions = 1,
    .actions = path3983_1_actions
}
}
};
static const GameObjectAction path3986_0_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_CLAW_RUN}
};
static const GameObjectAction path3986_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_CLAW_STAND}
};
static const Path path3986 = {
.x = 152, .y = 2336, .numPoints = 2, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path3986_0_actions
},
{
    .x = -8, .y = 0,
    .speedTo = 64, .distTo = 512,
    .xVelTo = -64, .yVelTo = 0,
    .numActions = 1,
    .actions = path3986_1_actions
}
}
};
static const GameObjectAction path3989_0_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_CLAW_RUN}
};
static const GameObjectAction path3989_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_CLAW_STAND}
};
static const Path path3989 = {
.x = 168, .y = 2320, .numPoints = 2, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path3989_0_actions
},
{
    .x = -8, .y = 0,
    .speedTo = 64, .distTo = 512,
    .xVelTo = -64, .yVelTo = 0,
    .numActions = 1,
    .actions = path3989_1_actions
}
}
};
static const GameObjectAction path3992_0_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_CLAW_RUN}
};
static const GameObjectAction path3992_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_CLAW_STAND}
};
static const Path path3992 = {
.x = 176, .y = 2304, .numPoints = 2, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path3992_0_actions
},
{
    .x = -8, .y = 0,
    .speedTo = 64, .distTo = 512,
    .xVelTo = -64, .yVelTo = 0,
    .numActions = 1,
    .actions = path3992_1_actions
}
}
};
static const GameObjectAction path3995_0_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_CLAW_RUN}
};
static const GameObjectAction path3995_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_CLAW_STAND}
};
static const Path path3995 = {
.x = 144, .y = 2320, .numPoints = 2, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path3995_0_actions
},
{
    .x = -8, .y = 0,
    .speedTo = 64, .distTo = 512,
    .xVelTo = -64, .yVelTo = 0,
    .numActions = 1,
    .actions = path3995_1_actions
}
}
};
static const Path *room8alien1_paths[] = {
    &path3962,
    &path3965,
    &path3968,
    &path3971,
    &path3974,
    &path3977,
    &path3980,
    &path3983,
    &path3986,
    &path3989,
    &path3992,
    &path3995
};
extern const LevelObject lobj2426;
extern const LevelObject lobj2429;
extern const LevelObject lobj2432;
extern const LevelObject lobj2435;
extern const LevelObject lobj2428;
extern const LevelObject lobj2431;
extern const LevelObject lobj2437;
extern const LevelObject lobj2430;
extern const LevelObject lobj2434;
extern const LevelObject lobj2427;
extern const LevelObject lobj2436;
extern const LevelObject lobj2433;
const LevelObject lobj2426 = {
    .definition = &defAlienPillager,
    .x = 112, .y = 2368,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room8alien1, .path = &path3962,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2429 = {
    .definition = &defAlienPillager,
    .x = 152, .y = 2360,
    .palette = 0,
    .animInd = 0, .flags = 34816,
    .group = &room8alien1, .path = &path3980,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2432 = {
    .definition = &defAlienPillager,
    .x = 96, .y = 2352,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room8alien1, .path = &path3965,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2435 = {
    .definition = &defAlienPillager,
    .x = 160, .y = 2344,
    .palette = 0,
    .animInd = 0, .flags = 34816,
    .group = &room8alien1, .path = &path3983,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2428 = {
    .definition = &defAlienPillager,
    .x = 104, .y = 2336,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room8alien1, .path = &path3968,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2431 = {
    .definition = &defAlienPillager,
    .x = 152, .y = 2336,
    .palette = 0,
    .animInd = 0, .flags = 34816,
    .group = &room8alien1, .path = &path3986,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2437 = {
    .definition = &defAlienPillager,
    .x = 168, .y = 2320,
    .palette = 0,
    .animInd = 0, .flags = 34816,
    .group = &room8alien1, .path = &path3989,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2430 = {
    .definition = &defAlienPillager,
    .x = 144, .y = 2320,
    .palette = 0,
    .animInd = 0, .flags = 34816,
    .group = &room8alien1, .path = &path3995,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2434 = {
    .definition = &defAlienPillager,
    .x = 88, .y = 2320,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room8alien1, .path = &path3971,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2427 = {
    .definition = &defAlienPillager,
    .x = 112, .y = 2312,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room8alien1, .path = &path3974,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2436 = {
    .definition = &defAlienPillager,
    .x = 176, .y = 2304,
    .palette = 0,
    .animInd = 0, .flags = 34816,
    .group = &room8alien1, .path = &path3992,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2433 = {
    .definition = &defAlienPillager,
    .x = 80, .y = 2304,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room8alien1, .path = &path3977,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *room8alien1_objects[] = {
    &lobj2426,
    &lobj2429,
    &lobj2432,
    &lobj2435,
    &lobj2428,
    &lobj2431,
    &lobj2437,
    &lobj2430,
    &lobj2434,
    &lobj2427,
    &lobj2436,
    &lobj2433
};
LevelObjectGroup room8alien1 = {
    .numPaths = 12, .paths = room8alien1_paths,
    .numObjects = 12, .objects = room8alien1_objects
};
extern LevelObjectGroup room8alien2;
static const GameObjectAction path2442_1_actions[] = {
{.action = PathPoint_SetSpeed, },
{.action = startShooting, .count = 5, .interval = 40}
};
static const Path path2442 = {
.x = 88, .y = 2352, .numPoints = 4, .points = {
{
    .x = -8, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 16,
    .speedTo = 128, .distTo = 1024,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 2,
    .actions = path2442_1_actions
},
{
    .x = -40, .y = 48,
    .speedTo = 64, .distTo = 2896,
    .xVelTo = -46, .yVelTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = -104, .y = 48,
    .speedTo = 64, .distTo = 4096,
    .xVelTo = -64, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
}
}
};
static const GameObjectAction path2443_1_actions[] = {
{.action = PathPoint_SetSpeed, },
{.action = startShooting, .count = 5, .interval = 40}
};
static const Path path2443 = {
.x = 152, .y = 2352, .numPoints = 4, .points = {
{
    .x = 24, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 24, .y = 16,
    .speedTo = 128, .distTo = 1024,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 2,
    .actions = path2443_1_actions
},
{
    .x = 56, .y = 48,
    .speedTo = 64, .distTo = 2896,
    .xVelTo = 45, .yVelTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = 120, .y = 48,
    .speedTo = 64, .distTo = 4096,
    .xVelTo = 64, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path *room8alien2_paths[] = {
    &path2442,
    &path2443
};
extern const LevelObject lobj2440;
extern const LevelObject lobj2441;
const LevelObject lobj2440 = {
    .definition = &defAlienGunner,
    .x = 80, .y = 2352,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room8alien2, .path = &path2442,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2441 = {
    .definition = &defAlienGunner,
    .x = 176, .y = 2352,
    .palette = 0,
    .animInd = 0, .flags = 34816,
    .group = &room8alien2, .path = &path2443,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *room8alien2_objects[] = {
    &lobj2440,
    &lobj2441
};
LevelObjectGroup room8alien2 = {
    .numPaths = 2, .paths = room8alien2_paths,
    .numObjects = 2, .objects = room8alien2_objects
};
extern LevelObjectGroup room8alien3;
static const GameObjectAction path2448_1_actions[] = {
{.action = 0 /* to be assigned */, }
};
static const Path path2448 = {
.x = -16, .y = 2392, .numPoints = 11, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 64, .y = 0,
    .speedTo = 64, .distTo = 4096,
    .xVelTo = 64, .yVelTo = 0,
    .numActions = 1,
    .actions = path2448_1_actions
},
{
    .x = 96, .y = -32,
    .speedTo = 64, .distTo = 2896,
    .xVelTo = 45, .yVelTo = -46,
    .numActions = 0,
    .actions = 0
},
{
    .x = 96, .y = -48,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 80, .y = -64,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = -46, .yVelTo = -46,
    .numActions = 0,
    .actions = 0
},
{
    .x = 80, .y = -88,
    .speedTo = 64, .distTo = 1536,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 96, .y = -104,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = 45, .yVelTo = -46,
    .numActions = 0,
    .actions = 0
},
{
    .x = 96, .y = -152,
    .speedTo = 64, .distTo = 3072,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 64, .y = -184,
    .speedTo = 64, .distTo = 2896,
    .xVelTo = -46, .yVelTo = -46,
    .numActions = 0,
    .actions = 0
},
{
    .x = 64, .y = -248,
    .speedTo = 64, .distTo = 4096,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 112, .y = -296,
    .speedTo = 64, .distTo = 4344,
    .xVelTo = 45, .yVelTo = -46,
    .numActions = 0,
    .actions = 0
}
}
};
static const GameObjectAction path2449_1_actions[] = {
{.action = 0 /* to be assigned */, }
};
static const Path path2449 = {
.x = 272, .y = 2392, .numPoints = 11, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -64, .y = 0,
    .speedTo = 64, .distTo = 4096,
    .xVelTo = -64, .yVelTo = 0,
    .numActions = 1,
    .actions = path2449_1_actions
},
{
    .x = -96, .y = -32,
    .speedTo = 64, .distTo = 2896,
    .xVelTo = -46, .yVelTo = -46,
    .numActions = 0,
    .actions = 0
},
{
    .x = -96, .y = -48,
    .speedTo = 64, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 0,
    .actions = 0
},
{
    .x = -80, .y = -64,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = 45, .yVelTo = -46,
    .numActions = 0,
    .actions = 0
},
{
    .x = -80, .y = -88,
    .speedTo = 64, .distTo = 1536,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 0,
    .actions = 0
},
{
    .x = -96, .y = -104,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = -46, .yVelTo = -46,
    .numActions = 0,
    .actions = 0
},
{
    .x = -96, .y = -152,
    .speedTo = 64, .distTo = 3072,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 0,
    .actions = 0
},
{
    .x = -64, .y = -184,
    .speedTo = 64, .distTo = 2896,
    .xVelTo = 45, .yVelTo = -46,
    .numActions = 0,
    .actions = 0
},
{
    .x = -64, .y = -248,
    .speedTo = 64, .distTo = 4096,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 0,
    .actions = 0
},
{
    .x = -120, .y = -296,
    .speedTo = 64, .distTo = 4720,
    .xVelTo = -49, .yVelTo = -42,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path *room8alien3_paths[] = {
    &path2448,
    &path2449
};
extern const LevelObject lobj2446;
extern const LevelObject lobj2447;
const LevelObject lobj2446 = {
    .definition = &defAlienGunner,
    .x = -16, .y = 2392,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room8alien3, .path = &path2448,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2447 = {
    .definition = &defAlienGunner,
    .x = 272, .y = 2392,
    .palette = 0,
    .animInd = 0, .flags = 34816,
    .group = &room8alien3, .path = &path2449,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *room8alien3_objects[] = {
    &lobj2446,
    &lobj2447
};
LevelObjectGroup room8alien3 = {
    .numPaths = 2, .paths = room8alien3_paths,
    .numObjects = 2, .objects = room8alien3_objects
};
extern LevelObjectGroup room8alien4;
static const GameObjectAction path2457_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_GUN_STAND},
{.action = startShooting, .count = 5, .interval = 40}
};
static const Path path2457 = {
.x = 96, .y = 2248, .numPoints = 2, .points = {
{
    .x = -16, .y = 8,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 16, .y = 40,
    .speedTo = 128, .distTo = 2896,
    .xVelTo = 90, .yVelTo = 90,
    .numActions = 2,
    .actions = path2457_1_actions
}
}
};
static const GameObjectAction path2458_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_GUN_STAND},
{.action = startShooting, .count = 5, .interval = 40}
};
static const Path path2458 = {
.x = 88, .y = 2232, .numPoints = 2, .points = {
{
    .x = -16, .y = 8,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 16, .y = 40,
    .speedTo = 128, .distTo = 2896,
    .xVelTo = 90, .yVelTo = 90,
    .numActions = 2,
    .actions = path2458_1_actions
}
}
};
static const GameObjectAction path2459_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_GUN_STAND},
{.action = startShooting, .count = 5, .interval = 40}
};
static const Path path2459 = {
.x = 160, .y = 2248, .numPoints = 2, .points = {
{
    .x = 24, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = 40,
    .speedTo = 128, .distTo = 3620,
    .xVelTo = -91, .yVelTo = 90,
    .numActions = 2,
    .actions = path2459_1_actions
}
}
};
static const GameObjectAction path2460_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_GUN_STAND},
{.action = startShooting, .count = 5, .interval = 40}
};
static const Path path2460 = {
.x = 168, .y = 2232, .numPoints = 2, .points = {
{
    .x = 24, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = 40,
    .speedTo = 128, .distTo = 3620,
    .xVelTo = -91, .yVelTo = 90,
    .numActions = 2,
    .actions = path2460_1_actions
}
}
};
static const Path *room8alien4_paths[] = {
    &path2457,
    &path2458,
    &path2459,
    &path2460
};
extern const LevelObject lobj2453;
extern const LevelObject lobj2455;
extern const LevelObject lobj2454;
extern const LevelObject lobj2456;
const LevelObject lobj2453 = {
    .definition = &defAlienGunner,
    .x = 80, .y = 2256,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room8alien4, .path = &path2457,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2455 = {
    .definition = &defAlienGunner,
    .x = 184, .y = 2248,
    .palette = 0,
    .animInd = 0, .flags = 34816,
    .group = &room8alien4, .path = &path2459,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2454 = {
    .definition = &defAlienGunner,
    .x = 72, .y = 2240,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room8alien4, .path = &path2458,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2456 = {
    .definition = &defAlienGunner,
    .x = 192, .y = 2232,
    .palette = 0,
    .animInd = 0, .flags = 34816,
    .group = &room8alien4, .path = &path2460,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *room8alien4_objects[] = {
    &lobj2453,
    &lobj2455,
    &lobj2454,
    &lobj2456
};
LevelObjectGroup room8alien4 = {
    .numPaths = 4, .paths = room8alien4_paths,
    .numObjects = 4, .objects = room8alien4_objects
};
extern LevelObjectGroup room8powerup;
extern const LevelObject lobj2467;
extern const LevelObject lobj2466;
const LevelObject lobj2467 = {
    .definition = &defHoneyPot,
    .x = 120, .y = 2264,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room8powerup, .path = 0,
    .pathIndex = 0, .child = 0, .interval = 0
};
const LevelObject lobj2466 = {
    .definition = &defHoneyPot,
    .x = 136, .y = 2256,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room8powerup, .path = 0,
    .pathIndex = 0, .child = 0, .interval = 0
};
static const LevelObject *room8powerup_objects[] = {
    &lobj2467,
    &lobj2466
};
LevelObjectGroup room8powerup = {
    .numPaths = 0, .paths = 0,
    .numObjects = 2, .objects = room8powerup_objects
};
extern LevelObjectGroup room9powerup;
extern const LevelObject lobj2471;
extern const LevelObject lobj2470;
extern const LevelObject lobj2469;
const LevelObject lobj2471 = {
    .definition = &defHoneyPot,
    .x = 128, .y = 2176,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room9powerup, .path = 0,
    .pathIndex = 0, .child = 0, .interval = 0
};
const LevelObject lobj2470 = {
    .definition = &defHoneyPot,
    .x = 144, .y = 2168,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room9powerup, .path = 0,
    .pathIndex = 0, .child = 0, .interval = 0
};
const LevelObject lobj2469 = {
    .definition = &defHoneyPot,
    .x = 120, .y = 2160,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room9powerup, .path = 0,
    .pathIndex = 0, .child = 0, .interval = 0
};
static const LevelObject *room9powerup_objects[] = {
    &lobj2471,
    &lobj2470,
    &lobj2469
};
LevelObjectGroup room9powerup = {
    .numPaths = 0, .paths = 0,
    .numObjects = 3, .objects = room9powerup_objects
};
extern LevelObjectGroup room9alienmind;
static const GameObjectAction path2474_1_actions[] = {
{.action = startAlienMindFight, }
};
static const Path path2474 = {
.x = 128, .y = 2040, .numPoints = 2, .points = {
{
    .x = 0, .y = -56,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 24,
    .speedTo = 64, .distTo = 5120,
    .xVelTo = 0, .yVelTo = 64,
    .numActions = 1,
    .actions = path2474_1_actions
}
}
};
static const Path *room9alienmind_paths[] = {
    &path2474
};
extern const LevelObject lobj2472;
const LevelObject lobj2472 = {
    .definition = &defAlienMind,
    .x = 128, .y = 1984,
    .palette = 0,
    .animInd = 0, .flags = 0,
    .group = &room9alienmind, .path = &path2474,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *room9alienmind_objects[] = {
    &lobj2472
};
LevelObjectGroup room9alienmind = {
    .numPaths = 1, .paths = room9alienmind_paths,
    .numObjects = 1, .objects = room9alienmind_objects
};
extern LevelObjectGroup r9aliensfromalienmind;
static const GameObjectAction path2475_0_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_CLAW_RUN}
};
static const Path path2475 = {
.x = 96, .y = 2096, .numPoints = 11, .points = {
{
    .x = 28, .y = -52,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2475_0_actions
},
{
    .x = 24, .y = -56,
    .speedTo = 128, .distTo = 362,
    .xVelTo = -91, .yVelTo = -91,
    .numActions = 0,
    .actions = 0
},
{
    .x = 16, .y = -56,
    .speedTo = 128, .distTo = 512,
    .xVelTo = -128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = -40,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = -58, .yVelTo = 114,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 8,
    .speedTo = 128, .distTo = 3114,
    .xVelTo = -22, .yVelTo = 126,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = 16,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = -115, .yVelTo = 57,
    .numActions = 0,
    .actions = 0
},
{
    .x = -40, .y = 40,
    .speedTo = 128, .distTo = 2172,
    .xVelTo = -91, .yVelTo = 90,
    .numActions = 0,
    .actions = 0
},
{
    .x = -48, .y = 72,
    .speedTo = 128, .distTo = 2111,
    .xVelTo = -32, .yVelTo = 124,
    .numActions = 0,
    .actions = 0
},
{
    .x = -48, .y = 112,
    .speedTo = 128, .distTo = 2560,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = 144,
    .speedTo = 128, .distTo = 2896,
    .xVelTo = 90, .yVelTo = 90,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = 176,
    .speedTo = 128, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
}
}
};
static const GameObjectAction path2476_0_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_CLAW_RUN}
};
static const Path path2476 = {
.x = 160, .y = 2096, .numPoints = 10, .points = {
{
    .x = -28, .y = -52,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2476_0_actions
},
{
    .x = -24, .y = -56,
    .speedTo = 128, .distTo = 362,
    .xVelTo = 90, .yVelTo = -91,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = -56,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = -40,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = 57, .yVelTo = 114,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 8,
    .speedTo = 128, .distTo = 3114,
    .xVelTo = 21, .yVelTo = 126,
    .numActions = 0,
    .actions = 0
},
{
    .x = 16, .y = 16,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = 114, .yVelTo = 57,
    .numActions = 0,
    .actions = 0
},
{
    .x = 40, .y = 40,
    .speedTo = 128, .distTo = 2172,
    .xVelTo = 90, .yVelTo = 90,
    .numActions = 0,
    .actions = 0
},
{
    .x = 48, .y = 72,
    .speedTo = 128, .distTo = 2111,
    .xVelTo = 31, .yVelTo = 124,
    .numActions = 0,
    .actions = 0
},
{
    .x = 48, .y = 128,
    .speedTo = 128, .distTo = 3584,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 176,
    .speedTo = 128, .distTo = 4344,
    .xVelTo = -91, .yVelTo = 90,
    .numActions = 0,
    .actions = 0
}
}
};
static const GameObjectAction path2477_4_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_GUN_STAND},
{.action = setUpdate, .update = ENEMY_updateAlienStandAndShoot}
};
static const Path path2477 = {
.x = -8, .y = 2072, .numPoints = 5, .points = {
{
    .x = 128, .y = -32,
    .speedTo = 256, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = -48,
    .speedTo = 256, .distTo = 2757,
    .xVelTo = -238, .yVelTo = -96,
    .numActions = 0,
    .actions = 0
},
{
    .x = 64, .y = -48,
    .speedTo = 256, .distTo = 1536,
    .xVelTo = -256, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 48, .y = -24,
    .speedTo = 256, .distTo = 1846,
    .xVelTo = -143, .yVelTo = 213,
    .numActions = 0,
    .actions = 0
},
{
    .x = 48, .y = 0,
    .speedTo = 256, .distTo = 1536,
    .xVelTo = 0, .yVelTo = 256,
    .numActions = 2,
    .actions = path2477_4_actions
}
}
};
static const GameObjectAction path2478_4_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ALIEN_GUN_STAND},
{.action = setUpdate, .update = ENEMY_updateAlienStandAndShoot}
};
static const Path path2478 = {
.x = 256, .y = 2048, .numPoints = 5, .points = {
{
    .x = -120, .y = -8,
    .speedTo = 256, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -80, .y = -24,
    .speedTo = 256, .distTo = 2757,
    .xVelTo = 237, .yVelTo = -96,
    .numActions = 0,
    .actions = 0
},
{
    .x = -56, .y = -24,
    .speedTo = 256, .distTo = 1536,
    .xVelTo = 256, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -40, .y = 0,
    .speedTo = 256, .distTo = 1846,
    .xVelTo = 142, .yVelTo = 213,
    .numActions = 0,
    .actions = 0
},
{
    .x = -40, .y = 24,
    .speedTo = 256, .distTo = 1536,
    .xVelTo = 0, .yVelTo = 256,
    .numActions = 2,
    .actions = path2478_4_actions
}
}
};
static const GameObjectAction path2479_0_actions[] = {
{.action = enterBackground, }
};
static const GameObjectAction path2479_5_actions[] = {
{.action = faceRight, }
};
static const GameObjectAction path2479_7_actions[] = {
{.action = enterForeground, },
{.action = PathPoint_SetSpeed, }
};
static const GameObjectAction path2479_8_actions[] = {
{.action = startShooting, .count = 3, .interval = 2}
};
static const GameObjectAction path2479_9_actions[] = {
{.action = startShooting, .count = 3, .interval = 2}
};
static const GameObjectAction path2479_10_actions[] = {
{.action = startShooting, .count = 3, .interval = 2}
};
static const Path path2479 = {
.x = -16, .y = 2256, .numPoints = 14, .points = {
{
    .x = 132, .y = -220,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2479_0_actions
},
{
    .x = 96, .y = -216,
    .speedTo = 128, .distTo = 2318,
    .xVelTo = -128, .yVelTo = 14,
    .numActions = 0,
    .actions = 0
},
{
    .x = 80, .y = -176,
    .speedTo = 128, .distTo = 2757,
    .xVelTo = -48, .yVelTo = 118,
    .numActions = 0,
    .actions = 0
},
{
    .x = 80, .y = -48,
    .speedTo = 128, .distTo = 8192,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
},
{
    .x = 72, .y = -40,
    .speedTo = 128, .distTo = 724,
    .xVelTo = -91, .yVelTo = 90,
    .numActions = 0,
    .actions = 0
},
{
    .x = 56, .y = -32,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = -115, .yVelTo = 57,
    .numActions = 1,
    .actions = path2479_5_actions
},
{
    .x = 40, .y = -40,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = -115, .yVelTo = -58,
    .numActions = 0,
    .actions = 0
},
{
    .x = 32, .y = -64,
    .speedTo = 128, .distTo = 1619,
    .xVelTo = -41, .yVelTo = -122,
    .numActions = 2,
    .actions = path2479_7_actions
},
{
    .x = 32, .y = -112,
    .speedTo = 48, .distTo = 3072,
    .xVelTo = 0, .yVelTo = -48,
    .numActions = 1,
    .actions = path2479_8_actions
},
{
    .x = 32, .y = -96,
    .speedTo = 48, .distTo = 1024,
    .xVelTo = 0, .yVelTo = 48,
    .numActions = 1,
    .actions = path2479_9_actions
},
{
    .x = 32, .y = -80,
    .speedTo = 48, .distTo = 1024,
    .xVelTo = 0, .yVelTo = 48,
    .numActions = 1,
    .actions = path2479_10_actions
},
{
    .x = 32, .y = -48,
    .speedTo = 48, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 48,
    .numActions = 0,
    .actions = 0
},
{
    .x = 24, .y = -24,
    .speedTo = 48, .distTo = 1619,
    .xVelTo = -16, .yVelTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -16,
    .speedTo = 48, .distTo = 1619,
    .xVelTo = -46, .yVelTo = 15,
    .numActions = 0,
    .actions = 0
}
}
};
static const GameObjectAction path2480_0_actions[] = {
{.action = enterBackground, }
};
static const GameObjectAction path2480_5_actions[] = {
{.action = faceLeft, }
};
static const GameObjectAction path2480_7_actions[] = {
{.action = enterForeground, },
{.action = PathPoint_SetSpeed, }
};
static const GameObjectAction path2480_8_actions[] = {
{.action = startShooting, .count = 3, .interval = 2}
};
static const GameObjectAction path2480_9_actions[] = {
{.action = startShooting, .count = 3, .interval = 2}
};
static const GameObjectAction path2480_10_actions[] = {
{.action = startShooting, .count = 3, .interval = 2}
};
static const Path path2480 = {
.x = 208, .y = 2256, .numPoints = 14, .points = {
{
    .x = -68, .y = -220,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2480_0_actions
},
{
    .x = -32, .y = -216,
    .speedTo = 128, .distTo = 2318,
    .xVelTo = 127, .yVelTo = 14,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = -176,
    .speedTo = 128, .distTo = 2757,
    .xVelTo = 47, .yVelTo = 118,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = -48,
    .speedTo = 128, .distTo = 8192,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = -40,
    .speedTo = 128, .distTo = 724,
    .xVelTo = 90, .yVelTo = 90,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = -32,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = 114, .yVelTo = 57,
    .numActions = 1,
    .actions = path2480_5_actions
},
{
    .x = 24, .y = -40,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = 114, .yVelTo = -58,
    .numActions = 0,
    .actions = 0
},
{
    .x = 32, .y = -64,
    .speedTo = 128, .distTo = 1619,
    .xVelTo = 40, .yVelTo = -122,
    .numActions = 2,
    .actions = path2480_7_actions
},
{
    .x = 32, .y = -112,
    .speedTo = 48, .distTo = 3072,
    .xVelTo = 0, .yVelTo = -48,
    .numActions = 1,
    .actions = path2480_8_actions
},
{
    .x = 32, .y = -96,
    .speedTo = 48, .distTo = 1024,
    .xVelTo = 0, .yVelTo = 48,
    .numActions = 1,
    .actions = path2480_9_actions
},
{
    .x = 32, .y = -80,
    .speedTo = 48, .distTo = 1024,
    .xVelTo = 0, .yVelTo = 48,
    .numActions = 1,
    .actions = path2480_10_actions
},
{
    .x = 32, .y = -48,
    .speedTo = 48, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 48,
    .numActions = 0,
    .actions = 0
},
{
    .x = 40, .y = -24,
    .speedTo = 48, .distTo = 1619,
    .xVelTo = 15, .yVelTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = 64, .y = -16,
    .speedTo = 48, .distTo = 1619,
    .xVelTo = 45, .yVelTo = 15,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path *r9aliensfromalienmind_paths[] = {
    &path2475,
    &path2476,
    &path2477,
    &path2478,
    &path2479,
    &path2480
};
extern const LevelObject lobj4022;
extern const LevelObject lobj4021;
extern const LevelObject lobj4023;
extern const LevelObject lobj4024;
extern const LevelObject lobj4020;
extern const LevelObject lobj4019;
const LevelObject lobj4022 = {
    .definition = &defAlienPillager,
    .x = 124, .y = 2044,
    .palette = 0,
    .animInd = 0, .flags = 34816,
    .group = &r9aliensfromalienmind, .path = &path2475,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj4021 = {
    .definition = &defAlienPillager,
    .x = 132, .y = 2044,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &r9aliensfromalienmind, .path = &path2476,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj4023 = {
    .definition = &defAlienGunner,
    .x = 136, .y = 2040,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &r9aliensfromalienmind, .path = &path2478,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj4024 = {
    .definition = &defAlienGunner,
    .x = 120, .y = 2040,
    .palette = 0,
    .animInd = 0, .flags = 34816,
    .group = &r9aliensfromalienmind, .path = &path2477,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj4020 = {
    .definition = &defFly,
    .x = 116, .y = 2036,
    .palette = 0,
    .animInd = 0, .flags = 34816,
    .group = &r9aliensfromalienmind, .path = &path2479,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj4019 = {
    .definition = &defFly,
    .x = 140, .y = 2036,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &r9aliensfromalienmind, .path = &path2480,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r9aliensfromalienmind_objects[] = {
    &lobj4022,
    &lobj4021,
    &lobj4023,
    &lobj4024,
    &lobj4020,
    &lobj4019
};
LevelObjectGroup r9aliensfromalienmind = {
    .numPaths = 6, .paths = r9aliensfromalienmind_paths,
    .numObjects = 6, .objects = r9aliensfromalienmind_objects
};
extern LevelObjectGroup part2;
LevelObjectGroup part2 = {
    .numPaths = 0, .paths = 0,
    .numObjects = 0, .objects = 0
};
extern LevelObjectGroup room10acidants;
static const GameObjectAction path2498_0_actions[] = {
{.action = setInvul, .time = 255}
};
static const GameObjectAction path2498_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ANT_RIGHT},
{.action = setSpriteVFlip, .flip = false},
{.action = setSpriteHFlip, .flip = false},
{.action = setInvul, }
};
static const Path path2498 = {
.x = 152, .y = 1920, .numPoints = 3, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2498_0_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 128, .distTo = 2560,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 4,
    .actions = path2498_1_actions
},
{
    .x = 0, .y = -56,
    .speedTo = 128, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 0,
    .actions = 0
}
}
};
static const GameObjectAction path2499_0_actions[] = {
{.action = setInvul, .time = 255}
};
static const GameObjectAction path2499_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ANT_RIGHT},
{.action = setSpriteVFlip, .flip = false},
{.action = setSpriteHFlip, .flip = false},
{.action = setInvul, }
};
static const Path path2499 = {
.x = 168, .y = 1928, .numPoints = 3, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2499_0_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 128, .distTo = 2560,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 4,
    .actions = path2499_1_actions
},
{
    .x = 0, .y = -56,
    .speedTo = 128, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 0,
    .actions = 0
}
}
};
static const GameObjectAction path2500_0_actions[] = {
{.action = setInvul, .time = 255}
};
static const GameObjectAction path2500_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ANT_RIGHT},
{.action = setSpriteVFlip, .flip = false},
{.action = setSpriteHFlip, .flip = false},
{.action = setInvul, }
};
static const Path path2500 = {
.x = 184, .y = 1928, .numPoints = 3, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2500_0_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 128, .distTo = 2560,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 4,
    .actions = path2500_1_actions
},
{
    .x = 0, .y = -56,
    .speedTo = 128, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 0,
    .actions = 0
}
}
};
static const GameObjectAction path2501_0_actions[] = {
{.action = setInvul, .time = 255}
};
static const GameObjectAction path2501_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ANT_RIGHT},
{.action = setSpriteVFlip, .flip = false},
{.action = setSpriteHFlip, .flip = true},
{.action = setInvul, }
};
static const Path path2501 = {
.x = 200, .y = 1920, .numPoints = 3, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2501_0_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 128, .distTo = 2560,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 4,
    .actions = path2501_1_actions
},
{
    .x = 0, .y = -56,
    .speedTo = 128, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 0,
    .actions = 0
}
}
};
static const GameObjectAction path2502_0_actions[] = {
{.action = setInvul, .time = 255}
};
static const GameObjectAction path2502_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ANT_RIGHT},
{.action = setSpriteVFlip, .flip = false},
{.action = setSpriteHFlip, .flip = true},
{.action = setInvul, }
};
static const Path path2502 = {
.x = 216, .y = 1904, .numPoints = 3, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2502_0_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 128, .distTo = 2560,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 4,
    .actions = path2502_1_actions
},
{
    .x = 0, .y = -56,
    .speedTo = 128, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path *room10acidants_paths[] = {
    &path2498,
    &path2499,
    &path2500,
    &path2501,
    &path2502
};
extern const LevelObject lobj2495;
extern const LevelObject lobj2493;
extern const LevelObject lobj2494;
extern const LevelObject lobj2496;
extern const LevelObject lobj2492;
const LevelObject lobj2495 = {
    .definition = &defAcidAnt,
    .x = 168, .y = 1928,
    .palette = 0,
    .animInd = 1, .flags = 38912,
    .group = &room10acidants, .path = &path2499,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2493 = {
    .definition = &defAcidAnt,
    .x = 184, .y = 1928,
    .palette = 0,
    .animInd = 1, .flags = 38912,
    .group = &room10acidants, .path = &path2500,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2494 = {
    .definition = &defAcidAnt,
    .x = 200, .y = 1920,
    .palette = 0,
    .animInd = 1, .flags = 36864,
    .group = &room10acidants, .path = &path2501,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2496 = {
    .definition = &defAcidAnt,
    .x = 152, .y = 1920,
    .palette = 0,
    .animInd = 1, .flags = 38912,
    .group = &room10acidants, .path = &path2498,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2492 = {
    .definition = &defAcidAnt,
    .x = 216, .y = 1904,
    .palette = 0,
    .animInd = 1, .flags = 36864,
    .group = &room10acidants, .path = &path2502,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *room10acidants_objects[] = {
    &lobj2495,
    &lobj2493,
    &lobj2494,
    &lobj2496,
    &lobj2492
};
LevelObjectGroup room10acidants = {
    .numPaths = 5, .paths = room10acidants_paths,
    .numObjects = 5, .objects = room10acidants_objects
};
extern LevelObjectGroup room10acidants2;
static const GameObjectAction path2514_0_actions[] = {
{.action = setInvul, .time = 255}
};
static const GameObjectAction path2514_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ANT_RIGHT},
{.action = setSpriteVFlip, .flip = false},
{.action = setSpriteHFlip, .flip = false},
{.action = setInvul, }
};
static const Path path2514 = {
.x = 40, .y = 1888, .numPoints = 3, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2514_0_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 128, .distTo = 2560,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 4,
    .actions = path2514_1_actions
},
{
    .x = 0, .y = -56,
    .speedTo = 128, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 0,
    .actions = 0
}
}
};
static const GameObjectAction path2515_0_actions[] = {
{.action = setInvul, .time = 255}
};
static const GameObjectAction path2515_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ANT_RIGHT},
{.action = setSpriteVFlip, .flip = false},
{.action = setSpriteHFlip, .flip = false},
{.action = setInvul, }
};
static const Path path2515 = {
.x = 56, .y = 1896, .numPoints = 3, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2515_0_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 128, .distTo = 2560,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 4,
    .actions = path2515_1_actions
},
{
    .x = 0, .y = -56,
    .speedTo = 128, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 0,
    .actions = 0
}
}
};
static const GameObjectAction path2516_0_actions[] = {
{.action = setInvul, .time = 255}
};
static const GameObjectAction path2516_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ANT_RIGHT},
{.action = setSpriteVFlip, .flip = false},
{.action = setSpriteHFlip, .flip = false},
{.action = setInvul, }
};
static const Path path2516 = {
.x = 72, .y = 1904, .numPoints = 3, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2516_0_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 128, .distTo = 2560,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 4,
    .actions = path2516_1_actions
},
{
    .x = 0, .y = -56,
    .speedTo = 128, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 0,
    .actions = 0
}
}
};
static const GameObjectAction path2517_0_actions[] = {
{.action = setInvul, .time = 255}
};
static const GameObjectAction path2517_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ANT_RIGHT},
{.action = setSpriteVFlip, .flip = false},
{.action = setSpriteHFlip, .flip = true},
{.action = setInvul, }
};
static const Path path2517 = {
.x = 88, .y = 1912, .numPoints = 3, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2517_0_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 128, .distTo = 2560,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 4,
    .actions = path2517_1_actions
},
{
    .x = 0, .y = -56,
    .speedTo = 128, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 0,
    .actions = 0
}
}
};
static const GameObjectAction path2518_0_actions[] = {
{.action = setInvul, .time = 255}
};
static const GameObjectAction path2518_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ANT_RIGHT},
{.action = setSpriteVFlip, .flip = false},
{.action = setSpriteHFlip, .flip = true},
{.action = setInvul, }
};
static const Path path2518 = {
.x = 104, .y = 1904, .numPoints = 3, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2518_0_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 128, .distTo = 2560,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 4,
    .actions = path2518_1_actions
},
{
    .x = 0, .y = -56,
    .speedTo = 128, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path *room10acidants2_paths[] = {
    &path2514,
    &path2515,
    &path2516,
    &path2517,
    &path2518
};
extern const LevelObject lobj2511;
extern const LevelObject lobj2509;
extern const LevelObject lobj2510;
extern const LevelObject lobj2512;
extern const LevelObject lobj2513;
const LevelObject lobj2511 = {
    .definition = &defAcidAnt,
    .x = 88, .y = 1912,
    .palette = 0,
    .animInd = 1, .flags = 36864,
    .group = &room10acidants2, .path = &path2517,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2509 = {
    .definition = &defAcidAnt,
    .x = 104, .y = 1904,
    .palette = 0,
    .animInd = 1, .flags = 36864,
    .group = &room10acidants2, .path = &path2518,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2510 = {
    .definition = &defAcidAnt,
    .x = 72, .y = 1904,
    .palette = 0,
    .animInd = 1, .flags = 38912,
    .group = &room10acidants2, .path = &path2516,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2512 = {
    .definition = &defAcidAnt,
    .x = 56, .y = 1896,
    .palette = 0,
    .animInd = 1, .flags = 38912,
    .group = &room10acidants2, .path = &path2515,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2513 = {
    .definition = &defAcidAnt,
    .x = 40, .y = 1888,
    .palette = 0,
    .animInd = 1, .flags = 38912,
    .group = &room10acidants2, .path = &path2514,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *room10acidants2_objects[] = {
    &lobj2511,
    &lobj2509,
    &lobj2510,
    &lobj2512,
    &lobj2513
};
LevelObjectGroup room10acidants2 = {
    .numPaths = 5, .paths = room10acidants2_paths,
    .numObjects = 5, .objects = room10acidants2_objects
};
extern LevelObjectGroup r11acidants1a;
static const GameObjectAction path2526_0_actions[] = {
{.action = setInvul, .time = 255}
};
static const GameObjectAction path2526_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ANT_RIGHT},
{.action = setSpriteVFlip, .flip = false},
{.action = setSpriteHFlip, .flip = true},
{.action = setInvul, }
};
static const Path path2526 = {
.x = 264, .y = 1784, .numPoints = 3, .points = {
{
    .x = -32, .y = 32,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2526_0_actions
},
{
    .x = -32, .y = -8,
    .speedTo = 128, .distTo = 2560,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 4,
    .actions = path2526_1_actions
},
{
    .x = -32, .y = -24,
    .speedTo = 128, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path *r11acidants1a_paths[] = {
    &path2526
};
extern const LevelObject lobj2524;
const LevelObject lobj2524 = {
    .definition = &defAcidAnt,
    .x = 232, .y = 1816,
    .palette = 0,
    .animInd = 1, .flags = 36864,
    .group = &r11acidants1a, .path = &path2526,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r11acidants1a_objects[] = {
    &lobj2524
};
LevelObjectGroup r11acidants1a = {
    .numPaths = 1, .paths = r11acidants1a_paths,
    .numObjects = 1, .objects = r11acidants1a_objects
};
extern LevelObjectGroup r11acidants1b;
static const GameObjectAction path2530_0_actions[] = {
{.action = setInvul, .time = 255}
};
static const GameObjectAction path2530_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ANT_RIGHT},
{.action = setSpriteVFlip, .flip = false},
{.action = setSpriteHFlip, .flip = false},
{.action = setInvul, }
};
static const Path path2530 = {
.x = 232, .y = 1784, .numPoints = 3, .points = {
{
    .x = -32, .y = 32,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2530_0_actions
},
{
    .x = -32, .y = -8,
    .speedTo = 128, .distTo = 2560,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 4,
    .actions = path2530_1_actions
},
{
    .x = -32, .y = -24,
    .speedTo = 128, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path *r11acidants1b_paths[] = {
    &path2530
};
extern const LevelObject lobj2528;
const LevelObject lobj2528 = {
    .definition = &defAcidAnt,
    .x = 200, .y = 1816,
    .palette = 0,
    .animInd = 1, .flags = 38912,
    .group = &r11acidants1b, .path = &path2530,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r11acidants1b_objects[] = {
    &lobj2528
};
LevelObjectGroup r11acidants1b = {
    .numPaths = 1, .paths = r11acidants1b_paths,
    .numObjects = 1, .objects = r11acidants1b_objects
};
extern LevelObjectGroup r11acidants1c;
static const GameObjectAction path2534_0_actions[] = {
{.action = setInvul, .time = 255}
};
static const GameObjectAction path2534_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ANT_RIGHT},
{.action = setSpriteVFlip, .flip = false},
{.action = setSpriteHFlip, .flip = true},
{.action = setInvul, }
};
static const Path path2534 = {
.x = 200, .y = 1784, .numPoints = 3, .points = {
{
    .x = -32, .y = 32,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2534_0_actions
},
{
    .x = -32, .y = -8,
    .speedTo = 128, .distTo = 2560,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 4,
    .actions = path2534_1_actions
},
{
    .x = -32, .y = -24,
    .speedTo = 128, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path *r11acidants1c_paths[] = {
    &path2534
};
extern const LevelObject lobj2532;
const LevelObject lobj2532 = {
    .definition = &defAcidAnt,
    .x = 168, .y = 1816,
    .palette = 0,
    .animInd = 1, .flags = 36864,
    .group = &r11acidants1c, .path = &path2534,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r11acidants1c_objects[] = {
    &lobj2532
};
LevelObjectGroup r11acidants1c = {
    .numPaths = 1, .paths = r11acidants1c_paths,
    .numObjects = 1, .objects = r11acidants1c_objects
};
extern LevelObjectGroup r11acidants1d;
static const GameObjectAction path2538_0_actions[] = {
{.action = setInvul, .time = 255}
};
static const GameObjectAction path2538_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ANT_RIGHT},
{.action = setSpriteVFlip, .flip = false},
{.action = setSpriteHFlip, .flip = false},
{.action = setInvul, }
};
static const Path path2538 = {
.x = 168, .y = 1784, .numPoints = 3, .points = {
{
    .x = -32, .y = 32,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2538_0_actions
},
{
    .x = -32, .y = -8,
    .speedTo = 128, .distTo = 2560,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 4,
    .actions = path2538_1_actions
},
{
    .x = -32, .y = -24,
    .speedTo = 128, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path *r11acidants1d_paths[] = {
    &path2538
};
extern const LevelObject lobj2536;
const LevelObject lobj2536 = {
    .definition = &defAcidAnt,
    .x = 136, .y = 1816,
    .palette = 0,
    .animInd = 1, .flags = 38912,
    .group = &r11acidants1d, .path = &path2538,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r11acidants1d_objects[] = {
    &lobj2536
};
LevelObjectGroup r11acidants1d = {
    .numPaths = 1, .paths = r11acidants1d_paths,
    .numObjects = 1, .objects = r11acidants1d_objects
};
extern LevelObjectGroup r11acidants1e;
static const GameObjectAction path2542_0_actions[] = {
{.action = setInvul, .time = 255}
};
static const GameObjectAction path2542_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ANT_RIGHT},
{.action = setSpriteVFlip, .flip = false},
{.action = setSpriteHFlip, .flip = false},
{.action = setInvul, }
};
static const Path path2542 = {
.x = 152, .y = 1776, .numPoints = 3, .points = {
{
    .x = -32, .y = 32,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2542_0_actions
},
{
    .x = -32, .y = -8,
    .speedTo = 128, .distTo = 2560,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 4,
    .actions = path2542_1_actions
},
{
    .x = -32, .y = -24,
    .speedTo = 128, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path *r11acidants1e_paths[] = {
    &path2542
};
extern const LevelObject lobj2540;
const LevelObject lobj2540 = {
    .definition = &defAcidAnt,
    .x = 120, .y = 1808,
    .palette = 0,
    .animInd = 1, .flags = 38912,
    .group = &r11acidants1e, .path = &path2542,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r11acidants1e_objects[] = {
    &lobj2540
};
LevelObjectGroup r11acidants1e = {
    .numPaths = 1, .paths = r11acidants1e_paths,
    .numObjects = 1, .objects = r11acidants1e_objects
};
extern LevelObjectGroup r11acidants1f;
static const GameObjectAction path2546_0_actions[] = {
{.action = setInvul, .time = 255}
};
static const GameObjectAction path2546_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ANT_RIGHT},
{.action = setSpriteVFlip, .flip = false},
{.action = setSpriteHFlip, .flip = false},
{.action = setInvul, }
};
static const Path path2546 = {
.x = 120, .y = 1768, .numPoints = 3, .points = {
{
    .x = -32, .y = 32,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2546_0_actions
},
{
    .x = -32, .y = -8,
    .speedTo = 128, .distTo = 2560,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 4,
    .actions = path2546_1_actions
},
{
    .x = -32, .y = -24,
    .speedTo = 128, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path *r11acidants1f_paths[] = {
    &path2546
};
extern const LevelObject lobj2544;
const LevelObject lobj2544 = {
    .definition = &defAcidAnt,
    .x = 88, .y = 1800,
    .palette = 0,
    .animInd = 1, .flags = 38912,
    .group = &r11acidants1f, .path = &path2546,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r11acidants1f_objects[] = {
    &lobj2544
};
LevelObjectGroup r11acidants1f = {
    .numPaths = 1, .paths = r11acidants1f_paths,
    .numObjects = 1, .objects = r11acidants1f_objects
};
extern LevelObjectGroup r11acidants1g;
static const GameObjectAction path2550_0_actions[] = {
{.action = setInvul, .time = 255}
};
static const GameObjectAction path2550_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ANT_RIGHT},
{.action = setSpriteVFlip, .flip = false},
{.action = setSpriteHFlip, .flip = true},
{.action = setInvul, }
};
static const Path path2550 = {
.x = 88, .y = 1768, .numPoints = 3, .points = {
{
    .x = -32, .y = 32,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2550_0_actions
},
{
    .x = -32, .y = -8,
    .speedTo = 128, .distTo = 2560,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 4,
    .actions = path2550_1_actions
},
{
    .x = -32, .y = -24,
    .speedTo = 128, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path *r11acidants1g_paths[] = {
    &path2550
};
extern const LevelObject lobj2548;
const LevelObject lobj2548 = {
    .definition = &defAcidAnt,
    .x = 56, .y = 1800,
    .palette = 0,
    .animInd = 1, .flags = 36864,
    .group = &r11acidants1g, .path = &path2550,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r11acidants1g_objects[] = {
    &lobj2548
};
LevelObjectGroup r11acidants1g = {
    .numPaths = 1, .paths = r11acidants1g_paths,
    .numObjects = 1, .objects = r11acidants1g_objects
};
extern LevelObjectGroup r11acidants1h;
static const GameObjectAction path2554_0_actions[] = {
{.action = setInvul, .time = 255}
};
static const GameObjectAction path2554_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ANT_RIGHT},
{.action = setSpriteVFlip, .flip = false},
{.action = setSpriteHFlip, .flip = false},
{.action = setInvul, }
};
static const Path path2554 = {
.x = 56, .y = 1768, .numPoints = 3, .points = {
{
    .x = -32, .y = 32,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2554_0_actions
},
{
    .x = -32, .y = -8,
    .speedTo = 128, .distTo = 2560,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 4,
    .actions = path2554_1_actions
},
{
    .x = -32, .y = -24,
    .speedTo = 128, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path *r11acidants1h_paths[] = {
    &path2554
};
extern const LevelObject lobj2552;
const LevelObject lobj2552 = {
    .definition = &defAcidAnt,
    .x = 24, .y = 1800,
    .palette = 0,
    .animInd = 1, .flags = 38912,
    .group = &r11acidants1h, .path = &path2554,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r11acidants1h_objects[] = {
    &lobj2552
};
LevelObjectGroup r11acidants1h = {
    .numPaths = 1, .paths = r11acidants1h_paths,
    .numObjects = 1, .objects = r11acidants1h_objects
};
extern LevelObjectGroup room11acidants2a;
static const Path path2567 = {
.x = 272, .y = 1616, .numPoints = 2, .points = {
{
    .x = 0, .y = 24,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -288, .y = -24,
    .speedTo = 128, .distTo = 18686,
    .xVelTo = -127, .yVelTo = -22,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path *room11acidants2a_paths[] = {
    &path2567
};
extern const LevelObject lobj2566;
const LevelObject lobj2566 = {
    .definition = &defAcidAnt,
    .x = 272, .y = 1640,
    .palette = 0,
    .animInd = 0, .flags = 34816,
    .group = &room11acidants2a, .path = &path2567,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *room11acidants2a_objects[] = {
    &lobj2566
};
LevelObjectGroup room11acidants2a = {
    .numPaths = 1, .paths = room11acidants2a_paths,
    .numObjects = 1, .objects = room11acidants2a_objects
};
extern LevelObjectGroup room11acidants2b;
static const Path path2580 = {
.x = -16, .y = 1576, .numPoints = 2, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 288, .y = 48,
    .speedTo = 128, .distTo = 18686,
    .xVelTo = 126, .yVelTo = 21,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path *room11acidants2b_paths[] = {
    &path2580
};
extern const LevelObject lobj2579;
const LevelObject lobj2579 = {
    .definition = &defAcidAnt,
    .x = -16, .y = 1576,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &room11acidants2b, .path = &path2580,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *room11acidants2b_objects[] = {
    &lobj2579
};
LevelObjectGroup room11acidants2b = {
    .numPaths = 1, .paths = room11acidants2b_paths,
    .numObjects = 1, .objects = room11acidants2b_objects
};
extern LevelObjectGroup r11acidants3a;
static const GameObjectAction path2583_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ANT_RIGHT},
{.action = setSpriteVFlip, .flip = false},
{.action = setSpriteHFlip, .flip = true},
{.action = enterForeground, }
};
static const Path path2583 = {
.x = 248, .y = 1736, .numPoints = 3, .points = {
{
    .x = 0, .y = -16,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -24,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 4,
    .actions = path2583_1_actions
},
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 1536,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path *r11acidants3a_paths[] = {
    &path2583
};
extern const LevelObject lobj2582;
const LevelObject lobj2582 = {
    .definition = &defAcidAnt,
    .x = 248, .y = 1720,
    .palette = 0,
    .animInd = 1, .flags = 4096,
    .group = &r11acidants3a, .path = &path2583,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r11acidants3a_objects[] = {
    &lobj2582
};
LevelObjectGroup r11acidants3a = {
    .numPaths = 1, .paths = r11acidants3a_paths,
    .numObjects = 1, .objects = r11acidants3a_objects
};
extern LevelObjectGroup r11acidants3b;
static const GameObjectAction path2587_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ANT_RIGHT},
{.action = setSpriteVFlip, .flip = false},
{.action = setSpriteHFlip, .flip = true},
{.action = enterForeground, }
};
static const Path path2587 = {
.x = 224, .y = 1736, .numPoints = 3, .points = {
{
    .x = 0, .y = -16,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -24,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 4,
    .actions = path2587_1_actions
},
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 1536,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path *r11acidants3b_paths[] = {
    &path2587
};
extern const LevelObject lobj2586;
const LevelObject lobj2586 = {
    .definition = &defAcidAnt,
    .x = 224, .y = 1720,
    .palette = 0,
    .animInd = 1, .flags = 4096,
    .group = &r11acidants3b, .path = &path2587,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r11acidants3b_objects[] = {
    &lobj2586
};
LevelObjectGroup r11acidants3b = {
    .numPaths = 1, .paths = r11acidants3b_paths,
    .numObjects = 1, .objects = r11acidants3b_objects
};
extern LevelObjectGroup r11acidants3c;
static const GameObjectAction path2591_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ANT_RIGHT},
{.action = setSpriteVFlip, .flip = false},
{.action = setSpriteHFlip, .flip = false},
{.action = enterForeground, }
};
static const Path path2591 = {
.x = 200, .y = 1736, .numPoints = 3, .points = {
{
    .x = 0, .y = -16,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -24,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 4,
    .actions = path2591_1_actions
},
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 1536,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path *r11acidants3c_paths[] = {
    &path2591
};
extern const LevelObject lobj2590;
const LevelObject lobj2590 = {
    .definition = &defAcidAnt,
    .x = 200, .y = 1720,
    .palette = 0,
    .animInd = 1, .flags = 6144,
    .group = &r11acidants3c, .path = &path2591,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r11acidants3c_objects[] = {
    &lobj2590
};
LevelObjectGroup r11acidants3c = {
    .numPaths = 1, .paths = r11acidants3c_paths,
    .numObjects = 1, .objects = r11acidants3c_objects
};
extern LevelObjectGroup r11acidants3d;
static const GameObjectAction path2595_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ANT_RIGHT},
{.action = setSpriteVFlip, .flip = false},
{.action = setSpriteHFlip, .flip = true},
{.action = enterForeground, }
};
static const Path path2595 = {
.x = 176, .y = 1736, .numPoints = 3, .points = {
{
    .x = 0, .y = -16,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -24,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 4,
    .actions = path2595_1_actions
},
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 1536,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path *r11acidants3d_paths[] = {
    &path2595
};
extern const LevelObject lobj2594;
const LevelObject lobj2594 = {
    .definition = &defAcidAnt,
    .x = 176, .y = 1720,
    .palette = 0,
    .animInd = 1, .flags = 4096,
    .group = &r11acidants3d, .path = &path2595,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r11acidants3d_objects[] = {
    &lobj2594
};
LevelObjectGroup r11acidants3d = {
    .numPaths = 1, .paths = r11acidants3d_paths,
    .numObjects = 1, .objects = r11acidants3d_objects
};
extern LevelObjectGroup r11acidants3e;
static const GameObjectAction path2599_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ANT_RIGHT},
{.action = setSpriteVFlip, .flip = false},
{.action = setSpriteHFlip, .flip = true},
{.action = enterForeground, }
};
static const Path path2599 = {
.x = 152, .y = 1736, .numPoints = 3, .points = {
{
    .x = 0, .y = -16,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -24,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 4,
    .actions = path2599_1_actions
},
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 1536,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path *r11acidants3e_paths[] = {
    &path2599
};
extern const LevelObject lobj2598;
const LevelObject lobj2598 = {
    .definition = &defAcidAnt,
    .x = 152, .y = 1720,
    .palette = 0,
    .animInd = 1, .flags = 4096,
    .group = &r11acidants3e, .path = &path2599,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r11acidants3e_objects[] = {
    &lobj2598
};
LevelObjectGroup r11acidants3e = {
    .numPaths = 1, .paths = r11acidants3e_paths,
    .numObjects = 1, .objects = r11acidants3e_objects
};
extern LevelObjectGroup r11acidants3f;
static const GameObjectAction path2603_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ANT_RIGHT},
{.action = setSpriteVFlip, .flip = false},
{.action = setSpriteHFlip, .flip = true},
{.action = enterForeground, }
};
static const Path path2603 = {
.x = 128, .y = 1720, .numPoints = 3, .points = {
{
    .x = 0, .y = -16,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -24,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 4,
    .actions = path2603_1_actions
},
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 1536,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path *r11acidants3f_paths[] = {
    &path2603
};
extern const LevelObject lobj2602;
const LevelObject lobj2602 = {
    .definition = &defAcidAnt,
    .x = 128, .y = 1704,
    .palette = 0,
    .animInd = 1, .flags = 4096,
    .group = &r11acidants3f, .path = &path2603,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r11acidants3f_objects[] = {
    &lobj2602
};
LevelObjectGroup r11acidants3f = {
    .numPaths = 1, .paths = r11acidants3f_paths,
    .numObjects = 1, .objects = r11acidants3f_objects
};
extern LevelObjectGroup r11acidants3g;
static const GameObjectAction path2607_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ANT_RIGHT},
{.action = setSpriteVFlip, .flip = false},
{.action = setSpriteHFlip, .flip = true},
{.action = enterForeground, }
};
static const Path path2607 = {
.x = 104, .y = 1720, .numPoints = 3, .points = {
{
    .x = 0, .y = -16,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -24,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 4,
    .actions = path2607_1_actions
},
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 1536,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path *r11acidants3g_paths[] = {
    &path2607
};
extern const LevelObject lobj2606;
const LevelObject lobj2606 = {
    .definition = &defAcidAnt,
    .x = 104, .y = 1704,
    .palette = 0,
    .animInd = 1, .flags = 4096,
    .group = &r11acidants3g, .path = &path2607,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r11acidants3g_objects[] = {
    &lobj2606
};
LevelObjectGroup r11acidants3g = {
    .numPaths = 1, .paths = r11acidants3g_paths,
    .numObjects = 1, .objects = r11acidants3g_objects
};
extern LevelObjectGroup r11acidants3h;
static const GameObjectAction path2611_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ANT_RIGHT},
{.action = setSpriteVFlip, .flip = false},
{.action = setSpriteHFlip, .flip = true},
{.action = enterForeground, }
};
static const Path path2611 = {
.x = 80, .y = 1720, .numPoints = 3, .points = {
{
    .x = 0, .y = -16,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -24,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 4,
    .actions = path2611_1_actions
},
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 1536,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path *r11acidants3h_paths[] = {
    &path2611
};
extern const LevelObject lobj2610;
const LevelObject lobj2610 = {
    .definition = &defAcidAnt,
    .x = 80, .y = 1704,
    .palette = 0,
    .animInd = 1, .flags = 4096,
    .group = &r11acidants3h, .path = &path2611,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r11acidants3h_objects[] = {
    &lobj2610
};
LevelObjectGroup r11acidants3h = {
    .numPaths = 1, .paths = r11acidants3h_paths,
    .numObjects = 1, .objects = r11acidants3h_objects
};
extern LevelObjectGroup r11acidants3i;
static const GameObjectAction path2615_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ANT_RIGHT},
{.action = setSpriteVFlip, .flip = false},
{.action = setSpriteHFlip, .flip = true},
{.action = enterForeground, }
};
static const Path path2615 = {
.x = 56, .y = 1720, .numPoints = 3, .points = {
{
    .x = 0, .y = -16,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -24,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 4,
    .actions = path2615_1_actions
},
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 1536,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path *r11acidants3i_paths[] = {
    &path2615
};
extern const LevelObject lobj2614;
const LevelObject lobj2614 = {
    .definition = &defAcidAnt,
    .x = 56, .y = 1704,
    .palette = 0,
    .animInd = 1, .flags = 4096,
    .group = &r11acidants3i, .path = &path2615,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r11acidants3i_objects[] = {
    &lobj2614
};
LevelObjectGroup r11acidants3i = {
    .numPaths = 1, .paths = r11acidants3i_paths,
    .numObjects = 1, .objects = r11acidants3i_objects
};
extern LevelObjectGroup r11acidants3j;
static const GameObjectAction path2619_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ANT_RIGHT},
{.action = setSpriteVFlip, .flip = false},
{.action = setSpriteHFlip, .flip = false},
{.action = enterForeground, }
};
static const Path path2619 = {
.x = 32, .y = 1720, .numPoints = 3, .points = {
{
    .x = 0, .y = -16,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -24,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 4,
    .actions = path2619_1_actions
},
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 1536,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path *r11acidants3j_paths[] = {
    &path2619
};
extern const LevelObject lobj2618;
const LevelObject lobj2618 = {
    .definition = &defAcidAnt,
    .x = 32, .y = 1704,
    .palette = 0,
    .animInd = 1, .flags = 6144,
    .group = &r11acidants3j, .path = &path2619,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r11acidants3j_objects[] = {
    &lobj2618
};
LevelObjectGroup r11acidants3j = {
    .numPaths = 1, .paths = r11acidants3j_paths,
    .numObjects = 1, .objects = r11acidants3j_objects
};
extern LevelObjectGroup r11acidants3k;
static const GameObjectAction path2623_1_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ANT_RIGHT},
{.action = setSpriteVFlip, .flip = false},
{.action = setSpriteHFlip, .flip = false},
{.action = enterForeground, }
};
static const Path path2623 = {
.x = 8, .y = 1720, .numPoints = 3, .points = {
{
    .x = 0, .y = -16,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -24,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 4,
    .actions = path2623_1_actions
},
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 1536,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path *r11acidants3k_paths[] = {
    &path2623
};
extern const LevelObject lobj2622;
const LevelObject lobj2622 = {
    .definition = &defAcidAnt,
    .x = 8, .y = 1704,
    .palette = 0,
    .animInd = 1, .flags = 6144,
    .group = &r11acidants3k, .path = &path2623,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r11acidants3k_objects[] = {
    &lobj2622
};
LevelObjectGroup r11acidants3k = {
    .numPaths = 1, .paths = r11acidants3k_paths,
    .numObjects = 1, .objects = r11acidants3k_objects
};
extern LevelObjectGroup r11powerup;
extern const LevelObject lobj2626;
const LevelObject lobj2626 = {
    .definition = &defHoneyPot,
    .x = 120, .y = 1656,
    .palette = &palWaspAndHoney,
    .animInd = 0, .flags = 32768,
    .group = &r11powerup, .path = 0,
    .pathIndex = 0, .child = 0, .interval = 0
};
static const LevelObject *r11powerup_objects[] = {
    &lobj2626
};
LevelObjectGroup r11powerup = {
    .numPaths = 0, .paths = 0,
    .numObjects = 1, .objects = r11powerup_objects
};
extern LevelObjectGroup r12wasp1a;
static const GameObjectAction path2630_0_actions[] = {
{.action = 0 /* to be assigned */, }
};
static const GameObjectAction path2630_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path2630_2_actions[] = {
{.action = startWaspAttack, }
};
static const Path path2630 = {
.x = 96, .y = 1512, .numPoints = 3, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2630_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path2630_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path2630_2_actions
}
}
};
static const Path *r12wasp1a_paths[] = {
    &path2630
};
extern const LevelObject lobj2629;
const LevelObject lobj2629 = {
    .definition = &defWasp,
    .x = 96, .y = 1512,
    .palette = 0,
    .animInd = 0, .flags = 0,
    .group = &r12wasp1a, .path = &path2630,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r12wasp1a_objects[] = {
    &lobj2629
};
LevelObjectGroup r12wasp1a = {
    .numPaths = 1, .paths = r12wasp1a_paths,
    .numObjects = 1, .objects = r12wasp1a_objects
};
extern LevelObjectGroup r12wasp1b;
static const GameObjectAction path2636_0_actions[] = {
{.action = 0 /* to be assigned */, }
};
static const GameObjectAction path2636_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path2636_2_actions[] = {
{.action = startWaspAttack, }
};
static const Path path2636 = {
.x = 128, .y = 1528, .numPoints = 3, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2636_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path2636_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path2636_2_actions
}
}
};
static const Path *r12wasp1b_paths[] = {
    &path2636
};
extern const LevelObject lobj2635;
const LevelObject lobj2635 = {
    .definition = &defWasp,
    .x = 128, .y = 1528,
    .palette = 0,
    .animInd = 0, .flags = 0,
    .group = &r12wasp1b, .path = &path2636,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r12wasp1b_objects[] = {
    &lobj2635
};
LevelObjectGroup r12wasp1b = {
    .numPaths = 1, .paths = r12wasp1b_paths,
    .numObjects = 1, .objects = r12wasp1b_objects
};
extern LevelObjectGroup r12wasp1c;
static const GameObjectAction path2642_0_actions[] = {
{.action = 0 /* to be assigned */, }
};
static const GameObjectAction path2642_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path2642_2_actions[] = {
{.action = startWaspAttack, }
};
static const Path path2642 = {
.x = 160, .y = 1544, .numPoints = 3, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2642_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path2642_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path2642_2_actions
}
}
};
static const Path *r12wasp1c_paths[] = {
    &path2642
};
extern const LevelObject lobj2641;
const LevelObject lobj2641 = {
    .definition = &defWasp,
    .x = 160, .y = 1544,
    .palette = 0,
    .animInd = 0, .flags = 0,
    .group = &r12wasp1c, .path = &path2642,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r12wasp1c_objects[] = {
    &lobj2641
};
LevelObjectGroup r12wasp1c = {
    .numPaths = 1, .paths = r12wasp1c_paths,
    .numObjects = 1, .objects = r12wasp1c_objects
};
extern LevelObjectGroup r12wasp2a;
static const GameObjectAction path2648_0_actions[] = {
{.action = 0 /* to be assigned */, }
};
static const GameObjectAction path2648_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path2648_2_actions[] = {
{.action = startWaspAttack, }
};
static const Path path2648 = {
.x = 80, .y = 1448, .numPoints = 3, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2648_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path2648_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path2648_2_actions
}
}
};
static const Path *r12wasp2a_paths[] = {
    &path2648
};
extern const LevelObject lobj2647;
const LevelObject lobj2647 = {
    .definition = &defWasp,
    .x = 80, .y = 1448,
    .palette = 0,
    .animInd = 0, .flags = 0,
    .group = &r12wasp2a, .path = &path2648,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r12wasp2a_objects[] = {
    &lobj2647
};
LevelObjectGroup r12wasp2a = {
    .numPaths = 1, .paths = r12wasp2a_paths,
    .numObjects = 1, .objects = r12wasp2a_objects
};
extern LevelObjectGroup r12wasp2b;
static const GameObjectAction path2654_0_actions[] = {
{.action = 0 /* to be assigned */, }
};
static const GameObjectAction path2654_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path2654_2_actions[] = {
{.action = startWaspAttack, }
};
static const Path path2654 = {
.x = 56, .y = 1472, .numPoints = 3, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2654_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path2654_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path2654_2_actions
}
}
};
static const Path *r12wasp2b_paths[] = {
    &path2654
};
extern const LevelObject lobj2653;
const LevelObject lobj2653 = {
    .definition = &defWasp,
    .x = 56, .y = 1472,
    .palette = 0,
    .animInd = 0, .flags = 0,
    .group = &r12wasp2b, .path = &path2654,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r12wasp2b_objects[] = {
    &lobj2653
};
LevelObjectGroup r12wasp2b = {
    .numPaths = 1, .paths = r12wasp2b_paths,
    .numObjects = 1, .objects = r12wasp2b_objects
};
extern LevelObjectGroup r12wasp2c;
static const GameObjectAction path2660_0_actions[] = {
{.action = 0 /* to be assigned */, }
};
static const GameObjectAction path2660_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path2660_2_actions[] = {
{.action = startWaspAttack, }
};
static const Path path2660 = {
.x = 32, .y = 1496, .numPoints = 3, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2660_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path2660_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path2660_2_actions
}
}
};
static const Path *r12wasp2c_paths[] = {
    &path2660
};
extern const LevelObject lobj2659;
const LevelObject lobj2659 = {
    .definition = &defWasp,
    .x = 32, .y = 1496,
    .palette = 0,
    .animInd = 0, .flags = 0,
    .group = &r12wasp2c, .path = &path2660,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r12wasp2c_objects[] = {
    &lobj2659
};
LevelObjectGroup r12wasp2c = {
    .numPaths = 1, .paths = r12wasp2c_paths,
    .numObjects = 1, .objects = r12wasp2c_objects
};
extern LevelObjectGroup r12wasp3a;
static const GameObjectAction path2666_0_actions[] = {
{.action = 0 /* to be assigned */, }
};
static const GameObjectAction path2666_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path2666_2_actions[] = {
{.action = startWaspAttack, }
};
static const Path path2666 = {
.x = 176, .y = 1472, .numPoints = 3, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2666_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path2666_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path2666_2_actions
}
}
};
static const Path *r12wasp3a_paths[] = {
    &path2666
};
extern const LevelObject lobj2665;
const LevelObject lobj2665 = {
    .definition = &defWasp,
    .x = 176, .y = 1472,
    .palette = 0,
    .animInd = 0, .flags = 0,
    .group = &r12wasp3a, .path = &path2666,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r12wasp3a_objects[] = {
    &lobj2665
};
LevelObjectGroup r12wasp3a = {
    .numPaths = 1, .paths = r12wasp3a_paths,
    .numObjects = 1, .objects = r12wasp3a_objects
};
extern LevelObjectGroup r12wasp3b;
static const GameObjectAction path2672_0_actions[] = {
{.action = 0 /* to be assigned */, }
};
static const GameObjectAction path2672_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path2672_2_actions[] = {
{.action = startWaspAttack, }
};
static const Path path2672 = {
.x = 200, .y = 1496, .numPoints = 3, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2672_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path2672_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path2672_2_actions
}
}
};
static const Path *r12wasp3b_paths[] = {
    &path2672
};
extern const LevelObject lobj2671;
const LevelObject lobj2671 = {
    .definition = &defWasp,
    .x = 200, .y = 1496,
    .palette = 0,
    .animInd = 0, .flags = 0,
    .group = &r12wasp3b, .path = &path2672,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r12wasp3b_objects[] = {
    &lobj2671
};
LevelObjectGroup r12wasp3b = {
    .numPaths = 1, .paths = r12wasp3b_paths,
    .numObjects = 1, .objects = r12wasp3b_objects
};
extern LevelObjectGroup r12wasp3c;
static const GameObjectAction path2678_0_actions[] = {
{.action = 0 /* to be assigned */, }
};
static const GameObjectAction path2678_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path2678_2_actions[] = {
{.action = startWaspAttack, }
};
static const Path path2678 = {
.x = 224, .y = 1520, .numPoints = 3, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2678_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path2678_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path2678_2_actions
}
}
};
static const Path *r12wasp3c_paths[] = {
    &path2678
};
extern const LevelObject lobj2677;
const LevelObject lobj2677 = {
    .definition = &defWasp,
    .x = 224, .y = 1520,
    .palette = 0,
    .animInd = 0, .flags = 0,
    .group = &r12wasp3c, .path = &path2678,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r12wasp3c_objects[] = {
    &lobj2677
};
LevelObjectGroup r12wasp3c = {
    .numPaths = 1, .paths = r12wasp3c_paths,
    .numObjects = 1, .objects = r12wasp3c_objects
};
extern LevelObjectGroup r12wasp4a;
static const GameObjectAction path2684_0_actions[] = {
{.action = 0 /* to be assigned */, }
};
static const GameObjectAction path2684_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path2684_2_actions[] = {
{.action = startWaspAttack, }
};
static const Path path2684 = {
.x = 48, .y = 1416, .numPoints = 3, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2684_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path2684_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path2684_2_actions
}
}
};
static const Path *r12wasp4a_paths[] = {
    &path2684
};
extern const LevelObject lobj2683;
const LevelObject lobj2683 = {
    .definition = &defWasp,
    .x = 48, .y = 1416,
    .palette = 0,
    .animInd = 0, .flags = 0,
    .group = &r12wasp4a, .path = &path2684,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r12wasp4a_objects[] = {
    &lobj2683
};
LevelObjectGroup r12wasp4a = {
    .numPaths = 1, .paths = r12wasp4a_paths,
    .numObjects = 1, .objects = r12wasp4a_objects
};
extern LevelObjectGroup r12wasp4b;
static const GameObjectAction path2690_0_actions[] = {
{.action = 0 /* to be assigned */, }
};
static const GameObjectAction path2690_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path2690_2_actions[] = {
{.action = startWaspAttack, }
};
static const Path path2690 = {
.x = 208, .y = 1416, .numPoints = 3, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2690_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path2690_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path2690_2_actions
}
}
};
static const Path *r12wasp4b_paths[] = {
    &path2690
};
extern const LevelObject lobj2689;
const LevelObject lobj2689 = {
    .definition = &defWasp,
    .x = 208, .y = 1416,
    .palette = 0,
    .animInd = 0, .flags = 0,
    .group = &r12wasp4b, .path = &path2690,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r12wasp4b_objects[] = {
    &lobj2689
};
LevelObjectGroup r12wasp4b = {
    .numPaths = 1, .paths = r12wasp4b_paths,
    .numObjects = 1, .objects = r12wasp4b_objects
};
extern LevelObjectGroup r12wasp4c;
static const GameObjectAction path2696_0_actions[] = {
{.action = 0 /* to be assigned */, }
};
static const GameObjectAction path2696_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path2696_2_actions[] = {
{.action = startWaspAttack, }
};
static const Path path2696 = {
.x = 32, .y = 1504, .numPoints = 3, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2696_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path2696_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path2696_2_actions
}
}
};
static const Path *r12wasp4c_paths[] = {
    &path2696
};
extern const LevelObject lobj2695;
const LevelObject lobj2695 = {
    .definition = &defWasp,
    .x = 32, .y = 1504,
    .palette = 0,
    .animInd = 0, .flags = 0,
    .group = &r12wasp4c, .path = &path2696,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r12wasp4c_objects[] = {
    &lobj2695
};
LevelObjectGroup r12wasp4c = {
    .numPaths = 1, .paths = r12wasp4c_paths,
    .numObjects = 1, .objects = r12wasp4c_objects
};
extern LevelObjectGroup r12wasp4d;
static const GameObjectAction path2702_0_actions[] = {
{.action = 0 /* to be assigned */, }
};
static const GameObjectAction path2702_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path2702_2_actions[] = {
{.action = startWaspAttack, }
};
static const Path path2702 = {
.x = 224, .y = 1504, .numPoints = 3, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2702_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path2702_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path2702_2_actions
}
}
};
static const Path *r12wasp4d_paths[] = {
    &path2702
};
extern const LevelObject lobj2701;
const LevelObject lobj2701 = {
    .definition = &defWasp,
    .x = 224, .y = 1504,
    .palette = 0,
    .animInd = 0, .flags = 0,
    .group = &r12wasp4d, .path = &path2702,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r12wasp4d_objects[] = {
    &lobj2701
};
LevelObjectGroup r12wasp4d = {
    .numPaths = 1, .paths = r12wasp4d_paths,
    .numObjects = 1, .objects = r12wasp4d_objects
};
extern LevelObjectGroup r12powerup;
extern const LevelObject lobj2707;
const LevelObject lobj2707 = {
    .definition = &defReinforcedHoneyPot,
    .x = 128, .y = 1360,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &r12powerup, .path = 0,
    .pathIndex = 0, .child = 0, .interval = 0
};
static const LevelObject *r12powerup_objects[] = {
    &lobj2707
};
LevelObjectGroup r12powerup = {
    .numPaths = 0, .paths = 0,
    .numObjects = 1, .objects = r12powerup_objects
};
extern LevelObjectGroup r13acidantsfromholes;
static const GameObjectAction path2717_2_actions[] = {
{.action = markDisappear, }
};
static const Path path2717 = {
.x = 16, .y = 1168, .numPoints = 3, .points = {
{
    .x = 0, .y = 48,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 160,
    .speedTo = 128, .distTo = 7168,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 176,
    .speedTo = 128, .distTo = 1024,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 1,
    .actions = path2717_2_actions
}
}
};
static const GameObjectAction path2718_2_actions[] = {
{.action = markDisappear, }
};
static const Path path2718 = {
.x = 24, .y = 1152, .numPoints = 3, .points = {
{
    .x = 0, .y = 48,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 176,
    .speedTo = 128, .distTo = 8192,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 192,
    .speedTo = 128, .distTo = 1024,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 1,
    .actions = path2718_2_actions
}
}
};
static const GameObjectAction path2720_2_actions[] = {
{.action = markDisappear, }
};
static const Path path2720 = {
.x = 8, .y = 1152, .numPoints = 3, .points = {
{
    .x = 0, .y = 48,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 176,
    .speedTo = 128, .distTo = 8192,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 192,
    .speedTo = 128, .distTo = 1024,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 1,
    .actions = path2720_2_actions
}
}
};
static const GameObjectAction path2715_2_actions[] = {
{.action = markDisappear, }
};
static const Path path2715 = {
.x = 232, .y = 1152, .numPoints = 3, .points = {
{
    .x = 0, .y = 48,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 176,
    .speedTo = 128, .distTo = 8192,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 192,
    .speedTo = 128, .distTo = 1024,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 1,
    .actions = path2715_2_actions
}
}
};
static const GameObjectAction path2716_2_actions[] = {
{.action = markDisappear, }
};
static const Path path2716 = {
.x = 240, .y = 1168, .numPoints = 3, .points = {
{
    .x = 0, .y = 48,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 160,
    .speedTo = 128, .distTo = 7168,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 176,
    .speedTo = 128, .distTo = 1024,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 1,
    .actions = path2716_2_actions
}
}
};
static const GameObjectAction path2719_2_actions[] = {
{.action = markDisappear, }
};
static const Path path2719 = {
.x = 248, .y = 1152, .numPoints = 3, .points = {
{
    .x = 0, .y = 48,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 176,
    .speedTo = 128, .distTo = 8192,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 192,
    .speedTo = 128, .distTo = 1024,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 1,
    .actions = path2719_2_actions
}
}
};
static const Path *r13acidantsfromholes_paths[] = {
    &path2717,
    &path2718,
    &path2720,
    &path2715,
    &path2716,
    &path2719
};
extern const LevelObject lobj2710;
extern const LevelObject lobj4258;
extern const LevelObject lobj4255;
extern const LevelObject lobj2711;
extern const LevelObject lobj4256;
extern const LevelObject lobj4259;
extern const LevelObject lobj4257;
extern const LevelObject lobj4254;
const LevelObject lobj2710 = {
    .definition = &defAntHole,
    .x = 240, .y = 1216,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &r13acidantsfromholes, .path = &path2716,
    .pathIndex = 1, .child = &lobj4258, .interval = 24
};
const LevelObject lobj4258 = {
    .definition = &defAcidAnt,
    .x = 240, .y = 1216,
    .palette = 0,
    .animInd = 1, .flags = 32768,
    .group = &r13acidantsfromholes, .path = &path2716,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj4255 = {
    .definition = &defAcidAnt,
    .x = 16, .y = 1216,
    .palette = 0,
    .animInd = 1, .flags = 34816,
    .group = &r13acidantsfromholes, .path = &path2717,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2711 = {
    .definition = &defAntHole,
    .x = 16, .y = 1216,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &r13acidantsfromholes, .path = &path2717,
    .pathIndex = 1, .child = &lobj4255, .interval = 24
};
const LevelObject lobj4256 = {
    .definition = &defAcidAnt,
    .x = 8, .y = 1200,
    .palette = 0,
    .animInd = 1, .flags = 34816,
    .group = &r13acidantsfromholes, .path = &path2720,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj4259 = {
    .definition = &defAcidAnt,
    .x = 248, .y = 1200,
    .palette = 0,
    .animInd = 1, .flags = 32768,
    .group = &r13acidantsfromholes, .path = &path2719,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj4257 = {
    .definition = &defAcidAnt,
    .x = 232, .y = 1200,
    .palette = 0,
    .animInd = 1, .flags = 32768,
    .group = &r13acidantsfromholes, .path = &path2715,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj4254 = {
    .definition = &defAcidAnt,
    .x = 24, .y = 1200,
    .palette = 0,
    .animInd = 1, .flags = 34816,
    .group = &r13acidantsfromholes, .path = &path2718,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r13acidantsfromholes_objects[] = {
    &lobj2710,
    &lobj4258,
    &lobj4255,
    &lobj2711,
    &lobj4256,
    &lobj4259,
    &lobj4257,
    &lobj4254
};
LevelObjectGroup r13acidantsfromholes = {
    .numPaths = 6, .paths = r13acidantsfromholes_paths,
    .numObjects = 8, .objects = r13acidantsfromholes_objects
};
extern LevelObjectGroup r13acidantholes;
extern const LevelObject lobj2714;
extern const LevelObject lobj2713;
extern const LevelObject lobj2709;
extern const LevelObject lobj2712;
const LevelObject lobj2714 = {
    .definition = &defAntHole,
    .x = 8, .y = 1200,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &r13acidantholes, .path = 0,
    .pathIndex = 0, .child = &lobj4256, .interval = 24
};
const LevelObject lobj2713 = {
    .definition = &defAntHole,
    .x = 248, .y = 1200,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &r13acidantholes, .path = 0,
    .pathIndex = 0, .child = &lobj4259, .interval = 24
};
const LevelObject lobj2709 = {
    .definition = &defAntHole,
    .x = 232, .y = 1200,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &r13acidantholes, .path = 0,
    .pathIndex = 0, .child = &lobj4257, .interval = 24
};
const LevelObject lobj2712 = {
    .definition = &defAntHole,
    .x = 24, .y = 1200,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &r13acidantholes, .path = 0,
    .pathIndex = 0, .child = &lobj4254, .interval = 24
};
static const LevelObject *r13acidantholes_objects[] = {
    &lobj2714,
    &lobj2713,
    &lobj2709,
    &lobj2712
};
LevelObjectGroup r13acidantholes = {
    .numPaths = 0, .paths = 0,
    .numObjects = 4, .objects = r13acidantholes_objects
};
extern LevelObjectGroup r13beetle1;
static const GameObjectAction path2730_0_actions[] = {
{.action = setInvul, .time = 255},
{.action = setSpriteAnim, .anim = ANI_BEETLE_90}
};
static const GameObjectAction path2730_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path2730_2_actions[] = {
{.action = BeetleShoot, }
};
static const GameObjectAction path2730_3_actions[] = {
{.action = BeetleShoot, }
};
static const GameObjectAction path2730_4_actions[] = {
{.action = BeetleShoot, }
};
static const GameObjectAction path2730_5_actions[] = {
{.action = BeetleShoot, }
};
static const GameObjectAction path2730_6_actions[] = {
{.action = BeetleShoot, }
};
static const GameObjectAction path2730_7_actions[] = {
{.action = setSpriteAnim, .anim = ANI_BEETLE_135}
};
static const GameObjectAction path2730_8_actions[] = {
{.action = setSpriteAnim, .anim = ANI_BEETLE_0},
{.action = setSpriteVFlip, .flip = false},
{.action = setSpriteHFlip, .flip = true}
};
static const Path path2730 = {
.x = 56, .y = 1320, .numPoints = 10, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 32, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 2,
    .actions = path2730_0_actions
},
{
    .x = 0, .y = -16,
    .speedTo = 32, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -32,
    .numActions = 1,
    .actions = path2730_1_actions
},
{
    .x = 0, .y = -24,
    .speedTo = 32, .distTo = 512,
    .xVelTo = 0, .yVelTo = -32,
    .numActions = 1,
    .actions = path2730_2_actions
},
{
    .x = 0, .y = -48,
    .speedTo = 32, .distTo = 1536,
    .xVelTo = 0, .yVelTo = -32,
    .numActions = 1,
    .actions = path2730_3_actions
},
{
    .x = 0, .y = -72,
    .speedTo = 32, .distTo = 1536,
    .xVelTo = 0, .yVelTo = -32,
    .numActions = 1,
    .actions = path2730_4_actions
},
{
    .x = 0, .y = -96,
    .speedTo = 32, .distTo = 1536,
    .xVelTo = 0, .yVelTo = -32,
    .numActions = 1,
    .actions = path2730_5_actions
},
{
    .x = 0, .y = -120,
    .speedTo = 32, .distTo = 1536,
    .xVelTo = 0, .yVelTo = -32,
    .numActions = 1,
    .actions = path2730_6_actions
},
{
    .x = 0, .y = -144,
    .speedTo = 32, .distTo = 1536,
    .xVelTo = 0, .yVelTo = -32,
    .numActions = 1,
    .actions = path2730_7_actions
},
{
    .x = -16, .y = -160,
    .speedTo = 32, .distTo = 1448,
    .xVelTo = -23, .yVelTo = -23,
    .numActions = 3,
    .actions = path2730_8_actions
},
{
    .x = -112, .y = -160,
    .speedTo = 32, .distTo = 6144,
    .xVelTo = -32, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
}
}
};
static const GameObjectAction path2731_0_actions[] = {
{.action = setInvul, .time = 255},
{.action = setSpriteAnim, .anim = ANI_BEETLE_90}
};
static const GameObjectAction path2731_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path2731_2_actions[] = {
{.action = BeetleShoot, }
};
static const GameObjectAction path2731_3_actions[] = {
{.action = BeetleShoot, }
};
static const GameObjectAction path2731_4_actions[] = {
{.action = BeetleShoot, }
};
static const GameObjectAction path2731_5_actions[] = {
{.action = BeetleShoot, }
};
static const GameObjectAction path2731_6_actions[] = {
{.action = BeetleShoot, }
};
static const GameObjectAction path2731_7_actions[] = {
{.action = setSpriteAnim, .anim = ANI_BEETLE_135}
};
static const GameObjectAction path2731_8_actions[] = {
{.action = setSpriteAnim, .anim = ANI_BEETLE_0},
{.action = setSpriteVFlip, .flip = false},
{.action = setSpriteHFlip, .flip = false}
};
static const Path path2731 = {
.x = 200, .y = 1320, .numPoints = 10, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 32, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 2,
    .actions = path2731_0_actions
},
{
    .x = 0, .y = -16,
    .speedTo = 32, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -32,
    .numActions = 1,
    .actions = path2731_1_actions
},
{
    .x = 0, .y = -24,
    .speedTo = 32, .distTo = 512,
    .xVelTo = 0, .yVelTo = -32,
    .numActions = 1,
    .actions = path2731_2_actions
},
{
    .x = 0, .y = -48,
    .speedTo = 32, .distTo = 1536,
    .xVelTo = 0, .yVelTo = -32,
    .numActions = 1,
    .actions = path2731_3_actions
},
{
    .x = 0, .y = -72,
    .speedTo = 32, .distTo = 1536,
    .xVelTo = 0, .yVelTo = -32,
    .numActions = 1,
    .actions = path2731_4_actions
},
{
    .x = 0, .y = -96,
    .speedTo = 32, .distTo = 1536,
    .xVelTo = 0, .yVelTo = -32,
    .numActions = 1,
    .actions = path2731_5_actions
},
{
    .x = 0, .y = -120,
    .speedTo = 32, .distTo = 1536,
    .xVelTo = 0, .yVelTo = -32,
    .numActions = 1,
    .actions = path2731_6_actions
},
{
    .x = 0, .y = -144,
    .speedTo = 32, .distTo = 1536,
    .xVelTo = 0, .yVelTo = -32,
    .numActions = 1,
    .actions = path2731_7_actions
},
{
    .x = 16, .y = -160,
    .speedTo = 32, .distTo = 1448,
    .xVelTo = 22, .yVelTo = -23,
    .numActions = 3,
    .actions = path2731_8_actions
},
{
    .x = 112, .y = -160,
    .speedTo = 32, .distTo = 6144,
    .xVelTo = 32, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
}
}
};
static const Path *r13beetle1_paths[] = {
    &path2730,
    &path2731
};
extern const LevelObject lobj2727;
extern const LevelObject lobj2728;
const LevelObject lobj2727 = {
    .definition = &defBeetle,
    .x = 56, .y = 1320,
    .palette = 0,
    .animInd = 1, .flags = 36864,
    .group = &r13beetle1, .path = &path2730,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2728 = {
    .definition = &defBeetle,
    .x = 200, .y = 1320,
    .palette = 0,
    .animInd = 1, .flags = 38912,
    .group = &r13beetle1, .path = &path2731,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r13beetle1_objects[] = {
    &lobj2727,
    &lobj2728
};
LevelObjectGroup r13beetle1 = {
    .numPaths = 2, .paths = r13beetle1_paths,
    .numObjects = 2, .objects = r13beetle1_objects
};
extern LevelObjectGroup r13fly1;
static const GameObjectAction path2742_3_actions[] = {
{.action = enterForeground, },
{.action = faceLeft, },
{.action = PathPoint_SetSpeed, }
};
static const GameObjectAction path2742_4_actions[] = {
{.action = startShooting, .count = 3, .interval = 6}
};
static const GameObjectAction path2742_5_actions[] = {
{.action = startWaspAttack, }
};
static const Path path2742 = {
.x = 32, .y = 1264, .numPoints = 6, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 192, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 56, .y = 0,
    .speedTo = 192, .distTo = 3584,
    .xVelTo = 192, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 96, .y = -8,
    .speedTo = 192, .distTo = 2610,
    .xVelTo = 188, .yVelTo = -38,
    .numActions = 0,
    .actions = 0
},
{
    .x = 120, .y = -16,
    .speedTo = 192, .distTo = 1619,
    .xVelTo = 182, .yVelTo = -61,
    .numActions = 3,
    .actions = path2742_3_actions
},
{
    .x = 136, .y = -24,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = 57, .yVelTo = -29,
    .numActions = 1,
    .actions = path2742_4_actions
},
{
    .x = 152, .y = -40,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = 45, .yVelTo = -46,
    .numActions = 1,
    .actions = path2742_5_actions
}
}
};
static const Path *r13fly1_paths[] = {
    &path2742
};
extern const LevelObject lobj2741;
const LevelObject lobj2741 = {
    .definition = &defWaspShooter,
    .x = 32, .y = 1264,
    .palette = 0,
    .animInd = 0, .flags = 0,
    .group = &r13fly1, .path = &path2742,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r13fly1_objects[] = {
    &lobj2741
};
LevelObjectGroup r13fly1 = {
    .numPaths = 1, .paths = r13fly1_paths,
    .numObjects = 1, .objects = r13fly1_objects
};
extern LevelObjectGroup r13fly3;
static const GameObjectAction path2760_3_actions[] = {
{.action = enterForeground, },
{.action = faceRight, },
{.action = PathPoint_SetSpeed, }
};
static const GameObjectAction path2760_4_actions[] = {
{.action = startShooting, .count = 3, .interval = 6}
};
static const GameObjectAction path2760_5_actions[] = {
{.action = startWaspAttack, }
};
static const Path path2760 = {
.x = 224, .y = 1224, .numPoints = 6, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 192, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -56, .y = 0,
    .speedTo = 192, .distTo = 3584,
    .xVelTo = -192, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -96, .y = -8,
    .speedTo = 192, .distTo = 2610,
    .xVelTo = -189, .yVelTo = -38,
    .numActions = 0,
    .actions = 0
},
{
    .x = -120, .y = -16,
    .speedTo = 192, .distTo = 1619,
    .xVelTo = -183, .yVelTo = -61,
    .numActions = 3,
    .actions = path2760_3_actions
},
{
    .x = -136, .y = -24,
    .speedTo = 64, .distTo = 1144,
    .xVelTo = -58, .yVelTo = -29,
    .numActions = 1,
    .actions = path2760_4_actions
},
{
    .x = -152, .y = -40,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = -46, .yVelTo = -46,
    .numActions = 1,
    .actions = path2760_5_actions
}
}
};
static const Path *r13fly3_paths[] = {
    &path2760
};
extern const LevelObject lobj2759;
const LevelObject lobj2759 = {
    .definition = &defWaspShooter,
    .x = 224, .y = 1224,
    .palette = 0,
    .animInd = 0, .flags = 2048,
    .group = &r13fly3, .path = &path2760,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r13fly3_objects[] = {
    &lobj2759
};
LevelObjectGroup r13fly3 = {
    .numPaths = 1, .paths = r13fly3_paths,
    .numObjects = 1, .objects = r13fly3_objects
};
extern LevelObjectGroup r14beetles;
static const GameObjectAction path2779_0_actions[] = {
{.action = setSpriteAnim, .anim = ANI_BEETLE_90}
};
static const GameObjectAction path2779_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path2779_2_actions[] = {
{.action = setSpriteAnim, .anim = ANI_BEETLE_BACK}
};
static const GameObjectAction path2779_4_actions[] = {
{.action = faceLeft, },
{.action = setSpriteAnim, .anim = ANI_BEETLE_90}
};
static const GameObjectAction path2779_5_actions[] = {
{.action = BeetleShoot, }
};
static const GameObjectAction path2779_6_actions[] = {
{.action = enterBackground, }
};
static const GameObjectAction path2779_7_actions[] = {
{.action = setSpriteAnim, .anim = ANI_BEETLE_BACK}
};
static const GameObjectAction path2779_9_actions[] = {
{.action = faceRight, },
{.action = setSpriteAnim, .anim = ANI_BEETLE_90}
};
static const GameObjectAction path2779_10_actions[] = {
{.action = enterForeground, },
{.action = BeetleShoot, }
};
static const GameObjectAction path2779_12_actions[] = {
{.action = setSpriteAnim, .anim = ANI_BEETLE_BACK}
};
static const GameObjectAction path2779_13_actions[] = {
{.action = faceLeft, },
{.action = setSpriteAnim, .anim = ANI_BEETLE_90}
};
static const GameObjectAction path2779_14_actions[] = {
{.action = BeetleShoot, }
};
static const GameObjectAction path2779_15_actions[] = {
{.action = enterBackground, }
};
static const GameObjectAction path2779_16_actions[] = {
{.action = setSpriteAnim, .anim = ANI_BEETLE_BACK}
};
static const GameObjectAction path2779_17_actions[] = {
{.action = faceRight, },
{.action = setSpriteAnim, .anim = ANI_BEETLE_90}
};
static const GameObjectAction path2779_18_actions[] = {
{.action = enterForeground, },
{.action = BeetleShoot, }
};
static const GameObjectAction path2779_20_actions[] = {
{.action = setSpriteAnim, .anim = ANI_BEETLE_BACK}
};
static const GameObjectAction path2779_21_actions[] = {
{.action = faceLeft, },
{.action = setSpriteAnim, .anim = ANI_BEETLE_90}
};
static const GameObjectAction path2779_22_actions[] = {
{.action = BeetleShoot, }
};
static const GameObjectAction path2779_23_actions[] = {
{.action = enterBackground, }
};
static const GameObjectAction path2779_24_actions[] = {
{.action = setSpriteAnim, .anim = ANI_BEETLE_BACK}
};
static const GameObjectAction path2779_25_actions[] = {
{.action = faceRight, },
{.action = setSpriteAnim, .anim = ANI_BEETLE_90}
};
static const GameObjectAction path2779_26_actions[] = {
{.action = enterForeground, },
{.action = BeetleShoot, }
};
static const GameObjectAction path2779_28_actions[] = {
{.action = setSpriteAnim, .anim = ANI_BEETLE_BACK}
};
static const GameObjectAction path2779_29_actions[] = {
{.action = faceLeft, },
{.action = setSpriteAnim, .anim = ANI_BEETLE_90}
};
static const GameObjectAction path2779_30_actions[] = {
{.action = BeetleShoot, }
};
static const GameObjectAction path2779_31_actions[] = {
{.action = setSpriteAnim, .anim = ANI_BEETLE_135}
};
static const GameObjectAction path2779_32_actions[] = {
{.action = setSpriteAnim, .anim = ANI_BEETLE_0},
{.action = faceRight, },
{.action = setSpriteVFlip, .flip = false}
};
static const GameObjectAction path2779_33_actions[] = {
{.action = setSpriteAnim, .anim = ANI_BEETLE_EAT}
};
static const Path path2779 = {
.x = 40, .y = 856, .numPoints = 34, .points = {
{
    .x = 64, .y = 240,
    .speedTo = 80, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2779_0_actions
},
{
    .x = 64, .y = 224,
    .speedTo = 80, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -80,
    .numActions = 1,
    .actions = path2779_1_actions
},
{
    .x = 40, .y = 208,
    .speedTo = 80, .distTo = 1846,
    .xVelTo = -67, .yVelTo = -45,
    .numActions = 1,
    .actions = path2779_2_actions
},
{
    .x = 32, .y = 208,
    .speedTo = 80, .distTo = 512,
    .xVelTo = -80, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 24, .y = 208,
    .speedTo = 80, .distTo = 512,
    .xVelTo = -80, .yVelTo = 0,
    .numActions = 2,
    .actions = path2779_4_actions
},
{
    .x = 0, .y = 192,
    .speedTo = 80, .distTo = 1846,
    .xVelTo = -67, .yVelTo = -45,
    .numActions = 1,
    .actions = path2779_5_actions
},
{
    .x = 0, .y = 176,
    .speedTo = 80, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -80,
    .numActions = 1,
    .actions = path2779_6_actions
},
{
    .x = 24, .y = 160,
    .speedTo = 80, .distTo = 1846,
    .xVelTo = 66, .yVelTo = -45,
    .numActions = 1,
    .actions = path2779_7_actions
},
{
    .x = 32, .y = 160,
    .speedTo = 80, .distTo = 512,
    .xVelTo = 80, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 40, .y = 160,
    .speedTo = 80, .distTo = 512,
    .xVelTo = 80, .yVelTo = 0,
    .numActions = 2,
    .actions = path2779_9_actions
},
{
    .x = 64, .y = 144,
    .speedTo = 80, .distTo = 1846,
    .xVelTo = 66, .yVelTo = -45,
    .numActions = 2,
    .actions = path2779_10_actions
},
{
    .x = 64, .y = 128,
    .speedTo = 80, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -80,
    .numActions = 0,
    .actions = 0
},
{
    .x = 40, .y = 112,
    .speedTo = 80, .distTo = 1846,
    .xVelTo = -67, .yVelTo = -45,
    .numActions = 1,
    .actions = path2779_12_actions
},
{
    .x = 24, .y = 112,
    .speedTo = 80, .distTo = 1024,
    .xVelTo = -80, .yVelTo = 0,
    .numActions = 2,
    .actions = path2779_13_actions
},
{
    .x = 0, .y = 96,
    .speedTo = 80, .distTo = 1846,
    .xVelTo = -67, .yVelTo = -45,
    .numActions = 1,
    .actions = path2779_14_actions
},
{
    .x = 0, .y = 80,
    .speedTo = 80, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -80,
    .numActions = 1,
    .actions = path2779_15_actions
},
{
    .x = 24, .y = 64,
    .speedTo = 80, .distTo = 1846,
    .xVelTo = 66, .yVelTo = -45,
    .numActions = 1,
    .actions = path2779_16_actions
},
{
    .x = 40, .y = 64,
    .speedTo = 80, .distTo = 1024,
    .xVelTo = 80, .yVelTo = 0,
    .numActions = 2,
    .actions = path2779_17_actions
},
{
    .x = 64, .y = 48,
    .speedTo = 80, .distTo = 1846,
    .xVelTo = 66, .yVelTo = -45,
    .numActions = 2,
    .actions = path2779_18_actions
},
{
    .x = 64, .y = 32,
    .speedTo = 80, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -80,
    .numActions = 0,
    .actions = 0
},
{
    .x = 40, .y = 16,
    .speedTo = 80, .distTo = 1846,
    .xVelTo = -67, .yVelTo = -45,
    .numActions = 1,
    .actions = path2779_20_actions
},
{
    .x = 24, .y = 16,
    .speedTo = 80, .distTo = 1024,
    .xVelTo = -80, .yVelTo = 0,
    .numActions = 2,
    .actions = path2779_21_actions
},
{
    .x = 0, .y = 0,
    .speedTo = 80, .distTo = 1846,
    .xVelTo = -67, .yVelTo = -45,
    .numActions = 1,
    .actions = path2779_22_actions
},
{
    .x = 0, .y = -16,
    .speedTo = 80, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -80,
    .numActions = 1,
    .actions = path2779_23_actions
},
{
    .x = 24, .y = -32,
    .speedTo = 80, .distTo = 1846,
    .xVelTo = 66, .yVelTo = -45,
    .numActions = 1,
    .actions = path2779_24_actions
},
{
    .x = 40, .y = -32,
    .speedTo = 80, .distTo = 1024,
    .xVelTo = 80, .yVelTo = 0,
    .numActions = 2,
    .actions = path2779_25_actions
},
{
    .x = 64, .y = -48,
    .speedTo = 80, .distTo = 1846,
    .xVelTo = 66, .yVelTo = -45,
    .numActions = 2,
    .actions = path2779_26_actions
},
{
    .x = 64, .y = -64,
    .speedTo = 80, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -80,
    .numActions = 0,
    .actions = 0
},
{
    .x = 40, .y = -80,
    .speedTo = 80, .distTo = 1846,
    .xVelTo = -67, .yVelTo = -45,
    .numActions = 1,
    .actions = path2779_28_actions
},
{
    .x = 24, .y = -80,
    .speedTo = 80, .distTo = 1024,
    .xVelTo = -80, .yVelTo = 0,
    .numActions = 2,
    .actions = path2779_29_actions
},
{
    .x = 0, .y = -96,
    .speedTo = 80, .distTo = 1846,
    .xVelTo = -67, .yVelTo = -45,
    .numActions = 1,
    .actions = path2779_30_actions
},
{
    .x = 0, .y = -112,
    .speedTo = 80, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -80,
    .numActions = 1,
    .actions = path2779_31_actions
},
{
    .x = 16, .y = -128,
    .speedTo = 80, .distTo = 1448,
    .xVelTo = 56, .yVelTo = -57,
    .numActions = 3,
    .actions = path2779_32_actions
},
{
    .x = 24, .y = -128,
    .speedTo = 80, .distTo = 512,
    .xVelTo = 80, .yVelTo = 0,
    .numActions = 1,
    .actions = path2779_33_actions
}
}
};
static const GameObjectAction path2780_0_actions[] = {
{.action = setSpriteAnim, .anim = ANI_BEETLE_90}
};
static const GameObjectAction path2780_2_actions[] = {
{.action = setSpriteAnim, .anim = ANI_BEETLE_BACK}
};
static const GameObjectAction path2780_4_actions[] = {
{.action = faceLeft, },
{.action = setSpriteAnim, .anim = ANI_BEETLE_90}
};
static const GameObjectAction path2780_5_actions[] = {
{.action = enterForeground, },
{.action = BeetleShoot, }
};
static const GameObjectAction path2780_7_actions[] = {
{.action = setSpriteAnim, .anim = ANI_BEETLE_BACK}
};
static const GameObjectAction path2780_9_actions[] = {
{.action = faceRight, },
{.action = setSpriteAnim, .anim = ANI_BEETLE_90}
};
static const GameObjectAction path2780_10_actions[] = {
{.action = BeetleShoot, }
};
static const GameObjectAction path2780_11_actions[] = {
{.action = enterBackground, }
};
static const GameObjectAction path2780_12_actions[] = {
{.action = setSpriteAnim, .anim = ANI_BEETLE_BACK}
};
static const GameObjectAction path2780_13_actions[] = {
{.action = faceLeft, },
{.action = setSpriteAnim, .anim = ANI_BEETLE_90}
};
static const GameObjectAction path2780_14_actions[] = {
{.action = enterForeground, },
{.action = BeetleShoot, }
};
static const GameObjectAction path2780_16_actions[] = {
{.action = setSpriteAnim, .anim = ANI_BEETLE_BACK}
};
static const GameObjectAction path2780_17_actions[] = {
{.action = faceRight, },
{.action = setSpriteAnim, .anim = ANI_BEETLE_90}
};
static const GameObjectAction path2780_18_actions[] = {
{.action = BeetleShoot, }
};
static const GameObjectAction path2780_19_actions[] = {
{.action = enterBackground, }
};
static const GameObjectAction path2780_20_actions[] = {
{.action = setSpriteAnim, .anim = ANI_BEETLE_BACK}
};
static const GameObjectAction path2780_21_actions[] = {
{.action = faceLeft, },
{.action = setSpriteAnim, .anim = ANI_BEETLE_90}
};
static const GameObjectAction path2780_22_actions[] = {
{.action = enterForeground, },
{.action = BeetleShoot, }
};
static const GameObjectAction path2780_24_actions[] = {
{.action = setSpriteAnim, .anim = ANI_BEETLE_BACK}
};
static const GameObjectAction path2780_25_actions[] = {
{.action = faceRight, },
{.action = setSpriteAnim, .anim = ANI_BEETLE_90}
};
static const GameObjectAction path2780_26_actions[] = {
{.action = BeetleShoot, }
};
static const GameObjectAction path2780_27_actions[] = {
{.action = enterBackground, }
};
static const GameObjectAction path2780_28_actions[] = {
{.action = setSpriteAnim, .anim = ANI_BEETLE_BACK}
};
static const GameObjectAction path2780_29_actions[] = {
{.action = faceLeft, },
{.action = setSpriteAnim, .anim = ANI_BEETLE_90}
};
static const GameObjectAction path2780_30_actions[] = {
{.action = enterForeground, },
{.action = BeetleShoot, }
};
static const GameObjectAction path2780_31_actions[] = {
{.action = setSpriteAnim, .anim = ANI_BEETLE_135}
};
static const GameObjectAction path2780_32_actions[] = {
{.action = setSpriteAnim, .anim = ANI_BEETLE_0},
{.action = faceRight, },
{.action = setSpriteVFlip, .flip = false}
};
static const GameObjectAction path2780_33_actions[] = {
{.action = setSpriteAnim, .anim = ANI_BEETLE_EAT}
};
static const Path path2780 = {
.x = 152, .y = 856, .numPoints = 34, .points = {
{
    .x = 64, .y = 240,
    .speedTo = 80, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2780_0_actions
},
{
    .x = 64, .y = 224,
    .speedTo = 80, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -80,
    .numActions = 0,
    .actions = 0
},
{
    .x = 40, .y = 208,
    .speedTo = 80, .distTo = 1846,
    .xVelTo = -67, .yVelTo = -45,
    .numActions = 1,
    .actions = path2780_2_actions
},
{
    .x = 32, .y = 208,
    .speedTo = 80, .distTo = 512,
    .xVelTo = -80, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 24, .y = 208,
    .speedTo = 80, .distTo = 512,
    .xVelTo = -80, .yVelTo = 0,
    .numActions = 2,
    .actions = path2780_4_actions
},
{
    .x = 0, .y = 192,
    .speedTo = 80, .distTo = 1846,
    .xVelTo = -67, .yVelTo = -45,
    .numActions = 2,
    .actions = path2780_5_actions
},
{
    .x = 0, .y = 176,
    .speedTo = 80, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -80,
    .numActions = 0,
    .actions = 0
},
{
    .x = 24, .y = 160,
    .speedTo = 80, .distTo = 1846,
    .xVelTo = 66, .yVelTo = -45,
    .numActions = 1,
    .actions = path2780_7_actions
},
{
    .x = 32, .y = 160,
    .speedTo = 80, .distTo = 512,
    .xVelTo = 80, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 40, .y = 160,
    .speedTo = 80, .distTo = 512,
    .xVelTo = 80, .yVelTo = 0,
    .numActions = 2,
    .actions = path2780_9_actions
},
{
    .x = 64, .y = 144,
    .speedTo = 80, .distTo = 1846,
    .xVelTo = 66, .yVelTo = -45,
    .numActions = 1,
    .actions = path2780_10_actions
},
{
    .x = 64, .y = 128,
    .speedTo = 80, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -80,
    .numActions = 1,
    .actions = path2780_11_actions
},
{
    .x = 40, .y = 112,
    .speedTo = 80, .distTo = 1846,
    .xVelTo = -67, .yVelTo = -45,
    .numActions = 1,
    .actions = path2780_12_actions
},
{
    .x = 24, .y = 112,
    .speedTo = 80, .distTo = 1024,
    .xVelTo = -80, .yVelTo = 0,
    .numActions = 2,
    .actions = path2780_13_actions
},
{
    .x = 0, .y = 96,
    .speedTo = 80, .distTo = 1846,
    .xVelTo = -67, .yVelTo = -45,
    .numActions = 2,
    .actions = path2780_14_actions
},
{
    .x = 0, .y = 80,
    .speedTo = 80, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -80,
    .numActions = 0,
    .actions = 0
},
{
    .x = 24, .y = 64,
    .speedTo = 80, .distTo = 1846,
    .xVelTo = 66, .yVelTo = -45,
    .numActions = 1,
    .actions = path2780_16_actions
},
{
    .x = 40, .y = 64,
    .speedTo = 80, .distTo = 1024,
    .xVelTo = 80, .yVelTo = 0,
    .numActions = 2,
    .actions = path2780_17_actions
},
{
    .x = 64, .y = 48,
    .speedTo = 80, .distTo = 1846,
    .xVelTo = 66, .yVelTo = -45,
    .numActions = 1,
    .actions = path2780_18_actions
},
{
    .x = 64, .y = 32,
    .speedTo = 80, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -80,
    .numActions = 1,
    .actions = path2780_19_actions
},
{
    .x = 40, .y = 16,
    .speedTo = 80, .distTo = 1846,
    .xVelTo = -67, .yVelTo = -45,
    .numActions = 1,
    .actions = path2780_20_actions
},
{
    .x = 24, .y = 16,
    .speedTo = 80, .distTo = 1024,
    .xVelTo = -80, .yVelTo = 0,
    .numActions = 2,
    .actions = path2780_21_actions
},
{
    .x = 0, .y = 0,
    .speedTo = 80, .distTo = 1846,
    .xVelTo = -67, .yVelTo = -45,
    .numActions = 2,
    .actions = path2780_22_actions
},
{
    .x = 0, .y = -16,
    .speedTo = 80, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -80,
    .numActions = 0,
    .actions = 0
},
{
    .x = 24, .y = -32,
    .speedTo = 80, .distTo = 1846,
    .xVelTo = 66, .yVelTo = -45,
    .numActions = 1,
    .actions = path2780_24_actions
},
{
    .x = 40, .y = -32,
    .speedTo = 80, .distTo = 1024,
    .xVelTo = 80, .yVelTo = 0,
    .numActions = 2,
    .actions = path2780_25_actions
},
{
    .x = 64, .y = -48,
    .speedTo = 80, .distTo = 1846,
    .xVelTo = 66, .yVelTo = -45,
    .numActions = 1,
    .actions = path2780_26_actions
},
{
    .x = 64, .y = -64,
    .speedTo = 80, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -80,
    .numActions = 1,
    .actions = path2780_27_actions
},
{
    .x = 40, .y = -80,
    .speedTo = 80, .distTo = 1846,
    .xVelTo = -67, .yVelTo = -45,
    .numActions = 1,
    .actions = path2780_28_actions
},
{
    .x = 24, .y = -80,
    .speedTo = 80, .distTo = 1024,
    .xVelTo = -80, .yVelTo = 0,
    .numActions = 2,
    .actions = path2780_29_actions
},
{
    .x = 0, .y = -96,
    .speedTo = 80, .distTo = 1846,
    .xVelTo = -67, .yVelTo = -45,
    .numActions = 2,
    .actions = path2780_30_actions
},
{
    .x = 0, .y = -112,
    .speedTo = 80, .distTo = 1024,
    .xVelTo = 0, .yVelTo = -80,
    .numActions = 1,
    .actions = path2780_31_actions
},
{
    .x = 16, .y = -128,
    .speedTo = 80, .distTo = 1448,
    .xVelTo = 56, .yVelTo = -57,
    .numActions = 3,
    .actions = path2780_32_actions
},
{
    .x = 24, .y = -128,
    .speedTo = 80, .distTo = 512,
    .xVelTo = 80, .yVelTo = 0,
    .numActions = 1,
    .actions = path2780_33_actions
}
}
};
static const Path *r14beetles_paths[] = {
    &path2779,
    &path2780
};
extern const LevelObject lobj2777;
extern const LevelObject lobj2778;
const LevelObject lobj2777 = {
    .definition = &defBeetle,
    .x = 104, .y = 1096,
    .palette = 0,
    .animInd = 1, .flags = 36864,
    .group = &r14beetles, .path = &path2779,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2778 = {
    .definition = &defBeetle,
    .x = 216, .y = 1096,
    .palette = 0,
    .animInd = 1, .flags = 4096,
    .group = &r14beetles, .path = &path2780,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r14beetles_objects[] = {
    &lobj2777,
    &lobj2778
};
LevelObjectGroup r14beetles = {
    .numPaths = 2, .paths = r14beetles_paths,
    .numObjects = 2, .objects = r14beetles_objects
};
extern LevelObjectGroup r14wasp2b;
static const GameObjectAction path2935_0_actions[] = {
{.action = 0 /* to be assigned */, }
};
static const GameObjectAction path2935_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path2935_2_actions[] = {
{.action = startShooting, .count = 3, .interval = 6}
};
static const GameObjectAction path2935_3_actions[] = {
{.action = startWaspAttack, }
};
static const Path path2935 = {
.x = 120, .y = 1096, .numPoints = 4, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2935_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path2935_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path2935_2_actions
},
{
    .x = 0, .y = -8,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 64,
    .numActions = 1,
    .actions = path2935_3_actions
}
}
};
static const Path *r14wasp2b_paths[] = {
    &path2935
};
extern const LevelObject lobj2931;
const LevelObject lobj2931 = {
    .definition = &defWaspShooter,
    .x = 120, .y = 1096,
    .palette = 0,
    .animInd = 0, .flags = 0,
    .group = &r14wasp2b, .path = &path2935,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r14wasp2b_objects[] = {
    &lobj2931
};
LevelObjectGroup r14wasp2b = {
    .numPaths = 1, .paths = r14wasp2b_paths,
    .numObjects = 1, .objects = r14wasp2b_objects
};
extern LevelObjectGroup r14wasp3a;
static const GameObjectAction path2942_0_actions[] = {
{.action = 0 /* to be assigned */, }
};
static const GameObjectAction path2942_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path2942_2_actions[] = {
{.action = startShooting, .count = 3, .interval = 6}
};
static const GameObjectAction path2942_3_actions[] = {
{.action = startWaspAttack, }
};
static const Path path2942 = {
.x = 136, .y = 1056, .numPoints = 4, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2942_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path2942_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path2942_2_actions
},
{
    .x = 0, .y = -8,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 64,
    .numActions = 1,
    .actions = path2942_3_actions
}
}
};
static const Path *r14wasp3a_paths[] = {
    &path2942
};
extern const LevelObject lobj2938;
const LevelObject lobj2938 = {
    .definition = &defWaspShooter,
    .x = 136, .y = 1056,
    .palette = 0,
    .animInd = 0, .flags = 2048,
    .group = &r14wasp3a, .path = &path2942,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r14wasp3a_objects[] = {
    &lobj2938
};
LevelObjectGroup r14wasp3a = {
    .numPaths = 1, .paths = r14wasp3a_paths,
    .numObjects = 1, .objects = r14wasp3a_objects
};
extern LevelObjectGroup r14wasp4a;
static const GameObjectAction path2956_0_actions[] = {
{.action = 0 /* to be assigned */, }
};
static const GameObjectAction path2956_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path2956_2_actions[] = {
{.action = startShooting, .count = 3, .interval = 6}
};
static const GameObjectAction path2956_3_actions[] = {
{.action = startWaspAttack, }
};
static const Path path2956 = {
.x = 24, .y = 960, .numPoints = 4, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2956_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path2956_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path2956_2_actions
},
{
    .x = 0, .y = -8,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 64,
    .numActions = 1,
    .actions = path2956_3_actions
}
}
};
static const Path *r14wasp4a_paths[] = {
    &path2956
};
extern const LevelObject lobj2952;
const LevelObject lobj2952 = {
    .definition = &defWaspShooter,
    .x = 24, .y = 960,
    .palette = 0,
    .animInd = 0, .flags = 0,
    .group = &r14wasp4a, .path = &path2956,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r14wasp4a_objects[] = {
    &lobj2952
};
LevelObjectGroup r14wasp4a = {
    .numPaths = 1, .paths = r14wasp4a_paths,
    .numObjects = 1, .objects = r14wasp4a_objects
};
extern LevelObjectGroup r14wasp5a;
static const GameObjectAction path2977_0_actions[] = {
{.action = 0 /* to be assigned */, }
};
static const GameObjectAction path2977_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path2977_2_actions[] = {
{.action = startShooting, .count = 3, .interval = 6}
};
static const GameObjectAction path2977_3_actions[] = {
{.action = startWaspAttack, }
};
static const Path path2977 = {
.x = 232, .y = 896, .numPoints = 4, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path2977_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path2977_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path2977_2_actions
},
{
    .x = 0, .y = -8,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 64,
    .numActions = 1,
    .actions = path2977_3_actions
}
}
};
static const Path *r14wasp5a_paths[] = {
    &path2977
};
extern const LevelObject lobj2973;
const LevelObject lobj2973 = {
    .definition = &defWaspShooter,
    .x = 232, .y = 896,
    .palette = 0,
    .animInd = 0, .flags = 2048,
    .group = &r14wasp5a, .path = &path2977,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r14wasp5a_objects[] = {
    &lobj2973
};
LevelObjectGroup r14wasp5a = {
    .numPaths = 1, .paths = r14wasp5a_paths,
    .numObjects = 1, .objects = r14wasp5a_objects
};
extern LevelObjectGroup r14wasp6a;
static const GameObjectAction path3002_0_actions[] = {
{.action = 0 /* to be assigned */, }
};
static const GameObjectAction path3002_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path3002_2_actions[] = {
{.action = startShooting, .count = 3, .interval = 6}
};
static const GameObjectAction path3002_3_actions[] = {
{.action = startWaspAttack, }
};
static const Path path3002 = {
.x = 24, .y = 832, .numPoints = 4, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path3002_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path3002_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path3002_2_actions
},
{
    .x = 0, .y = -8,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 64,
    .numActions = 1,
    .actions = path3002_3_actions
}
}
};
static const GameObjectAction path3003_0_actions[] = {
{.action = 0 /* to be assigned */, }
};
static const GameObjectAction path3003_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path3003_2_actions[] = {
{.action = startShooting, .count = 3, .interval = 6}
};
static const GameObjectAction path3003_3_actions[] = {
{.action = startWaspAttack, }
};
static const Path path3003 = {
.x = 120, .y = 832, .numPoints = 4, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path3003_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path3003_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path3003_2_actions
},
{
    .x = 0, .y = -8,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 64,
    .numActions = 1,
    .actions = path3003_3_actions
}
}
};
static const Path *r14wasp6a_paths[] = {
    &path3002,
    &path3003
};
extern const LevelObject lobj2994;
extern const LevelObject lobj2995;
const LevelObject lobj2994 = {
    .definition = &defWaspShooter,
    .x = 24, .y = 832,
    .palette = 0,
    .animInd = 0, .flags = 0,
    .group = &r14wasp6a, .path = &path3002,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj2995 = {
    .definition = &defWaspShooter,
    .x = 120, .y = 832,
    .palette = 0,
    .animInd = 0, .flags = 2048,
    .group = &r14wasp6a, .path = &path3003,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r14wasp6a_objects[] = {
    &lobj2994,
    &lobj2995
};
LevelObjectGroup r14wasp6a = {
    .numPaths = 2, .paths = r14wasp6a_paths,
    .numObjects = 2, .objects = r14wasp6a_objects
};
extern LevelObjectGroup Copy_of_r14wasp6a;
static const GameObjectAction path3028_0_actions[] = {
{.action = 0 /* to be assigned */, }
};
static const GameObjectAction path3028_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path3028_2_actions[] = {
{.action = startShooting, .count = 3, .interval = 6}
};
static const GameObjectAction path3028_3_actions[] = {
{.action = startWaspAttack, }
};
static const Path path3028 = {
.x = 136, .y = 800, .numPoints = 4, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path3028_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path3028_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path3028_2_actions
},
{
    .x = 0, .y = -8,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 64,
    .numActions = 1,
    .actions = path3028_3_actions
}
}
};
static const GameObjectAction path3029_0_actions[] = {
{.action = 0 /* to be assigned */, }
};
static const GameObjectAction path3029_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path3029_2_actions[] = {
{.action = startShooting, .count = 3, .interval = 6}
};
static const GameObjectAction path3029_3_actions[] = {
{.action = startWaspAttack, }
};
static const Path path3029 = {
.x = 232, .y = 800, .numPoints = 4, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path3029_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path3029_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path3029_2_actions
},
{
    .x = 0, .y = -8,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 64,
    .numActions = 1,
    .actions = path3029_3_actions
}
}
};
static const Path *Copy_of_r14wasp6a_paths[] = {
    &path3028,
    &path3029
};
extern const LevelObject lobj3020;
extern const LevelObject lobj3021;
const LevelObject lobj3020 = {
    .definition = &defWaspShooter,
    .x = 136, .y = 800,
    .palette = 0,
    .animInd = 0, .flags = 0,
    .group = &Copy_of_r14wasp6a, .path = &path3028,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj3021 = {
    .definition = &defWaspShooter,
    .x = 232, .y = 800,
    .palette = 0,
    .animInd = 0, .flags = 2048,
    .group = &Copy_of_r14wasp6a, .path = &path3029,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *Copy_of_r14wasp6a_objects[] = {
    &lobj3020,
    &lobj3021
};
LevelObjectGroup Copy_of_r14wasp6a = {
    .numPaths = 2, .paths = Copy_of_r14wasp6a_paths,
    .numObjects = 2, .objects = Copy_of_r14wasp6a_objects
};
extern LevelObjectGroup r14powerupholes;
static const GameObjectAction path3047_1_actions[] = {
{.action = markDisappear, }
};
static const Path path3047 = {
.x = 72, .y = 992, .numPoints = 2, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 120,
    .speedTo = 128, .distTo = 7680,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 1,
    .actions = path3047_1_actions
}
}
};
static const GameObjectAction path3051_1_actions[] = {
{.action = markDisappear, }
};
static const Path path3051 = {
.x = 184, .y = 960, .numPoints = 2, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 152,
    .speedTo = 128, .distTo = 9728,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 1,
    .actions = path3051_1_actions
}
}
};
static const Path *r14powerupholes_paths[] = {
    &path3047,
    &path3051
};
extern const LevelObject lobj4260;
extern const LevelObject lobj4261;
extern const LevelObject lobj4262;
extern const LevelObject lobj4263;
const LevelObject lobj4260 = {
    .definition = &defAntHole,
    .x = 72, .y = 992,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &r14powerupholes, .path = &path3047,
    .pathIndex = 1, .child = &lobj4261, .interval = 24
};
const LevelObject lobj4261 = {
    .definition = &defAcidAnt,
    .x = 72, .y = 992,
    .palette = 0,
    .animInd = 1, .flags = 34816,
    .group = &r14powerupholes, .path = &path3047,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj4262 = {
    .definition = &defAntHole,
    .x = 184, .y = 960,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &r14powerupholes, .path = &path3051,
    .pathIndex = 1, .child = &lobj4263, .interval = 24
};
const LevelObject lobj4263 = {
    .definition = &defAcidAnt,
    .x = 184, .y = 960,
    .palette = 0,
    .animInd = 1, .flags = 34816,
    .group = &r14powerupholes, .path = &path3051,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r14powerupholes_objects[] = {
    &lobj4260,
    &lobj4261,
    &lobj4262,
    &lobj4263
};
LevelObjectGroup r14powerupholes = {
    .numPaths = 2, .paths = r14powerupholes_paths,
    .numObjects = 4, .objects = r14powerupholes_objects
};
extern LevelObjectGroup r14powerup1;
extern const LevelObject lobj3046;
const LevelObject lobj3046 = {
    .definition = &defHoneyCell,
    .x = 72, .y = 992,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &r14powerup1, .path = 0,
    .pathIndex = 0, .child = &lobj4260, .interval = 0
};
static const LevelObject *r14powerup1_objects[] = {
    &lobj3046
};
LevelObjectGroup r14powerup1 = {
    .numPaths = 0, .paths = 0,
    .numObjects = 1, .objects = r14powerup1_objects
};
extern LevelObjectGroup r14powerup2;
extern const LevelObject lobj3050;
const LevelObject lobj3050 = {
    .definition = &defHoneyCell,
    .x = 184, .y = 960,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &r14powerup2, .path = 0,
    .pathIndex = 0, .child = &lobj4262, .interval = 0
};
static const LevelObject *r14powerup2_objects[] = {
    &lobj3050
};
LevelObjectGroup r14powerup2 = {
    .numPaths = 0, .paths = 0,
    .numObjects = 1, .objects = r14powerup2_objects
};
extern LevelObjectGroup r15powerupholes;
static const GameObjectAction path3059_1_actions[] = {
{.action = markDisappear, }
};
static const Path path3059 = {
.x = 184, .y = 864, .numPoints = 2, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 248,
    .speedTo = 128, .distTo = 15872,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 1,
    .actions = path3059_1_actions
}
}
};
static const GameObjectAction path3055_1_actions[] = {
{.action = markDisappear, }
};
static const Path path3055 = {
.x = 72, .y = 800, .numPoints = 2, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 312,
    .speedTo = 128, .distTo = 19968,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 1,
    .actions = path3055_1_actions
}
}
};
static const Path *r15powerupholes_paths[] = {
    &path3059,
    &path3055
};
extern const LevelObject lobj4270;
extern const LevelObject lobj4271;
extern const LevelObject lobj4264;
extern const LevelObject lobj4265;
const LevelObject lobj4270 = {
    .definition = &defAntHole,
    .x = 184, .y = 864,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &r15powerupholes, .path = &path3059,
    .pathIndex = 1, .child = &lobj4271, .interval = 24
};
const LevelObject lobj4271 = {
    .definition = &defAcidAnt,
    .x = 184, .y = 864,
    .palette = 0,
    .animInd = 1, .flags = 32768,
    .group = &r15powerupholes, .path = &path3059,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj4264 = {
    .definition = &defAntHole,
    .x = 72, .y = 800,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &r15powerupholes, .path = &path3055,
    .pathIndex = 1, .child = &lobj4265, .interval = 24
};
const LevelObject lobj4265 = {
    .definition = &defAcidAnt,
    .x = 72, .y = 800,
    .palette = 0,
    .animInd = 1, .flags = 34816,
    .group = &r15powerupholes, .path = &path3055,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r15powerupholes_objects[] = {
    &lobj4270,
    &lobj4271,
    &lobj4264,
    &lobj4265
};
LevelObjectGroup r15powerupholes = {
    .numPaths = 2, .paths = r15powerupholes_paths,
    .numObjects = 4, .objects = r15powerupholes_objects
};
extern LevelObjectGroup r15powerup2;
extern const LevelObject lobj3054;
const LevelObject lobj3054 = {
    .definition = &defHoneyCell,
    .x = 72, .y = 800,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &r15powerup2, .path = 0,
    .pathIndex = 0, .child = &lobj4264, .interval = 0
};
static const LevelObject *r15powerup2_objects[] = {
    &lobj3054
};
LevelObjectGroup r15powerup2 = {
    .numPaths = 0, .paths = 0,
    .numObjects = 1, .objects = r15powerup2_objects
};
extern LevelObjectGroup r15powerup1;
extern const LevelObject lobj3058;
const LevelObject lobj3058 = {
    .definition = &defHoneyCell,
    .x = 184, .y = 864,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &r15powerup1, .path = 0,
    .pathIndex = 0, .child = &lobj4270, .interval = 0
};
static const LevelObject *r15powerup1_objects[] = {
    &lobj3058
};
LevelObjectGroup r15powerup1 = {
    .numPaths = 0, .paths = 0,
    .numObjects = 1, .objects = r15powerup1_objects
};
extern LevelObjectGroup r16acidants1;
static const GameObjectAction path3063_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path3063_2_actions[] = {
{.action = faceRight, }
};
static const GameObjectAction path3063_6_actions[] = {
{.action = faceLeft, },
{.action = enterBackground, }
};
static const GameObjectAction path3063_7_actions[] = {
{.action = markDisappear, }
};
static const Path path3063 = {
.x = 40, .y = 544, .numPoints = 8, .points = {
{
    .x = 0, .y = 8,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = 16,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = -115, .yVelTo = 57,
    .numActions = 1,
    .actions = path3063_1_actions
},
{
    .x = -16, .y = 40,
    .speedTo = 128, .distTo = 1536,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 1,
    .actions = path3063_2_actions
},
{
    .x = 8, .y = 64,
    .speedTo = 128, .distTo = 2172,
    .xVelTo = 90, .yVelTo = 90,
    .numActions = 0,
    .actions = 0
},
{
    .x = 168, .y = 64,
    .speedTo = 128, .distTo = 10240,
    .xVelTo = 128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 192, .y = 40,
    .speedTo = 128, .distTo = 2172,
    .xVelTo = 90, .yVelTo = -91,
    .numActions = 0,
    .actions = 0
},
{
    .x = 192, .y = 16,
    .speedTo = 128, .distTo = 1536,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 2,
    .actions = path3063_6_actions
},
{
    .x = 176, .y = 8,
    .speedTo = 128, .distTo = 1144,
    .xVelTo = -115, .yVelTo = -58,
    .numActions = 1,
    .actions = path3063_7_actions
}
}
};
static const Path *r16acidants1_paths[] = {
    &path3063
};
extern const LevelObject lobj3062;
const LevelObject lobj3062 = {
    .definition = &defAcidAnt,
    .x = 40, .y = 552,
    .palette = 0,
    .animInd = 0, .flags = 2048,
    .group = &r16acidants1, .path = &path3063,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r16acidants1_objects[] = {
    &lobj3062
};
LevelObjectGroup r16acidants1 = {
    .numPaths = 1, .paths = r16acidants1_paths,
    .numObjects = 1, .objects = r16acidants1_objects
};
extern LevelObjectGroup r16powerup;
extern const LevelObject lobj3069;
extern const LevelObject lobj3070;
const LevelObject lobj3069 = {
    .definition = &defHoneyPot,
    .x = 168, .y = 592,
    .palette = &palWaspAndHoney,
    .animInd = 0, .flags = 32768,
    .group = &r16powerup, .path = 0,
    .pathIndex = 0, .child = 0, .interval = 0
};
const LevelObject lobj3070 = {
    .definition = &defHoneyPot,
    .x = 88, .y = 592,
    .palette = &palWaspAndHoney,
    .animInd = 0, .flags = 32768,
    .group = &r16powerup, .path = 0,
    .pathIndex = 0, .child = 0, .interval = 0
};
static const LevelObject *r16powerup_objects[] = {
    &lobj3069,
    &lobj3070
};
LevelObjectGroup r16powerup = {
    .numPaths = 0, .paths = 0,
    .numObjects = 2, .objects = r16powerup_objects
};
extern LevelObjectGroup r16acidants2;
static const GameObjectAction path3074_1_actions[] = {
{.action = faceLeft, },
{.action = enterForeground, },
{.action = setSpriteAnim, .anim = ANI_ANT_RIGHT},
{.action = setSpriteVFlip, .flip = false}
};
static const GameObjectAction path3074_6_actions[] = {
{.action = setSpriteAnim, .anim = ANI_ANT_DOWN},
{.action = enterBackground, }
};
static const GameObjectAction path3074_7_actions[] = {
{.action = markDisappear, }
};
static const Path path3074 = {
.x = 184, .y = 464, .numPoints = 8, .points = {
{
    .x = 32, .y = 24,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 32, .y = 16,
    .speedTo = 128, .distTo = 512,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 4,
    .actions = path3074_1_actions
},
{
    .x = 32, .y = 56,
    .speedTo = 128, .distTo = 2560,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 80,
    .speedTo = 128, .distTo = 2172,
    .xVelTo = -91, .yVelTo = 90,
    .numActions = 0,
    .actions = 0
},
{
    .x = -120, .y = 80,
    .speedTo = 128, .distTo = 8192,
    .xVelTo = -128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -144, .y = 56,
    .speedTo = 128, .distTo = 2172,
    .xVelTo = -91, .yVelTo = -91,
    .numActions = 0,
    .actions = 0
},
{
    .x = -144, .y = 16,
    .speedTo = 128, .distTo = 2560,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 2,
    .actions = path3074_6_actions
},
{
    .x = -144, .y = 32,
    .speedTo = 128, .distTo = 1024,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 1,
    .actions = path3074_7_actions
}
}
};
static const GameObjectAction path3075_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path3075_2_actions[] = {
{.action = faceRight, }
};
static const GameObjectAction path3075_6_actions[] = {
{.action = faceLeft, },
{.action = enterBackground, }
};
static const GameObjectAction path3075_7_actions[] = {
{.action = markDisappear, }
};
static const Path path3075 = {
.x = 88, .y = 456, .numPoints = 8, .points = {
{
    .x = -16, .y = -8,
    .speedTo = 128, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = 8,
    .speedTo = 128, .distTo = 1448,
    .xVelTo = -91, .yVelTo = 90,
    .numActions = 1,
    .actions = path3075_1_actions
},
{
    .x = -32, .y = 48,
    .speedTo = 128, .distTo = 2560,
    .xVelTo = 0, .yVelTo = 128,
    .numActions = 1,
    .actions = path3075_2_actions
},
{
    .x = -8, .y = 72,
    .speedTo = 128, .distTo = 2172,
    .xVelTo = 90, .yVelTo = 90,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = 72,
    .speedTo = 128, .distTo = 6144,
    .xVelTo = 128, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 112, .y = 48,
    .speedTo = 128, .distTo = 2172,
    .xVelTo = 90, .yVelTo = -91,
    .numActions = 0,
    .actions = 0
},
{
    .x = 112, .y = 8,
    .speedTo = 128, .distTo = 2560,
    .xVelTo = 0, .yVelTo = -128,
    .numActions = 2,
    .actions = path3075_6_actions
},
{
    .x = 96, .y = -8,
    .speedTo = 128, .distTo = 1448,
    .xVelTo = -91, .yVelTo = -91,
    .numActions = 1,
    .actions = path3075_7_actions
}
}
};
static const Path *r16acidants2_paths[] = {
    &path3074,
    &path3075
};
extern const LevelObject lobj3072;
extern const LevelObject lobj3073;
const LevelObject lobj3072 = {
    .definition = &defAcidAnt,
    .x = 216, .y = 488,
    .palette = 0,
    .animInd = 1, .flags = 4096,
    .group = &r16acidants2, .path = &path3074,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj3073 = {
    .definition = &defAcidAnt,
    .x = 72, .y = 448,
    .palette = 0,
    .animInd = 0, .flags = 2048,
    .group = &r16acidants2, .path = &path3075,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r16acidants2_objects[] = {
    &lobj3072,
    &lobj3073
};
LevelObjectGroup r16acidants2 = {
    .numPaths = 2, .paths = r16acidants2_paths,
    .numObjects = 2, .objects = r16acidants2_objects
};
extern LevelObjectGroup r16powerup2;
extern const LevelObject lobj3085;
const LevelObject lobj3085 = {
    .definition = &defReinforcedHoneyPot,
    .x = 128, .y = 512,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &r16powerup2, .path = 0,
    .pathIndex = 0, .child = 0, .interval = 0
};
static const LevelObject *r16powerup2_objects[] = {
    &lobj3085
};
LevelObjectGroup r16powerup2 = {
    .numPaths = 0, .paths = 0,
    .numObjects = 1, .objects = r16powerup2_objects
};
extern LevelObjectGroup r17powerup;
extern const LevelObject lobj3088;
extern const LevelObject lobj3087;
extern const LevelObject lobj3089;
const LevelObject lobj3088 = {
    .definition = &defHoneyPot,
    .x = 128, .y = 408,
    .palette = &palWaspAndHoney,
    .animInd = 0, .flags = 32768,
    .group = &r17powerup, .path = 0,
    .pathIndex = 0, .child = 0, .interval = 0
};
const LevelObject lobj3087 = {
    .definition = &defHoneyPot,
    .x = 152, .y = 400,
    .palette = &palWaspAndHoney,
    .animInd = 0, .flags = 32768,
    .group = &r17powerup, .path = 0,
    .pathIndex = 0, .child = 0, .interval = 0
};
const LevelObject lobj3089 = {
    .definition = &defHoneyPot,
    .x = 112, .y = 400,
    .palette = &palWaspAndHoney,
    .animInd = 0, .flags = 32768,
    .group = &r17powerup, .path = 0,
    .pathIndex = 0, .child = 0, .interval = 0
};
static const LevelObject *r17powerup_objects[] = {
    &lobj3088,
    &lobj3087,
    &lobj3089
};
LevelObjectGroup r17powerup = {
    .numPaths = 0, .paths = 0,
    .numObjects = 3, .objects = r17powerup_objects
};
extern LevelObjectGroup r17fly1a;
static const GameObjectAction path3092_0_actions[] = {
{.action = 0 /* to be assigned */, }
};
static const GameObjectAction path3092_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path3092_2_actions[] = {
{.action = startShooting, .count = 3, .interval = 6}
};
static const GameObjectAction path3092_3_actions[] = {
{.action = startWaspAttack, }
};
static const Path path3092 = {
.x = 40, .y = 472, .numPoints = 4, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path3092_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path3092_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path3092_2_actions
},
{
    .x = 0, .y = -8,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 64,
    .numActions = 1,
    .actions = path3092_3_actions
}
}
};
static const Path *r17fly1a_paths[] = {
    &path3092
};
extern const LevelObject lobj3091;
const LevelObject lobj3091 = {
    .definition = &defWaspShooter,
    .x = 40, .y = 472,
    .palette = 0,
    .animInd = 0, .flags = 0,
    .group = &r17fly1a, .path = &path3092,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r17fly1a_objects[] = {
    &lobj3091
};
LevelObjectGroup r17fly1a = {
    .numPaths = 1, .paths = r17fly1a_paths,
    .numObjects = 1, .objects = r17fly1a_objects
};
extern LevelObjectGroup r17fly1b;
static const GameObjectAction path3099_0_actions[] = {
{.action = 0 /* to be assigned */, }
};
static const GameObjectAction path3099_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path3099_2_actions[] = {
{.action = startShooting, .count = 3, .interval = 6}
};
static const GameObjectAction path3099_3_actions[] = {
{.action = startWaspAttack, }
};
static const Path path3099 = {
.x = 208, .y = 472, .numPoints = 4, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path3099_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path3099_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path3099_2_actions
},
{
    .x = 0, .y = -8,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 64,
    .numActions = 1,
    .actions = path3099_3_actions
}
}
};
static const Path *r17fly1b_paths[] = {
    &path3099
};
extern const LevelObject lobj3098;
const LevelObject lobj3098 = {
    .definition = &defWaspShooter,
    .x = 208, .y = 472,
    .palette = 0,
    .animInd = 0, .flags = 2048,
    .group = &r17fly1b, .path = &path3099,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r17fly1b_objects[] = {
    &lobj3098
};
LevelObjectGroup r17fly1b = {
    .numPaths = 1, .paths = r17fly1b_paths,
    .numObjects = 1, .objects = r17fly1b_objects
};
extern LevelObjectGroup r17fly2a;
static const GameObjectAction path3106_0_actions[] = {
{.action = 0 /* to be assigned */, }
};
static const GameObjectAction path3106_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path3106_2_actions[] = {
{.action = startShooting, .count = 3, .interval = 6}
};
static const GameObjectAction path3106_3_actions[] = {
{.action = startWaspAttack, }
};
static const Path path3106 = {
.x = 24, .y = 496, .numPoints = 4, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path3106_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path3106_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path3106_2_actions
},
{
    .x = 0, .y = -8,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 64,
    .numActions = 1,
    .actions = path3106_3_actions
}
}
};
static const Path *r17fly2a_paths[] = {
    &path3106
};
extern const LevelObject lobj3105;
const LevelObject lobj3105 = {
    .definition = &defWaspShooter,
    .x = 24, .y = 496,
    .palette = 0,
    .animInd = 0, .flags = 0,
    .group = &r17fly2a, .path = &path3106,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r17fly2a_objects[] = {
    &lobj3105
};
LevelObjectGroup r17fly2a = {
    .numPaths = 1, .paths = r17fly2a_paths,
    .numObjects = 1, .objects = r17fly2a_objects
};
extern LevelObjectGroup r17fly2b;
static const GameObjectAction path3113_0_actions[] = {
{.action = 0 /* to be assigned */, }
};
static const GameObjectAction path3113_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path3113_2_actions[] = {
{.action = startShooting, .count = 3, .interval = 6}
};
static const GameObjectAction path3113_3_actions[] = {
{.action = startWaspAttack, }
};
static const Path path3113 = {
.x = 232, .y = 496, .numPoints = 4, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path3113_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path3113_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path3113_2_actions
},
{
    .x = 0, .y = -8,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = 64,
    .numActions = 1,
    .actions = path3113_3_actions
}
}
};
static const Path *r17fly2b_paths[] = {
    &path3113
};
extern const LevelObject lobj3112;
const LevelObject lobj3112 = {
    .definition = &defWaspShooter,
    .x = 232, .y = 496,
    .palette = 0,
    .animInd = 0, .flags = 2048,
    .group = &r17fly2b, .path = &path3113,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r17fly2b_objects[] = {
    &lobj3112
};
LevelObjectGroup r17fly2b = {
    .numPaths = 1, .paths = r17fly2b_paths,
    .numObjects = 1, .objects = r17fly2b_objects
};
extern LevelObjectGroup r17wasp1;
static const GameObjectAction path3121_0_actions[] = {
{.action = 0 /* to be assigned */, }
};
static const GameObjectAction path3121_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path3121_2_actions[] = {
{.action = startWaspAttack, }
};
static const Path path3121 = {
.x = 16, .y = 456, .numPoints = 3, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path3121_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path3121_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path3121_2_actions
}
}
};
static const GameObjectAction path3122_0_actions[] = {
{.action = 0 /* to be assigned */, }
};
static const GameObjectAction path3122_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path3122_2_actions[] = {
{.action = startWaspAttack, }
};
static const Path path3122 = {
.x = 240, .y = 456, .numPoints = 3, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path3122_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path3122_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path3122_2_actions
}
}
};
static const Path *r17wasp1_paths[] = {
    &path3121,
    &path3122
};
extern const LevelObject lobj3119;
extern const LevelObject lobj3120;
const LevelObject lobj3119 = {
    .definition = &defWasp,
    .x = 16, .y = 456,
    .palette = 0,
    .animInd = 0, .flags = 0,
    .group = &r17wasp1, .path = &path3121,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj3120 = {
    .definition = &defWasp,
    .x = 240, .y = 456,
    .palette = 0,
    .animInd = 0, .flags = 2048,
    .group = &r17wasp1, .path = &path3122,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r17wasp1_objects[] = {
    &lobj3119,
    &lobj3120
};
LevelObjectGroup r17wasp1 = {
    .numPaths = 2, .paths = r17wasp1_paths,
    .numObjects = 2, .objects = r17wasp1_objects
};
extern LevelObjectGroup r17wasp3;
static const GameObjectAction path3132_0_actions[] = {
{.action = 0 /* to be assigned */, }
};
static const GameObjectAction path3132_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path3132_2_actions[] = {
{.action = startWaspAttack, }
};
static const Path path3132 = {
.x = 56, .y = 408, .numPoints = 3, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path3132_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path3132_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path3132_2_actions
}
}
};
static const GameObjectAction path3133_0_actions[] = {
{.action = 0 /* to be assigned */, }
};
static const GameObjectAction path3133_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path3133_2_actions[] = {
{.action = startWaspAttack, }
};
static const Path path3133 = {
.x = 200, .y = 408, .numPoints = 3, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path3133_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path3133_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path3133_2_actions
}
}
};
static const Path *r17wasp3_paths[] = {
    &path3132,
    &path3133
};
extern const LevelObject lobj3130;
extern const LevelObject lobj3131;
const LevelObject lobj3130 = {
    .definition = &defWasp,
    .x = 56, .y = 408,
    .palette = 0,
    .animInd = 0, .flags = 0,
    .group = &r17wasp3, .path = &path3132,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj3131 = {
    .definition = &defWasp,
    .x = 200, .y = 408,
    .palette = 0,
    .animInd = 0, .flags = 2048,
    .group = &r17wasp3, .path = &path3133,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r17wasp3_objects[] = {
    &lobj3130,
    &lobj3131
};
LevelObjectGroup r17wasp3 = {
    .numPaths = 2, .paths = r17wasp3_paths,
    .numObjects = 2, .objects = r17wasp3_objects
};
extern LevelObjectGroup r17wasp5;
static const GameObjectAction path3143_0_actions[] = {
{.action = 0 /* to be assigned */, }
};
static const GameObjectAction path3143_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path3143_2_actions[] = {
{.action = startWaspAttack, }
};
static const Path path3143 = {
.x = 112, .y = 384, .numPoints = 3, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path3143_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path3143_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path3143_2_actions
}
}
};
static const GameObjectAction path3144_0_actions[] = {
{.action = 0 /* to be assigned */, }
};
static const GameObjectAction path3144_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path3144_2_actions[] = {
{.action = startWaspAttack, }
};
static const Path path3144 = {
.x = 144, .y = 384, .numPoints = 3, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path3144_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path3144_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path3144_2_actions
}
}
};
static const Path *r17wasp5_paths[] = {
    &path3143,
    &path3144
};
extern const LevelObject lobj3141;
extern const LevelObject lobj3142;
const LevelObject lobj3141 = {
    .definition = &defWasp,
    .x = 112, .y = 384,
    .palette = 0,
    .animInd = 0, .flags = 0,
    .group = &r17wasp5, .path = &path3143,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj3142 = {
    .definition = &defWasp,
    .x = 144, .y = 384,
    .palette = 0,
    .animInd = 0, .flags = 2048,
    .group = &r17wasp5, .path = &path3144,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r17wasp5_objects[] = {
    &lobj3141,
    &lobj3142
};
LevelObjectGroup r17wasp5 = {
    .numPaths = 2, .paths = r17wasp5_paths,
    .numObjects = 2, .objects = r17wasp5_objects
};
extern LevelObjectGroup r17wasp7;
static const GameObjectAction path3154_0_actions[] = {
{.action = 0 /* to be assigned */, }
};
static const GameObjectAction path3154_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path3154_2_actions[] = {
{.action = startWaspAttack, }
};
static const Path path3154 = {
.x = 80, .y = 360, .numPoints = 3, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path3154_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path3154_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path3154_2_actions
}
}
};
static const GameObjectAction path3155_0_actions[] = {
{.action = 0 /* to be assigned */, }
};
static const GameObjectAction path3155_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path3155_2_actions[] = {
{.action = startWaspAttack, }
};
static const Path path3155 = {
.x = 176, .y = 360, .numPoints = 3, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path3155_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path3155_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path3155_2_actions
}
}
};
static const Path *r17wasp7_paths[] = {
    &path3154,
    &path3155
};
extern const LevelObject lobj3152;
extern const LevelObject lobj3153;
const LevelObject lobj3152 = {
    .definition = &defWasp,
    .x = 80, .y = 360,
    .palette = 0,
    .animInd = 0, .flags = 0,
    .group = &r17wasp7, .path = &path3154,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj3153 = {
    .definition = &defWasp,
    .x = 176, .y = 360,
    .palette = 0,
    .animInd = 0, .flags = 2048,
    .group = &r17wasp7, .path = &path3155,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r17wasp7_objects[] = {
    &lobj3152,
    &lobj3153
};
LevelObjectGroup r17wasp7 = {
    .numPaths = 2, .paths = r17wasp7_paths,
    .numObjects = 2, .objects = r17wasp7_objects
};
extern LevelObjectGroup r17wasp9;
static const GameObjectAction path3165_0_actions[] = {
{.action = 0 /* to be assigned */, }
};
static const GameObjectAction path3165_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path3165_2_actions[] = {
{.action = startWaspAttack, }
};
static const Path path3165 = {
.x = 40, .y = 384, .numPoints = 3, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path3165_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path3165_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path3165_2_actions
}
}
};
static const GameObjectAction path3166_0_actions[] = {
{.action = 0 /* to be assigned */, }
};
static const GameObjectAction path3166_1_actions[] = {
{.action = enterForeground, }
};
static const GameObjectAction path3166_2_actions[] = {
{.action = startWaspAttack, }
};
static const Path path3166 = {
.x = 216, .y = 384, .numPoints = 3, .points = {
{
    .x = 0, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path3166_0_actions
},
{
    .x = 0, .y = -32,
    .speedTo = 64, .distTo = 2048,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path3166_1_actions
},
{
    .x = 0, .y = -40,
    .speedTo = 64, .distTo = 512,
    .xVelTo = 0, .yVelTo = -64,
    .numActions = 1,
    .actions = path3166_2_actions
}
}
};
static const Path *r17wasp9_paths[] = {
    &path3165,
    &path3166
};
extern const LevelObject lobj3163;
extern const LevelObject lobj3164;
const LevelObject lobj3163 = {
    .definition = &defWasp,
    .x = 40, .y = 384,
    .palette = 0,
    .animInd = 0, .flags = 0,
    .group = &r17wasp9, .path = &path3165,
    .pathIndex = 1, .child = 0, .interval = 0
};
const LevelObject lobj3164 = {
    .definition = &defWasp,
    .x = 216, .y = 384,
    .palette = 0,
    .animInd = 0, .flags = 2048,
    .group = &r17wasp9, .path = &path3166,
    .pathIndex = 1, .child = 0, .interval = 0
};
static const LevelObject *r17wasp9_objects[] = {
    &lobj3163,
    &lobj3164
};
LevelObjectGroup r17wasp9 = {
    .numPaths = 2, .paths = r17wasp9_paths,
    .numObjects = 2, .objects = r17wasp9_objects
};
extern LevelObjectGroup waspboss;
static const GameObjectAction path3179_4_actions[] = {
{.action = ChooseSweepPath_DamageFlashRed, }
};
static const Path path3179 = {
.x = -80, .y = 48, .numPoints = 5, .points = {
{
    .x = 208, .y = 120,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 192, .y = 136,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = -46, .yVelTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = 160, .y = 152,
    .speedTo = 64, .distTo = 2289,
    .xVelTo = -58, .yVelTo = 28,
    .numActions = 0,
    .actions = 0
},
{
    .x = 128, .y = 136,
    .speedTo = 64, .distTo = 2289,
    .xVelTo = -58, .yVelTo = -29,
    .numActions = 0,
    .actions = 0
},
{
    .x = 112, .y = 112,
    .speedTo = 64, .distTo = 1846,
    .xVelTo = -36, .yVelTo = -54,
    .numActions = 1,
    .actions = path3179_4_actions
}
}
};
static const GameObjectAction path3180_4_actions[] = {
{.action = ChooseSweepPath_DamageFlashRed, }
};
static const Path path3180 = {
.x = -32, .y = 192, .numPoints = 5, .points = {
{
    .x = 160, .y = -24,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 176, .y = -8,
    .speedTo = 64, .distTo = 1448,
    .xVelTo = 45, .yVelTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = 208, .y = 8,
    .speedTo = 64, .distTo = 2289,
    .xVelTo = 57, .yVelTo = 28,
    .numActions = 0,
    .actions = 0
},
{
    .x = 240, .y = -8,
    .speedTo = 64, .distTo = 2289,
    .xVelTo = 57, .yVelTo = -29,
    .numActions = 0,
    .actions = 0
},
{
    .x = 256, .y = -32,
    .speedTo = 64, .distTo = 1846,
    .xVelTo = 35, .yVelTo = -54,
    .numActions = 1,
    .actions = path3180_4_actions
}
}
};
static const GameObjectAction path3181_0_actions[] = {
{.action = PathPoint_ShootBurstsAtAngle, }
};
static const GameObjectAction path3181_2_actions[] = {
{.action = ChargeAndLayEggs_DamageFlashRed, }
};
static const Path path3181 = {
.x = 32, .y = 160, .numPoints = 3, .points = {
{
    .x = 0, .y = 8,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path3181_0_actions
},
{
    .x = 0, .y = 96,
    .speedTo = 64, .distTo = 5632,
    .xVelTo = 0, .yVelTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 192,
    .speedTo = 64, .distTo = 6144,
    .xVelTo = 0, .yVelTo = 64,
    .numActions = 1,
    .actions = path3181_2_actions
}
}
};
static const GameObjectAction path3182_0_actions[] = {
{.action = PathPoint_ShootBurstsAtAngle, }
};
static const GameObjectAction path3182_2_actions[] = {
{.action = ChargeAndLayEggs_DamageFlashRed, }
};
static const Path path3182 = {
.x = 224, .y = 160, .numPoints = 3, .points = {
{
    .x = 0, .y = 8,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path3182_0_actions
},
{
    .x = 0, .y = 96,
    .speedTo = 64, .distTo = 5632,
    .xVelTo = 0, .yVelTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 192,
    .speedTo = 64, .distTo = 6144,
    .xVelTo = 0, .yVelTo = 64,
    .numActions = 1,
    .actions = path3182_2_actions
}
}
};
static const GameObjectAction path3183_0_actions[] = {
{.action = PathPoint_ShootBurstsAtAngle, }
};
static const GameObjectAction path3183_2_actions[] = {
{.action = ChargeAndLayEggs_DamageFlashRed, }
};
static const Path path3183 = {
.x = 32, .y = 160, .numPoints = 3, .points = {
{
    .x = 8, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path3183_0_actions
},
{
    .x = 96, .y = 0,
    .speedTo = 64, .distTo = 5632,
    .xVelTo = 64, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 208, .y = 0,
    .speedTo = 64, .distTo = 7168,
    .xVelTo = 64, .yVelTo = 0,
    .numActions = 1,
    .actions = path3183_2_actions
}
}
};
static const GameObjectAction path3184_0_actions[] = {
{.action = PathPoint_ShootBurstsAtAngle, }
};
static const GameObjectAction path3184_2_actions[] = {
{.action = ChargeAndLayEggs_DamageFlashRed, }
};
static const Path path3184 = {
.x = 224, .y = 160, .numPoints = 3, .points = {
{
    .x = -8, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path3184_0_actions
},
{
    .x = -96, .y = 0,
    .speedTo = 64, .distTo = 5632,
    .xVelTo = -64, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -208, .y = 0,
    .speedTo = 64, .distTo = 7168,
    .xVelTo = -64, .yVelTo = 0,
    .numActions = 1,
    .actions = path3184_2_actions
}
}
};
static const GameObjectAction path3201_0_actions[] = {
{.action = PathPoint_ShootBurstsAtAngle, }
};
static const GameObjectAction path3201_2_actions[] = {
{.action = ChargeAndLayEggs_DamageFlashRed, }
};
static const Path path3201 = {
.x = 32, .y = 160, .numPoints = 3, .points = {
{
    .x = 0, .y = 8,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path3201_0_actions
},
{
    .x = 0, .y = 96,
    .speedTo = 64, .distTo = 5632,
    .xVelTo = 0, .yVelTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = 8,
    .speedTo = 64, .distTo = 7964,
    .xVelTo = 45, .yVelTo = -46,
    .numActions = 1,
    .actions = path3201_2_actions
}
}
};
static const GameObjectAction path3202_0_actions[] = {
{.action = PathPoint_ShootBurstsAtAngle, }
};
static const GameObjectAction path3202_2_actions[] = {
{.action = ChargeAndLayEggs_DamageFlashRed, }
};
static const Path path3202 = {
.x = 32, .y = 160, .numPoints = 3, .points = {
{
    .x = 8, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path3202_0_actions
},
{
    .x = 96, .y = 0,
    .speedTo = 64, .distTo = 5632,
    .xVelTo = 64, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 88,
    .speedTo = 64, .distTo = 7964,
    .xVelTo = -46, .yVelTo = 45,
    .numActions = 1,
    .actions = path3202_2_actions
}
}
};
static const GameObjectAction path3203_0_actions[] = {
{.action = PathPoint_ShootBurstsAtAngle, }
};
static const GameObjectAction path3203_2_actions[] = {
{.action = ChargeAndLayEggs_DamageFlashRed, }
};
static const Path path3203 = {
.x = 224, .y = 160, .numPoints = 3, .points = {
{
    .x = -8, .y = 0,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path3203_0_actions
},
{
    .x = -96, .y = 0,
    .speedTo = 64, .distTo = 5632,
    .xVelTo = -64, .yVelTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 88,
    .speedTo = 64, .distTo = 7964,
    .xVelTo = 45, .yVelTo = 45,
    .numActions = 1,
    .actions = path3203_2_actions
}
}
};
static const GameObjectAction path3204_0_actions[] = {
{.action = PathPoint_ShootBurstsAtAngle, }
};
static const GameObjectAction path3204_2_actions[] = {
{.action = ChargeAndLayEggs_DamageFlashRed, }
};
static const Path path3204 = {
.x = 224, .y = 160, .numPoints = 3, .points = {
{
    .x = 0, .y = 8,
    .speedTo = 64, .distTo = 0,
    .xVelTo = 0, .yVelTo = 0,
    .numActions = 1,
    .actions = path3204_0_actions
},
{
    .x = 0, .y = 96,
    .speedTo = 64, .distTo = 5632,
    .xVelTo = 0, .yVelTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = -88, .y = 8,
    .speedTo = 64, .distTo = 7964,
    .xVelTo = -46, .yVelTo = -46,
    .numActions = 1,
    .actions = path3204_2_actions
}
}
};
static const Path *waspboss_paths[] = {
    &path3179,
    &path3180,
    &path3181,
    &path3182,
    &path3183,
    &path3184,
    &path3201,
    &path3202,
    &path3203,
    &path3204
};
extern const LevelObject lobj3178;
extern const LevelObject lobj3200;
const LevelObject lobj3178 = {
    .definition = &defWaspBoss,
    .x = 128, .y = 440,
    .palette = 0,
    .animInd = 0, .flags = 0,
    .group = &waspboss, .path = 0,
    .pathIndex = 0, .child = 0, .interval = 0
};
const LevelObject lobj3200 = {
    .definition = 0 /* to be assigned */,
    .x = 128, .y = 96,
    .palette = 0,
    .animInd = 0, .flags = 32768,
    .group = &waspboss, .path = 0,
    .pathIndex = 0, .child = 0, .interval = 0
};
static const LevelObject *waspboss_objects[] = {
    &lobj3178,
    &lobj3200
};
LevelObjectGroup waspboss = {
    .numPaths = 10, .paths = waspboss_paths,
    .numObjects = 2, .objects = waspboss_objects
};
const Trigger stage_caravan_triggers[] = {
/*   0 */ { .group = &room1ants1, .action = spawnCharacters, .count = 0, .x = -32, .y = 3976 },
/*   1 */ { .group = &room1ants1, .action = unpauseTimer, .count = 0, .x = -48, .y = 3976 },
/*   2 */ { .group = &room1ants2, .action = spawnCharacters, .count = 0, .x = -40, .y = 3960 },
/*   3 */ { .group = &room1ants3, .action = spawnCharacters, .count = 0, .x = -44, .y = 3904 },
/*   4 */ { .group = &room1ants3, .action = spawnCharacters, .count = 0, .x = -44, .y = 3896 },
/*   5 */ { .group = &room1ants3, .action = spawnCharacters, .count = 0, .x = -44, .y = 3888 },
/*   6 */ { .group = &room1ants3, .action = spawnCharacters, .count = 0, .x = -44, .y = 3880 },
/*   7 */ { .group = &room1ants3, .action = spawnCharacters, .count = 0, .x = -44, .y = 3872 },
/*   8 */ { .group = &room1ants3, .action = spawnCharacters, .count = 0, .x = -44, .y = 3864 },
/*   9 */ { .group = &room1ants3, .action = spawnCharacters, .count = 0, .x = -44, .y = 3856 },
/*  10 */ { .group = &room1ants3, .action = spawnCharacters, .count = 0, .x = -44, .y = 3848 },
/*  11 */ { .group = &room1ants3, .action = spawnCharacters, .count = 0, .x = -44, .y = 3840 },
/*  12 */ { .group = &room1ants4, .action = spawnCharacters, .count = 0, .x = -32, .y = 3832 },
/*  13 */ { .group = &room1ants3, .action = spawnCharacters, .count = 0, .x = -44, .y = 3832 },
/*  14 */ { .group = &room1ants4, .action = spawnCharacters, .count = 0, .x = -32, .y = 3824 },
/*  15 */ { .group = &room1ants4, .action = spawnCharacters, .count = 0, .x = -32, .y = 3816 },
/*  16 */ { .group = &room1ants4, .action = spawnCharacters, .count = 0, .x = -32, .y = 3808 },
/*  17 */ { .group = &room1ants4, .action = spawnCharacters, .count = 0, .x = -32, .y = 3800 },
/*  18 */ { .group = &room1ants4, .action = spawnCharacters, .count = 0, .x = -32, .y = 3792 },
/*  19 */ { .group = &room1ants4, .action = spawnCharacters, .count = 0, .x = -32, .y = 3784 },
/*  20 */ { .group = &room1ants4, .action = spawnCharacters, .count = 0, .x = -32, .y = 3776 },
/*  21 */ { .group = &room1powerup, .action = spawnCharacters, .count = 0, .x = -20, .y = 3768 },
/*  22 */ { .group = &room1ants4, .action = spawnCharacters, .count = 0, .x = -32, .y = 3768 },
/*  23 */ { .group = &room1ants4, .action = spawnCharacters, .count = 0, .x = -32, .y = 3760 },
/*  24 */ { .group = &room2ants1, .action = spawnCharacters, .count = 0, .x = -56, .y = 3680 },
/*  25 */ { .group = &room2ants2, .action = spawnCharacters, .count = 0, .x = -56, .y = 3616 },
/*  26 */ { .group = &room2powerup, .action = spawnCharacters, .count = 0, .x = -80, .y = 3576 },
/*  27 */ { .group = &r3fly1, .action = spawnCharacters, .count = 0, .x = -56, .y = 3544 },
/*  28 */ { .group = &room3fly3, .action = spawnCharacters, .count = 0, .x = -56, .y = 3448 },
/*  29 */ { .group = &room3fly4, .action = spawnCharacters, .count = 0, .x = -56, .y = 3352 },
/*  30 */ { .group = &r4r5ants, .action = spawnNextCharacters, .count = 2, .x = -40, .y = 3244 },
/*  31 */ { .group = &r4r5ants, .action = spawnNextCharacters, .count = 2, .x = -44, .y = 3236 },
/*  32 */ { .group = &r4r5ants, .action = spawnNextCharacters, .count = 2, .x = -40, .y = 3228 },
/*  33 */ { .group = &r4r5ants, .action = spawnNextCharacters, .count = 2, .x = -36, .y = 3220 },
/*  34 */ { .group = &r4r5ants, .action = spawnNextCharacters, .count = 2, .x = -32, .y = 3212 },
/*  35 */ { .group = &r4r5ants, .action = spawnNextCharacters, .count = 2, .x = -28, .y = 3204 },
/*  36 */ { .group = &r4r5ants, .action = spawnNextCharacters, .count = 2, .x = -24, .y = 3196 },
/*  37 */ { .group = &room4powerup, .action = spawnCharacters, .count = 0, .x = -56, .y = 3192 },
/*  38 */ { .group = &r4r5ants, .action = spawnNextCharacters, .count = 2, .x = -20, .y = 3188 },
/*  39 */ { .group = &r4r5ants, .action = spawnNextCharacters, .count = 2, .x = -24, .y = 3180 },
/*  40 */ { .group = &r4r5ants, .action = spawnNextCharacters, .count = 2, .x = -28, .y = 3172 },
/*  41 */ { .group = &r4fly1, .action = spawnCharacters, .count = 0, .x = -56, .y = 3168 },
/*  42 */ { .group = &r4r5ants, .action = spawnNextCharacters, .count = 2, .x = -32, .y = 3164 },
/*  43 */ { .group = &r4r5ants, .action = spawnNextCharacters, .count = 2, .x = -36, .y = 3156 },
/*  44 */ { .group = &r4r5ants, .action = spawnNextCharacters, .count = 2, .x = -40, .y = 3148 },
/*  45 */ { .group = &r4r5ants, .action = spawnNextCharacters, .count = 2, .x = -44, .y = 3140 },
/*  46 */ { .group = &r4r5ants, .action = spawnNextCharacters, .count = 2, .x = -40, .y = 3132 },
/*  47 */ { .group = &r4r5ants, .action = spawnNextCharacters, .count = 2, .x = -36, .y = 3124 },
/*  48 */ { .group = &r4r5ants, .action = spawnNextCharacters, .count = 2, .x = -32, .y = 3116 },
/*  49 */ { .group = &r4r5ants, .action = spawnNextCharacters, .count = 2, .x = -28, .y = 3108 },
/*  50 */ { .group = &r4r5ants, .action = spawnNextCharacters, .count = 2, .x = -24, .y = 3100 },
/*  51 */ { .group = &r4r5ants, .action = spawnNextCharacters, .count = 2, .x = -20, .y = 3092 },
/*  52 */ { .group = &r4r5ants, .action = spawnNextCharacters, .count = 2, .x = -24, .y = 3084 },
/*  53 */ { .group = &r4r5ants, .action = spawnNextCharacters, .count = 2, .x = -28, .y = 3076 },
/*  54 */ { .group = &r4r5ants, .action = spawnNextCharacters, .count = 2, .x = -32, .y = 3068 },
/*  55 */ { .group = &room5fly1, .action = spawnCharacters, .count = 0, .x = -56, .y = 3064 },
/*  56 */ { .group = &r5powerup, .action = spawnCharacters, .count = 0, .x = -72, .y = 3064 },
/*  57 */ { .group = &r4r5ants, .action = spawnNextCharacters, .count = 2, .x = -36, .y = 3060 },
/*  58 */ { .group = &r4r5ants, .action = spawnNextCharacters, .count = 2, .x = -40, .y = 3052 },
/*  59 */ { .group = &r4r5ants, .action = spawnNextCharacters, .count = 2, .x = -44, .y = 3044 },
/*  60 */ { .group = &r4r5ants, .action = spawnNextCharacters, .count = 2, .x = -40, .y = 3036 },
/*  61 */ { .group = &r5antsfrombigant, .action = spawnCharacters, .count = 0, .x = -36, .y = 3028 },
/*  62 */ { .group = &r5antsfrombigant, .action = spawnCharacters, .count = 0, .x = -36, .y = 3012 },
/*  63 */ { .group = &r5antsfrombigant, .action = spawnCharacters, .count = 0, .x = -36, .y = 2996 },
/*  64 */ { .group = &r5antsfrombigant, .action = spawnCharacters, .count = 0, .x = -36, .y = 2980 },
/*  65 */ { .group = &r5antsfrombigant, .action = spawnCharacters, .count = 0, .x = -36, .y = 2964 },
/*  66 */ { .group = &room5bigant, .action = postDoubleKillBonus, .count = 10000, .x = -28, .y = 2948 },
/*  67 */ { .group = &room5bigant, .action = spawnCharacters, .count = 0, .x = -36, .y = 2948 },
/*  68 */ { .group = &r6ants, .action = spawnNextCharacters, .count = 2, .x = -8, .y = 2872 },
/*  69 */ { .group = &r6ants, .action = spawnNextCharacters, .count = 2, .x = -8, .y = 2864 },
/*  70 */ { .group = &r6ants, .action = spawnNextCharacters, .count = 2, .x = -8, .y = 2856 },
/*  71 */ { .group = &r6ants, .action = spawnNextCharacters, .count = 2, .x = -8, .y = 2848 },
/*  72 */ { .group = &r6ants, .action = spawnNextCharacters, .count = 2, .x = -8, .y = 2840 },
/*  73 */ { .group = &r6ants, .action = spawnNextCharacters, .count = 2, .x = -8, .y = 2832 },
/*  74 */ { .group = &r6ants, .action = spawnNextCharacters, .count = 2, .x = -8, .y = 2824 },
/*  75 */ { .group = &r6ants, .action = spawnNextCharacters, .count = 2, .x = -8, .y = 2816 },
/*  76 */ { .group = &room6fly, .action = spawnCharacters, .count = 0, .x = -24, .y = 2816 },
/*  77 */ { .group = &r6ants, .action = spawnNextCharacters, .count = 2, .x = -8, .y = 2808 },
/*  78 */ { .group = &r6ants, .action = spawnNextCharacters, .count = 2, .x = -8, .y = 2800 },
/*  79 */ { .group = &r6ants, .action = spawnNextCharacters, .count = 2, .x = -8, .y = 2792 },
/*  80 */ { .group = &room6antsfrombigants, .action = spawnCharacters, .count = 0, .x = -8, .y = 2784 },
/*  81 */ { .group = &room6antsfrombigants, .action = spawnCharacters, .count = 0, .x = -8, .y = 2772 },
/*  82 */ { .group = &room6antsfrombigants, .action = spawnCharacters, .count = 0, .x = -8, .y = 2760 },
/*  83 */ { .group = &room6antsfrombigants, .action = spawnCharacters, .count = 0, .x = -8, .y = 2748 },
/*  84 */ { .group = &room6bigant, .action = postDoubleKillBonus, .count = 10000, .x = 0, .y = 2736 },
/*  85 */ { .group = &room6bigant, .action = spawnCharacters, .count = 0, .x = -8, .y = 2736 },
/*  86 */ { .group = &room7alien1, .action = spawnCharacters, .count = 0, .x = -56, .y = 2504 },
/*  87 */ { .group = &room7alien2, .action = spawnCharacters, .count = 0, .x = -80, .y = 2448 },
/*  88 */ { .group = &room7alien3, .action = spawnCharacters, .count = 0, .x = -56, .y = 2432 },
/*  89 */ { .group = &room8alien1, .action = spawnNextCharacters, .count = 1, .x = 0, .y = 2376 },
/*  90 */ { .group = &room8alien1, .action = spawnNextCharacters, .count = 1, .x = 28, .y = 2368 },
/*  91 */ { .group = &room8alien1, .action = spawnNextCharacters, .count = 1, .x = -8, .y = 2360 },
/*  92 */ { .group = &room8alien2, .action = spawnCharacters, .count = 0, .x = -56, .y = 2360 },
/*  93 */ { .group = &room8alien1, .action = spawnNextCharacters, .count = 1, .x = 32, .y = 2352 },
/*  94 */ { .group = &room8alien1, .action = spawnNextCharacters, .count = 2, .x = 12, .y = 2344 },
/*  95 */ { .group = &room8alien1, .action = spawnNextCharacters, .count = 3, .x = 12, .y = 2328 },
/*  96 */ { .group = &room8alien1, .action = spawnNextCharacters, .count = 1, .x = 16, .y = 2320 },
/*  97 */ { .group = &room8alien1, .action = spawnNextCharacters, .count = 2, .x = 8, .y = 2312 },
/*  98 */ { .group = &room8powerup, .action = spawnCharacters, .count = 0, .x = -32, .y = 2272 },
/*  99 */ { .group = &room8alien4, .action = spawnCharacters, .count = 0, .x = -72, .y = 2264 },
/* 100 */ { .group = &room9powerup, .action = spawnCharacters, .count = 0, .x = -16, .y = 2184 },
/* 101 */ { .group = &room9alienmind, .action = spawnCharacters, .count = 0, .x = -16, .y = 2016 },
/* 102 */ { .group = &room9alienmind, .action = stopStageScroll, .count = 0, .x = -32, .y = 2016 },
/* 103 */ { .group = &part2, .action = loadPart2, .count = 0, .x = -24, .y = 2008 },
/* 104 */ { .group = &room10acidants, .action = spawnCharacters, .count = 0, .x = -32, .y = 1856 },
/* 105 */ { .group = &room10acidants, .action = unpauseTimer, .count = 0, .x = -40, .y = 1856 },
/* 106 */ { .group = &room10acidants2, .action = spawnCharacters, .count = 0, .x = -32, .y = 1840 },
/* 107 */ { .group = &r11acidants1a, .action = spawnCharacters, .count = 0, .x = -48, .y = 1760 },
/* 108 */ { .group = &r11acidants1b, .action = spawnCharacters, .count = 0, .x = -56, .y = 1752 },
/* 109 */ { .group = &r11acidants1c, .action = spawnCharacters, .count = 0, .x = -48, .y = 1744 },
/* 110 */ { .group = &r11acidants1d, .action = spawnCharacters, .count = 0, .x = -56, .y = 1736 },
/* 111 */ { .group = &r11acidants1e, .action = spawnCharacters, .count = 0, .x = -48, .y = 1728 },
/* 112 */ { .group = &r11acidants1f, .action = spawnCharacters, .count = 0, .x = -56, .y = 1720 },
/* 113 */ { .group = &r11acidants1g, .action = spawnCharacters, .count = 0, .x = -48, .y = 1712 },
/* 114 */ { .group = &r11acidants1h, .action = spawnCharacters, .count = 0, .x = -56, .y = 1704 },
/* 115 */ { .group = &r11powerup, .action = spawnCharacters, .count = 0, .x = -96, .y = 1664 },
/* 116 */ { .group = &room11acidants2a, .action = spawnCharacters, .count = 0, .x = -32, .y = 1632 },
/* 117 */ { .group = &r11acidants3a, .action = spawnCharacters, .count = 0, .x = -48, .y = 1632 },
/* 118 */ { .group = &room11acidants2a, .action = spawnCharacters, .count = 0, .x = -32, .y = 1624 },
/* 119 */ { .group = &r11acidants3b, .action = spawnCharacters, .count = 0, .x = -56, .y = 1624 },
/* 120 */ { .group = &room11acidants2a, .action = spawnCharacters, .count = 0, .x = -32, .y = 1616 },
/* 121 */ { .group = &r11acidants3c, .action = spawnCharacters, .count = 0, .x = -48, .y = 1616 },
/* 122 */ { .group = &room11acidants2a, .action = spawnCharacters, .count = 0, .x = -32, .y = 1608 },
/* 123 */ { .group = &r11acidants3d, .action = spawnCharacters, .count = 0, .x = -56, .y = 1608 },
/* 124 */ { .group = &room11acidants2a, .action = spawnCharacters, .count = 0, .x = -32, .y = 1600 },
/* 125 */ { .group = &r11acidants3e, .action = spawnCharacters, .count = 0, .x = -48, .y = 1600 },
/* 126 */ { .group = &room11acidants2a, .action = spawnCharacters, .count = 0, .x = -32, .y = 1592 },
/* 127 */ { .group = &r11acidants3f, .action = spawnCharacters, .count = 0, .x = -56, .y = 1592 },
/* 128 */ { .group = &room11acidants2a, .action = spawnCharacters, .count = 0, .x = -32, .y = 1584 },
/* 129 */ { .group = &r11acidants3g, .action = spawnCharacters, .count = 0, .x = -48, .y = 1584 },
/* 130 */ { .group = &room11acidants2b, .action = spawnCharacters, .count = 0, .x = -88, .y = 1584 },
/* 131 */ { .group = &room11acidants2a, .action = spawnCharacters, .count = 0, .x = -32, .y = 1576 },
/* 132 */ { .group = &r11acidants3h, .action = spawnCharacters, .count = 0, .x = -56, .y = 1576 },
/* 133 */ { .group = &room11acidants2b, .action = spawnCharacters, .count = 0, .x = -88, .y = 1576 },
/* 134 */ { .group = &room11acidants2a, .action = spawnCharacters, .count = 0, .x = -32, .y = 1568 },
/* 135 */ { .group = &r11acidants3i, .action = spawnCharacters, .count = 0, .x = -48, .y = 1568 },
/* 136 */ { .group = &room11acidants2b, .action = spawnCharacters, .count = 0, .x = -88, .y = 1568 },
/* 137 */ { .group = &room11acidants2a, .action = spawnCharacters, .count = 0, .x = -32, .y = 1560 },
/* 138 */ { .group = &r11acidants3j, .action = spawnCharacters, .count = 0, .x = -56, .y = 1560 },
/* 139 */ { .group = &room11acidants2b, .action = spawnCharacters, .count = 0, .x = -88, .y = 1560 },
/* 140 */ { .group = &r11acidants3k, .action = spawnCharacters, .count = 0, .x = -48, .y = 1552 },
/* 141 */ { .group = &room11acidants2b, .action = spawnCharacters, .count = 0, .x = -88, .y = 1552 },
/* 142 */ { .group = &room11acidants2b, .action = spawnCharacters, .count = 0, .x = -88, .y = 1544 },
/* 143 */ { .group = &room11acidants2b, .action = spawnCharacters, .count = 0, .x = -88, .y = 1536 },
/* 144 */ { .group = &room11acidants2b, .action = spawnCharacters, .count = 0, .x = -88, .y = 1528 },
/* 145 */ { .group = &room11acidants2b, .action = spawnCharacters, .count = 0, .x = -88, .y = 1520 },
/* 146 */ { .group = &room11acidants2b, .action = spawnCharacters, .count = 0, .x = -88, .y = 1512 },
/* 147 */ { .group = &r12wasp1c, .action = spawnCharacters, .count = 0, .x = -40, .y = 1488 },
/* 148 */ { .group = &r12wasp1b, .action = spawnCharacters, .count = 0, .x = -48, .y = 1472 },
/* 149 */ { .group = &r12wasp1a, .action = spawnCharacters, .count = 0, .x = -56, .y = 1456 },
/* 150 */ { .group = &r12wasp3a, .action = spawnCharacters, .count = 0, .x = -40, .y = 1416 },
/* 151 */ { .group = &r12wasp3b, .action = spawnCharacters, .count = 0, .x = -32, .y = 1408 },
/* 152 */ { .group = &r12wasp3c, .action = spawnCharacters, .count = 0, .x = -24, .y = 1400 },
/* 153 */ { .group = &r12wasp2a, .action = spawnCharacters, .count = 0, .x = -56, .y = 1392 },
/* 154 */ { .group = &r12wasp2b, .action = spawnCharacters, .count = 0, .x = -64, .y = 1384 },
/* 155 */ { .group = &r12wasp2c, .action = spawnCharacters, .count = 0, .x = -72, .y = 1376 },
/* 156 */ { .group = &r12powerup, .action = spawnCharacters, .count = 0, .x = -40, .y = 1368 },
/* 157 */ { .group = &r12wasp4b, .action = spawnCharacters, .count = 0, .x = -16, .y = 1336 },
/* 158 */ { .group = &r12wasp4a, .action = spawnCharacters, .count = 0, .x = -80, .y = 1336 },
/* 159 */ { .group = &r13acidantholes, .action = spawnCharacters, .count = 0, .x = -96, .y = 1328 },
/* 160 */ { .group = &r12wasp4d, .action = spawnCharacters, .count = 0, .x = -32, .y = 1312 },
/* 161 */ { .group = &r12wasp4c, .action = spawnCharacters, .count = 0, .x = -64, .y = 1312 },
/* 162 */ { .group = &r13beetle1, .action = postDoubleKillBonus, .count = 25000, .x = -40, .y = 1288 },
/* 163 */ { .group = &r13beetle1, .action = spawnCharacters, .count = 0, .x = -48, .y = 1288 },
/* 164 */ { .group = &r13fly1, .action = spawnCharacters, .count = 0, .x = -64, .y = 1192 },
/* 165 */ { .group = &r13fly3, .action = spawnCharacters, .count = 0, .x = -48, .y = 1152 },
/* 166 */ { .group = &r14beetles, .action = postDoubleKillBonus, .count = 50000, .x = -12, .y = 1072 },
/* 167 */ { .group = &r14beetles, .action = spawnCharacters, .count = 0, .x = -24, .y = 1072 },
/* 168 */ { .group = &r14wasp2b, .action = spawnCharacters, .count = 0, .x = -56, .y = 1032 },
/* 169 */ { .group = &r14powerup1, .action = spawnCharacters, .count = 0, .x = -136, .y = 1000 },
/* 170 */ { .group = &r14wasp3a, .action = spawnCharacters, .count = 0, .x = -88, .y = 976 },
/* 171 */ { .group = &r14powerup2, .action = spawnCharacters, .count = 0, .x = -48, .y = 968 },
/* 172 */ { .group = &r15powerup1, .action = spawnCharacters, .count = 0, .x = -48, .y = 872 },
/* 173 */ { .group = &r14wasp4a, .action = spawnCharacters, .count = 0, .x = -88, .y = 872 },
/* 174 */ { .group = &r14wasp5a, .action = spawnCharacters, .count = 0, .x = -88, .y = 808 },
/* 175 */ { .group = &r15powerup2, .action = spawnCharacters, .count = 0, .x = -136, .y = 808 },
/* 176 */ { .group = &r14wasp6a, .action = spawnCharacters, .count = 0, .x = -120, .y = 760 },
/* 177 */ { .group = &Copy_of_r14wasp6a, .action = spawnCharacters, .count = 0, .x = -8, .y = 728 },
/* 178 */ { .group = &r16acidants1, .action = spawnCharacters, .count = 0, .x = -72, .y = 656 },
/* 179 */ { .group = &r16acidants1, .action = spawnCharacters, .count = 0, .x = -72, .y = 640 },
/* 180 */ { .group = &r16acidants1, .action = spawnCharacters, .count = 0, .x = -72, .y = 624 },
/* 181 */ { .group = &r16powerup, .action = spawnCharacters, .count = 0, .x = -32, .y = 608 },
/* 182 */ { .group = &r16acidants1, .action = spawnCharacters, .count = 0, .x = -72, .y = 608 },
/* 183 */ { .group = &r16acidants2, .action = spawnCharacters, .count = 0, .x = -56, .y = 592 },
/* 184 */ { .group = &r16acidants1, .action = spawnCharacters, .count = 0, .x = -72, .y = 592 },
/* 185 */ { .group = &r16acidants2, .action = spawnCharacters, .count = 0, .x = -56, .y = 576 },
/* 186 */ { .group = &r16acidants1, .action = spawnCharacters, .count = 0, .x = -72, .y = 576 },
/* 187 */ { .group = &r16acidants2, .action = spawnCharacters, .count = 0, .x = -56, .y = 560 },
/* 188 */ { .group = &r16acidants1, .action = spawnCharacters, .count = 0, .x = -72, .y = 560 },
/* 189 */ { .group = &r16acidants2, .action = spawnCharacters, .count = 0, .x = -56, .y = 544 },
/* 190 */ { .group = &r16acidants1, .action = spawnCharacters, .count = 0, .x = -72, .y = 544 },
/* 191 */ { .group = &r16acidants2, .action = spawnCharacters, .count = 0, .x = -56, .y = 528 },
/* 192 */ { .group = &r16acidants1, .action = spawnCharacters, .count = 0, .x = -72, .y = 528 },
/* 193 */ { .group = &r16powerup2, .action = spawnCharacters, .count = 0, .x = -16, .y = 520 },
/* 194 */ { .group = &r16acidants2, .action = spawnCharacters, .count = 0, .x = -56, .y = 512 },
/* 195 */ { .group = &r16acidants1, .action = spawnCharacters, .count = 0, .x = -72, .y = 512 },
/* 196 */ { .group = &r16acidants2, .action = spawnCharacters, .count = 0, .x = -56, .y = 496 },
/* 197 */ { .group = &r16acidants1, .action = spawnCharacters, .count = 0, .x = -72, .y = 496 },
/* 198 */ { .group = &r16acidants2, .action = spawnCharacters, .count = 0, .x = -56, .y = 480 },
/* 199 */ { .group = &r16acidants1, .action = spawnCharacters, .count = 0, .x = -72, .y = 480 },
/* 200 */ { .group = &r16acidants2, .action = spawnCharacters, .count = 0, .x = -56, .y = 464 },
/* 201 */ { .group = &r16acidants2, .action = spawnCharacters, .count = 0, .x = -56, .y = 448 },
/* 202 */ { .group = &r16acidants2, .action = spawnCharacters, .count = 0, .x = -56, .y = 432 },
/* 203 */ { .group = &r17powerup, .action = spawnCharacters, .count = 0, .x = -40, .y = 424 },
/* 204 */ { .group = &r16acidants2, .action = spawnCharacters, .count = 0, .x = -56, .y = 416 },
/* 205 */ { .group = &r17fly1b, .action = spawnCharacters, .count = 0, .x = -104, .y = 408 },
/* 206 */ { .group = &r17fly1a, .action = spawnCharacters, .count = 0, .x = -184, .y = 408 },
/* 207 */ { .group = &r17fly2b, .action = spawnCharacters, .count = 0, .x = -120, .y = 384 },
/* 208 */ { .group = &r17fly2a, .action = spawnCharacters, .count = 0, .x = -200, .y = 384 },
/* 209 */ { .group = &r17wasp1, .action = spawnCharacters, .count = 0, .x = -104, .y = 344 },
/* 210 */ { .group = &r17wasp3, .action = spawnCharacters, .count = 0, .x = -104, .y = 328 },
/* 211 */ { .group = &r17wasp5, .action = spawnCharacters, .count = 0, .x = -104, .y = 312 },
/* 212 */ { .group = &r17wasp7, .action = spawnCharacters, .count = 0, .x = -104, .y = 296 },
/* 213 */ { .group = &r17wasp9, .action = spawnCharacters, .count = 0, .x = -104, .y = 280 },
/* 214 */ { .group = &waspboss, .action = spawnCharacters, .count = 0, .x = -16, .y = 224 },
/* 215 */ { .group = &waspboss, .action = startBackgroundExplosion, .count = 0, .x = -44, .y = 224 },
/* 216 */ { .group = &waspboss, .action = stopStageScroll, .count = 0, .x = -32, .y = 144 }
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
    &r5antsfrombigant,
    &room5fly1,
    &r5powerup,
    &r6ants,
    &room6fly,
    &room5bigant,
    &room6antsfrombigants,
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
    &r9aliensfromalienmind,
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
    &r13acidantsfromholes,
    &r13acidantholes,
    &r13beetle1,
    &r13fly1,
    &r13fly3,
    &r14beetles,
    &r14wasp2b,
    &r14wasp3a,
    &r14wasp4a,
    &r14wasp5a,
    &r14wasp6a,
    &Copy_of_r14wasp6a,
    &r14powerupholes,
    &r14powerup1,
    &r14powerup2,
    &r15powerupholes,
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
    &waspboss
};
