#include "stage_caravan.h"
extern LevelObjectGroup room1ants1;
static PathPoint path2186_points[] = {
{
    .x = 0, .y = -40,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -40, .y = -40,
    .distTo = 40,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -56, .y = -56,
    .distTo = 23,
    .xDirTo = -46, .yDirTo = -46,
    .numActions = 0,
    .actions = 0
},
{
    .x = -104, .y = -56,
    .distTo = 48,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
}
};
static PathPoint path2187_points[] = {
{
    .x = 0, .y = -48,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -48, .y = -48,
    .distTo = 48,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -72, .y = -72,
    .distTo = 34,
    .xDirTo = -46, .yDirTo = -46,
    .numActions = 0,
    .actions = 0
},
{
    .x = -104, .y = -72,
    .distTo = 32,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
}
};
static PathPoint path2188_points[] = {
{
    .x = 0, .y = -56,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -56, .y = -56,
    .distTo = 56,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -88, .y = -88,
    .distTo = 46,
    .xDirTo = -46, .yDirTo = -46,
    .numActions = 0,
    .actions = 0
},
{
    .x = -104, .y = -88,
    .distTo = 16,
    .xDirTo = -64, .yDirTo = 0,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -64, .y = -64,
    .distTo = 64,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -96, .y = -96,
    .distTo = 46,
    .xDirTo = -46, .yDirTo = -46,
    .numActions = 0,
    .actions = 0
},
{
    .x = -96, .y = -104,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2189_3_actions
},
{
    .x = -88, .y = -112,
    .distTo = 12,
    .xDirTo = 45, .yDirTo = -46,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -72, .y = -72,
    .distTo = 72,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -96, .y = -96,
    .distTo = 34,
    .xDirTo = -46, .yDirTo = -46,
    .numActions = 0,
    .actions = 0
},
{
    .x = -96, .y = -104,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2190_3_actions
},
{
    .x = -88, .y = -112,
    .distTo = 12,
    .xDirTo = 45, .yDirTo = -46,
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
{.definition = &defAnt, .x = 264, .y = 4016, .animInd = 0, .flags = 34816, .group = &room1ants1},
{.definition = &defAnt, .x = 280, .y = 4016, .animInd = 0, .flags = 34816, .group = &room1ants1},
{.definition = &defAnt, .x = 296, .y = 4016, .animInd = 0, .flags = 34816, .group = &room1ants1}
};
LevelObjectGroup room1ants1 = {
    .numPaths = 5, .paths = room1ants1_paths,
    .numObjects = 3, .objects = room1ants1_objects
};
extern LevelObjectGroup room1ants2;
static PathPoint path2199_points[] = {
{
    .x = 0, .y = -40,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 56, .y = -40,
    .distTo = 56,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 72, .y = -56,
    .distTo = 23,
    .xDirTo = 45, .yDirTo = -46,
    .numActions = 0,
    .actions = 0
},
{
    .x = 104, .y = -56,
    .distTo = 32,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
}
};
static PathPoint path2200_points[] = {
{
    .x = 0, .y = -32,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 56, .y = -32,
    .distTo = 56,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 80, .y = -56,
    .distTo = 34,
    .xDirTo = 45, .yDirTo = -46,
    .numActions = 0,
    .actions = 0
},
{
    .x = 104, .y = -56,
    .distTo = 24,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
}
};
static PathPoint path2201_points[] = {
{
    .x = 0, .y = -24,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 56, .y = -24,
    .distTo = 56,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = -56,
    .distTo = 46,
    .xDirTo = 45, .yDirTo = -46,
    .numActions = 0,
    .actions = 0
},
{
    .x = 112, .y = -56,
    .distTo = 24,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
}
};
static PathPoint path2202_points[] = {
{
    .x = 0, .y = -32,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 56, .y = -32,
    .distTo = 56,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = -64,
    .distTo = 46,
    .xDirTo = 45, .yDirTo = -46,
    .numActions = 0,
    .actions = 0
}
};
static PathPoint path2203_points[] = {
{
    .x = 0, .y = -40,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 56, .y = -40,
    .distTo = 56,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = -72,
    .distTo = 46,
    .xDirTo = 45, .yDirTo = -46,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = -80,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
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
{.definition = &defAnt, .x = -24, .y = 3992, .animInd = 0, .flags = 32768, .group = &room1ants2},
{.definition = &defAnt, .x = -40, .y = 3992, .animInd = 0, .flags = 32768, .group = &room1ants2},
{.definition = &defAnt, .x = -8, .y = 3992, .animInd = 0, .flags = 32768, .group = &room1ants2}
};
LevelObjectGroup room1ants2 = {
    .numPaths = 5, .paths = room1ants2_paths,
    .numObjects = 3, .objects = room1ants2_objects
};
extern LevelObjectGroup room1ants3;
static PathPoint path2204_points[] = {
{
    .x = -8, .y = 0,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 0,
    .distTo = 16,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 24, .y = -8,
    .distTo = 18,
    .xDirTo = 57, .yDirTo = -29,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = -8,
    .distTo = 64,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 136, .y = -32,
    .distTo = 54,
    .xDirTo = 57, .yDirTo = -29,
    .numActions = 0,
    .actions = 0
},
{
    .x = 200, .y = -32,
    .distTo = 64,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 232, .y = -48,
    .distTo = 36,
    .xDirTo = 57, .yDirTo = -29,
    .numActions = 0,
    .actions = 0
},
{
    .x = 272, .y = -48,
    .distTo = 40,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path room1ants3_paths[] = {
{.x = 0, .y = 3912, .numPoints = 8, .points = path2204_points}
};
static LevelObject room1ants3_objects[] = {
{.definition = &defAnt, .x = -8, .y = 3912, .animInd = 0, .flags = 32768, .group = &room1ants3}
};
LevelObjectGroup room1ants3 = {
    .numPaths = 1, .paths = room1ants3_paths,
    .numObjects = 1, .objects = room1ants3_objects
};
extern LevelObjectGroup Copy_of_room1ants3;
static PathPoint path3501_points[] = {
{
    .x = -8, .y = 0,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 0,
    .distTo = 16,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 24, .y = -8,
    .distTo = 18,
    .xDirTo = 57, .yDirTo = -29,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = -8,
    .distTo = 64,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 136, .y = -32,
    .distTo = 54,
    .xDirTo = 57, .yDirTo = -29,
    .numActions = 0,
    .actions = 0
},
{
    .x = 200, .y = -32,
    .distTo = 64,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 232, .y = -48,
    .distTo = 36,
    .xDirTo = 57, .yDirTo = -29,
    .numActions = 0,
    .actions = 0
},
{
    .x = 272, .y = -48,
    .distTo = 40,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path Copy_of_room1ants3_paths[] = {
{.x = 0, .y = 3912, .numPoints = 8, .points = path3501_points}
};
static LevelObject Copy_of_room1ants3_objects[] = {
{.definition = &defAnt, .x = -8, .y = 3912, .animInd = 0, .flags = 32768, .group = &Copy_of_room1ants3}
};
LevelObjectGroup Copy_of_room1ants3 = {
    .numPaths = 1, .paths = Copy_of_room1ants3_paths,
    .numObjects = 1, .objects = Copy_of_room1ants3_objects
};
extern LevelObjectGroup Copy_of_Copy_of_room1ants3;
static PathPoint path3504_points[] = {
{
    .x = -8, .y = 0,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 0,
    .distTo = 16,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 24, .y = -8,
    .distTo = 18,
    .xDirTo = 57, .yDirTo = -29,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = -8,
    .distTo = 64,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 136, .y = -32,
    .distTo = 54,
    .xDirTo = 57, .yDirTo = -29,
    .numActions = 0,
    .actions = 0
},
{
    .x = 200, .y = -32,
    .distTo = 64,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 232, .y = -48,
    .distTo = 36,
    .xDirTo = 57, .yDirTo = -29,
    .numActions = 0,
    .actions = 0
},
{
    .x = 272, .y = -48,
    .distTo = 40,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path Copy_of_Copy_of_room1ants3_paths[] = {
{.x = 0, .y = 3912, .numPoints = 8, .points = path3504_points}
};
static LevelObject Copy_of_Copy_of_room1ants3_objects[] = {
{.definition = &defAnt, .x = -8, .y = 3912, .animInd = 0, .flags = 32768, .group = &Copy_of_Copy_of_room1ants3}
};
LevelObjectGroup Copy_of_Copy_of_room1ants3 = {
    .numPaths = 1, .paths = Copy_of_Copy_of_room1ants3_paths,
    .numObjects = 1, .objects = Copy_of_Copy_of_room1ants3_objects
};
extern LevelObjectGroup Copy_of_Copy_of_Copy_of_room1ants3;
static PathPoint path3507_points[] = {
{
    .x = -8, .y = 0,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 0,
    .distTo = 16,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 24, .y = -8,
    .distTo = 18,
    .xDirTo = 57, .yDirTo = -29,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = -8,
    .distTo = 64,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 136, .y = -32,
    .distTo = 54,
    .xDirTo = 57, .yDirTo = -29,
    .numActions = 0,
    .actions = 0
},
{
    .x = 200, .y = -32,
    .distTo = 64,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 232, .y = -48,
    .distTo = 36,
    .xDirTo = 57, .yDirTo = -29,
    .numActions = 0,
    .actions = 0
},
{
    .x = 272, .y = -48,
    .distTo = 40,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path Copy_of_Copy_of_Copy_of_room1ants3_paths[] = {
{.x = 0, .y = 3912, .numPoints = 8, .points = path3507_points}
};
static LevelObject Copy_of_Copy_of_Copy_of_room1ants3_objects[] = {
{.definition = &defAnt, .x = -8, .y = 3912, .animInd = 0, .flags = 32768, .group = &Copy_of_Copy_of_Copy_of_room1ants3}
};
LevelObjectGroup Copy_of_Copy_of_Copy_of_room1ants3 = {
    .numPaths = 1, .paths = Copy_of_Copy_of_Copy_of_room1ants3_paths,
    .numObjects = 1, .objects = Copy_of_Copy_of_Copy_of_room1ants3_objects
};
extern LevelObjectGroup Copy_of_Copy_of_Copy_of_Copy_of_room1ants3;
static PathPoint path3510_points[] = {
{
    .x = -8, .y = 0,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 0,
    .distTo = 16,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 24, .y = -8,
    .distTo = 18,
    .xDirTo = 57, .yDirTo = -29,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = -8,
    .distTo = 64,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 136, .y = -32,
    .distTo = 54,
    .xDirTo = 57, .yDirTo = -29,
    .numActions = 0,
    .actions = 0
},
{
    .x = 200, .y = -32,
    .distTo = 64,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 232, .y = -48,
    .distTo = 36,
    .xDirTo = 57, .yDirTo = -29,
    .numActions = 0,
    .actions = 0
},
{
    .x = 272, .y = -48,
    .distTo = 40,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path Copy_of_Copy_of_Copy_of_Copy_of_room1ants3_paths[] = {
{.x = 0, .y = 3912, .numPoints = 8, .points = path3510_points}
};
static LevelObject Copy_of_Copy_of_Copy_of_Copy_of_room1ants3_objects[] = {
{.definition = &defAnt, .x = -8, .y = 3912, .animInd = 0, .flags = 32768, .group = &Copy_of_Copy_of_Copy_of_Copy_of_room1ants3}
};
LevelObjectGroup Copy_of_Copy_of_Copy_of_Copy_of_room1ants3 = {
    .numPaths = 1, .paths = Copy_of_Copy_of_Copy_of_Copy_of_room1ants3_paths,
    .numObjects = 1, .objects = Copy_of_Copy_of_Copy_of_Copy_of_room1ants3_objects
};
extern LevelObjectGroup room1ants4;
static PathPoint path2221_points[] = {
{
    .x = 0, .y = 0,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = 0,
    .distTo = 32,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -64, .y = -16,
    .distTo = 36,
    .xDirTo = -58, .yDirTo = -29,
    .numActions = 0,
    .actions = 0
},
{
    .x = -168, .y = -16,
    .distTo = 104,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -232, .y = -48,
    .distTo = 72,
    .xDirTo = -58, .yDirTo = -29,
    .numActions = 0,
    .actions = 0
},
{
    .x = -280, .y = -48,
    .distTo = 48,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
}
};
static PathPoint path2253_points[] = {
{
    .x = -8, .y = 0,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -40, .y = 0,
    .distTo = 32,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -72, .y = 16,
    .distTo = 36,
    .xDirTo = -58, .yDirTo = 28,
    .numActions = 0,
    .actions = 0
},
{
    .x = -144, .y = 16,
    .distTo = 72,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -160, .y = 24,
    .distTo = 18,
    .xDirTo = -58, .yDirTo = 28,
    .numActions = 0,
    .actions = 0
},
{
    .x = -248, .y = 24,
    .distTo = 88,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -264, .y = 32,
    .distTo = 18,
    .xDirTo = -58, .yDirTo = 28,
    .numActions = 0,
    .actions = 0
},
{
    .x = -280, .y = 32,
    .distTo = 16,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path room1ants4_paths[] = {
{.x = 264, .y = 3840, .numPoints = 6, .points = path2221_points},
{.x = 272, .y = 3880, .numPoints = 8, .points = path2253_points}
};
static LevelObject room1ants4_objects[] = {
{.definition = &defAnt, .x = 264, .y = 3840, .animInd = 0, .flags = 34816, .group = &room1ants4},
{.definition = &defAnt, .x = 264, .y = 3880, .animInd = 0, .flags = 34816, .group = &room1ants4}
};
LevelObjectGroup room1ants4 = {
    .numPaths = 2, .paths = room1ants4_paths,
    .numObjects = 2, .objects = room1ants4_objects
};
extern LevelObjectGroup Copy_of_room1ants4;
static PathPoint path3513_points[] = {
{
    .x = 0, .y = 0,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = 0,
    .distTo = 32,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -64, .y = -16,
    .distTo = 36,
    .xDirTo = -58, .yDirTo = -29,
    .numActions = 0,
    .actions = 0
},
{
    .x = -168, .y = -16,
    .distTo = 104,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -232, .y = -48,
    .distTo = 72,
    .xDirTo = -58, .yDirTo = -29,
    .numActions = 0,
    .actions = 0
},
{
    .x = -280, .y = -48,
    .distTo = 48,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
}
};
static PathPoint path3524_points[] = {
{
    .x = -8, .y = 0,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -40, .y = 0,
    .distTo = 32,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -72, .y = 16,
    .distTo = 36,
    .xDirTo = -58, .yDirTo = 28,
    .numActions = 0,
    .actions = 0
},
{
    .x = -144, .y = 16,
    .distTo = 72,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -160, .y = 24,
    .distTo = 18,
    .xDirTo = -58, .yDirTo = 28,
    .numActions = 0,
    .actions = 0
},
{
    .x = -248, .y = 24,
    .distTo = 88,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -264, .y = 32,
    .distTo = 18,
    .xDirTo = -58, .yDirTo = 28,
    .numActions = 0,
    .actions = 0
},
{
    .x = -280, .y = 32,
    .distTo = 16,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path Copy_of_room1ants4_paths[] = {
{.x = 264, .y = 3840, .numPoints = 6, .points = path3513_points},
{.x = 272, .y = 3880, .numPoints = 8, .points = path3524_points}
};
static LevelObject Copy_of_room1ants4_objects[] = {
{.definition = &defAnt, .x = 264, .y = 3840, .animInd = 0, .flags = 34816, .group = &Copy_of_room1ants4},
{.definition = &defAnt, .x = 264, .y = 3880, .animInd = 0, .flags = 34816, .group = &Copy_of_room1ants4}
};
LevelObjectGroup Copy_of_room1ants4 = {
    .numPaths = 2, .paths = Copy_of_room1ants4_paths,
    .numObjects = 2, .objects = Copy_of_room1ants4_objects
};
extern LevelObjectGroup Copy_of_Copy_of_room1ants4;
static PathPoint path3525_points[] = {
{
    .x = 0, .y = 0,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = 0,
    .distTo = 32,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -64, .y = -16,
    .distTo = 36,
    .xDirTo = -58, .yDirTo = -29,
    .numActions = 0,
    .actions = 0
},
{
    .x = -168, .y = -16,
    .distTo = 104,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -232, .y = -48,
    .distTo = 72,
    .xDirTo = -58, .yDirTo = -29,
    .numActions = 0,
    .actions = 0
},
{
    .x = -280, .y = -48,
    .distTo = 48,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
}
};
static PathPoint path3536_points[] = {
{
    .x = -8, .y = 0,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -40, .y = 0,
    .distTo = 32,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -72, .y = 16,
    .distTo = 36,
    .xDirTo = -58, .yDirTo = 28,
    .numActions = 0,
    .actions = 0
},
{
    .x = -144, .y = 16,
    .distTo = 72,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -160, .y = 24,
    .distTo = 18,
    .xDirTo = -58, .yDirTo = 28,
    .numActions = 0,
    .actions = 0
},
{
    .x = -248, .y = 24,
    .distTo = 88,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -264, .y = 32,
    .distTo = 18,
    .xDirTo = -58, .yDirTo = 28,
    .numActions = 0,
    .actions = 0
},
{
    .x = -280, .y = 32,
    .distTo = 16,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path Copy_of_Copy_of_room1ants4_paths[] = {
{.x = 264, .y = 3840, .numPoints = 6, .points = path3525_points},
{.x = 272, .y = 3880, .numPoints = 8, .points = path3536_points}
};
static LevelObject Copy_of_Copy_of_room1ants4_objects[] = {
{.definition = &defAnt, .x = 264, .y = 3840, .animInd = 0, .flags = 34816, .group = &Copy_of_Copy_of_room1ants4},
{.definition = &defAnt, .x = 264, .y = 3880, .animInd = 0, .flags = 34816, .group = &Copy_of_Copy_of_room1ants4}
};
LevelObjectGroup Copy_of_Copy_of_room1ants4 = {
    .numPaths = 2, .paths = Copy_of_Copy_of_room1ants4_paths,
    .numObjects = 2, .objects = Copy_of_Copy_of_room1ants4_objects
};
extern LevelObjectGroup Copy_of_Copy_of_Copy_of_room1ants4;
static PathPoint path3537_points[] = {
{
    .x = 0, .y = 0,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = 0,
    .distTo = 32,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -64, .y = -16,
    .distTo = 36,
    .xDirTo = -58, .yDirTo = -29,
    .numActions = 0,
    .actions = 0
},
{
    .x = -168, .y = -16,
    .distTo = 104,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -232, .y = -48,
    .distTo = 72,
    .xDirTo = -58, .yDirTo = -29,
    .numActions = 0,
    .actions = 0
},
{
    .x = -280, .y = -48,
    .distTo = 48,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
}
};
static PathPoint path3548_points[] = {
{
    .x = -8, .y = 0,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -40, .y = 0,
    .distTo = 32,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -72, .y = 16,
    .distTo = 36,
    .xDirTo = -58, .yDirTo = 28,
    .numActions = 0,
    .actions = 0
},
{
    .x = -144, .y = 16,
    .distTo = 72,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -160, .y = 24,
    .distTo = 18,
    .xDirTo = -58, .yDirTo = 28,
    .numActions = 0,
    .actions = 0
},
{
    .x = -248, .y = 24,
    .distTo = 88,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -264, .y = 32,
    .distTo = 18,
    .xDirTo = -58, .yDirTo = 28,
    .numActions = 0,
    .actions = 0
},
{
    .x = -280, .y = 32,
    .distTo = 16,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path Copy_of_Copy_of_Copy_of_room1ants4_paths[] = {
{.x = 264, .y = 3840, .numPoints = 6, .points = path3537_points},
{.x = 272, .y = 3880, .numPoints = 8, .points = path3548_points}
};
static LevelObject Copy_of_Copy_of_Copy_of_room1ants4_objects[] = {
{.definition = &defAnt, .x = 264, .y = 3840, .animInd = 0, .flags = 34816, .group = &Copy_of_Copy_of_Copy_of_room1ants4},
{.definition = &defAnt, .x = 264, .y = 3880, .animInd = 0, .flags = 34816, .group = &Copy_of_Copy_of_Copy_of_room1ants4}
};
LevelObjectGroup Copy_of_Copy_of_Copy_of_room1ants4 = {
    .numPaths = 2, .paths = Copy_of_Copy_of_Copy_of_room1ants4_paths,
    .numObjects = 2, .objects = Copy_of_Copy_of_Copy_of_room1ants4_objects
};
extern LevelObjectGroup Copy_of_Copy_of_Copy_of_Copy_of_room1ants4;
static PathPoint path3549_points[] = {
{
    .x = 0, .y = 0,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = 0,
    .distTo = 32,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -64, .y = -16,
    .distTo = 36,
    .xDirTo = -58, .yDirTo = -29,
    .numActions = 0,
    .actions = 0
},
{
    .x = -168, .y = -16,
    .distTo = 104,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -232, .y = -48,
    .distTo = 72,
    .xDirTo = -58, .yDirTo = -29,
    .numActions = 0,
    .actions = 0
},
{
    .x = -280, .y = -48,
    .distTo = 48,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
}
};
static PathPoint path3560_points[] = {
{
    .x = -8, .y = 0,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -40, .y = 0,
    .distTo = 32,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -72, .y = 16,
    .distTo = 36,
    .xDirTo = -58, .yDirTo = 28,
    .numActions = 0,
    .actions = 0
},
{
    .x = -144, .y = 16,
    .distTo = 72,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -160, .y = 24,
    .distTo = 18,
    .xDirTo = -58, .yDirTo = 28,
    .numActions = 0,
    .actions = 0
},
{
    .x = -248, .y = 24,
    .distTo = 88,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -264, .y = 32,
    .distTo = 18,
    .xDirTo = -58, .yDirTo = 28,
    .numActions = 0,
    .actions = 0
},
{
    .x = -280, .y = 32,
    .distTo = 16,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path Copy_of_Copy_of_Copy_of_Copy_of_room1ants4_paths[] = {
{.x = 264, .y = 3840, .numPoints = 6, .points = path3549_points},
{.x = 272, .y = 3880, .numPoints = 8, .points = path3560_points}
};
static LevelObject Copy_of_Copy_of_Copy_of_Copy_of_room1ants4_objects[] = {
{.definition = &defAnt, .x = 264, .y = 3840, .animInd = 0, .flags = 34816, .group = &Copy_of_Copy_of_Copy_of_Copy_of_room1ants4},
{.definition = &defAnt, .x = 264, .y = 3880, .animInd = 0, .flags = 34816, .group = &Copy_of_Copy_of_Copy_of_Copy_of_room1ants4}
};
LevelObjectGroup Copy_of_Copy_of_Copy_of_Copy_of_room1ants4 = {
    .numPaths = 2, .paths = Copy_of_Copy_of_Copy_of_Copy_of_room1ants4_paths,
    .numObjects = 2, .objects = Copy_of_Copy_of_Copy_of_Copy_of_room1ants4_objects
};
extern LevelObjectGroup room1powerup;
static LevelObject room1powerup_objects[] = {
{.definition = &defHoneyPot, .x = 80, .y = 3752, .animInd = 0, .flags = 32768, .group = &room1powerup}
};
LevelObjectGroup room1powerup = {
    .numPaths = 0, .paths = 0,
    .numObjects = 1, .objects = room1powerup_objects
};
extern LevelObjectGroup room2ants1;
static PathPoint path2268_points[] = {
{
    .x = 0, .y = -8,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = 24,
    .distTo = 94,
    .xDirTo = 60, .yDirTo = 21,
    .numActions = 0,
    .actions = 0
}
};
static PathPoint path2269_points[] = {
{
    .x = 0, .y = -8,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -72, .y = -8,
    .distTo = 72,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
}
};
static PathPoint path2271_points[] = {
{
    .x = 0, .y = 8,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 72, .y = 24,
    .distTo = 74,
    .xDirTo = 62, .yDirTo = 13,
    .numActions = 0,
    .actions = 0
}
};
static PathPoint path2274_points[] = {
{
    .x = 0, .y = 8,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -88, .y = -8,
    .distTo = 90,
    .xDirTo = -63, .yDirTo = -12,
    .numActions = 0,
    .actions = 0
}
};
static PathPoint path2275_points[] = {
{
    .x = 0, .y = 24,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 80, .y = 24,
    .distTo = 80,
    .xDirTo = 64, .yDirTo = 0,
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
{.definition = &defAnt, .x = -8, .y = 3608, .animInd = 0, .flags = 32768, .group = &room2ants1},
{.definition = &defAnt, .x = 264, .y = 3664, .animInd = 0, .flags = 34816, .group = &room2ants1},
{.definition = &defAnt, .x = -8, .y = 3656, .animInd = 0, .flags = 32768, .group = &room2ants1},
{.definition = &defAnt, .x = 264, .y = 3712, .animInd = 0, .flags = 34816, .group = &room2ants1},
{.definition = &defAnt, .x = -8, .y = 3704, .animInd = 0, .flags = 32768, .group = &room2ants1}
};
LevelObjectGroup room2ants1 = {
    .numPaths = 5, .paths = room2ants1_paths,
    .numObjects = 5, .objects = room2ants1_objects
};
extern LevelObjectGroup room2ants2;
static PathPoint path2288_points[] = {
{
    .x = 0, .y = 16,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = 24,
    .distTo = 89,
    .xDirTo = 63, .yDirTo = 5,
    .numActions = 0,
    .actions = 0
}
};
static PathPoint path2291_points[] = {
{
    .x = 0, .y = 0,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -72, .y = -8,
    .distTo = 73,
    .xDirTo = -64, .yDirTo = -8,
    .numActions = 0,
    .actions = 0
}
};
static PathPoint path2293_points[] = {
{
    .x = 0, .y = 16,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -80, .y = -8,
    .distTo = 84,
    .xDirTo = -62, .yDirTo = -19,
    .numActions = 0,
    .actions = 0
}
};
static PathPoint path2294_points[] = {
{
    .x = 0, .y = 32,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 72, .y = 24,
    .distTo = 73,
    .xDirTo = 63, .yDirTo = -8,
    .numActions = 0,
    .actions = 0
}
};
static PathPoint path2297_points[] = {
{
    .x = 0, .y = 32,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -88, .y = -8,
    .distTo = 97,
    .xDirTo = -59, .yDirTo = -27,
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
{.definition = &defAnt, .x = -8, .y = 3640, .animInd = 0, .flags = 32768, .group = &room2ants2},
{.definition = &defAnt, .x = 264, .y = 3648, .animInd = 0, .flags = 34816, .group = &room2ants2},
{.definition = &defAnt, .x = 264, .y = 3696, .animInd = 0, .flags = 34816, .group = &room2ants2},
{.definition = &defAnt, .x = -8, .y = 3688, .animInd = 0, .flags = 32768, .group = &room2ants2},
{.definition = &defAnt, .x = 264, .y = 3744, .animInd = 0, .flags = 34816, .group = &room2ants2}
};
LevelObjectGroup room2ants2 = {
    .numPaths = 5, .paths = room2ants2_paths,
    .numObjects = 5, .objects = room2ants2_objects
};
extern LevelObjectGroup room2powerup;
static LevelObject room2powerup_objects[] = {
{.definition = &defHoneyPot, .x = 136, .y = 3568, .animInd = 0, .flags = 32768, .group = &room2powerup}
};
LevelObjectGroup room2powerup = {
    .numPaths = 0, .paths = 0,
    .numObjects = 1, .objects = room2powerup_objects
};
extern LevelObjectGroup r3fly1;
static GObjPathPointFunction path2303_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2303_3_actions[] = {
0 /* to be assigned */,
enterForeground
};
static GObjPathPointFunction path2303_9_actions[] = {
PathPoint_SetSpeed
};
static PathPoint path2303_points[] = {
{
    .x = 64, .y = 112,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2303_0_actions
},
{
    .x = 64, .y = 96,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 72, .y = 80,
    .distTo = 18,
    .xDirTo = 28, .yDirTo = -58,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = 72,
    .distTo = 18,
    .xDirTo = 57, .yDirTo = -29,
    .numActions = 2,
    .actions = path2303_3_actions
},
{
    .x = 104, .y = 80,
    .distTo = 18,
    .xDirTo = 57, .yDirTo = 28,
    .numActions = 0,
    .actions = 0
},
{
    .x = 112, .y = 96,
    .distTo = 18,
    .xDirTo = 28, .yDirTo = 57,
    .numActions = 0,
    .actions = 0
},
{
    .x = 104, .y = 120,
    .distTo = 26,
    .xDirTo = -21, .yDirTo = 60,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = 136,
    .distTo = 23,
    .xDirTo = -46, .yDirTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = 64, .y = 144,
    .distTo = 26,
    .xDirTo = -61, .yDirTo = 20,
    .numActions = 0,
    .actions = 0
},
{
    .x = 40, .y = 136,
    .distTo = 26,
    .xDirTo = -61, .yDirTo = -21,
    .numActions = 1,
    .actions = path2303_9_actions
},
{
    .x = 16, .y = 96,
    .distTo = 47,
    .xDirTo = -33, .yDirTo = -55,
    .numActions = 0,
    .actions = 0
},
{
    .x = -24, .y = 0,
    .distTo = 104,
    .xDirTo = -25, .yDirTo = -60,
    .numActions = 0,
    .actions = 0
}
};
static GObjPathPointFunction path2304_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2304_3_actions[] = {
0 /* to be assigned */,
enterForeground
};
static GObjPathPointFunction path2304_9_actions[] = {
PathPoint_SetSpeed
};
static PathPoint path2304_points[] = {
{
    .x = -32, .y = 120,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2304_0_actions
},
{
    .x = -32, .y = 104,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 0,
    .actions = 0
},
{
    .x = -40, .y = 88,
    .distTo = 18,
    .xDirTo = -29, .yDirTo = -58,
    .numActions = 0,
    .actions = 0
},
{
    .x = -56, .y = 80,
    .distTo = 18,
    .xDirTo = -58, .yDirTo = -29,
    .numActions = 2,
    .actions = path2304_3_actions
},
{
    .x = -72, .y = 88,
    .distTo = 18,
    .xDirTo = -58, .yDirTo = 28,
    .numActions = 0,
    .actions = 0
},
{
    .x = -80, .y = 104,
    .distTo = 18,
    .xDirTo = -29, .yDirTo = 57,
    .numActions = 0,
    .actions = 0
},
{
    .x = -72, .y = 128,
    .distTo = 26,
    .xDirTo = 20, .yDirTo = 60,
    .numActions = 0,
    .actions = 0
},
{
    .x = -56, .y = 144,
    .distTo = 23,
    .xDirTo = 45, .yDirTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = 152,
    .distTo = 26,
    .xDirTo = 60, .yDirTo = 20,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 144,
    .distTo = 26,
    .xDirTo = 60, .yDirTo = -21,
    .numActions = 1,
    .actions = path2304_9_actions
},
{
    .x = 16, .y = 104,
    .distTo = 47,
    .xDirTo = 32, .yDirTo = -55,
    .numActions = 0,
    .actions = 0
},
{
    .x = 56, .y = 8,
    .distTo = 104,
    .xDirTo = 24, .yDirTo = -60,
    .numActions = 0,
    .actions = 0
}
};
static Path r3fly1_paths[] = {
{.x = 0, .y = 3504, .numPoints = 12, .points = path2303_points},
{.x = 224, .y = 3496, .numPoints = 12, .points = path2304_points}
};
static LevelObject r3fly1_objects[] = {
{.definition = &defFly, .x = 64, .y = 3616, .animInd = 0, .flags = 0, .group = &r3fly1},
{.definition = &defFly, .x = 192, .y = 3616, .animInd = 0, .flags = 2048, .group = &r3fly1}
};
LevelObjectGroup r3fly1 = {
    .numPaths = 2, .paths = r3fly1_paths,
    .numObjects = 2, .objects = r3fly1_objects
};
extern LevelObjectGroup room3fly3;
static GObjPathPointFunction path2314_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2314_1_actions[] = {
0 /* to be assigned */,
enterForeground
};
static PathPoint path2314_points[] = {
{
    .x = 104, .y = 88,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2314_0_actions
},
{
    .x = 88, .y = 72,
    .distTo = 23,
    .xDirTo = -46, .yDirTo = -46,
    .numActions = 2,
    .actions = path2314_1_actions
},
{
    .x = 80, .y = 72,
    .distTo = 8,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 72, .y = 88,
    .distTo = 18,
    .xDirTo = -29, .yDirTo = 57,
    .numActions = 0,
    .actions = 0
},
{
    .x = 64, .y = 112,
    .distTo = 26,
    .xDirTo = -21, .yDirTo = 60,
    .numActions = 0,
    .actions = 0
},
{
    .x = 56, .y = 120,
    .distTo = 12,
    .xDirTo = -46, .yDirTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = 48, .y = 112,
    .distTo = 12,
    .xDirTo = -46, .yDirTo = -46,
    .numActions = 0,
    .actions = 0
},
{
    .x = 40, .y = 88,
    .distTo = 26,
    .xDirTo = -21, .yDirTo = -61,
    .numActions = 0,
    .actions = 0
},
{
    .x = 32, .y = 72,
    .distTo = 18,
    .xDirTo = -29, .yDirTo = -58,
    .numActions = 0,
    .actions = 0
},
{
    .x = -40, .y = 0,
    .distTo = 102,
    .xDirTo = -46, .yDirTo = -46,
    .numActions = 0,
    .actions = 0
}
};
static GObjPathPointFunction path2315_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2315_1_actions[] = {
0 /* to be assigned */,
enterForeground
};
static PathPoint path2315_points[] = {
{
    .x = -72, .y = 96,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2315_0_actions
},
{
    .x = -56, .y = 80,
    .distTo = 23,
    .xDirTo = 45, .yDirTo = -46,
    .numActions = 2,
    .actions = path2315_1_actions
},
{
    .x = -48, .y = 80,
    .distTo = 8,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -40, .y = 96,
    .distTo = 18,
    .xDirTo = 28, .yDirTo = 57,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = 120,
    .distTo = 26,
    .xDirTo = 20, .yDirTo = 60,
    .numActions = 0,
    .actions = 0
},
{
    .x = -24, .y = 128,
    .distTo = 12,
    .xDirTo = 45, .yDirTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = 120,
    .distTo = 12,
    .xDirTo = 45, .yDirTo = -46,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 96,
    .distTo = 26,
    .xDirTo = 20, .yDirTo = -61,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 80,
    .distTo = 18,
    .xDirTo = 28, .yDirTo = -58,
    .numActions = 0,
    .actions = 0
},
{
    .x = 72, .y = 8,
    .distTo = 102,
    .xDirTo = 45, .yDirTo = -46,
    .numActions = 0,
    .actions = 0
}
};
static Path room3fly3_paths[] = {
{.x = 0, .y = 3408, .numPoints = 10, .points = path2314_points},
{.x = 224, .y = 3400, .numPoints = 10, .points = path2315_points}
};
static LevelObject room3fly3_objects[] = {
{.definition = &defFly, .x = 104, .y = 3496, .animInd = 0, .flags = 0, .group = &room3fly3},
{.definition = &defFly, .x = 152, .y = 3496, .animInd = 0, .flags = 2048, .group = &room3fly3}
};
LevelObjectGroup room3fly3 = {
    .numPaths = 2, .paths = room3fly3_paths,
    .numObjects = 2, .objects = room3fly3_objects
};
extern LevelObjectGroup room3fly4;
static GObjPathPointFunction path2323_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2323_2_actions[] = {
0 /* to be assigned */,
enterForeground
};
static GObjPathPointFunction path2323_7_actions[] = {
0 /* to be assigned */
};
static PathPoint path2323_points[] = {
{
    .x = 72, .y = -16,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2323_0_actions
},
{
    .x = 64, .y = -32,
    .distTo = 18,
    .xDirTo = -29, .yDirTo = -58,
    .numActions = 0,
    .actions = 0
},
{
    .x = 64, .y = -56,
    .distTo = 24,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 2,
    .actions = path2323_2_actions
},
{
    .x = 72, .y = -72,
    .distTo = 18,
    .xDirTo = 28, .yDirTo = -58,
    .numActions = 0,
    .actions = 0
},
{
    .x = 80, .y = -88,
    .distTo = 18,
    .xDirTo = 28, .yDirTo = -58,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = -112,
    .distTo = 26,
    .xDirTo = 20, .yDirTo = -61,
    .numActions = 0,
    .actions = 0
},
{
    .x = 80, .y = -128,
    .distTo = 18,
    .xDirTo = -29, .yDirTo = -58,
    .numActions = 0,
    .actions = 0
},
{
    .x = 72, .y = -136,
    .distTo = 12,
    .xDirTo = -46, .yDirTo = -46,
    .numActions = 1,
    .actions = path2323_7_actions
},
{
    .x = 8, .y = -200,
    .distTo = 91,
    .xDirTo = -46, .yDirTo = -46,
    .numActions = 0,
    .actions = 0
}
};
static GObjPathPointFunction path2324_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2324_2_actions[] = {
0 /* to be assigned */,
enterForeground
};
static GObjPathPointFunction path2324_7_actions[] = {
0 /* to be assigned */
};
static PathPoint path2324_points[] = {
{
    .x = -72, .y = -16,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2324_0_actions
},
{
    .x = -64, .y = -32,
    .distTo = 18,
    .xDirTo = 28, .yDirTo = -58,
    .numActions = 0,
    .actions = 0
},
{
    .x = -64, .y = -56,
    .distTo = 24,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 2,
    .actions = path2324_2_actions
},
{
    .x = -72, .y = -72,
    .distTo = 18,
    .xDirTo = -29, .yDirTo = -58,
    .numActions = 0,
    .actions = 0
},
{
    .x = -80, .y = -88,
    .distTo = 18,
    .xDirTo = -29, .yDirTo = -58,
    .numActions = 0,
    .actions = 0
},
{
    .x = -88, .y = -112,
    .distTo = 26,
    .xDirTo = -21, .yDirTo = -61,
    .numActions = 0,
    .actions = 0
},
{
    .x = -80, .y = -128,
    .distTo = 18,
    .xDirTo = 28, .yDirTo = -58,
    .numActions = 0,
    .actions = 0
},
{
    .x = -72, .y = -136,
    .distTo = 12,
    .xDirTo = 45, .yDirTo = -46,
    .numActions = 1,
    .actions = path2324_7_actions
},
{
    .x = -8, .y = -200,
    .distTo = 91,
    .xDirTo = 45, .yDirTo = -46,
    .numActions = 0,
    .actions = 0
}
};
static Path room3fly4_paths[] = {
{.x = -32, .y = 3560, .numPoints = 9, .points = path2323_points},
{.x = 288, .y = 3560, .numPoints = 9, .points = path2324_points}
};
static LevelObject room3fly4_objects[] = {
{.definition = &defFly, .x = 40, .y = 3544, .animInd = 0, .flags = 0, .group = &room3fly4},
{.definition = &defFly, .x = 216, .y = 3544, .animInd = 0, .flags = 2048, .group = &room3fly4}
};
LevelObjectGroup room3fly4 = {
    .numPaths = 2, .paths = room3fly4_paths,
    .numObjects = 2, .objects = room3fly4_objects
};
extern LevelObjectGroup r4fly1;
static GObjPathPointFunction path2332_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2332_3_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2332_5_actions[] = {
enterForeground
};
static GObjPathPointFunction path2332_6_actions[] = {
faceLeft
};
static GObjPathPointFunction path2332_9_actions[] = {
0 /* to be assigned */
};
static PathPoint path2332_points[] = {
{
    .x = 0, .y = 88,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2332_0_actions
},
{
    .x = 48, .y = 48,
    .distTo = 63,
    .xDirTo = 49, .yDirTo = -41,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = 32,
    .distTo = 44,
    .xDirTo = 59, .yDirTo = -24,
    .numActions = 0,
    .actions = 0
},
{
    .x = 120, .y = 32,
    .distTo = 32,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 1,
    .actions = path2332_3_actions
},
{
    .x = 144, .y = 40,
    .distTo = 26,
    .xDirTo = 60, .yDirTo = 20,
    .numActions = 0,
    .actions = 0
},
{
    .x = 160, .y = 48,
    .distTo = 18,
    .xDirTo = 57, .yDirTo = 28,
    .numActions = 1,
    .actions = path2332_5_actions
},
{
    .x = 168, .y = 64,
    .distTo = 18,
    .xDirTo = 28, .yDirTo = 57,
    .numActions = 1,
    .actions = path2332_6_actions
},
{
    .x = 168, .y = 72,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 160, .y = 80,
    .distTo = 12,
    .xDirTo = -46, .yDirTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = 144, .y = 88,
    .distTo = 18,
    .xDirTo = -58, .yDirTo = 28,
    .numActions = 1,
    .actions = path2332_9_actions
},
{
    .x = 104, .y = 96,
    .distTo = 41,
    .xDirTo = -63, .yDirTo = 12,
    .numActions = 0,
    .actions = 0
},
{
    .x = 72, .y = 112,
    .distTo = 36,
    .xDirTo = -58, .yDirTo = 28,
    .numActions = 0,
    .actions = 0
},
{
    .x = 48, .y = 144,
    .distTo = 40,
    .xDirTo = -39, .yDirTo = 51,
    .numActions = 0,
    .actions = 0
},
{
    .x = 40, .y = 184,
    .distTo = 41,
    .xDirTo = -13, .yDirTo = 62,
    .numActions = 0,
    .actions = 0
},
{
    .x = 40, .y = 224,
    .distTo = 40,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 56, .y = 264,
    .distTo = 44,
    .xDirTo = 23, .yDirTo = 59,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = 296,
    .distTo = 46,
    .xDirTo = 45, .yDirTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = 160, .y = 336,
    .distTo = 83,
    .xDirTo = 55, .yDirTo = 31,
    .numActions = 0,
    .actions = 0
}
};
static Path r4fly1_paths[] = {
{.x = -16, .y = 3144, .numPoints = 18, .points = path2332_points}
};
static LevelObject r4fly1_objects[] = {
{.definition = &defFly, .x = -16, .y = 3224, .animInd = 0, .flags = 0, .group = &r4fly1}
};
LevelObjectGroup r4fly1 = {
    .numPaths = 1, .paths = r4fly1_paths,
    .numObjects = 1, .objects = r4fly1_objects
};
extern LevelObjectGroup room4powerup;
static LevelObject room4powerup_objects[] = {
{.definition = &defHoneyCell, .x = 192, .y = 3184, .animInd = 4, .flags = 32768, .group = &room4powerup}
};
LevelObjectGroup room4powerup = {
    .numPaths = 0, .paths = 0,
    .numObjects = 1, .objects = room4powerup_objects
};
extern LevelObjectGroup room5fly1;
static GObjPathPointFunction path2342_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2342_3_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2342_5_actions[] = {
faceRight
};
static GObjPathPointFunction path2342_6_actions[] = {
enterForeground
};
static GObjPathPointFunction path2342_7_actions[] = {
0 /* to be assigned */
};
static PathPoint path2342_points[] = {
{
    .x = 0, .y = 88,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2342_0_actions
},
{
    .x = -32, .y = 72,
    .distTo = 36,
    .xDirTo = -58, .yDirTo = -29,
    .numActions = 0,
    .actions = 0
},
{
    .x = -80, .y = 64,
    .distTo = 49,
    .xDirTo = -64, .yDirTo = -11,
    .numActions = 0,
    .actions = 0
},
{
    .x = -120, .y = 56,
    .distTo = 41,
    .xDirTo = -63, .yDirTo = -13,
    .numActions = 1,
    .actions = path2342_3_actions
},
{
    .x = -160, .y = 32,
    .distTo = 47,
    .xDirTo = -55, .yDirTo = -33,
    .numActions = 0,
    .actions = 0
},
{
    .x = -168, .y = 16,
    .distTo = 18,
    .xDirTo = -29, .yDirTo = -58,
    .numActions = 1,
    .actions = path2342_5_actions
},
{
    .x = -160, .y = -8,
    .distTo = 26,
    .xDirTo = 20, .yDirTo = -61,
    .numActions = 1,
    .actions = path2342_6_actions
},
{
    .x = -136, .y = -16,
    .distTo = 26,
    .xDirTo = 60, .yDirTo = -21,
    .numActions = 1,
    .actions = path2342_7_actions
},
{
    .x = -88, .y = -8,
    .distTo = 49,
    .xDirTo = 63, .yDirTo = 10,
    .numActions = 0,
    .actions = 0
},
{
    .x = -56, .y = 24,
    .distTo = 46,
    .xDirTo = 45, .yDirTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = -40, .y = 64,
    .distTo = 44,
    .xDirTo = 23, .yDirTo = 59,
    .numActions = 0,
    .actions = 0
},
{
    .x = -24, .y = 112,
    .distTo = 51,
    .xDirTo = 20, .yDirTo = 60,
    .numActions = 0,
    .actions = 0
},
{
    .x = -24, .y = 168,
    .distTo = 56,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = 208,
    .distTo = 41,
    .xDirTo = 12, .yDirTo = 62,
    .numActions = 0,
    .actions = 0
}
};
static Path room5fly1_paths[] = {
{.x = 272, .y = 3104, .numPoints = 14, .points = path2342_points}
};
static LevelObject room5fly1_objects[] = {
{.definition = &defFly, .x = 272, .y = 3192, .animInd = 0, .flags = 2048, .group = &room5fly1}
};
LevelObjectGroup room5fly1 = {
    .numPaths = 1, .paths = room5fly1_paths,
    .numObjects = 1, .objects = room5fly1_objects
};
extern LevelObjectGroup r5powerup;
static LevelObject r5powerup_objects[] = {
{.definition = &defHoneyCell, .x = 64, .y = 3056, .animInd = 4, .flags = 32768, .group = &r5powerup}
};
LevelObjectGroup r5powerup = {
    .numPaths = 0, .paths = 0,
    .numObjects = 1, .objects = r5powerup_objects
};
extern LevelObjectGroup room6fly;
static GObjPathPointFunction path2351_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2351_1_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2351_3_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2351_5_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2351_6_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2351_8_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2351_11_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2351_13_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2351_14_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2351_16_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2351_18_actions[] = {
0 /* to be assigned */
};
static PathPoint path2351_points[] = {
{
    .x = 0, .y = 0,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2351_0_actions
},
{
    .x = -152, .y = 0,
    .distTo = 152,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 1,
    .actions = path2351_1_actions
},
{
    .x = -176, .y = 8,
    .distTo = 26,
    .xDirTo = -61, .yDirTo = 20,
    .numActions = 0,
    .actions = 0
},
{
    .x = -200, .y = 24,
    .distTo = 29,
    .xDirTo = -54, .yDirTo = 35,
    .numActions = 1,
    .actions = path2351_3_actions
},
{
    .x = -216, .y = 48,
    .distTo = 29,
    .xDirTo = -36, .yDirTo = 53,
    .numActions = 0,
    .actions = 0
},
{
    .x = -224, .y = 80,
    .distTo = 33,
    .xDirTo = -16, .yDirTo = 62,
    .numActions = 1,
    .actions = path2351_5_actions
},
{
    .x = -216, .y = 112,
    .distTo = 33,
    .xDirTo = 15, .yDirTo = 62,
    .numActions = 1,
    .actions = path2351_6_actions
},
{
    .x = -200, .y = 136,
    .distTo = 29,
    .xDirTo = 35, .yDirTo = 53,
    .numActions = 0,
    .actions = 0
},
{
    .x = -176, .y = 152,
    .distTo = 29,
    .xDirTo = 53, .yDirTo = 35,
    .numActions = 1,
    .actions = path2351_8_actions
},
{
    .x = -152, .y = 160,
    .distTo = 26,
    .xDirTo = 60, .yDirTo = 20,
    .numActions = 0,
    .actions = 0
},
{
    .x = -136, .y = 160,
    .distTo = 16,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -112, .y = 152,
    .distTo = 26,
    .xDirTo = 60, .yDirTo = -21,
    .numActions = 1,
    .actions = path2351_11_actions
},
{
    .x = -88, .y = 136,
    .distTo = 29,
    .xDirTo = 53, .yDirTo = -36,
    .numActions = 0,
    .actions = 0
},
{
    .x = -72, .y = 112,
    .distTo = 29,
    .xDirTo = 35, .yDirTo = -54,
    .numActions = 1,
    .actions = path2351_13_actions
},
{
    .x = -64, .y = 80,
    .distTo = 33,
    .xDirTo = 15, .yDirTo = -63,
    .numActions = 1,
    .actions = path2351_14_actions
},
{
    .x = -72, .y = 48,
    .distTo = 33,
    .xDirTo = -16, .yDirTo = -63,
    .numActions = 0,
    .actions = 0
},
{
    .x = -88, .y = 24,
    .distTo = 29,
    .xDirTo = -36, .yDirTo = -54,
    .numActions = 1,
    .actions = path2351_16_actions
},
{
    .x = -112, .y = 8,
    .distTo = 29,
    .xDirTo = -54, .yDirTo = -36,
    .numActions = 0,
    .actions = 0
},
{
    .x = -136, .y = 0,
    .distTo = 26,
    .xDirTo = -61, .yDirTo = -21,
    .numActions = 1,
    .actions = path2351_18_actions
},
{
    .x = -288, .y = 0,
    .distTo = 152,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path room6fly_paths[] = {
{.x = 272, .y = 2832, .numPoints = 20, .points = path2351_points}
};
static LevelObject room6fly_objects[] = {
{.definition = &defFly, .x = 272, .y = 2832, .animInd = 0, .flags = 2048, .group = &room6fly}
};
LevelObjectGroup room6fly = {
    .numPaths = 1, .paths = room6fly_paths,
    .numObjects = 1, .objects = room6fly_objects
};
extern LevelObjectGroup room5bigant;
static GObjPathPointFunction path2372_5_actions[] = {
enterBackground
};
static GObjPathPointFunction path2372_9_actions[] = {
enterForeground
};
static GObjPathPointFunction path2372_13_actions[] = {
enterBackground
};
static GObjPathPointFunction path2372_17_actions[] = {
enterForeground
};
static GObjPathPointFunction path2372_21_actions[] = {
enterBackground
};
static GObjPathPointFunction path2372_23_actions[] = {
markDisappear
};
static PathPoint path2372_points[] = {
{
    .x = 0, .y = 0,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 24, .y = 24,
    .distTo = 34,
    .xDirTo = 45, .yDirTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = 24, .y = 32,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 56,
    .distTo = 34,
    .xDirTo = -46, .yDirTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = 64,
    .distTo = 33,
    .xDirTo = -63, .yDirTo = 15,
    .numActions = 0,
    .actions = 0
},
{
    .x = -56, .y = 88,
    .distTo = 34,
    .xDirTo = -46, .yDirTo = 45,
    .numActions = 1,
    .actions = path2372_5_actions
},
{
    .x = -56, .y = 96,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = 120,
    .distTo = 34,
    .xDirTo = 45, .yDirTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 128,
    .distTo = 33,
    .xDirTo = 62, .yDirTo = 15,
    .numActions = 0,
    .actions = 0
},
{
    .x = 24, .y = 152,
    .distTo = 34,
    .xDirTo = 45, .yDirTo = 45,
    .numActions = 1,
    .actions = path2372_9_actions
},
{
    .x = 24, .y = 160,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 184,
    .distTo = 34,
    .xDirTo = -46, .yDirTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = 192,
    .distTo = 33,
    .xDirTo = -63, .yDirTo = 15,
    .numActions = 0,
    .actions = 0
},
{
    .x = -56, .y = 216,
    .distTo = 34,
    .xDirTo = -46, .yDirTo = 45,
    .numActions = 1,
    .actions = path2372_13_actions
},
{
    .x = -56, .y = 224,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = 248,
    .distTo = 34,
    .xDirTo = 45, .yDirTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 256,
    .distTo = 33,
    .xDirTo = 62, .yDirTo = 15,
    .numActions = 0,
    .actions = 0
},
{
    .x = 24, .y = 280,
    .distTo = 34,
    .xDirTo = 45, .yDirTo = 45,
    .numActions = 1,
    .actions = path2372_17_actions
},
{
    .x = 24, .y = 288,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 312,
    .distTo = 34,
    .xDirTo = -46, .yDirTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = 320,
    .distTo = 33,
    .xDirTo = -63, .yDirTo = 15,
    .numActions = 0,
    .actions = 0
},
{
    .x = -56, .y = 344,
    .distTo = 34,
    .xDirTo = -46, .yDirTo = 45,
    .numActions = 1,
    .actions = path2372_21_actions
},
{
    .x = -56, .y = 352,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = 376,
    .distTo = 34,
    .xDirTo = 45, .yDirTo = 45,
    .numActions = 1,
    .actions = path2372_23_actions
}
};
static GObjPathPointFunction path2373_5_actions[] = {
enterBackground
};
static GObjPathPointFunction path2373_9_actions[] = {
enterForeground
};
static GObjPathPointFunction path2373_13_actions[] = {
enterBackground
};
static GObjPathPointFunction path2373_17_actions[] = {
enterForeground
};
static GObjPathPointFunction path2373_21_actions[] = {
enterBackground
};
static GObjPathPointFunction path2373_23_actions[] = {
markDisappear
};
static PathPoint path2373_points[] = {
{
    .x = 0, .y = 0,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -24, .y = 24,
    .distTo = 34,
    .xDirTo = -46, .yDirTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = -24, .y = 32,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 56,
    .distTo = 34,
    .xDirTo = 45, .yDirTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = 32, .y = 64,
    .distTo = 33,
    .xDirTo = 62, .yDirTo = 15,
    .numActions = 0,
    .actions = 0
},
{
    .x = 56, .y = 88,
    .distTo = 34,
    .xDirTo = 45, .yDirTo = 45,
    .numActions = 1,
    .actions = path2373_5_actions
},
{
    .x = 56, .y = 96,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 32, .y = 120,
    .distTo = 34,
    .xDirTo = -46, .yDirTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 128,
    .distTo = 33,
    .xDirTo = -63, .yDirTo = 15,
    .numActions = 0,
    .actions = 0
},
{
    .x = -24, .y = 152,
    .distTo = 34,
    .xDirTo = -46, .yDirTo = 45,
    .numActions = 1,
    .actions = path2373_9_actions
},
{
    .x = -24, .y = 160,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 184,
    .distTo = 34,
    .xDirTo = 45, .yDirTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = 32, .y = 192,
    .distTo = 33,
    .xDirTo = 62, .yDirTo = 15,
    .numActions = 0,
    .actions = 0
},
{
    .x = 56, .y = 216,
    .distTo = 34,
    .xDirTo = 45, .yDirTo = 45,
    .numActions = 1,
    .actions = path2373_13_actions
},
{
    .x = 56, .y = 224,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 32, .y = 248,
    .distTo = 34,
    .xDirTo = -46, .yDirTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 256,
    .distTo = 33,
    .xDirTo = -63, .yDirTo = 15,
    .numActions = 0,
    .actions = 0
},
{
    .x = -24, .y = 280,
    .distTo = 34,
    .xDirTo = -46, .yDirTo = 45,
    .numActions = 1,
    .actions = path2373_17_actions
},
{
    .x = -24, .y = 288,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 312,
    .distTo = 34,
    .xDirTo = 45, .yDirTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = 32, .y = 320,
    .distTo = 33,
    .xDirTo = 62, .yDirTo = 15,
    .numActions = 0,
    .actions = 0
},
{
    .x = 56, .y = 344,
    .distTo = 34,
    .xDirTo = 45, .yDirTo = 45,
    .numActions = 1,
    .actions = path2373_21_actions
},
{
    .x = 56, .y = 352,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 32, .y = 376,
    .distTo = 34,
    .xDirTo = -46, .yDirTo = 45,
    .numActions = 1,
    .actions = path2373_23_actions
}
};
static Path room5bigant_paths[] = {
{.x = 208, .y = 2936, .numPoints = 24, .points = path2372_points},
{.x = 48, .y = 2936, .numPoints = 24, .points = path2373_points}
};
static LevelObject room5bigant_objects[] = {
{.definition = &defAntBig, .x = 64, .y = 2928, .animInd = 0, .flags = 32768, .group = &room5bigant},
{.definition = &defAntBig, .x = 192, .y = 2928, .animInd = 0, .flags = 34816, .group = &room5bigant}
};
LevelObjectGroup room5bigant = {
    .numPaths = 2, .paths = room5bigant_paths,
    .numObjects = 2, .objects = room5bigant_objects
};
extern LevelObjectGroup room6bigant;
static GObjPathPointFunction path2389_1_actions[] = {
enterBackground
};
static GObjPathPointFunction path2389_2_actions[] = {
markDisappear
};
static PathPoint path2389_points[] = {
{
    .x = 8, .y = -16,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 144,
    .distTo = 160,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 1,
    .actions = path2389_1_actions
},
{
    .x = -16, .y = 168,
    .distTo = 34,
    .xDirTo = -46, .yDirTo = 45,
    .numActions = 1,
    .actions = path2389_2_actions
}
};
static GObjPathPointFunction path2390_1_actions[] = {
enterBackground
};
static GObjPathPointFunction path2390_2_actions[] = {
markDisappear
};
static PathPoint path2390_points[] = {
{
    .x = 8, .y = -16,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 144,
    .distTo = 160,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 1,
    .actions = path2390_1_actions
},
{
    .x = 32, .y = 168,
    .distTo = 34,
    .xDirTo = 45, .yDirTo = 45,
    .numActions = 1,
    .actions = path2390_2_actions
}
};
static Path room6bigant_paths[] = {
{.x = 28, .y = 2736, .numPoints = 3, .points = path2389_points},
{.x = 212, .y = 2736, .numPoints = 3, .points = path2390_points}
};
static LevelObject room6bigant_objects[] = {
{.definition = &defAntBig, .x = 216, .y = 2704, .animInd = 0, .flags = 32768, .group = &room6bigant},
{.definition = &defAntBig, .x = 40, .y = 2704, .animInd = 0, .flags = 34816, .group = &room6bigant}
};
LevelObjectGroup room6bigant = {
    .numPaths = 2, .paths = room6bigant_paths,
    .numObjects = 2, .objects = room6bigant_objects
};
extern LevelObjectGroup room7alien1;
static GObjPathPointFunction path2397_2_actions[] = {
0 /* to be assigned */
};
static PathPoint path2397_points[] = {
{
    .x = 0, .y = 0,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 16,
    .distTo = 18,
    .xDirTo = 28, .yDirTo = 57,
    .numActions = 0,
    .actions = 0
},
{
    .x = 16, .y = 40,
    .distTo = 26,
    .xDirTo = 20, .yDirTo = 60,
    .numActions = 1,
    .actions = path2397_2_actions
}
};
static Path room7alien1_paths[] = {
{.x = 112, .y = 2496, .numPoints = 3, .points = path2397_points}
};
static LevelObject room7alien1_objects[] = {
{.definition = &defAlienGunner, .x = 112, .y = 2496, .animInd = 0, .flags = 32768, .group = &room7alien1},
{.definition = &defHoneyPot, .x = 128, .y = 2472, .animInd = 0, .flags = 32768, .group = &room7alien1}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 16,
    .distTo = 18,
    .xDirTo = 28, .yDirTo = 57,
    .numActions = 0,
    .actions = 0
},
{
    .x = 16, .y = 40,
    .distTo = 26,
    .xDirTo = 20, .yDirTo = 60,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 24, .y = 16,
    .distTo = 18,
    .xDirTo = -29, .yDirTo = 57,
    .numActions = 0,
    .actions = 0
},
{
    .x = 16, .y = 40,
    .distTo = 26,
    .xDirTo = -21, .yDirTo = 60,
    .numActions = 1,
    .actions = path2404_2_actions
}
};
static Path room7alien2_paths[] = {
{.x = 48, .y = 2440, .numPoints = 3, .points = path2403_points},
{.x = 176, .y = 2440, .numPoints = 3, .points = path2404_points}
};
static LevelObject room7alien2_objects[] = {
{.definition = &defAlienGunner, .x = 48, .y = 2440, .animInd = 0, .flags = 32768, .group = &room7alien2},
{.definition = &defAlienGunner, .x = 208, .y = 2440, .animInd = 0, .flags = 34816, .group = &room7alien2}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 72, .y = -64,
    .distTo = 97,
    .xDirTo = 47, .yDirTo = -43,
    .numActions = 0,
    .actions = 0
},
{
    .x = 104, .y = -64,
    .distTo = 32,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 120, .y = -48,
    .distTo = 23,
    .xDirTo = 45, .yDirTo = 45,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 72, .y = -64,
    .distTo = 97,
    .xDirTo = 47, .yDirTo = -43,
    .numActions = 0,
    .actions = 0
},
{
    .x = 104, .y = -64,
    .distTo = 32,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 120, .y = -48,
    .distTo = 23,
    .xDirTo = 45, .yDirTo = 45,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 72, .y = -64,
    .distTo = 97,
    .xDirTo = 47, .yDirTo = -43,
    .numActions = 0,
    .actions = 0
},
{
    .x = 104, .y = -64,
    .distTo = 32,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 120, .y = -48,
    .distTo = 23,
    .xDirTo = 45, .yDirTo = 45,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 168, .y = -64,
    .distTo = 97,
    .xDirTo = -48, .yDirTo = -43,
    .numActions = 0,
    .actions = 0
},
{
    .x = 136, .y = -64,
    .distTo = 32,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 120, .y = -48,
    .distTo = 23,
    .xDirTo = -46, .yDirTo = 45,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 168, .y = -64,
    .distTo = 97,
    .xDirTo = -48, .yDirTo = -43,
    .numActions = 0,
    .actions = 0
},
{
    .x = 136, .y = -64,
    .distTo = 32,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 120, .y = -48,
    .distTo = 23,
    .xDirTo = -46, .yDirTo = 45,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 168, .y = -64,
    .distTo = 97,
    .xDirTo = -48, .yDirTo = -43,
    .numActions = 0,
    .actions = 0
},
{
    .x = 136, .y = -64,
    .distTo = 32,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 120, .y = -48,
    .distTo = 23,
    .xDirTo = -46, .yDirTo = 45,
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
{.definition = &defAlienPillager, .x = -8, .y = 2496, .animInd = 6, .flags = 32768, .group = &room7alien3},
{.definition = &defAlienPillager, .x = 264, .y = 2496, .animInd = 6, .flags = 34816, .group = &room7alien3},
{.definition = &defAlienPillager, .x = -16, .y = 2512, .animInd = 6, .flags = 32768, .group = &room7alien3},
{.definition = &defAlienPillager, .x = 272, .y = 2512, .animInd = 6, .flags = 34816, .group = &room7alien3},
{.definition = &defAlienPillager, .x = -24, .y = 2528, .animInd = 6, .flags = 32768, .group = &room7alien3},
{.definition = &defAlienPillager, .x = 280, .y = 2528, .animInd = 6, .flags = 34816, .group = &room7alien3}
};
LevelObjectGroup room7alien3 = {
    .numPaths = 6, .paths = room7alien3_paths,
    .numObjects = 6, .objects = room7alien3_objects
};
extern LevelObjectGroup room8alien1;
static LevelObject room8alien1_objects[] = {
{.definition = &defAlienPillager, .x = 120, .y = 2368, .animInd = 10, .flags = 32768, .group = &room8alien1},
{.definition = &defAlienPillager, .x = 120, .y = 2312, .animInd = 10, .flags = 32768, .group = &room8alien1},
{.definition = &defAlienPillager, .x = 112, .y = 2336, .animInd = 10, .flags = 32768, .group = &room8alien1},
{.definition = &defAlienPillager, .x = 144, .y = 2360, .animInd = 10, .flags = 34816, .group = &room8alien1},
{.definition = &defAlienPillager, .x = 136, .y = 2320, .animInd = 10, .flags = 34816, .group = &room8alien1},
{.definition = &defAlienPillager, .x = 144, .y = 2336, .animInd = 10, .flags = 34816, .group = &room8alien1},
{.definition = &defAlienPillager, .x = 104, .y = 2352, .animInd = 10, .flags = 32768, .group = &room8alien1},
{.definition = &defAlienPillager, .x = 88, .y = 2304, .animInd = 10, .flags = 32768, .group = &room8alien1},
{.definition = &defAlienPillager, .x = 96, .y = 2320, .animInd = 10, .flags = 32768, .group = &room8alien1},
{.definition = &defAlienPillager, .x = 152, .y = 2344, .animInd = 10, .flags = 34816, .group = &room8alien1},
{.definition = &defAlienPillager, .x = 168, .y = 2304, .animInd = 10, .flags = 34816, .group = &room8alien1},
{.definition = &defAlienPillager, .x = 160, .y = 2320, .animInd = 10, .flags = 34816, .group = &room8alien1}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 16,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 1,
    .actions = path2442_1_actions
},
{
    .x = -40, .y = 48,
    .distTo = 46,
    .xDirTo = -46, .yDirTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = -104, .y = 48,
    .distTo = 64,
    .xDirTo = -64, .yDirTo = 0,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 24, .y = 16,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 1,
    .actions = path2443_1_actions
},
{
    .x = 56, .y = 48,
    .distTo = 46,
    .xDirTo = 45, .yDirTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = 120, .y = 48,
    .distTo = 64,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path room8alien2_paths[] = {
{.x = 88, .y = 2352, .numPoints = 4, .points = path2442_points},
{.x = 152, .y = 2352, .numPoints = 4, .points = path2443_points}
};
static LevelObject room8alien2_objects[] = {
{.definition = &defAlienGunner, .x = 80, .y = 2352, .animInd = 0, .flags = 32768, .group = &room8alien2},
{.definition = &defAlienGunner, .x = 176, .y = 2352, .animInd = 0, .flags = 34816, .group = &room8alien2}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 64, .y = 0,
    .distTo = 64,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 1,
    .actions = path2448_1_actions
},
{
    .x = 96, .y = -32,
    .distTo = 46,
    .xDirTo = 45, .yDirTo = -46,
    .numActions = 0,
    .actions = 0
},
{
    .x = 96, .y = -48,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 80, .y = -64,
    .distTo = 23,
    .xDirTo = -46, .yDirTo = -46,
    .numActions = 0,
    .actions = 0
},
{
    .x = 80, .y = -88,
    .distTo = 24,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 96, .y = -104,
    .distTo = 23,
    .xDirTo = 45, .yDirTo = -46,
    .numActions = 0,
    .actions = 0
},
{
    .x = 96, .y = -152,
    .distTo = 48,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 64, .y = -184,
    .distTo = 46,
    .xDirTo = -46, .yDirTo = -46,
    .numActions = 0,
    .actions = 0
},
{
    .x = 64, .y = -248,
    .distTo = 64,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 112, .y = -296,
    .distTo = 68,
    .xDirTo = 45, .yDirTo = -46,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -64, .y = 0,
    .distTo = 64,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 1,
    .actions = path2449_1_actions
},
{
    .x = -96, .y = -32,
    .distTo = 46,
    .xDirTo = -46, .yDirTo = -46,
    .numActions = 0,
    .actions = 0
},
{
    .x = -96, .y = -48,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 0,
    .actions = 0
},
{
    .x = -80, .y = -64,
    .distTo = 23,
    .xDirTo = 45, .yDirTo = -46,
    .numActions = 0,
    .actions = 0
},
{
    .x = -80, .y = -88,
    .distTo = 24,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 0,
    .actions = 0
},
{
    .x = -96, .y = -104,
    .distTo = 23,
    .xDirTo = -46, .yDirTo = -46,
    .numActions = 0,
    .actions = 0
},
{
    .x = -96, .y = -152,
    .distTo = 48,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 0,
    .actions = 0
},
{
    .x = -64, .y = -184,
    .distTo = 46,
    .xDirTo = 45, .yDirTo = -46,
    .numActions = 0,
    .actions = 0
},
{
    .x = -64, .y = -248,
    .distTo = 64,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 0,
    .actions = 0
},
{
    .x = -120, .y = -296,
    .distTo = 74,
    .xDirTo = -49, .yDirTo = -42,
    .numActions = 0,
    .actions = 0
}
};
static Path room8alien3_paths[] = {
{.x = -16, .y = 2392, .numPoints = 11, .points = path2448_points},
{.x = 272, .y = 2392, .numPoints = 11, .points = path2449_points}
};
static LevelObject room8alien3_objects[] = {
{.definition = &defAlienGunner, .x = -16, .y = 2392, .animInd = 0, .flags = 32768, .group = &room8alien3},
{.definition = &defAlienGunner, .x = 272, .y = 2392, .animInd = 0, .flags = 34816, .group = &room8alien3}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 16, .y = 40,
    .distTo = 46,
    .xDirTo = 45, .yDirTo = 45,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 16, .y = 40,
    .distTo = 46,
    .xDirTo = 45, .yDirTo = 45,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = 40,
    .distTo = 57,
    .xDirTo = -46, .yDirTo = 45,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = 40,
    .distTo = 57,
    .xDirTo = -46, .yDirTo = 45,
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
{.definition = &defAlienGunner, .x = 80, .y = 2256, .animInd = 0, .flags = 32768, .group = &room8alien4},
{.definition = &defAlienGunner, .x = 72, .y = 2240, .animInd = 0, .flags = 32768, .group = &room8alien4},
{.definition = &defAlienGunner, .x = 184, .y = 2248, .animInd = 0, .flags = 34816, .group = &room8alien4},
{.definition = &defAlienGunner, .x = 192, .y = 2232, .animInd = 0, .flags = 34816, .group = &room8alien4}
};
LevelObjectGroup room8alien4 = {
    .numPaths = 4, .paths = room8alien4_paths,
    .numObjects = 4, .objects = room8alien4_objects
};
extern LevelObjectGroup room8powerup;
static LevelObject room8powerup_objects[] = {
{.definition = &defHoneyPot, .x = 136, .y = 2256, .animInd = 0, .flags = 32768, .group = &room8powerup},
{.definition = &defHoneyPot, .x = 120, .y = 2264, .animInd = 0, .flags = 32768, .group = &room8powerup}
};
LevelObjectGroup room8powerup = {
    .numPaths = 0, .paths = 0,
    .numObjects = 2, .objects = room8powerup_objects
};
extern LevelObjectGroup room9powerup;
static LevelObject room9powerup_objects[] = {
{.definition = &defHoneyPot, .x = 120, .y = 2160, .animInd = 0, .flags = 32768, .group = &room9powerup},
{.definition = &defHoneyPot, .x = 144, .y = 2168, .animInd = 0, .flags = 32768, .group = &room9powerup},
{.definition = &defHoneyPot, .x = 128, .y = 2176, .animInd = 0, .flags = 32768, .group = &room9powerup}
};
LevelObjectGroup room9powerup = {
    .numPaths = 0, .paths = 0,
    .numObjects = 3, .objects = room9powerup_objects
};
extern LevelObjectGroup room9alienmind;
static PathPoint path2474_points[] = {
{
    .x = 0, .y = -56,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 24,
    .distTo = 80,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
}
};
static PathPoint path2475_points[] = {
{
    .x = 24, .y = -56,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 16, .y = -56,
    .distTo = 8,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = -40,
    .distTo = 18,
    .xDirTo = -29, .yDirTo = 57,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 8,
    .distTo = 49,
    .xDirTo = -11, .yDirTo = 63,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = 16,
    .distTo = 18,
    .xDirTo = -58, .yDirTo = 28,
    .numActions = 0,
    .actions = 0
},
{
    .x = -40, .y = 40,
    .distTo = 34,
    .xDirTo = -46, .yDirTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = -48, .y = 72,
    .distTo = 33,
    .xDirTo = -16, .yDirTo = 62,
    .numActions = 0,
    .actions = 0
},
{
    .x = -48, .y = 112,
    .distTo = 40,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = 144,
    .distTo = 46,
    .xDirTo = 45, .yDirTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = 160,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
}
};
static PathPoint path2476_points[] = {
{
    .x = -24, .y = -56,
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = -56,
    .distTo = 8,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = -40,
    .distTo = 18,
    .xDirTo = 28, .yDirTo = 57,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 8,
    .distTo = 49,
    .xDirTo = 10, .yDirTo = 63,
    .numActions = 0,
    .actions = 0
},
{
    .x = 16, .y = 16,
    .distTo = 18,
    .xDirTo = 57, .yDirTo = 28,
    .numActions = 0,
    .actions = 0
},
{
    .x = 40, .y = 40,
    .distTo = 34,
    .xDirTo = 45, .yDirTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = 48, .y = 72,
    .distTo = 33,
    .xDirTo = 15, .yDirTo = 62,
    .numActions = 0,
    .actions = 0
},
{
    .x = 48, .y = 128,
    .distTo = 56,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 16, .y = 160,
    .distTo = 46,
    .xDirTo = -46, .yDirTo = 45,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2477_0_actions
},
{
    .x = 88, .y = -48,
    .distTo = 29,
    .xDirTo = -54, .yDirTo = -36,
    .numActions = 0,
    .actions = 0
},
{
    .x = 64, .y = -48,
    .distTo = 24,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 48, .y = -24,
    .distTo = 29,
    .xDirTo = -36, .yDirTo = 53,
    .numActions = 0,
    .actions = 0
},
{
    .x = 48, .y = 0,
    .distTo = 24,
    .xDirTo = 0, .yDirTo = 64,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2478_0_actions
},
{
    .x = -80, .y = -24,
    .distTo = 29,
    .xDirTo = 53, .yDirTo = -36,
    .numActions = 0,
    .actions = 0
},
{
    .x = -56, .y = -24,
    .distTo = 24,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -40, .y = 0,
    .distTo = 29,
    .xDirTo = 35, .yDirTo = 53,
    .numActions = 0,
    .actions = 0
},
{
    .x = -40, .y = 24,
    .distTo = 24,
    .xDirTo = 0, .yDirTo = 64,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 96, .y = -216,
    .distTo = 29,
    .xDirTo = -54, .yDirTo = 35,
    .numActions = 0,
    .actions = 0
},
{
    .x = 80, .y = -176,
    .distTo = 44,
    .xDirTo = -24, .yDirTo = 59,
    .numActions = 0,
    .actions = 0
},
{
    .x = 80, .y = -48,
    .distTo = 128,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 72, .y = -40,
    .distTo = 12,
    .xDirTo = -46, .yDirTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = 56, .y = -32,
    .distTo = 18,
    .xDirTo = -58, .yDirTo = 28,
    .numActions = 1,
    .actions = path2479_5_actions
},
{
    .x = 40, .y = -40,
    .distTo = 18,
    .xDirTo = -58, .yDirTo = -29,
    .numActions = 0,
    .actions = 0
},
{
    .x = 32, .y = -64,
    .distTo = 26,
    .xDirTo = -21, .yDirTo = -61,
    .numActions = 1,
    .actions = path2479_7_actions
},
{
    .x = 32, .y = -112,
    .distTo = 48,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2479_8_actions
},
{
    .x = 32, .y = -48,
    .distTo = 64,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 24, .y = -24,
    .distTo = 26,
    .xDirTo = -21, .yDirTo = 60,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -16,
    .distTo = 26,
    .xDirTo = -61, .yDirTo = 20,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = -216,
    .distTo = 29,
    .xDirTo = 53, .yDirTo = 35,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = -176,
    .distTo = 44,
    .xDirTo = 23, .yDirTo = 59,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = -48,
    .distTo = 128,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = -40,
    .distTo = 12,
    .xDirTo = 45, .yDirTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = -32,
    .distTo = 18,
    .xDirTo = 57, .yDirTo = 28,
    .numActions = 1,
    .actions = path2480_5_actions
},
{
    .x = 24, .y = -40,
    .distTo = 18,
    .xDirTo = 57, .yDirTo = -29,
    .numActions = 0,
    .actions = 0
},
{
    .x = 32, .y = -64,
    .distTo = 26,
    .xDirTo = 20, .yDirTo = -61,
    .numActions = 1,
    .actions = path2480_7_actions
},
{
    .x = 32, .y = -112,
    .distTo = 48,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2480_8_actions
},
{
    .x = 32, .y = -48,
    .distTo = 64,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 40, .y = -24,
    .distTo = 26,
    .xDirTo = 20, .yDirTo = 60,
    .numActions = 0,
    .actions = 0
},
{
    .x = 64, .y = -16,
    .distTo = 26,
    .xDirTo = 60, .yDirTo = 20,
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
{.definition = &defAlienMind, .x = 128, .y = 1984, .animInd = 0, .flags = 0, .group = &room9alienmind}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -40,
    .distTo = 40,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2498_1_actions
},
{
    .x = 0, .y = -56,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -40,
    .distTo = 40,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2499_1_actions
},
{
    .x = 0, .y = -56,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -40,
    .distTo = 40,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2500_1_actions
},
{
    .x = 0, .y = -56,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -40,
    .distTo = 40,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2501_1_actions
},
{
    .x = 0, .y = -56,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -40,
    .distTo = 40,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2502_1_actions
},
{
    .x = 0, .y = -56,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
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
{.definition = &defAcidAnt, .x = 216, .y = 1904, .animInd = 2, .flags = 34816, .group = &room10acidants},
{.definition = &defAcidAnt, .x = 184, .y = 1928, .animInd = 2, .flags = 32768, .group = &room10acidants},
{.definition = &defAcidAnt, .x = 200, .y = 1920, .animInd = 2, .flags = 34816, .group = &room10acidants},
{.definition = &defAcidAnt, .x = 168, .y = 1928, .animInd = 2, .flags = 32768, .group = &room10acidants},
{.definition = &defAcidAnt, .x = 152, .y = 1920, .animInd = 2, .flags = 32768, .group = &room10acidants}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -40,
    .distTo = 40,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2514_1_actions
},
{
    .x = 0, .y = -56,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -40,
    .distTo = 40,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2515_1_actions
},
{
    .x = 0, .y = -56,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -40,
    .distTo = 40,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2516_1_actions
},
{
    .x = 0, .y = -56,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -40,
    .distTo = 40,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2517_1_actions
},
{
    .x = 0, .y = -56,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -40,
    .distTo = 40,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2518_1_actions
},
{
    .x = 0, .y = -56,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
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
{.definition = &defAcidAnt, .x = 104, .y = 1904, .animInd = 2, .flags = 34816, .group = &room10acidants2},
{.definition = &defAcidAnt, .x = 72, .y = 1904, .animInd = 2, .flags = 32768, .group = &room10acidants2},
{.definition = &defAcidAnt, .x = 88, .y = 1912, .animInd = 2, .flags = 34816, .group = &room10acidants2},
{.definition = &defAcidAnt, .x = 56, .y = 1896, .animInd = 2, .flags = 32768, .group = &room10acidants2},
{.definition = &defAcidAnt, .x = 40, .y = 1888, .animInd = 2, .flags = 32768, .group = &room10acidants2}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = -8,
    .distTo = 40,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2526_1_actions
},
{
    .x = -32, .y = -24,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 0,
    .actions = 0
}
};
static Path r11acidants1a_paths[] = {
{.x = 264, .y = 1784, .numPoints = 3, .points = path2526_points}
};
static LevelObject r11acidants1a_objects[] = {
{.definition = &defAcidAnt, .x = 232, .y = 1816, .animInd = 2, .flags = 34816, .group = &r11acidants1a}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = -8,
    .distTo = 40,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2530_1_actions
},
{
    .x = -32, .y = -24,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 0,
    .actions = 0
}
};
static Path r11acidants1b_paths[] = {
{.x = 232, .y = 1784, .numPoints = 3, .points = path2530_points}
};
static LevelObject r11acidants1b_objects[] = {
{.definition = &defAcidAnt, .x = 200, .y = 1816, .animInd = 2, .flags = 32768, .group = &r11acidants1b}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = -8,
    .distTo = 40,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2534_1_actions
},
{
    .x = -32, .y = -24,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 0,
    .actions = 0
}
};
static Path r11acidants1c_paths[] = {
{.x = 200, .y = 1784, .numPoints = 3, .points = path2534_points}
};
static LevelObject r11acidants1c_objects[] = {
{.definition = &defAcidAnt, .x = 168, .y = 1816, .animInd = 2, .flags = 34816, .group = &r11acidants1c}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = -8,
    .distTo = 40,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2538_1_actions
},
{
    .x = -32, .y = -24,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 0,
    .actions = 0
}
};
static Path r11acidants1d_paths[] = {
{.x = 168, .y = 1784, .numPoints = 3, .points = path2538_points}
};
static LevelObject r11acidants1d_objects[] = {
{.definition = &defAcidAnt, .x = 136, .y = 1816, .animInd = 2, .flags = 32768, .group = &r11acidants1d}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = -8,
    .distTo = 40,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2542_1_actions
},
{
    .x = -32, .y = -24,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 0,
    .actions = 0
}
};
static Path r11acidants1e_paths[] = {
{.x = 152, .y = 1776, .numPoints = 3, .points = path2542_points}
};
static LevelObject r11acidants1e_objects[] = {
{.definition = &defAcidAnt, .x = 120, .y = 1808, .animInd = 2, .flags = 32768, .group = &r11acidants1e}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = -8,
    .distTo = 40,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2546_1_actions
},
{
    .x = -32, .y = -24,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 0,
    .actions = 0
}
};
static Path r11acidants1f_paths[] = {
{.x = 120, .y = 1768, .numPoints = 3, .points = path2546_points}
};
static LevelObject r11acidants1f_objects[] = {
{.definition = &defAcidAnt, .x = 88, .y = 1800, .animInd = 2, .flags = 32768, .group = &r11acidants1f}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = -8,
    .distTo = 40,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2550_1_actions
},
{
    .x = -32, .y = -24,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 0,
    .actions = 0
}
};
static Path r11acidants1g_paths[] = {
{.x = 88, .y = 1768, .numPoints = 3, .points = path2550_points}
};
static LevelObject r11acidants1g_objects[] = {
{.definition = &defAcidAnt, .x = 56, .y = 1800, .animInd = 2, .flags = 34816, .group = &r11acidants1g}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = -8,
    .distTo = 40,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2554_1_actions
},
{
    .x = -32, .y = -24,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 0,
    .actions = 0
}
};
static Path r11acidants1h_paths[] = {
{.x = 56, .y = 1768, .numPoints = 3, .points = path2554_points}
};
static LevelObject r11acidants1h_objects[] = {
{.definition = &defAcidAnt, .x = 24, .y = 1800, .animInd = 2, .flags = 32768, .group = &r11acidants1h}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2567_0_actions
},
{
    .x = -288, .y = -24,
    .distTo = 292,
    .xDirTo = -64, .yDirTo = -11,
    .numActions = 0,
    .actions = 0
}
};
static Path room11acidants2a_paths[] = {
{.x = 272, .y = 1616, .numPoints = 2, .points = path2567_points}
};
static LevelObject room11acidants2a_objects[] = {
{.definition = &defAcidAnt, .x = 272, .y = 1808, .animInd = 2, .flags = 2048, .group = &room11acidants2a},
{.definition = &defAcidAnt, .x = 272, .y = 1736, .animInd = 2, .flags = 2048, .group = &room11acidants2a},
{.definition = &defAcidAnt, .x = 272, .y = 1712, .animInd = 2, .flags = 2048, .group = &room11acidants2a},
{.definition = &defAcidAnt, .x = 272, .y = 1784, .animInd = 2, .flags = 2048, .group = &room11acidants2a},
{.definition = &defAcidAnt, .x = 272, .y = 1760, .animInd = 2, .flags = 2048, .group = &room11acidants2a},
{.definition = &defAcidAnt, .x = 272, .y = 1688, .animInd = 2, .flags = 2048, .group = &room11acidants2a},
{.definition = &defAcidAnt, .x = 272, .y = 1856, .animInd = 2, .flags = 2048, .group = &room11acidants2a},
{.definition = &defAcidAnt, .x = 272, .y = 1664, .animInd = 2, .flags = 2048, .group = &room11acidants2a},
{.definition = &defAcidAnt, .x = 272, .y = 1832, .animInd = 2, .flags = 2048, .group = &room11acidants2a},
{.definition = &defAcidAnt, .x = 272, .y = 1640, .animInd = 2, .flags = 2048, .group = &room11acidants2a}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2580_0_actions
},
{
    .x = 288, .y = 48,
    .distTo = 292,
    .xDirTo = 63, .yDirTo = 10,
    .numActions = 0,
    .actions = 0
}
};
static Path room11acidants2b_paths[] = {
{.x = -16, .y = 1576, .numPoints = 2, .points = path2580_points}
};
static LevelObject room11acidants2b_objects[] = {
{.definition = &defAcidAnt, .x = -16, .y = 1792, .animInd = 2, .flags = 0, .group = &room11acidants2b},
{.definition = &defAcidAnt, .x = -16, .y = 1720, .animInd = 2, .flags = 0, .group = &room11acidants2b},
{.definition = &defAcidAnt, .x = -16, .y = 1672, .animInd = 2, .flags = 0, .group = &room11acidants2b},
{.definition = &defAcidAnt, .x = -16, .y = 1696, .animInd = 2, .flags = 0, .group = &room11acidants2b},
{.definition = &defAcidAnt, .x = -16, .y = 1768, .animInd = 2, .flags = 0, .group = &room11acidants2b},
{.definition = &defAcidAnt, .x = -16, .y = 1648, .animInd = 2, .flags = 0, .group = &room11acidants2b},
{.definition = &defAcidAnt, .x = -16, .y = 1744, .animInd = 2, .flags = 0, .group = &room11acidants2b},
{.definition = &defAcidAnt, .x = -16, .y = 1624, .animInd = 2, .flags = 0, .group = &room11acidants2b},
{.definition = &defAcidAnt, .x = -16, .y = 1600, .animInd = 2, .flags = 0, .group = &room11acidants2b},
{.definition = &defAcidAnt, .x = -16, .y = 1576, .animInd = 2, .flags = 0, .group = &room11acidants2b}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -24,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2583_1_actions
},
{
    .x = 0, .y = 0,
    .distTo = 24,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
}
};
static Path r11acidants3a_paths[] = {
{.x = 248, .y = 1736, .numPoints = 3, .points = path2583_points}
};
static LevelObject r11acidants3a_objects[] = {
{.definition = &defAcidAnt, .x = 248, .y = 1720, .animInd = 2, .flags = 2048, .group = &r11acidants3a}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -24,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2587_1_actions
},
{
    .x = 0, .y = 0,
    .distTo = 24,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
}
};
static Path r11acidants3b_paths[] = {
{.x = 224, .y = 1736, .numPoints = 3, .points = path2587_points}
};
static LevelObject r11acidants3b_objects[] = {
{.definition = &defAcidAnt, .x = 224, .y = 1720, .animInd = 2, .flags = 2048, .group = &r11acidants3b}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -24,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2591_1_actions
},
{
    .x = 0, .y = 0,
    .distTo = 24,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
}
};
static Path r11acidants3c_paths[] = {
{.x = 200, .y = 1736, .numPoints = 3, .points = path2591_points}
};
static LevelObject r11acidants3c_objects[] = {
{.definition = &defAcidAnt, .x = 200, .y = 1720, .animInd = 2, .flags = 0, .group = &r11acidants3c}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -24,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2595_1_actions
},
{
    .x = 0, .y = 0,
    .distTo = 24,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
}
};
static Path r11acidants3d_paths[] = {
{.x = 176, .y = 1736, .numPoints = 3, .points = path2595_points}
};
static LevelObject r11acidants3d_objects[] = {
{.definition = &defAcidAnt, .x = 176, .y = 1720, .animInd = 2, .flags = 2048, .group = &r11acidants3d}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -24,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2599_1_actions
},
{
    .x = 0, .y = 0,
    .distTo = 24,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
}
};
static Path r11acidants3e_paths[] = {
{.x = 152, .y = 1736, .numPoints = 3, .points = path2599_points}
};
static LevelObject r11acidants3e_objects[] = {
{.definition = &defAcidAnt, .x = 152, .y = 1720, .animInd = 2, .flags = 2048, .group = &r11acidants3e}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -24,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2603_1_actions
},
{
    .x = 0, .y = 0,
    .distTo = 24,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
}
};
static Path r11acidants3f_paths[] = {
{.x = 128, .y = 1720, .numPoints = 3, .points = path2603_points}
};
static LevelObject r11acidants3f_objects[] = {
{.definition = &defAcidAnt, .x = 128, .y = 1704, .animInd = 2, .flags = 2048, .group = &r11acidants3f}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -24,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2607_1_actions
},
{
    .x = 0, .y = 0,
    .distTo = 24,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
}
};
static Path r11acidants3g_paths[] = {
{.x = 104, .y = 1720, .numPoints = 3, .points = path2607_points}
};
static LevelObject r11acidants3g_objects[] = {
{.definition = &defAcidAnt, .x = 104, .y = 1704, .animInd = 2, .flags = 2048, .group = &r11acidants3g}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -24,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2611_1_actions
},
{
    .x = 0, .y = 0,
    .distTo = 24,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
}
};
static Path r11acidants3h_paths[] = {
{.x = 80, .y = 1720, .numPoints = 3, .points = path2611_points}
};
static LevelObject r11acidants3h_objects[] = {
{.definition = &defAcidAnt, .x = 80, .y = 1704, .animInd = 2, .flags = 2048, .group = &r11acidants3h}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -24,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2615_1_actions
},
{
    .x = 0, .y = 0,
    .distTo = 24,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
}
};
static Path r11acidants3i_paths[] = {
{.x = 56, .y = 1720, .numPoints = 3, .points = path2615_points}
};
static LevelObject r11acidants3i_objects[] = {
{.definition = &defAcidAnt, .x = 56, .y = 1704, .animInd = 2, .flags = 2048, .group = &r11acidants3i}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -24,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2619_1_actions
},
{
    .x = 0, .y = 0,
    .distTo = 24,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
}
};
static Path r11acidants3j_paths[] = {
{.x = 32, .y = 1720, .numPoints = 3, .points = path2619_points}
};
static LevelObject r11acidants3j_objects[] = {
{.definition = &defAcidAnt, .x = 32, .y = 1704, .animInd = 2, .flags = 0, .group = &r11acidants3j}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -24,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2623_1_actions
},
{
    .x = 0, .y = 0,
    .distTo = 24,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
}
};
static Path r11acidants3k_paths[] = {
{.x = 8, .y = 1720, .numPoints = 3, .points = path2623_points}
};
static LevelObject r11acidants3k_objects[] = {
{.definition = &defAcidAnt, .x = 8, .y = 1704, .animInd = 2, .flags = 0, .group = &r11acidants3k}
};
LevelObjectGroup r11acidants3k = {
    .numPaths = 1, .paths = r11acidants3k_paths,
    .numObjects = 1, .objects = r11acidants3k_objects
};
extern LevelObjectGroup r11powerup;
static LevelObject r11powerup_objects[] = {
{.definition = &defHoneyPot, .x = 120, .y = 1656, .animInd = 0, .flags = 32768, .group = &r11powerup}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2630_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2630_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2630_2_actions
}
};
static Path r12wasp1a_paths[] = {
{.x = 96, .y = 1512, .numPoints = 3, .points = path2630_points}
};
static LevelObject r12wasp1a_objects[] = {
{.definition = &defWasp, .x = 96, .y = 1512, .animInd = 0, .flags = 0, .group = &r12wasp1a}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2636_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2636_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2636_2_actions
}
};
static Path r12wasp1b_paths[] = {
{.x = 128, .y = 1528, .numPoints = 3, .points = path2636_points}
};
static LevelObject r12wasp1b_objects[] = {
{.definition = &defWasp, .x = 128, .y = 1528, .animInd = 0, .flags = 0, .group = &r12wasp1b}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2642_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2642_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2642_2_actions
}
};
static Path r12wasp1c_paths[] = {
{.x = 160, .y = 1544, .numPoints = 3, .points = path2642_points}
};
static LevelObject r12wasp1c_objects[] = {
{.definition = &defWasp, .x = 160, .y = 1544, .animInd = 0, .flags = 0, .group = &r12wasp1c}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2648_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2648_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2648_2_actions
}
};
static Path r12wasp2a_paths[] = {
{.x = 80, .y = 1448, .numPoints = 3, .points = path2648_points}
};
static LevelObject r12wasp2a_objects[] = {
{.definition = &defWasp, .x = 80, .y = 1448, .animInd = 0, .flags = 0, .group = &r12wasp2a}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2654_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2654_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2654_2_actions
}
};
static Path r12wasp2b_paths[] = {
{.x = 56, .y = 1472, .numPoints = 3, .points = path2654_points}
};
static LevelObject r12wasp2b_objects[] = {
{.definition = &defWasp, .x = 56, .y = 1472, .animInd = 0, .flags = 0, .group = &r12wasp2b}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2660_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2660_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2660_2_actions
}
};
static Path r12wasp2c_paths[] = {
{.x = 32, .y = 1496, .numPoints = 3, .points = path2660_points}
};
static LevelObject r12wasp2c_objects[] = {
{.definition = &defWasp, .x = 32, .y = 1496, .animInd = 0, .flags = 0, .group = &r12wasp2c}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2666_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2666_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2666_2_actions
}
};
static Path r12wasp3a_paths[] = {
{.x = 176, .y = 1472, .numPoints = 3, .points = path2666_points}
};
static LevelObject r12wasp3a_objects[] = {
{.definition = &defWasp, .x = 176, .y = 1472, .animInd = 0, .flags = 0, .group = &r12wasp3a}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2672_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2672_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2672_2_actions
}
};
static Path r12wasp3b_paths[] = {
{.x = 200, .y = 1496, .numPoints = 3, .points = path2672_points}
};
static LevelObject r12wasp3b_objects[] = {
{.definition = &defWasp, .x = 200, .y = 1496, .animInd = 0, .flags = 0, .group = &r12wasp3b}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2678_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2678_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2678_2_actions
}
};
static Path r12wasp3c_paths[] = {
{.x = 224, .y = 1520, .numPoints = 3, .points = path2678_points}
};
static LevelObject r12wasp3c_objects[] = {
{.definition = &defWasp, .x = 224, .y = 1520, .animInd = 0, .flags = 0, .group = &r12wasp3c}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2684_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2684_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2684_2_actions
}
};
static Path r12wasp4a_paths[] = {
{.x = 48, .y = 1416, .numPoints = 3, .points = path2684_points}
};
static LevelObject r12wasp4a_objects[] = {
{.definition = &defWasp, .x = 48, .y = 1416, .animInd = 0, .flags = 0, .group = &r12wasp4a}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2690_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2690_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2690_2_actions
}
};
static Path r12wasp4b_paths[] = {
{.x = 208, .y = 1416, .numPoints = 3, .points = path2690_points}
};
static LevelObject r12wasp4b_objects[] = {
{.definition = &defWasp, .x = 208, .y = 1416, .animInd = 0, .flags = 0, .group = &r12wasp4b}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2696_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2696_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2696_2_actions
}
};
static Path r12wasp4c_paths[] = {
{.x = 32, .y = 1504, .numPoints = 3, .points = path2696_points}
};
static LevelObject r12wasp4c_objects[] = {
{.definition = &defWasp, .x = 32, .y = 1504, .animInd = 0, .flags = 0, .group = &r12wasp4c}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2702_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2702_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2702_2_actions
}
};
static Path r12wasp4d_paths[] = {
{.x = 224, .y = 1504, .numPoints = 3, .points = path2702_points}
};
static LevelObject r12wasp4d_objects[] = {
{.definition = &defWasp, .x = 224, .y = 1504, .animInd = 0, .flags = 0, .group = &r12wasp4d}
};
LevelObjectGroup r12wasp4d = {
    .numPaths = 1, .paths = r12wasp4d_paths,
    .numObjects = 1, .objects = r12wasp4d_objects
};
extern LevelObjectGroup r12powerup;
static LevelObject r12powerup_objects[] = {
{.definition = &defReinforcedHoneyPot, .x = 128, .y = 1360, .animInd = 2, .flags = 32768, .group = &r12powerup}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 176,
    .distTo = 128,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 192,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = 64,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 160,
    .distTo = 112,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 176,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = 64,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 160,
    .distTo = 112,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 176,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = 64,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 176,
    .distTo = 128,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 192,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = 64,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 176,
    .distTo = 128,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 192,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = 64,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 176,
    .distTo = 128,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 192,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = 64,
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
{.definition = &defAntHole, .x = 232, .y = 1200, .animInd = 6, .flags = 32768, .group = &r13acidants1},
{.definition = &defAntHole, .x = 240, .y = 1216, .animInd = 6, .flags = 32768, .group = &r13acidants1},
{.definition = &defAntHole, .x = 16, .y = 1216, .animInd = 6, .flags = 32768, .group = &r13acidants1},
{.definition = &defAntHole, .x = 24, .y = 1200, .animInd = 6, .flags = 32768, .group = &r13acidants1},
{.definition = &defAntHole, .x = 248, .y = 1200, .animInd = 6, .flags = 32768, .group = &r13acidants1},
{.definition = &defAntHole, .x = 8, .y = 1200, .animInd = 6, .flags = 32768, .group = &r13acidants1}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -16,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2730_1_actions
},
{
    .x = 0, .y = -24,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2730_2_actions
},
{
    .x = 0, .y = -144,
    .distTo = 120,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2730_3_actions
},
{
    .x = -16, .y = -160,
    .distTo = 23,
    .xDirTo = -46, .yDirTo = -46,
    .numActions = 1,
    .actions = path2730_4_actions
},
{
    .x = -112, .y = -160,
    .distTo = 96,
    .xDirTo = -64, .yDirTo = 0,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = -16,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2731_1_actions
},
{
    .x = 0, .y = -24,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2731_2_actions
},
{
    .x = 0, .y = -144,
    .distTo = 120,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2731_3_actions
},
{
    .x = 16, .y = -160,
    .distTo = 23,
    .xDirTo = 45, .yDirTo = -46,
    .numActions = 1,
    .actions = path2731_4_actions
},
{
    .x = 112, .y = -160,
    .distTo = 96,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path r13beetle1_paths[] = {
{.x = 56, .y = 1320, .numPoints = 6, .points = path2730_points},
{.x = 200, .y = 1320, .numPoints = 6, .points = path2731_points}
};
static LevelObject r13beetle1_objects[] = {
{.definition = &defBeetle, .x = 56, .y = 1320, .animInd = 10, .flags = 34816, .group = &r13beetle1},
{.definition = &defBeetle, .x = 200, .y = 1320, .animInd = 10, .flags = 32768, .group = &r13beetle1}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2742_0_actions
},
{
    .x = 56, .y = 0,
    .distTo = 56,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 96, .y = -8,
    .distTo = 41,
    .xDirTo = 62, .yDirTo = -13,
    .numActions = 0,
    .actions = 0
},
{
    .x = 120, .y = -16,
    .distTo = 26,
    .xDirTo = 60, .yDirTo = -21,
    .numActions = 3,
    .actions = path2742_3_actions
},
{
    .x = 136, .y = -24,
    .distTo = 18,
    .xDirTo = 57, .yDirTo = -29,
    .numActions = 1,
    .actions = path2742_4_actions
},
{
    .x = 152, .y = -40,
    .distTo = 23,
    .xDirTo = 45, .yDirTo = -46,
    .numActions = 1,
    .actions = path2742_5_actions
}
};
static Path r13fly1_paths[] = {
{.x = 32, .y = 1264, .numPoints = 6, .points = path2742_points}
};
static LevelObject r13fly1_objects[] = {
{.definition = &defWaspShooter, .x = 32, .y = 1264, .animInd = 6, .flags = 0, .group = &r13fly1}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2751_0_actions
},
{
    .x = 56, .y = 0,
    .distTo = 32,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 96, .y = 8,
    .distTo = 41,
    .xDirTo = 62, .yDirTo = 12,
    .numActions = 2,
    .actions = path2751_2_actions
},
{
    .x = 120, .y = 16,
    .distTo = 26,
    .xDirTo = 60, .yDirTo = 20,
    .numActions = 1,
    .actions = path2751_3_actions
},
{
    .x = 136, .y = 24,
    .distTo = 18,
    .xDirTo = 57, .yDirTo = 28,
    .numActions = 1,
    .actions = path2751_4_actions
},
{
    .x = 152, .y = 40,
    .distTo = 23,
    .xDirTo = 45, .yDirTo = 45,
    .numActions = 1,
    .actions = path2751_5_actions
}
};
static Path r13fly2_paths[] = {
{.x = 24, .y = 1232, .numPoints = 6, .points = path2751_points}
};
static LevelObject r13fly2_objects[] = {
{.definition = &defWaspShooter, .x = 48, .y = 1232, .animInd = 6, .flags = 0, .group = &r13fly2}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2760_0_actions
},
{
    .x = -56, .y = 0,
    .distTo = 56,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -96, .y = -8,
    .distTo = 41,
    .xDirTo = -63, .yDirTo = -13,
    .numActions = 0,
    .actions = 0
},
{
    .x = -120, .y = -16,
    .distTo = 26,
    .xDirTo = -61, .yDirTo = -21,
    .numActions = 3,
    .actions = path2760_3_actions
},
{
    .x = -136, .y = -24,
    .distTo = 18,
    .xDirTo = -58, .yDirTo = -29,
    .numActions = 1,
    .actions = path2760_4_actions
},
{
    .x = -152, .y = -40,
    .distTo = 23,
    .xDirTo = -46, .yDirTo = -46,
    .numActions = 1,
    .actions = path2760_5_actions
}
};
static Path r13fly3_paths[] = {
{.x = 224, .y = 1224, .numPoints = 6, .points = path2760_points}
};
static LevelObject r13fly3_objects[] = {
{.definition = &defWaspShooter, .x = 224, .y = 1224, .animInd = 6, .flags = 2048, .group = &r13fly3}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2769_0_actions
},
{
    .x = -56, .y = 0,
    .distTo = 32,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -96, .y = 8,
    .distTo = 41,
    .xDirTo = -63, .yDirTo = 12,
    .numActions = 2,
    .actions = path2769_2_actions
},
{
    .x = -120, .y = 16,
    .distTo = 26,
    .xDirTo = -61, .yDirTo = 20,
    .numActions = 1,
    .actions = path2769_3_actions
},
{
    .x = -136, .y = 24,
    .distTo = 18,
    .xDirTo = -58, .yDirTo = 28,
    .numActions = 1,
    .actions = path2769_4_actions
},
{
    .x = -152, .y = 40,
    .distTo = 23,
    .xDirTo = -46, .yDirTo = 45,
    .numActions = 1,
    .actions = path2769_5_actions
}
};
static Path r14fly4_paths[] = {
{.x = 232, .y = 1192, .numPoints = 6, .points = path2769_points}
};
static LevelObject r14fly4_objects[] = {
{.definition = &defWaspShooter, .x = 208, .y = 1192, .animInd = 6, .flags = 2048, .group = &r14fly4}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 64, .y = 224,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2779_1_actions
},
{
    .x = 40, .y = 208,
    .distTo = 29,
    .xDirTo = -54, .yDirTo = -36,
    .numActions = 2,
    .actions = path2779_2_actions
},
{
    .x = 32, .y = 208,
    .distTo = 8,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 24, .y = 208,
    .distTo = 8,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 3,
    .actions = path2779_4_actions
},
{
    .x = 0, .y = 192,
    .distTo = 29,
    .xDirTo = -54, .yDirTo = -36,
    .numActions = 1,
    .actions = path2779_5_actions
},
{
    .x = 0, .y = 176,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2779_6_actions
},
{
    .x = 24, .y = 160,
    .distTo = 29,
    .xDirTo = 53, .yDirTo = -36,
    .numActions = 2,
    .actions = path2779_7_actions
},
{
    .x = 32, .y = 160,
    .distTo = 8,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 40, .y = 160,
    .distTo = 8,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 3,
    .actions = path2779_9_actions
},
{
    .x = 64, .y = 144,
    .distTo = 29,
    .xDirTo = 53, .yDirTo = -36,
    .numActions = 2,
    .actions = path2779_10_actions
},
{
    .x = 64, .y = 128,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 40, .y = 112,
    .distTo = 29,
    .xDirTo = -54, .yDirTo = -36,
    .numActions = 2,
    .actions = path2779_12_actions
},
{
    .x = 24, .y = 112,
    .distTo = 16,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 3,
    .actions = path2779_13_actions
},
{
    .x = 0, .y = 96,
    .distTo = 29,
    .xDirTo = -54, .yDirTo = -36,
    .numActions = 1,
    .actions = path2779_14_actions
},
{
    .x = 0, .y = 80,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2779_15_actions
},
{
    .x = 24, .y = 64,
    .distTo = 29,
    .xDirTo = 53, .yDirTo = -36,
    .numActions = 2,
    .actions = path2779_16_actions
},
{
    .x = 40, .y = 64,
    .distTo = 16,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 3,
    .actions = path2779_17_actions
},
{
    .x = 64, .y = 48,
    .distTo = 29,
    .xDirTo = 53, .yDirTo = -36,
    .numActions = 2,
    .actions = path2779_18_actions
},
{
    .x = 64, .y = 32,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 40, .y = 16,
    .distTo = 29,
    .xDirTo = -54, .yDirTo = -36,
    .numActions = 2,
    .actions = path2779_20_actions
},
{
    .x = 24, .y = 16,
    .distTo = 16,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 3,
    .actions = path2779_21_actions
},
{
    .x = 0, .y = 0,
    .distTo = 29,
    .xDirTo = -54, .yDirTo = -36,
    .numActions = 1,
    .actions = path2779_22_actions
},
{
    .x = 0, .y = -16,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2779_23_actions
},
{
    .x = 24, .y = -32,
    .distTo = 29,
    .xDirTo = 53, .yDirTo = -36,
    .numActions = 2,
    .actions = path2779_24_actions
},
{
    .x = 40, .y = -32,
    .distTo = 16,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 3,
    .actions = path2779_25_actions
},
{
    .x = 64, .y = -48,
    .distTo = 29,
    .xDirTo = 53, .yDirTo = -36,
    .numActions = 2,
    .actions = path2779_26_actions
},
{
    .x = 64, .y = -64,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 40, .y = -80,
    .distTo = 29,
    .xDirTo = -54, .yDirTo = -36,
    .numActions = 2,
    .actions = path2779_28_actions
},
{
    .x = 24, .y = -80,
    .distTo = 16,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 3,
    .actions = path2779_29_actions
},
{
    .x = 0, .y = -96,
    .distTo = 29,
    .xDirTo = -54, .yDirTo = -36,
    .numActions = 1,
    .actions = path2779_30_actions
},
{
    .x = 0, .y = -112,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2779_31_actions
},
{
    .x = 16, .y = -128,
    .distTo = 23,
    .xDirTo = 45, .yDirTo = -46,
    .numActions = 1,
    .actions = path2779_32_actions
},
{
    .x = 24, .y = -128,
    .distTo = 8,
    .xDirTo = 64, .yDirTo = 0,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 64, .y = 224,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 40, .y = 208,
    .distTo = 29,
    .xDirTo = -54, .yDirTo = -36,
    .numActions = 2,
    .actions = path2780_2_actions
},
{
    .x = 32, .y = 208,
    .distTo = 8,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 24, .y = 208,
    .distTo = 8,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 3,
    .actions = path2780_4_actions
},
{
    .x = 0, .y = 192,
    .distTo = 29,
    .xDirTo = -54, .yDirTo = -36,
    .numActions = 2,
    .actions = path2780_5_actions
},
{
    .x = 0, .y = 176,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 24, .y = 160,
    .distTo = 29,
    .xDirTo = 53, .yDirTo = -36,
    .numActions = 2,
    .actions = path2780_7_actions
},
{
    .x = 32, .y = 160,
    .distTo = 8,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 40, .y = 160,
    .distTo = 8,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 3,
    .actions = path2780_9_actions
},
{
    .x = 64, .y = 144,
    .distTo = 29,
    .xDirTo = 53, .yDirTo = -36,
    .numActions = 1,
    .actions = path2780_10_actions
},
{
    .x = 64, .y = 128,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2780_11_actions
},
{
    .x = 40, .y = 112,
    .distTo = 29,
    .xDirTo = -54, .yDirTo = -36,
    .numActions = 2,
    .actions = path2780_12_actions
},
{
    .x = 24, .y = 112,
    .distTo = 16,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 3,
    .actions = path2780_13_actions
},
{
    .x = 0, .y = 96,
    .distTo = 29,
    .xDirTo = -54, .yDirTo = -36,
    .numActions = 2,
    .actions = path2780_14_actions
},
{
    .x = 0, .y = 80,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 24, .y = 64,
    .distTo = 29,
    .xDirTo = 53, .yDirTo = -36,
    .numActions = 2,
    .actions = path2780_16_actions
},
{
    .x = 40, .y = 64,
    .distTo = 16,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 3,
    .actions = path2780_17_actions
},
{
    .x = 64, .y = 48,
    .distTo = 29,
    .xDirTo = 53, .yDirTo = -36,
    .numActions = 1,
    .actions = path2780_18_actions
},
{
    .x = 64, .y = 32,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2780_19_actions
},
{
    .x = 40, .y = 16,
    .distTo = 29,
    .xDirTo = -54, .yDirTo = -36,
    .numActions = 2,
    .actions = path2780_20_actions
},
{
    .x = 24, .y = 16,
    .distTo = 16,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 3,
    .actions = path2780_21_actions
},
{
    .x = 0, .y = 0,
    .distTo = 29,
    .xDirTo = -54, .yDirTo = -36,
    .numActions = 2,
    .actions = path2780_22_actions
},
{
    .x = 0, .y = -16,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 24, .y = -32,
    .distTo = 29,
    .xDirTo = 53, .yDirTo = -36,
    .numActions = 2,
    .actions = path2780_24_actions
},
{
    .x = 40, .y = -32,
    .distTo = 16,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 3,
    .actions = path2780_25_actions
},
{
    .x = 64, .y = -48,
    .distTo = 29,
    .xDirTo = 53, .yDirTo = -36,
    .numActions = 1,
    .actions = path2780_26_actions
},
{
    .x = 64, .y = -64,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2780_27_actions
},
{
    .x = 40, .y = -80,
    .distTo = 29,
    .xDirTo = -54, .yDirTo = -36,
    .numActions = 2,
    .actions = path2780_28_actions
},
{
    .x = 24, .y = -80,
    .distTo = 16,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 3,
    .actions = path2780_29_actions
},
{
    .x = 0, .y = -96,
    .distTo = 29,
    .xDirTo = -54, .yDirTo = -36,
    .numActions = 2,
    .actions = path2780_30_actions
},
{
    .x = 0, .y = -112,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2780_31_actions
},
{
    .x = 16, .y = -128,
    .distTo = 23,
    .xDirTo = 45, .yDirTo = -46,
    .numActions = 1,
    .actions = path2780_32_actions
},
{
    .x = 24, .y = -128,
    .distTo = 8,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
}
};
static Path r14beetles_paths[] = {
{.x = 40, .y = 856, .numPoints = 34, .points = path2779_points},
{.x = 152, .y = 856, .numPoints = 34, .points = path2780_points}
};
static LevelObject r14beetles_objects[] = {
{.definition = &defBeetle, .x = 104, .y = 1096, .animInd = 10, .flags = 34816, .group = &r14beetles},
{.definition = &defBeetle, .x = 216, .y = 1096, .animInd = 10, .flags = 2048, .group = &r14beetles},
{.definition = 0 /* to be assigned */, .x = -40, .y = 996, .animInd = 0, .flags = 32768, .group = &r14beetles},
{.definition = 0 /* to be assigned */, .x = -40, .y = 860, .animInd = 0, .flags = 32768, .group = &r14beetles},
{.definition = 0 /* to be assigned */, .x = -40, .y = 728, .animInd = 0, .flags = 32768, .group = &r14beetles},
{.definition = 0 /* to be assigned */, .x = 256, .y = 932, .animInd = 0, .flags = 32768, .group = &r14beetles},
{.definition = 0 /* to be assigned */, .x = 256, .y = 796, .animInd = 0, .flags = 32768, .group = &r14beetles}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 144,
    .distTo = 128,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 160,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = 64,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 144,
    .distTo = 128,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 160,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 1,
    .actions = path2892_2_actions
}
};
static Path r14acidants1_paths[] = {
{.x = 120, .y = 976, .numPoints = 3, .points = path2891_points},
{.x = 184, .y = 976, .numPoints = 3, .points = path2892_points}
};
static LevelObject r14acidants1_objects[] = {
{.definition = &defAntHole, .x = 120, .y = 992, .animInd = 6, .flags = 32768, .group = &r14acidants1},
{.definition = &defAntHole, .x = 184, .y = 992, .animInd = 6, .flags = 32768, .group = &r14acidants1}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 128,
    .distTo = 112,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 144,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = 64,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 128,
    .distTo = 112,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 144,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 1,
    .actions = path2899_2_actions
}
};
static Path r14acidants2_paths[] = {
{.x = 128, .y = 992, .numPoints = 3, .points = path2898_points},
{.x = 176, .y = 992, .numPoints = 3, .points = path2899_points}
};
static LevelObject r14acidants2_objects[] = {
{.definition = &defAntHole, .x = 128, .y = 1008, .animInd = 6, .flags = 32768, .group = &r14acidants2},
{.definition = &defAntHole, .x = 176, .y = 1008, .animInd = 6, .flags = 32768, .group = &r14acidants2}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 144,
    .distTo = 128,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 160,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = 64,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 144,
    .distTo = 128,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 160,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 1,
    .actions = path2906_2_actions
}
};
static Path r14acidants3_paths[] = {
{.x = 136, .y = 976, .numPoints = 3, .points = path2905_points},
{.x = 168, .y = 976, .numPoints = 3, .points = path2906_points}
};
static LevelObject r14acidants3_objects[] = {
{.definition = &defAntHole, .x = 168, .y = 992, .animInd = 6, .flags = 32768, .group = &r14acidants3},
{.definition = &defAntHole, .x = 136, .y = 992, .animInd = 6, .flags = 32768, .group = &r14acidants3}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2911_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2911_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2911_2_actions
},
{
    .x = 0, .y = -8,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 1,
    .actions = path2911_3_actions
}
};
static Path r14wasp1a_paths[] = {
{.x = 136, .y = 1128, .numPoints = 4, .points = path2911_points}
};
static LevelObject r14wasp1a_objects[] = {
{.definition = &defWaspShooter, .x = 136, .y = 1128, .animInd = 6, .flags = 2048, .group = &r14wasp1a}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2921_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2921_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2921_2_actions
},
{
    .x = 0, .y = -8,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 1,
    .actions = path2921_3_actions
}
};
static Path r14wasp1b_paths[] = {
{.x = 120, .y = 1136, .numPoints = 4, .points = path2921_points}
};
static LevelObject r14wasp1b_objects[] = {
{.definition = &defWaspShooter, .x = 120, .y = 1136, .animInd = 6, .flags = 2048, .group = &r14wasp1b}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2928_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2928_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2928_2_actions
},
{
    .x = 0, .y = -8,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 1,
    .actions = path2928_3_actions
}
};
static Path r14wasp2a_paths[] = {
{.x = 24, .y = 1072, .numPoints = 4, .points = path2928_points}
};
static LevelObject r14wasp2a_objects[] = {
{.definition = &defWaspShooter, .x = 24, .y = 1072, .animInd = 6, .flags = 0, .group = &r14wasp2a}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2935_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2935_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2935_2_actions
},
{
    .x = 0, .y = -8,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 1,
    .actions = path2935_3_actions
}
};
static Path r14wasp2b_paths[] = {
{.x = 120, .y = 1096, .numPoints = 4, .points = path2935_points}
};
static LevelObject r14wasp2b_objects[] = {
{.definition = &defWaspShooter, .x = 120, .y = 1096, .animInd = 6, .flags = 0, .group = &r14wasp2b}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2942_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2942_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2942_2_actions
},
{
    .x = 0, .y = -8,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 1,
    .actions = path2942_3_actions
}
};
static Path r14wasp3a_paths[] = {
{.x = 136, .y = 1056, .numPoints = 4, .points = path2942_points}
};
static LevelObject r14wasp3a_objects[] = {
{.definition = &defWaspShooter, .x = 136, .y = 1056, .animInd = 6, .flags = 2048, .group = &r14wasp3a}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2949_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2949_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2949_2_actions
},
{
    .x = 0, .y = -8,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 1,
    .actions = path2949_3_actions
}
};
static Path r14wasp3b_paths[] = {
{.x = 232, .y = 1032, .numPoints = 4, .points = path2949_points}
};
static LevelObject r14wasp3b_objects[] = {
{.definition = &defWaspShooter, .x = 232, .y = 1032, .animInd = 6, .flags = 2048, .group = &r14wasp3b}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2956_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2956_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2956_2_actions
},
{
    .x = 0, .y = -8,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 1,
    .actions = path2956_3_actions
}
};
static Path r14wasp4a_paths[] = {
{.x = 24, .y = 960, .numPoints = 4, .points = path2956_points}
};
static LevelObject r14wasp4a_objects[] = {
{.definition = &defWaspShooter, .x = 24, .y = 960, .animInd = 6, .flags = 0, .group = &r14wasp4a}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2963_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2963_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2963_2_actions
},
{
    .x = 0, .y = -8,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 1,
    .actions = path2963_3_actions
}
};
static Path r14wasp4b_paths[] = {
{.x = 136, .y = 952, .numPoints = 4, .points = path2963_points}
};
static LevelObject r14wasp4b_objects[] = {
{.definition = &defWaspShooter, .x = 136, .y = 952, .animInd = 6, .flags = 2048, .group = &r14wasp4b}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2970_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2970_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2970_2_actions
},
{
    .x = 0, .y = -8,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 1,
    .actions = path2970_3_actions
}
};
static Path r14wasp4c_paths[] = {
{.x = 24, .y = 984, .numPoints = 4, .points = path2970_points}
};
static LevelObject r14wasp4c_objects[] = {
{.definition = &defWaspShooter, .x = 24, .y = 984, .animInd = 6, .flags = 0, .group = &r14wasp4c}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2977_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2977_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2977_2_actions
},
{
    .x = 0, .y = -8,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 1,
    .actions = path2977_3_actions
}
};
static Path r14wasp5a_paths[] = {
{.x = 232, .y = 896, .numPoints = 4, .points = path2977_points}
};
static LevelObject r14wasp5a_objects[] = {
{.definition = &defWaspShooter, .x = 232, .y = 896, .animInd = 6, .flags = 2048, .group = &r14wasp5a}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2984_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2984_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2984_2_actions
},
{
    .x = 0, .y = -8,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 1,
    .actions = path2984_3_actions
}
};
static Path r14wasp5b_paths[] = {
{.x = 120, .y = 888, .numPoints = 4, .points = path2984_points}
};
static LevelObject r14wasp5b_objects[] = {
{.definition = &defWaspShooter, .x = 120, .y = 888, .animInd = 6, .flags = 0, .group = &r14wasp5b}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path2991_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2991_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path2991_2_actions
},
{
    .x = 0, .y = -8,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 1,
    .actions = path2991_3_actions
}
};
static Path r14wasp5c_paths[] = {
{.x = 232, .y = 920, .numPoints = 4, .points = path2991_points}
};
static LevelObject r14wasp5c_objects[] = {
{.definition = &defWaspShooter, .x = 232, .y = 920, .animInd = 6, .flags = 2048, .group = &r14wasp5c}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path3002_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3002_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3002_2_actions
},
{
    .x = 0, .y = -8,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = 64,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path3003_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3003_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3003_2_actions
},
{
    .x = 0, .y = -8,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 1,
    .actions = path3003_3_actions
}
};
static Path r14wasp6a_paths[] = {
{.x = 24, .y = 832, .numPoints = 4, .points = path3002_points},
{.x = 120, .y = 832, .numPoints = 4, .points = path3003_points}
};
static LevelObject r14wasp6a_objects[] = {
{.definition = &defWaspShooter, .x = 24, .y = 832, .animInd = 6, .flags = 0, .group = &r14wasp6a},
{.definition = &defWaspShooter, .x = 120, .y = 832, .animInd = 6, .flags = 2048, .group = &r14wasp6a}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path3015_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3015_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3015_2_actions
},
{
    .x = 0, .y = -8,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = 64,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path3016_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3016_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3016_2_actions
},
{
    .x = 0, .y = -8,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 1,
    .actions = path3016_3_actions
}
};
static Path r14wasp6b_paths[] = {
{.x = 24, .y = 848, .numPoints = 4, .points = path3015_points},
{.x = 120, .y = 848, .numPoints = 4, .points = path3016_points}
};
static LevelObject r14wasp6b_objects[] = {
{.definition = &defWaspShooter, .x = 24, .y = 848, .animInd = 6, .flags = 0, .group = &r14wasp6b},
{.definition = &defWaspShooter, .x = 120, .y = 848, .animInd = 6, .flags = 2048, .group = &r14wasp6b}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path3028_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3028_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3028_2_actions
},
{
    .x = 0, .y = -8,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = 64,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path3029_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3029_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3029_2_actions
},
{
    .x = 0, .y = -8,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 1,
    .actions = path3029_3_actions
}
};
static Path Copy_of_r14wasp6a_paths[] = {
{.x = 136, .y = 800, .numPoints = 4, .points = path3028_points},
{.x = 232, .y = 800, .numPoints = 4, .points = path3029_points}
};
static LevelObject Copy_of_r14wasp6a_objects[] = {
{.definition = &defWaspShooter, .x = 136, .y = 800, .animInd = 6, .flags = 0, .group = &Copy_of_r14wasp6a},
{.definition = &defWaspShooter, .x = 232, .y = 800, .animInd = 6, .flags = 2048, .group = &Copy_of_r14wasp6a}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path3041_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3041_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3041_2_actions
},
{
    .x = 0, .y = -8,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = 64,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path3042_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3042_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3042_2_actions
},
{
    .x = 0, .y = -8,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 1,
    .actions = path3042_3_actions
}
};
static Path Copy_of_r14wasp6b_paths[] = {
{.x = 136, .y = 800, .numPoints = 4, .points = path3041_points},
{.x = 232, .y = 800, .numPoints = 4, .points = path3042_points}
};
static LevelObject Copy_of_r14wasp6b_objects[] = {
{.definition = &defWaspShooter, .x = 136, .y = 800, .animInd = 6, .flags = 0, .group = &Copy_of_r14wasp6b},
{.definition = &defWaspShooter, .x = 232, .y = 800, .animInd = 6, .flags = 2048, .group = &Copy_of_r14wasp6b}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 120,
    .distTo = 120,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 1,
    .actions = path3047_1_actions
}
};
static Path r14powerup1_paths[] = {
{.x = 72, .y = 992, .numPoints = 2, .points = path3047_points}
};
static LevelObject r14powerup1_objects[] = {
{.definition = &defHoneyCell, .x = 72, .y = 992, .animInd = 4, .flags = 32768, .group = &r14powerup1}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 152,
    .distTo = 152,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 1,
    .actions = path3051_1_actions
}
};
static Path r14powerup2_paths[] = {
{.x = 184, .y = 960, .numPoints = 2, .points = path3051_points}
};
static LevelObject r14powerup2_objects[] = {
{.definition = &defHoneyCell, .x = 184, .y = 960, .animInd = 4, .flags = 32768, .group = &r14powerup2}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 312,
    .distTo = 312,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 1,
    .actions = path3055_1_actions
}
};
static Path r15powerup2_paths[] = {
{.x = 72, .y = 800, .numPoints = 2, .points = path3055_points}
};
static LevelObject r15powerup2_objects[] = {
{.definition = &defHoneyCell, .x = 72, .y = 800, .animInd = 4, .flags = 32768, .group = &r15powerup2}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 248,
    .distTo = 248,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 1,
    .actions = path3059_1_actions
}
};
static Path r15powerup1_paths[] = {
{.x = 184, .y = 864, .numPoints = 2, .points = path3059_points}
};
static LevelObject r15powerup1_objects[] = {
{.definition = &defHoneyCell, .x = 184, .y = 864, .animInd = 4, .flags = 32768, .group = &r15powerup1}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -16, .y = 24,
    .distTo = 18,
    .xDirTo = -58, .yDirTo = 28,
    .numActions = 1,
    .actions = path3063_1_actions
},
{
    .x = -16, .y = 40,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 1,
    .actions = path3063_2_actions
},
{
    .x = 8, .y = 64,
    .distTo = 34,
    .xDirTo = 45, .yDirTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = 168, .y = 64,
    .distTo = 160,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 192, .y = 40,
    .distTo = 34,
    .xDirTo = 45, .yDirTo = -46,
    .numActions = 0,
    .actions = 0
},
{
    .x = 192, .y = 24,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3063_6_actions
},
{
    .x = 176, .y = 16,
    .distTo = 18,
    .xDirTo = -58, .yDirTo = -29,
    .numActions = 1,
    .actions = path3063_7_actions
}
};
static Path r16acidants1_paths[] = {
{.x = 40, .y = 544, .numPoints = 8, .points = path3063_points}
};
static LevelObject r16acidants1_objects[] = {
{.definition = &defAntHole, .x = 40, .y = 560, .animInd = 6, .flags = 32768, .group = &r16acidants1}
};
LevelObjectGroup r16acidants1 = {
    .numPaths = 1, .paths = r16acidants1_paths,
    .numObjects = 1, .objects = r16acidants1_objects
};
extern LevelObjectGroup r16powerup;
static LevelObject r16powerup_objects[] = {
{.definition = &defHoneyPot, .x = 168, .y = 592, .animInd = 0, .flags = 32768, .group = &r16powerup},
{.definition = &defHoneyPot, .x = 88, .y = 592, .animInd = 0, .flags = 32768, .group = &r16powerup}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 16, .y = 8,
    .distTo = 23,
    .xDirTo = 45, .yDirTo = 45,
    .numActions = 1,
    .actions = path3074_1_actions
},
{
    .x = 32, .y = 24,
    .distTo = 23,
    .xDirTo = 45, .yDirTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = 32, .y = 56,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 1,
    .actions = path3074_3_actions
},
{
    .x = 8, .y = 80,
    .distTo = 34,
    .xDirTo = -46, .yDirTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = -120, .y = 80,
    .distTo = 128,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -144, .y = 56,
    .distTo = 34,
    .xDirTo = -46, .yDirTo = -46,
    .numActions = 0,
    .actions = 0
},
{
    .x = -144, .y = 24,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3074_7_actions
},
{
    .x = -112, .y = -8,
    .distTo = 46,
    .xDirTo = 45, .yDirTo = -46,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -32, .y = 32,
    .distTo = 23,
    .xDirTo = -46, .yDirTo = 45,
    .numActions = 1,
    .actions = path3075_1_actions
},
{
    .x = -32, .y = 48,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 1,
    .actions = path3075_2_actions
},
{
    .x = -8, .y = 72,
    .distTo = 34,
    .xDirTo = 45, .yDirTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = 72,
    .distTo = 96,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 112, .y = 48,
    .distTo = 34,
    .xDirTo = 45, .yDirTo = -46,
    .numActions = 0,
    .actions = 0
},
{
    .x = 112, .y = 32,
    .distTo = 16,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3075_6_actions
},
{
    .x = 96, .y = 16,
    .distTo = 23,
    .xDirTo = -46, .yDirTo = -46,
    .numActions = 1,
    .actions = path3075_7_actions
}
};
static Path r16acidants2_paths[] = {
{.x = 184, .y = 464, .numPoints = 9, .points = path3074_points},
{.x = 88, .y = 456, .numPoints = 8, .points = path3075_points}
};
static LevelObject r16acidants2_objects[] = {
{.definition = &defAntHole, .x = 184, .y = 456, .animInd = 6, .flags = 32768, .group = &r16acidants2},
{.definition = &defAntHole, .x = 72, .y = 472, .animInd = 6, .flags = 32768, .group = &r16acidants2}
};
LevelObjectGroup r16acidants2 = {
    .numPaths = 2, .paths = r16acidants2_paths,
    .numObjects = 2, .objects = r16acidants2_objects
};
extern LevelObjectGroup r16powerup2;
static LevelObject r16powerup2_objects[] = {
{.definition = &defReinforcedHoneyPot, .x = 128, .y = 512, .animInd = 2, .flags = 32768, .group = &r16powerup2}
};
LevelObjectGroup r16powerup2 = {
    .numPaths = 0, .paths = 0,
    .numObjects = 1, .objects = r16powerup2_objects
};
extern LevelObjectGroup r17powerup;
static LevelObject r17powerup_objects[] = {
{.definition = &defHoneyPot, .x = 152, .y = 400, .animInd = 0, .flags = 32768, .group = &r17powerup},
{.definition = &defHoneyPot, .x = 128, .y = 408, .animInd = 0, .flags = 32768, .group = &r17powerup},
{.definition = &defHoneyPot, .x = 112, .y = 400, .animInd = 0, .flags = 32768, .group = &r17powerup}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path3092_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3092_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3092_2_actions
},
{
    .x = 0, .y = -8,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 1,
    .actions = path3092_3_actions
}
};
static Path r17fly1a_paths[] = {
{.x = 40, .y = 472, .numPoints = 4, .points = path3092_points}
};
static LevelObject r17fly1a_objects[] = {
{.definition = &defWaspShooter, .x = 40, .y = 472, .animInd = 6, .flags = 0, .group = &r17fly1a}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path3099_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3099_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3099_2_actions
},
{
    .x = 0, .y = -8,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 1,
    .actions = path3099_3_actions
}
};
static Path r17fly1b_paths[] = {
{.x = 208, .y = 472, .numPoints = 4, .points = path3099_points}
};
static LevelObject r17fly1b_objects[] = {
{.definition = &defWaspShooter, .x = 208, .y = 472, .animInd = 6, .flags = 2048, .group = &r17fly1b}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path3106_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3106_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3106_2_actions
},
{
    .x = 0, .y = -8,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 1,
    .actions = path3106_3_actions
}
};
static Path r17fly2a_paths[] = {
{.x = 24, .y = 496, .numPoints = 4, .points = path3106_points}
};
static LevelObject r17fly2a_objects[] = {
{.definition = &defWaspShooter, .x = 24, .y = 496, .animInd = 6, .flags = 0, .group = &r17fly2a}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path3113_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3113_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3113_2_actions
},
{
    .x = 0, .y = -8,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 1,
    .actions = path3113_3_actions
}
};
static Path r17fly2b_paths[] = {
{.x = 232, .y = 496, .numPoints = 4, .points = path3113_points}
};
static LevelObject r17fly2b_objects[] = {
{.definition = &defWaspShooter, .x = 232, .y = 496, .animInd = 6, .flags = 2048, .group = &r17fly2b}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path3121_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3121_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path3122_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3122_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3122_2_actions
}
};
static Path r17wasp1_paths[] = {
{.x = 16, .y = 456, .numPoints = 3, .points = path3121_points},
{.x = 240, .y = 456, .numPoints = 3, .points = path3122_points}
};
static LevelObject r17wasp1_objects[] = {
{.definition = &defWasp, .x = 16, .y = 456, .animInd = 0, .flags = 0, .group = &r17wasp1},
{.definition = &defWasp, .x = 240, .y = 456, .animInd = 0, .flags = 2048, .group = &r17wasp1}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path3132_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3132_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path3133_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3133_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3133_2_actions
}
};
static Path r17wasp3_paths[] = {
{.x = 56, .y = 408, .numPoints = 3, .points = path3132_points},
{.x = 200, .y = 408, .numPoints = 3, .points = path3133_points}
};
static LevelObject r17wasp3_objects[] = {
{.definition = &defWasp, .x = 56, .y = 408, .animInd = 0, .flags = 0, .group = &r17wasp3},
{.definition = &defWasp, .x = 200, .y = 408, .animInd = 0, .flags = 2048, .group = &r17wasp3}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path3143_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3143_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path3144_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3144_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3144_2_actions
}
};
static Path r17wasp5_paths[] = {
{.x = 112, .y = 384, .numPoints = 3, .points = path3143_points},
{.x = 144, .y = 384, .numPoints = 3, .points = path3144_points}
};
static LevelObject r17wasp5_objects[] = {
{.definition = &defWasp, .x = 112, .y = 384, .animInd = 0, .flags = 0, .group = &r17wasp5},
{.definition = &defWasp, .x = 144, .y = 384, .animInd = 0, .flags = 2048, .group = &r17wasp5}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path3154_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3154_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path3155_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3155_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3155_2_actions
}
};
static Path r17wasp7_paths[] = {
{.x = 80, .y = 360, .numPoints = 3, .points = path3154_points},
{.x = 176, .y = 360, .numPoints = 3, .points = path3155_points}
};
static LevelObject r17wasp7_objects[] = {
{.definition = &defWasp, .x = 80, .y = 360, .animInd = 0, .flags = 0, .group = &r17wasp7},
{.definition = &defWasp, .x = 176, .y = 360, .animInd = 0, .flags = 2048, .group = &r17wasp7}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path3165_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3165_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path3166_0_actions
},
{
    .x = 0, .y = -32,
    .distTo = 32,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3166_1_actions
},
{
    .x = 0, .y = -40,
    .distTo = 8,
    .xDirTo = 0, .yDirTo = -64,
    .numActions = 1,
    .actions = path3166_2_actions
}
};
static Path r17wasp9_paths[] = {
{.x = 40, .y = 384, .numPoints = 3, .points = path3165_points},
{.x = 216, .y = 384, .numPoints = 3, .points = path3166_points}
};
static LevelObject r17wasp9_objects[] = {
{.definition = &defWasp, .x = 40, .y = 384, .animInd = 0, .flags = 0, .group = &r17wasp9},
{.definition = &defWasp, .x = 216, .y = 384, .animInd = 0, .flags = 2048, .group = &r17wasp9}
};
LevelObjectGroup r17wasp9 = {
    .numPaths = 2, .paths = r17wasp9_paths,
    .numObjects = 2, .objects = r17wasp9_objects
};
extern LevelObjectGroup r18powerup2;
static LevelObject r18powerup2_objects[] = {
{.definition = &defReinforcedHoneyPot, .x = 120, .y = 192, .animInd = 2, .flags = 32768, .group = &r18powerup2}
};
LevelObjectGroup r18powerup2 = {
    .numPaths = 0, .paths = 0,
    .numObjects = 1, .objects = r18powerup2_objects
};
extern LevelObjectGroup r18powerup3;
static LevelObject r18powerup3_objects[] = {
{.definition = &defReinforcedHoneyPot, .x = 136, .y = 128, .animInd = 2, .flags = 32768, .group = &r18powerup3}
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 192, .y = 136,
    .distTo = 23,
    .xDirTo = -46, .yDirTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = 160, .y = 152,
    .distTo = 36,
    .xDirTo = -58, .yDirTo = 28,
    .numActions = 0,
    .actions = 0
},
{
    .x = 128, .y = 136,
    .distTo = 36,
    .xDirTo = -58, .yDirTo = -29,
    .numActions = 0,
    .actions = 0
},
{
    .x = 112, .y = 112,
    .distTo = 29,
    .xDirTo = -36, .yDirTo = -54,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 176, .y = -8,
    .distTo = 23,
    .xDirTo = 45, .yDirTo = 45,
    .numActions = 0,
    .actions = 0
},
{
    .x = 208, .y = 8,
    .distTo = 36,
    .xDirTo = 57, .yDirTo = 28,
    .numActions = 0,
    .actions = 0
},
{
    .x = 240, .y = -8,
    .distTo = 36,
    .xDirTo = 57, .yDirTo = -29,
    .numActions = 0,
    .actions = 0
},
{
    .x = 256, .y = -32,
    .distTo = 29,
    .xDirTo = 35, .yDirTo = -54,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path3181_0_actions
},
{
    .x = 0, .y = 96,
    .distTo = 88,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 192,
    .distTo = 96,
    .xDirTo = 0, .yDirTo = 64,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path3182_0_actions
},
{
    .x = 0, .y = 96,
    .distTo = 88,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 0, .y = 192,
    .distTo = 96,
    .xDirTo = 0, .yDirTo = 64,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path3183_0_actions
},
{
    .x = 96, .y = 0,
    .distTo = 88,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 208, .y = 0,
    .distTo = 112,
    .xDirTo = 64, .yDirTo = 0,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path3184_0_actions
},
{
    .x = -96, .y = 0,
    .distTo = 88,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -208, .y = 0,
    .distTo = 112,
    .xDirTo = -64, .yDirTo = 0,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path3201_0_actions
},
{
    .x = 0, .y = 96,
    .distTo = 88,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = 88, .y = 8,
    .distTo = 125,
    .xDirTo = 45, .yDirTo = -46,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path3202_0_actions
},
{
    .x = 96, .y = 0,
    .distTo = 88,
    .xDirTo = 64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = 8, .y = 88,
    .distTo = 125,
    .xDirTo = -46, .yDirTo = 45,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path3203_0_actions
},
{
    .x = -96, .y = 0,
    .distTo = 88,
    .xDirTo = -64, .yDirTo = 0,
    .numActions = 0,
    .actions = 0
},
{
    .x = -8, .y = 88,
    .distTo = 125,
    .xDirTo = 45, .yDirTo = 45,
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
    .distTo = 0,
    .xDirTo = 0, .yDirTo = 0,
    .numActions = 1,
    .actions = path3204_0_actions
},
{
    .x = 0, .y = 96,
    .distTo = 88,
    .xDirTo = 0, .yDirTo = 64,
    .numActions = 0,
    .actions = 0
},
{
    .x = -88, .y = 8,
    .distTo = 125,
    .xDirTo = -46, .yDirTo = -46,
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
{.definition = &defWaspBoss, .x = 128, .y = 440, .animInd = 0, .flags = 0, .group = &waspboss},
{.definition = 0 /* to be assigned */, .x = 128, .y = 96, .animInd = 0, .flags = 32768, .group = &waspboss}
};
LevelObjectGroup waspboss = {
    .numPaths = 10, .paths = waspboss_paths,
    .numObjects = 2, .objects = waspboss_objects
};
Trigger stage_caravan_triggers[] = {
{.x = -32, .y = 3976, .action = spawnCharacters, .group = &room1ants1},
{.x = -40, .y = 3960, .action = spawnCharacters, .group = &room1ants2},
{.x = -32, .y = 3904, .action = spawnCharacters, .group = &room1ants3},
{.x = -32, .y = 3896, .action = spawnCharacters, .group = &Copy_of_room1ants3},
{.x = -32, .y = 3888, .action = spawnCharacters, .group = &Copy_of_Copy_of_room1ants3},
{.x = -32, .y = 3880, .action = spawnCharacters, .group = &Copy_of_Copy_of_Copy_of_room1ants3},
{.x = -32, .y = 3872, .action = spawnCharacters, .group = &Copy_of_Copy_of_Copy_of_Copy_of_room1ants3},
{.x = -32, .y = 3832, .action = spawnCharacters, .group = &room1ants4},
{.x = -32, .y = 3824, .action = spawnCharacters, .group = &Copy_of_room1ants4},
{.x = -32, .y = 3816, .action = spawnCharacters, .group = &Copy_of_Copy_of_room1ants4},
{.x = -32, .y = 3808, .action = spawnCharacters, .group = &Copy_of_Copy_of_Copy_of_room1ants4},
{.x = -32, .y = 3800, .action = spawnCharacters, .group = &Copy_of_Copy_of_Copy_of_Copy_of_room1ants4},
{.x = -32, .y = 3768, .action = spawnCharacters, .group = &room1powerup},
{.x = -56, .y = 3680, .action = spawnCharacters, .group = &room2ants1},
{.x = -56, .y = 3616, .action = spawnCharacters, .group = &room2ants2},
{.x = -80, .y = 3576, .action = spawnCharacters, .group = &room2powerup},
{.x = -56, .y = 3544, .action = spawnCharacters, .group = &r3fly1},
{.x = -88, .y = 3472, .action = spawnCharacters, .group = &room5bigant},
{.x = -56, .y = 3448, .action = spawnCharacters, .group = &room3fly3},
{.x = -56, .y = 3352, .action = spawnCharacters, .group = &room3fly4},
{.x = -56, .y = 3192, .action = spawnCharacters, .group = &room4powerup},
{.x = -56, .y = 3168, .action = spawnCharacters, .group = &r4fly1},
{.x = -40, .y = 3064, .action = spawnCharacters, .group = &room5fly1},
{.x = -72, .y = 3064, .action = spawnCharacters, .group = &r5powerup},
{.x = -16, .y = 2944, .action = spawnCharacters, .group = &room6bigant},
{.x = -24, .y = 2816, .action = spawnCharacters, .group = &room6fly},
{.x = -56, .y = 2504, .action = spawnCharacters, .group = &room7alien1},
{.x = -80, .y = 2448, .action = spawnCharacters, .group = &room7alien2},
{.x = -56, .y = 2432, .action = spawnCharacters, .group = &room7alien3},
{.x = -32, .y = 2376, .action = spawnCharacters, .group = &room8alien1},
{.x = -56, .y = 2360, .action = spawnCharacters, .group = &room8alien2},
{.x = -32, .y = 2272, .action = spawnCharacters, .group = &room8powerup},
{.x = -72, .y = 2264, .action = spawnCharacters, .group = &room8alien4},
{.x = -16, .y = 2184, .action = spawnCharacters, .group = &room9powerup},
{.x = -16, .y = 2016, .action = spawnCharacters, .group = &room9alienmind},
{.x = -24, .y = 2008, .action = spawnCharacters, .group = &part2},
{.x = -32, .y = 1856, .action = spawnCharacters, .group = &room10acidants},
{.x = -32, .y = 1840, .action = spawnCharacters, .group = &room10acidants2},
{.x = -48, .y = 1760, .action = spawnCharacters, .group = &r11acidants1a},
{.x = -56, .y = 1752, .action = spawnCharacters, .group = &r11acidants1b},
{.x = -48, .y = 1744, .action = spawnCharacters, .group = &r11acidants1c},
{.x = -56, .y = 1736, .action = spawnCharacters, .group = &r11acidants1d},
{.x = -48, .y = 1728, .action = spawnCharacters, .group = &r11acidants1e},
{.x = -56, .y = 1720, .action = spawnCharacters, .group = &r11acidants1f},
{.x = -48, .y = 1712, .action = spawnCharacters, .group = &r11acidants1g},
{.x = -56, .y = 1704, .action = spawnCharacters, .group = &r11acidants1h},
{.x = -96, .y = 1664, .action = spawnCharacters, .group = &r11powerup},
{.x = -32, .y = 1632, .action = spawnCharacters, .group = &room11acidants2a},
{.x = -48, .y = 1632, .action = spawnCharacters, .group = &r11acidants3a},
{.x = -56, .y = 1624, .action = spawnCharacters, .group = &r11acidants3b},
{.x = -48, .y = 1616, .action = spawnCharacters, .group = &r11acidants3c},
{.x = -56, .y = 1608, .action = spawnCharacters, .group = &r11acidants3d},
{.x = -48, .y = 1600, .action = spawnCharacters, .group = &r11acidants3e},
{.x = -56, .y = 1592, .action = spawnCharacters, .group = &r11acidants3f},
{.x = -48, .y = 1584, .action = spawnCharacters, .group = &r11acidants3g},
{.x = -88, .y = 1584, .action = spawnCharacters, .group = &room11acidants2b},
{.x = -56, .y = 1576, .action = spawnCharacters, .group = &r11acidants3h},
{.x = -48, .y = 1568, .action = spawnCharacters, .group = &r11acidants3i},
{.x = -56, .y = 1560, .action = spawnCharacters, .group = &r11acidants3j},
{.x = -48, .y = 1552, .action = spawnCharacters, .group = &r11acidants3k},
{.x = -40, .y = 1488, .action = spawnCharacters, .group = &r12wasp1c},
{.x = -48, .y = 1472, .action = spawnCharacters, .group = &r12wasp1b},
{.x = -56, .y = 1456, .action = spawnCharacters, .group = &r12wasp1a},
{.x = -40, .y = 1416, .action = spawnCharacters, .group = &r12wasp3a},
{.x = -32, .y = 1408, .action = spawnCharacters, .group = &r12wasp3b},
{.x = -24, .y = 1400, .action = spawnCharacters, .group = &r12wasp3c},
{.x = -56, .y = 1392, .action = spawnCharacters, .group = &r12wasp2a},
{.x = -64, .y = 1384, .action = spawnCharacters, .group = &r12wasp2b},
{.x = -72, .y = 1376, .action = spawnCharacters, .group = &r12wasp2c},
{.x = -40, .y = 1368, .action = spawnCharacters, .group = &r12powerup},
{.x = -16, .y = 1336, .action = spawnCharacters, .group = &r12wasp4b},
{.x = -80, .y = 1336, .action = spawnCharacters, .group = &r12wasp4a},
{.x = -96, .y = 1328, .action = spawnCharacters, .group = &r13acidants1},
{.x = -32, .y = 1312, .action = spawnCharacters, .group = &r12wasp4d},
{.x = -64, .y = 1312, .action = spawnCharacters, .group = &r12wasp4c},
{.x = -48, .y = 1288, .action = spawnCharacters, .group = &r13beetle1},
{.x = -64, .y = 1192, .action = spawnCharacters, .group = &r13fly1},
{.x = -72, .y = 1184, .action = spawnCharacters, .group = &r13fly2},
{.x = -48, .y = 1152, .action = spawnCharacters, .group = &r13fly3},
{.x = -56, .y = 1144, .action = spawnCharacters, .group = &r14fly4},
{.x = -48, .y = 1128, .action = spawnCharacters, .group = &r14acidants1},
{.x = -24, .y = 1072, .action = spawnCharacters, .group = &r14beetles},
{.x = -48, .y = 1064, .action = spawnCharacters, .group = &r14acidants2},
{.x = -64, .y = 1064, .action = spawnCharacters, .group = &r14wasp1a},
{.x = -72, .y = 1056, .action = spawnCharacters, .group = &r14wasp1b},
{.x = -56, .y = 1032, .action = spawnCharacters, .group = &r14wasp2b},
{.x = -48, .y = 1000, .action = spawnCharacters, .group = &r14acidants3},
{.x = -136, .y = 1000, .action = spawnCharacters, .group = &r14powerup1},
{.x = -48, .y = 992, .action = spawnCharacters, .group = &r14wasp2a},
{.x = -88, .y = 976, .action = spawnCharacters, .group = &r14wasp3a},
{.x = -48, .y = 968, .action = spawnCharacters, .group = &r14powerup2},
{.x = -96, .y = 936, .action = spawnCharacters, .group = &r14wasp3b},
{.x = -72, .y = 880, .action = spawnCharacters, .group = &r14wasp4b},
{.x = -48, .y = 872, .action = spawnCharacters, .group = &r15powerup1},
{.x = -88, .y = 872, .action = spawnCharacters, .group = &r14wasp4a},
{.x = -104, .y = 864, .action = spawnCharacters, .group = &r14wasp4c},
{.x = -104, .y = 816, .action = spawnCharacters, .group = &r14wasp5b},
{.x = -88, .y = 808, .action = spawnCharacters, .group = &r14wasp5a},
{.x = -136, .y = 808, .action = spawnCharacters, .group = &r15powerup2},
{.x = -72, .y = 800, .action = spawnCharacters, .group = &r14wasp5c},
{.x = -120, .y = 760, .action = spawnCharacters, .group = &r14wasp6a},
{.x = -8, .y = 728, .action = spawnCharacters, .group = &Copy_of_r14wasp6a},
{.x = -120, .y = 728, .action = spawnCharacters, .group = &r14wasp6b},
{.x = -8, .y = 680, .action = spawnCharacters, .group = &Copy_of_r14wasp6b},
{.x = -72, .y = 656, .action = spawnCharacters, .group = &r16acidants1},
{.x = -32, .y = 608, .action = spawnCharacters, .group = &r16powerup},
{.x = -56, .y = 592, .action = spawnCharacters, .group = &r16acidants2},
{.x = -16, .y = 520, .action = spawnCharacters, .group = &r16powerup2},
{.x = -40, .y = 424, .action = spawnCharacters, .group = &r17powerup},
{.x = -104, .y = 408, .action = spawnCharacters, .group = &r17fly1b},
{.x = -184, .y = 408, .action = spawnCharacters, .group = &r17fly1a},
{.x = -120, .y = 384, .action = spawnCharacters, .group = &r17fly2b},
{.x = -200, .y = 384, .action = spawnCharacters, .group = &r17fly2a},
{.x = -104, .y = 344, .action = spawnCharacters, .group = &r17wasp1},
{.x = -104, .y = 328, .action = spawnCharacters, .group = &r17wasp3},
{.x = -104, .y = 312, .action = spawnCharacters, .group = &r17wasp5},
{.x = -104, .y = 296, .action = spawnCharacters, .group = &r17wasp7},
{.x = -104, .y = 280, .action = spawnCharacters, .group = &r17wasp9},
{.x = -16, .y = 224, .action = spawnCharacters, .group = &waspboss},
{.x = -152, .y = 208, .action = spawnCharacters, .group = &r18powerup2},
{.x = -32, .y = 144, .action = stopStageScroll, .group = &waspboss},
{.x = -184, .y = 144, .action = spawnCharacters, .group = &r18powerup3}
};
