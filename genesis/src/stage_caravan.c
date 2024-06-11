#include "stage_caravan.h"
// room1ants1
static Trigger room1ants1_triggers[] = {
{.y = 3976, .action = spawnCharacters}
};
static PathPoint path427_points[] = {
{.x = 0, .y = -40, .numActions = 0, .actions = 0},
{.x = -40, .y = -40, .numActions = 0, .actions = 0},
{.x = -56, .y = -56, .numActions = 0, .actions = 0},
{.x = -104, .y = -56, .numActions = 0, .actions = 0}
};
static PathPoint path428_points[] = {
{.x = 0, .y = -48, .numActions = 0, .actions = 0},
{.x = -48, .y = -48, .numActions = 0, .actions = 0},
{.x = -72, .y = -72, .numActions = 0, .actions = 0},
{.x = -104, .y = -72, .numActions = 0, .actions = 0}
};
static PathPoint path429_points[] = {
{.x = 0, .y = -56, .numActions = 0, .actions = 0},
{.x = -56, .y = -56, .numActions = 0, .actions = 0},
{.x = -88, .y = -88, .numActions = 0, .actions = 0},
{.x = -104, .y = -88, .numActions = 0, .actions = 0}
};
static GObjPathPointFunction path430_3_actions[] = {
faceRight
};
static PathPoint path430_points[] = {
{.x = 0, .y = -64, .numActions = 0, .actions = 0},
{.x = -64, .y = -64, .numActions = 0, .actions = 0},
{.x = -96, .y = -96, .numActions = 0, .actions = 0},
{.x = -96, .y = -104, .numActions = 1, .actions = path430_3_actions},
{.x = -88, .y = -112, .numActions = 0, .actions = 0}
};
static GObjPathPointFunction path431_3_actions[] = {
faceRight
};
static PathPoint path431_points[] = {
{.x = 0, .y = -72, .numActions = 0, .actions = 0},
{.x = -72, .y = -72, .numActions = 0, .actions = 0},
{.x = -96, .y = -96, .numActions = 0, .actions = 0},
{.x = -96, .y = -104, .numActions = 1, .actions = path431_3_actions},
{.x = -88, .y = -112, .numActions = 0, .actions = 0}
};
static Path room1ants1_paths[] = {
{.x = 264, .y = 4056, .numPoints = 4, .points = path427_points},
{.x = 272, .y = 4064, .numPoints = 4, .points = path428_points},
{.x = 280, .y = 4072, .numPoints = 4, .points = path429_points},
{.x = 288, .y = 4080, .numPoints = 5, .points = path430_points},
{.x = 296, .y = 4088, .numPoints = 5, .points = path431_points}
};
static LevelObject room1ants1_objects[] = {
{.definition = &defAnt, .x = 264, .y = 4016, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = 272, .y = 4016, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = 280, .y = 4016, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = 296, .y = 4016, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = 288, .y = 4016, .animInd = 0, .flags = 34816}
};
static LevelObjectGroup room1ants1 = {
    .numTriggers = 1, .triggers = room1ants1_triggers,
    .numPaths = 5, .paths = room1ants1_paths,
    .numObjects = 5, .objects = room1ants1_objects
};
// room1ants2
static Trigger room1ants2_triggers[] = {
{.y = 3960, .action = spawnCharacters}
};
static PathPoint path435_points[] = {
{.x = 0, .y = -40, .numActions = 0, .actions = 0},
{.x = 56, .y = -40, .numActions = 0, .actions = 0},
{.x = 72, .y = -56, .numActions = 0, .actions = 0},
{.x = 104, .y = -56, .numActions = 0, .actions = 0}
};
static PathPoint path436_points[] = {
{.x = 0, .y = -32, .numActions = 0, .actions = 0},
{.x = 56, .y = -32, .numActions = 0, .actions = 0},
{.x = 80, .y = -56, .numActions = 0, .actions = 0},
{.x = 104, .y = -56, .numActions = 0, .actions = 0}
};
static PathPoint path437_points[] = {
{.x = 0, .y = -24, .numActions = 0, .actions = 0},
{.x = 56, .y = -24, .numActions = 0, .actions = 0},
{.x = 88, .y = -56, .numActions = 0, .actions = 0},
{.x = 112, .y = -56, .numActions = 0, .actions = 0}
};
static PathPoint path438_points[] = {
{.x = 0, .y = -32, .numActions = 0, .actions = 0},
{.x = 56, .y = -32, .numActions = 0, .actions = 0},
{.x = 88, .y = -64, .numActions = 0, .actions = 0}
};
static PathPoint path439_points[] = {
{.x = 0, .y = -40, .numActions = 0, .actions = 0},
{.x = 56, .y = -40, .numActions = 0, .actions = 0},
{.x = 88, .y = -72, .numActions = 0, .actions = 0},
{.x = 88, .y = -80, .numActions = 0, .actions = 0}
};
static Path room1ants2_paths[] = {
{.x = -8, .y = 4032, .numPoints = 4, .points = path435_points},
{.x = -16, .y = 4024, .numPoints = 4, .points = path436_points},
{.x = -24, .y = 4016, .numPoints = 4, .points = path437_points},
{.x = -32, .y = 4024, .numPoints = 3, .points = path438_points},
{.x = -40, .y = 4032, .numPoints = 4, .points = path439_points}
};
static LevelObject room1ants2_objects[] = {
{.definition = &defAnt, .x = -16, .y = 3992, .animInd = 0, .flags = 32768},
{.definition = &defAnt, .x = -24, .y = 3992, .animInd = 0, .flags = 32768},
{.definition = &defAnt, .x = -40, .y = 3992, .animInd = 0, .flags = 32768},
{.definition = &defAnt, .x = -8, .y = 3992, .animInd = 0, .flags = 32768},
{.definition = &defAnt, .x = -32, .y = 3992, .animInd = 0, .flags = 32768}
};
static LevelObjectGroup room1ants2 = {
    .numTriggers = 1, .triggers = room1ants2_triggers,
    .numPaths = 5, .paths = room1ants2_paths,
    .numObjects = 5, .objects = room1ants2_objects
};
// room1ants3
static Trigger room1ants3_triggers[] = {
{.y = 3904, .action = spawnCharacters}
};
static PathPoint path1_points[] = {
{.x = -8, .y = 0, .numActions = 0, .actions = 0},
{.x = 8, .y = 0, .numActions = 0, .actions = 0},
{.x = 24, .y = -8, .numActions = 0, .actions = 0},
{.x = 88, .y = -8, .numActions = 0, .actions = 0},
{.x = 136, .y = -32, .numActions = 0, .actions = 0},
{.x = 200, .y = -32, .numActions = 0, .actions = 0},
{.x = 232, .y = -48, .numActions = 0, .actions = 0},
{.x = 272, .y = -48, .numActions = 0, .actions = 0}
};
static Path room1ants3_paths[] = {
{.x = 0, .y = 3912, .numPoints = 8, .points = path1_points}
};
static LevelObject room1ants3_objects[] = {
{.definition = &defAnt, .x = -8, .y = 3912, .animInd = 0, .flags = 32768},
{.definition = &defAnt, .x = -168, .y = 3912, .animInd = 0, .flags = 32768},
{.definition = &defAnt, .x = -88, .y = 3912, .animInd = 0, .flags = 32768},
{.definition = &defAnt, .x = -24, .y = 3912, .animInd = 0, .flags = 32768},
{.definition = &defAnt, .x = -184, .y = 3912, .animInd = 0, .flags = 32768},
{.definition = &defAnt, .x = -104, .y = 3912, .animInd = 0, .flags = 32768},
{.definition = &defAnt, .x = -40, .y = 3912, .animInd = 0, .flags = 32768},
{.definition = &defAnt, .x = -200, .y = 3912, .animInd = 0, .flags = 32768},
{.definition = &defAnt, .x = -120, .y = 3912, .animInd = 0, .flags = 32768},
{.definition = &defAnt, .x = -56, .y = 3912, .animInd = 0, .flags = 32768},
{.definition = &defAnt, .x = -216, .y = 3912, .animInd = 0, .flags = 32768},
{.definition = &defAnt, .x = -136, .y = 3912, .animInd = 0, .flags = 32768},
{.definition = &defAnt, .x = -72, .y = 3912, .animInd = 0, .flags = 32768},
{.definition = &defAnt, .x = -232, .y = 3912, .animInd = 0, .flags = 32768},
{.definition = &defAnt, .x = -152, .y = 3912, .animInd = 0, .flags = 32768}
};
static LevelObjectGroup room1ants3 = {
    .numTriggers = 1, .triggers = room1ants3_triggers,
    .numPaths = 1, .paths = room1ants3_paths,
    .numObjects = 15, .objects = room1ants3_objects
};
// room1ants4
static Trigger room1ants4_triggers[] = {
{.y = 3832, .action = spawnCharacters}
};
static PathPoint path64_points[] = {
{.x = 0, .y = 0, .numActions = 0, .actions = 0},
{.x = -32, .y = 0, .numActions = 0, .actions = 0},
{.x = -64, .y = -16, .numActions = 0, .actions = 0},
{.x = -168, .y = -16, .numActions = 0, .actions = 0},
{.x = -232, .y = -48, .numActions = 0, .actions = 0},
{.x = -280, .y = -48, .numActions = 0, .actions = 0}
};
static PathPoint path81_points[] = {
{.x = -8, .y = 0, .numActions = 0, .actions = 0},
{.x = -40, .y = 0, .numActions = 0, .actions = 0},
{.x = -72, .y = 16, .numActions = 0, .actions = 0},
{.x = -144, .y = 16, .numActions = 0, .actions = 0},
{.x = -160, .y = 24, .numActions = 0, .actions = 0},
{.x = -248, .y = 24, .numActions = 0, .actions = 0},
{.x = -264, .y = 32, .numActions = 0, .actions = 0},
{.x = -280, .y = 32, .numActions = 0, .actions = 0}
};
static Path room1ants4_paths[] = {
{.x = 264, .y = 3840, .numPoints = 6, .points = path64_points},
{.x = 272, .y = 3880, .numPoints = 8, .points = path81_points}
};
static LevelObject room1ants4_objects[] = {
{.definition = &defAnt, .x = 264, .y = 3840, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = 264, .y = 3880, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = 424, .y = 3840, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = 424, .y = 3880, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = 344, .y = 3840, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = 344, .y = 3880, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = 280, .y = 3840, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = 280, .y = 3880, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = 440, .y = 3840, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = 440, .y = 3880, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = 360, .y = 3840, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = 360, .y = 3880, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = 296, .y = 3840, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = 296, .y = 3880, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = 456, .y = 3840, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = 456, .y = 3880, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = 376, .y = 3840, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = 376, .y = 3880, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = 312, .y = 3840, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = 312, .y = 3880, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = 472, .y = 3840, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = 472, .y = 3880, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = 392, .y = 3840, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = 392, .y = 3880, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = 328, .y = 3840, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = 328, .y = 3880, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = 488, .y = 3840, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = 488, .y = 3880, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = 408, .y = 3840, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = 408, .y = 3880, .animInd = 0, .flags = 34816}
};
static LevelObjectGroup room1ants4 = {
    .numTriggers = 1, .triggers = room1ants4_triggers,
    .numPaths = 2, .paths = room1ants4_paths,
    .numObjects = 30, .objects = room1ants4_objects
};
// room1powerup
static Trigger room1powerup_triggers[] = {
{.y = 3768, .action = spawnCharacters}
};
static LevelObject room1powerup_objects[] = {
{.definition = &defHoneyPot, .x = 80, .y = 3752, .animInd = 0, .flags = 32768}
};
static LevelObjectGroup room1powerup = {
    .numTriggers = 1, .triggers = room1powerup_triggers,
    .numPaths = 0, .paths = 0,
    .numObjects = 1, .objects = room1powerup_objects
};
// room2ants1
static Trigger room2ants1_triggers[] = {
{.y = 3680, .action = spawnCharacters}
};
static PathPoint path108_points[] = {
{.x = 0, .y = 0, .numActions = 0, .actions = 0},
{.x = 80, .y = 24, .numActions = 0, .actions = 0}
};
static PathPoint path123_points[] = {
{.x = 0, .y = -8, .numActions = 0, .actions = 0},
{.x = 88, .y = 24, .numActions = 0, .actions = 0}
};
static PathPoint path118_points[] = {
{.x = 0, .y = -8, .numActions = 0, .actions = 0},
{.x = -72, .y = -8, .numActions = 0, .actions = 0}
};
static PathPoint path125_points[] = {
{.x = 0, .y = -16, .numActions = 0, .actions = 0},
{.x = -72, .y = -8, .numActions = 0, .actions = 0}
};
static PathPoint path109_points[] = {
{.x = 0, .y = 8, .numActions = 0, .actions = 0},
{.x = 72, .y = 24, .numActions = 0, .actions = 0}
};
static PathPoint path117_points[] = {
{.x = 0, .y = 0, .numActions = 0, .actions = 0},
{.x = -88, .y = -8, .numActions = 0, .actions = 0}
};
static PathPoint path111_points[] = {
{.x = 0, .y = 16, .numActions = 0, .actions = 0},
{.x = 72, .y = 24, .numActions = 0, .actions = 0}
};
static PathPoint path116_points[] = {
{.x = 0, .y = 8, .numActions = 0, .actions = 0},
{.x = -88, .y = -8, .numActions = 0, .actions = 0}
};
static PathPoint path113_points[] = {
{.x = 0, .y = 24, .numActions = 0, .actions = 0},
{.x = 80, .y = 24, .numActions = 0, .actions = 0}
};
static PathPoint path115_points[] = {
{.x = 0, .y = 16, .numActions = 0, .actions = 0},
{.x = -88, .y = -8, .numActions = 0, .actions = 0}
};
static Path room2ants1_paths[] = {
{.x = -8, .y = 3632, .numPoints = 2, .points = path108_points},
{.x = -8, .y = 3616, .numPoints = 2, .points = path123_points},
{.x = 264, .y = 3672, .numPoints = 2, .points = path118_points},
{.x = 264, .y = 3656, .numPoints = 2, .points = path125_points},
{.x = -8, .y = 3648, .numPoints = 2, .points = path109_points},
{.x = 264, .y = 3688, .numPoints = 2, .points = path117_points},
{.x = -8, .y = 3664, .numPoints = 2, .points = path111_points},
{.x = 264, .y = 3704, .numPoints = 2, .points = path116_points},
{.x = -8, .y = 3680, .numPoints = 2, .points = path113_points},
{.x = 264, .y = 3720, .numPoints = 2, .points = path115_points}
};
static LevelObject room2ants1_objects[] = {
{.definition = &defAnt, .x = -8, .y = 3632, .animInd = 0, .flags = 32768},
{.definition = &defAnt, .x = -8, .y = 3608, .animInd = 0, .flags = 32768},
{.definition = &defAnt, .x = 264, .y = 3664, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = 264, .y = 3640, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = -8, .y = 3656, .animInd = 0, .flags = 32768},
{.definition = &defAnt, .x = 264, .y = 3688, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = -8, .y = 3680, .animInd = 0, .flags = 32768},
{.definition = &defAnt, .x = 264, .y = 3712, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = -8, .y = 3704, .animInd = 0, .flags = 32768},
{.definition = &defAnt, .x = 264, .y = 3736, .animInd = 0, .flags = 34816}
};
static LevelObjectGroup room2ants1 = {
    .numTriggers = 1, .triggers = room2ants1_triggers,
    .numPaths = 10, .paths = room2ants1_paths,
    .numObjects = 10, .objects = room2ants1_objects
};
// room2ants2
static Trigger room2ants2_triggers[] = {
{.y = 3616, .action = spawnCharacters}
};
static PathPoint path141_points[] = {
{.x = 0, .y = 16, .numActions = 0, .actions = 0},
{.x = 88, .y = 24, .numActions = 0, .actions = 0}
};
static PathPoint path142_points[] = {
{.x = 0, .y = 8, .numActions = 0, .actions = 0},
{.x = 88, .y = 24, .numActions = 0, .actions = 0}
};
static PathPoint path143_points[] = {
{.x = 0, .y = 8, .numActions = 0, .actions = 0},
{.x = -72, .y = -8, .numActions = 0, .actions = 0}
};
static PathPoint path144_points[] = {
{.x = 0, .y = 0, .numActions = 0, .actions = 0},
{.x = -72, .y = -8, .numActions = 0, .actions = 0}
};
static PathPoint path145_points[] = {
{.x = 0, .y = 24, .numActions = 0, .actions = 0},
{.x = 72, .y = 24, .numActions = 0, .actions = 0}
};
static PathPoint path146_points[] = {
{.x = 0, .y = 16, .numActions = 0, .actions = 0},
{.x = -80, .y = -8, .numActions = 0, .actions = 0}
};
static PathPoint path147_points[] = {
{.x = 0, .y = 32, .numActions = 0, .actions = 0},
{.x = 72, .y = 24, .numActions = 0, .actions = 0}
};
static PathPoint path148_points[] = {
{.x = 0, .y = 24, .numActions = 0, .actions = 0},
{.x = -88, .y = -8, .numActions = 0, .actions = 0}
};
static PathPoint path149_points[] = {
{.x = 0, .y = 40, .numActions = 0, .actions = 0},
{.x = 72, .y = 24, .numActions = 0, .actions = 0}
};
static PathPoint path150_points[] = {
{.x = 0, .y = 32, .numActions = 0, .actions = 0},
{.x = -88, .y = -8, .numActions = 0, .actions = 0}
};
static Path room2ants2_paths[] = {
{.x = -8, .y = 3624, .numPoints = 2, .points = path141_points},
{.x = -8, .y = 3608, .numPoints = 2, .points = path142_points},
{.x = 264, .y = 3664, .numPoints = 2, .points = path143_points},
{.x = 264, .y = 3648, .numPoints = 2, .points = path144_points},
{.x = -8, .y = 3640, .numPoints = 2, .points = path145_points},
{.x = 264, .y = 3680, .numPoints = 2, .points = path146_points},
{.x = -8, .y = 3656, .numPoints = 2, .points = path147_points},
{.x = 264, .y = 3696, .numPoints = 2, .points = path148_points},
{.x = -8, .y = 3672, .numPoints = 2, .points = path149_points},
{.x = 264, .y = 3712, .numPoints = 2, .points = path150_points}
};
static LevelObject room2ants2_objects[] = {
{.definition = &defAnt, .x = -8, .y = 3640, .animInd = 0, .flags = 32768},
{.definition = &defAnt, .x = -8, .y = 3616, .animInd = 0, .flags = 32768},
{.definition = &defAnt, .x = 264, .y = 3672, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = 264, .y = 3648, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = -8, .y = 3664, .animInd = 0, .flags = 32768},
{.definition = &defAnt, .x = 264, .y = 3696, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = -8, .y = 3688, .animInd = 0, .flags = 32768},
{.definition = &defAnt, .x = 264, .y = 3720, .animInd = 0, .flags = 34816},
{.definition = &defAnt, .x = -8, .y = 3712, .animInd = 0, .flags = 32768},
{.definition = &defAnt, .x = 264, .y = 3744, .animInd = 0, .flags = 34816}
};
static LevelObjectGroup room2ants2 = {
    .numTriggers = 1, .triggers = room2ants2_triggers,
    .numPaths = 10, .paths = room2ants2_paths,
    .numObjects = 10, .objects = room2ants2_objects
};
// room2powerup
static Trigger room2powerup_triggers[] = {
{.y = 3576, .action = spawnCharacters}
};
static LevelObject room2powerup_objects[] = {
{.definition = &defHoneyPot, .x = 136, .y = 3568, .animInd = 0, .flags = 32768}
};
static LevelObjectGroup room2powerup = {
    .numTriggers = 1, .triggers = room2powerup_triggers,
    .numPaths = 0, .paths = 0,
    .numObjects = 1, .objects = room2powerup_objects
};
// r3fly1
static Trigger r3fly1_triggers[] = {
{.y = 3544, .action = spawnCharacters}
};
static GObjPathPointFunction path449_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path449_3_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path449_9_actions[] = {
PathPoint_SetSpeed
};
static PathPoint path449_points[] = {
{.x = 64, .y = 112, .numActions = 1, .actions = path449_0_actions},
{.x = 64, .y = 96, .numActions = 0, .actions = 0},
{.x = 72, .y = 80, .numActions = 0, .actions = 0},
{.x = 88, .y = 72, .numActions = 1, .actions = path449_3_actions},
{.x = 104, .y = 80, .numActions = 0, .actions = 0},
{.x = 112, .y = 96, .numActions = 0, .actions = 0},
{.x = 104, .y = 120, .numActions = 0, .actions = 0},
{.x = 88, .y = 136, .numActions = 0, .actions = 0},
{.x = 64, .y = 144, .numActions = 0, .actions = 0},
{.x = 40, .y = 136, .numActions = 1, .actions = path449_9_actions},
{.x = 16, .y = 96, .numActions = 0, .actions = 0},
{.x = -24, .y = 0, .numActions = 0, .actions = 0}
};
static GObjPathPointFunction path450_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path450_3_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path450_9_actions[] = {
PathPoint_SetSpeed
};
static PathPoint path450_points[] = {
{.x = -32, .y = 120, .numActions = 1, .actions = path450_0_actions},
{.x = -32, .y = 104, .numActions = 0, .actions = 0},
{.x = -40, .y = 88, .numActions = 0, .actions = 0},
{.x = -56, .y = 80, .numActions = 1, .actions = path450_3_actions},
{.x = -72, .y = 88, .numActions = 0, .actions = 0},
{.x = -80, .y = 104, .numActions = 0, .actions = 0},
{.x = -72, .y = 128, .numActions = 0, .actions = 0},
{.x = -56, .y = 144, .numActions = 0, .actions = 0},
{.x = -32, .y = 152, .numActions = 0, .actions = 0},
{.x = -8, .y = 144, .numActions = 1, .actions = path450_9_actions},
{.x = 16, .y = 104, .numActions = 0, .actions = 0},
{.x = 56, .y = 8, .numActions = 0, .actions = 0}
};
static Path r3fly1_paths[] = {
{.x = 0, .y = 3504, .numPoints = 12, .points = path449_points},
{.x = 224, .y = 3496, .numPoints = 12, .points = path450_points}
};
static LevelObject r3fly1_objects[] = {
{.definition = &defFly, .x = 64, .y = 3616, .animInd = 0, .flags = 0},
{.definition = &defFly, .x = 192, .y = 3616, .animInd = 0, .flags = 2048}
};
static LevelObjectGroup r3fly1 = {
    .numTriggers = 1, .triggers = r3fly1_triggers,
    .numPaths = 2, .paths = r3fly1_paths,
    .numObjects = 2, .objects = r3fly1_objects
};
// room3fly3
static Trigger room3fly3_triggers[] = {
{.y = 3448, .action = spawnCharacters}
};
static GObjPathPointFunction path102_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path102_1_actions[] = {
0 /* to be assigned */
};
static PathPoint path102_points[] = {
{.x = 104, .y = 88, .numActions = 1, .actions = path102_0_actions},
{.x = 88, .y = 72, .numActions = 1, .actions = path102_1_actions},
{.x = 80, .y = 72, .numActions = 0, .actions = 0},
{.x = 72, .y = 88, .numActions = 0, .actions = 0},
{.x = 64, .y = 112, .numActions = 0, .actions = 0},
{.x = 56, .y = 120, .numActions = 0, .actions = 0},
{.x = 48, .y = 112, .numActions = 0, .actions = 0},
{.x = 40, .y = 88, .numActions = 0, .actions = 0},
{.x = 32, .y = 72, .numActions = 0, .actions = 0},
{.x = -40, .y = 0, .numActions = 0, .actions = 0}
};
static GObjPathPointFunction path103_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path103_1_actions[] = {
0 /* to be assigned */
};
static PathPoint path103_points[] = {
{.x = -72, .y = 96, .numActions = 1, .actions = path103_0_actions},
{.x = -56, .y = 80, .numActions = 1, .actions = path103_1_actions},
{.x = -48, .y = 80, .numActions = 0, .actions = 0},
{.x = -40, .y = 96, .numActions = 0, .actions = 0},
{.x = -32, .y = 120, .numActions = 0, .actions = 0},
{.x = -24, .y = 128, .numActions = 0, .actions = 0},
{.x = -16, .y = 120, .numActions = 0, .actions = 0},
{.x = -8, .y = 96, .numActions = 0, .actions = 0},
{.x = 0, .y = 80, .numActions = 0, .actions = 0},
{.x = 72, .y = 8, .numActions = 0, .actions = 0}
};
static Path room3fly3_paths[] = {
{.x = 0, .y = 3408, .numPoints = 10, .points = path102_points},
{.x = 224, .y = 3400, .numPoints = 10, .points = path103_points}
};
static LevelObject room3fly3_objects[] = {
{.definition = &defFly, .x = 104, .y = 3496, .animInd = 0, .flags = 0},
{.definition = &defFly, .x = 152, .y = 3496, .animInd = 0, .flags = 2048}
};
static LevelObjectGroup room3fly3 = {
    .numTriggers = 1, .triggers = room3fly3_triggers,
    .numPaths = 2, .paths = room3fly3_paths,
    .numObjects = 2, .objects = room3fly3_objects
};
// room3fly4
static Trigger room3fly4_triggers[] = {
{.y = 3352, .action = spawnCharacters}
};
static GObjPathPointFunction path398_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path398_2_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path398_7_actions[] = {
0 /* to be assigned */
};
static PathPoint path398_points[] = {
{.x = 72, .y = -16, .numActions = 1, .actions = path398_0_actions},
{.x = 64, .y = -32, .numActions = 0, .actions = 0},
{.x = 64, .y = -56, .numActions = 1, .actions = path398_2_actions},
{.x = 72, .y = -72, .numActions = 0, .actions = 0},
{.x = 80, .y = -88, .numActions = 0, .actions = 0},
{.x = 88, .y = -112, .numActions = 0, .actions = 0},
{.x = 80, .y = -128, .numActions = 0, .actions = 0},
{.x = 72, .y = -136, .numActions = 1, .actions = path398_7_actions},
{.x = 8, .y = -200, .numActions = 0, .actions = 0}
};
static GObjPathPointFunction path399_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path399_2_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path399_7_actions[] = {
0 /* to be assigned */
};
static PathPoint path399_points[] = {
{.x = -72, .y = -16, .numActions = 1, .actions = path399_0_actions},
{.x = -64, .y = -32, .numActions = 0, .actions = 0},
{.x = -64, .y = -56, .numActions = 1, .actions = path399_2_actions},
{.x = -72, .y = -72, .numActions = 0, .actions = 0},
{.x = -80, .y = -88, .numActions = 0, .actions = 0},
{.x = -88, .y = -112, .numActions = 0, .actions = 0},
{.x = -80, .y = -128, .numActions = 0, .actions = 0},
{.x = -72, .y = -136, .numActions = 1, .actions = path399_7_actions},
{.x = -8, .y = -200, .numActions = 0, .actions = 0}
};
static Path room3fly4_paths[] = {
{.x = -32, .y = 3560, .numPoints = 9, .points = path398_points},
{.x = 288, .y = 3560, .numPoints = 9, .points = path399_points}
};
static LevelObject room3fly4_objects[] = {
{.definition = &defFly, .x = 40, .y = 3544, .animInd = 0, .flags = 0},
{.definition = &defFly, .x = 216, .y = 3544, .animInd = 0, .flags = 2048}
};
static LevelObjectGroup room3fly4 = {
    .numTriggers = 1, .triggers = room3fly4_triggers,
    .numPaths = 2, .paths = room3fly4_paths,
    .numObjects = 2, .objects = room3fly4_objects
};
// r4fly1
static Trigger r4fly1_triggers[] = {
{.y = 3168, .action = spawnCharacters}
};
static GObjPathPointFunction path229_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path229_3_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path229_5_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path229_6_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path229_9_actions[] = {
0 /* to be assigned */
};
static PathPoint path229_points[] = {
{.x = 0, .y = 88, .numActions = 1, .actions = path229_0_actions},
{.x = 48, .y = 48, .numActions = 0, .actions = 0},
{.x = 88, .y = 32, .numActions = 0, .actions = 0},
{.x = 120, .y = 32, .numActions = 1, .actions = path229_3_actions},
{.x = 144, .y = 40, .numActions = 0, .actions = 0},
{.x = 160, .y = 48, .numActions = 1, .actions = path229_5_actions},
{.x = 168, .y = 64, .numActions = 1, .actions = path229_6_actions},
{.x = 168, .y = 72, .numActions = 0, .actions = 0},
{.x = 160, .y = 80, .numActions = 0, .actions = 0},
{.x = 144, .y = 88, .numActions = 1, .actions = path229_9_actions},
{.x = 104, .y = 96, .numActions = 0, .actions = 0},
{.x = 72, .y = 112, .numActions = 0, .actions = 0},
{.x = 48, .y = 144, .numActions = 0, .actions = 0},
{.x = 40, .y = 184, .numActions = 0, .actions = 0},
{.x = 40, .y = 224, .numActions = 0, .actions = 0},
{.x = 56, .y = 264, .numActions = 0, .actions = 0},
{.x = 88, .y = 296, .numActions = 0, .actions = 0},
{.x = 160, .y = 336, .numActions = 0, .actions = 0}
};
static Path r4fly1_paths[] = {
{.x = -16, .y = 3144, .numPoints = 18, .points = path229_points}
};
static LevelObject r4fly1_objects[] = {
{.definition = &defFly, .x = -16, .y = 3224, .animInd = 0, .flags = 0}
};
static LevelObjectGroup r4fly1 = {
    .numTriggers = 1, .triggers = r4fly1_triggers,
    .numPaths = 1, .paths = r4fly1_paths,
    .numObjects = 1, .objects = r4fly1_objects
};
// room4powerup
static Trigger room4powerup_triggers[] = {
{.y = 3192, .action = spawnCharacters}
};
static LevelObject room4powerup_objects[] = {
{.definition = &defHoneyCell, .x = 192, .y = 3184, .animInd = 4, .flags = 32768}
};
static LevelObjectGroup room4powerup = {
    .numTriggers = 1, .triggers = room4powerup_triggers,
    .numPaths = 0, .paths = 0,
    .numObjects = 1, .objects = room4powerup_objects
};
// room5fly1
static Trigger room5fly1_triggers[] = {
{.y = 3064, .action = spawnCharacters}
};
static GObjPathPointFunction path386_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path386_3_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path386_5_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path386_6_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path386_7_actions[] = {
0 /* to be assigned */
};
static PathPoint path386_points[] = {
{.x = 0, .y = 88, .numActions = 1, .actions = path386_0_actions},
{.x = -32, .y = 72, .numActions = 0, .actions = 0},
{.x = -80, .y = 64, .numActions = 0, .actions = 0},
{.x = -120, .y = 56, .numActions = 1, .actions = path386_3_actions},
{.x = -160, .y = 32, .numActions = 0, .actions = 0},
{.x = -168, .y = 16, .numActions = 1, .actions = path386_5_actions},
{.x = -160, .y = -8, .numActions = 1, .actions = path386_6_actions},
{.x = -136, .y = -16, .numActions = 1, .actions = path386_7_actions},
{.x = -88, .y = -8, .numActions = 0, .actions = 0},
{.x = -56, .y = 24, .numActions = 0, .actions = 0},
{.x = -40, .y = 64, .numActions = 0, .actions = 0},
{.x = -24, .y = 112, .numActions = 0, .actions = 0},
{.x = -24, .y = 168, .numActions = 0, .actions = 0},
{.x = -16, .y = 208, .numActions = 0, .actions = 0}
};
static Path room5fly1_paths[] = {
{.x = 272, .y = 3104, .numPoints = 14, .points = path386_points}
};
static LevelObject room5fly1_objects[] = {
{.definition = &defFly, .x = 272, .y = 3192, .animInd = 0, .flags = 2048}
};
static LevelObjectGroup room5fly1 = {
    .numTriggers = 1, .triggers = room5fly1_triggers,
    .numPaths = 1, .paths = room5fly1_paths,
    .numObjects = 1, .objects = room5fly1_objects
};
// r5powerup
static Trigger r5powerup_triggers[] = {
{.y = 3064, .action = spawnCharacters}
};
static LevelObject r5powerup_objects[] = {
{.definition = &defHoneyCell, .x = 64, .y = 3056, .animInd = 4, .flags = 32768}
};
static LevelObjectGroup r5powerup = {
    .numTriggers = 1, .triggers = r5powerup_triggers,
    .numPaths = 0, .paths = 0,
    .numObjects = 1, .objects = r5powerup_objects
};
// room6fly
static Trigger room6fly_triggers[] = {
{.y = 2816, .action = spawnCharacters}
};
static GObjPathPointFunction path152_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path152_1_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path152_3_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path152_5_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path152_6_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path152_8_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path152_11_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path152_13_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path152_14_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path152_16_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path152_18_actions[] = {
0 /* to be assigned */
};
static PathPoint path152_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path152_0_actions},
{.x = -152, .y = 0, .numActions = 1, .actions = path152_1_actions},
{.x = -176, .y = 8, .numActions = 0, .actions = 0},
{.x = -200, .y = 24, .numActions = 1, .actions = path152_3_actions},
{.x = -216, .y = 48, .numActions = 0, .actions = 0},
{.x = -224, .y = 80, .numActions = 1, .actions = path152_5_actions},
{.x = -216, .y = 112, .numActions = 1, .actions = path152_6_actions},
{.x = -200, .y = 136, .numActions = 0, .actions = 0},
{.x = -176, .y = 152, .numActions = 1, .actions = path152_8_actions},
{.x = -152, .y = 160, .numActions = 0, .actions = 0},
{.x = -136, .y = 160, .numActions = 0, .actions = 0},
{.x = -112, .y = 152, .numActions = 1, .actions = path152_11_actions},
{.x = -88, .y = 136, .numActions = 0, .actions = 0},
{.x = -72, .y = 112, .numActions = 1, .actions = path152_13_actions},
{.x = -64, .y = 80, .numActions = 1, .actions = path152_14_actions},
{.x = -72, .y = 48, .numActions = 0, .actions = 0},
{.x = -88, .y = 24, .numActions = 1, .actions = path152_16_actions},
{.x = -112, .y = 8, .numActions = 0, .actions = 0},
{.x = -136, .y = 0, .numActions = 1, .actions = path152_18_actions},
{.x = -288, .y = 0, .numActions = 0, .actions = 0}
};
static Path room6fly_paths[] = {
{.x = 272, .y = 2832, .numPoints = 20, .points = path152_points}
};
static LevelObject room6fly_objects[] = {
{.definition = &defFly, .x = 272, .y = 2832, .animInd = 0, .flags = 2048}
};
static LevelObjectGroup room6fly = {
    .numTriggers = 1, .triggers = room6fly_triggers,
    .numPaths = 1, .paths = room6fly_paths,
    .numObjects = 1, .objects = room6fly_objects
};
// room5bigant
static Trigger room5bigant_triggers[] = {
{.y = 3472, .action = spawnCharacters}
};
static GObjPathPointFunction path177_5_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path177_9_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path177_13_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path177_17_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path177_21_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path177_23_actions[] = {
0 /* to be assigned */
};
static PathPoint path177_points[] = {
{.x = 0, .y = 0, .numActions = 0, .actions = 0},
{.x = 24, .y = 24, .numActions = 0, .actions = 0},
{.x = 24, .y = 32, .numActions = 0, .actions = 0},
{.x = 0, .y = 56, .numActions = 0, .actions = 0},
{.x = -32, .y = 64, .numActions = 0, .actions = 0},
{.x = -56, .y = 88, .numActions = 1, .actions = path177_5_actions},
{.x = -56, .y = 96, .numActions = 0, .actions = 0},
{.x = -32, .y = 120, .numActions = 0, .actions = 0},
{.x = 0, .y = 128, .numActions = 0, .actions = 0},
{.x = 24, .y = 152, .numActions = 1, .actions = path177_9_actions},
{.x = 24, .y = 160, .numActions = 0, .actions = 0},
{.x = 0, .y = 184, .numActions = 0, .actions = 0},
{.x = -32, .y = 192, .numActions = 0, .actions = 0},
{.x = -56, .y = 216, .numActions = 1, .actions = path177_13_actions},
{.x = -56, .y = 224, .numActions = 0, .actions = 0},
{.x = -32, .y = 248, .numActions = 0, .actions = 0},
{.x = 0, .y = 256, .numActions = 0, .actions = 0},
{.x = 24, .y = 280, .numActions = 1, .actions = path177_17_actions},
{.x = 24, .y = 288, .numActions = 0, .actions = 0},
{.x = 0, .y = 312, .numActions = 0, .actions = 0},
{.x = -32, .y = 320, .numActions = 0, .actions = 0},
{.x = -56, .y = 344, .numActions = 1, .actions = path177_21_actions},
{.x = -56, .y = 352, .numActions = 0, .actions = 0},
{.x = -32, .y = 376, .numActions = 1, .actions = path177_23_actions}
};
static GObjPathPointFunction path244_5_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path244_9_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path244_13_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path244_17_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path244_21_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path244_23_actions[] = {
0 /* to be assigned */
};
static PathPoint path244_points[] = {
{.x = 0, .y = 0, .numActions = 0, .actions = 0},
{.x = -24, .y = 24, .numActions = 0, .actions = 0},
{.x = -24, .y = 32, .numActions = 0, .actions = 0},
{.x = 0, .y = 56, .numActions = 0, .actions = 0},
{.x = 32, .y = 64, .numActions = 0, .actions = 0},
{.x = 56, .y = 88, .numActions = 1, .actions = path244_5_actions},
{.x = 56, .y = 96, .numActions = 0, .actions = 0},
{.x = 32, .y = 120, .numActions = 0, .actions = 0},
{.x = 0, .y = 128, .numActions = 0, .actions = 0},
{.x = -24, .y = 152, .numActions = 1, .actions = path244_9_actions},
{.x = -24, .y = 160, .numActions = 0, .actions = 0},
{.x = 0, .y = 184, .numActions = 0, .actions = 0},
{.x = 32, .y = 192, .numActions = 0, .actions = 0},
{.x = 56, .y = 216, .numActions = 1, .actions = path244_13_actions},
{.x = 56, .y = 224, .numActions = 0, .actions = 0},
{.x = 32, .y = 248, .numActions = 0, .actions = 0},
{.x = 0, .y = 256, .numActions = 0, .actions = 0},
{.x = -24, .y = 280, .numActions = 1, .actions = path244_17_actions},
{.x = -24, .y = 288, .numActions = 0, .actions = 0},
{.x = 0, .y = 312, .numActions = 0, .actions = 0},
{.x = 32, .y = 320, .numActions = 0, .actions = 0},
{.x = 56, .y = 344, .numActions = 1, .actions = path244_21_actions},
{.x = 56, .y = 352, .numActions = 0, .actions = 0},
{.x = 32, .y = 376, .numActions = 1, .actions = path244_23_actions}
};
static Path room5bigant_paths[] = {
{.x = 208, .y = 2936, .numPoints = 24, .points = path177_points},
{.x = 48, .y = 2936, .numPoints = 24, .points = path244_points}
};
static LevelObject room5bigant_objects[] = {
{.definition = &defAntBig, .x = 64, .y = 2928, .animInd = 0, .flags = 32768},
{.definition = &defAntBig, .x = 192, .y = 2928, .animInd = 0, .flags = 34816}
};
static LevelObjectGroup room5bigant = {
    .numTriggers = 1, .triggers = room5bigant_triggers,
    .numPaths = 2, .paths = room5bigant_paths,
    .numObjects = 2, .objects = room5bigant_objects
};
// room6bigant
static Trigger room6bigant_triggers[] = {
{.y = 2944, .action = spawnCharacters}
};
static GObjPathPointFunction path472_1_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path472_2_actions[] = {
0 /* to be assigned */
};
static PathPoint path472_points[] = {
{.x = 8, .y = -16, .numActions = 0, .actions = 0},
{.x = 8, .y = 144, .numActions = 1, .actions = path472_1_actions},
{.x = -16, .y = 168, .numActions = 1, .actions = path472_2_actions}
};
static GObjPathPointFunction path475_1_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path475_2_actions[] = {
0 /* to be assigned */
};
static PathPoint path475_points[] = {
{.x = 8, .y = -16, .numActions = 0, .actions = 0},
{.x = 8, .y = 144, .numActions = 1, .actions = path475_1_actions},
{.x = 32, .y = 168, .numActions = 1, .actions = path475_2_actions}
};
static Path room6bigant_paths[] = {
{.x = 28, .y = 2736, .numPoints = 3, .points = path472_points},
{.x = 212, .y = 2736, .numPoints = 3, .points = path475_points}
};
static LevelObject room6bigant_objects[] = {
{.definition = &defAntBig, .x = 216, .y = 2704, .animInd = 0, .flags = 32768},
{.definition = &defAntBig, .x = 40, .y = 2704, .animInd = 0, .flags = 34816}
};
static LevelObjectGroup room6bigant = {
    .numTriggers = 1, .triggers = room6bigant_triggers,
    .numPaths = 2, .paths = room6bigant_paths,
    .numObjects = 2, .objects = room6bigant_objects
};
// room7alien1
static Trigger room7alien1_triggers[] = {
{.y = 2504, .action = spawnCharacters}
};
static GObjPathPointFunction path282_2_actions[] = {
0 /* to be assigned */
};
static PathPoint path282_points[] = {
{.x = 0, .y = 0, .numActions = 0, .actions = 0},
{.x = 8, .y = 16, .numActions = 0, .actions = 0},
{.x = 16, .y = 40, .numActions = 1, .actions = path282_2_actions}
};
static Path room7alien1_paths[] = {
{.x = 112, .y = 2496, .numPoints = 3, .points = path282_points}
};
static LevelObject room7alien1_objects[] = {
{.definition = &defAlienGunner, .x = 112, .y = 2496, .animInd = 0, .flags = 32768},
{.definition = &defHoneyPot, .x = 128, .y = 2472, .animInd = 0, .flags = 32768}
};
static LevelObjectGroup room7alien1 = {
    .numTriggers = 1, .triggers = room7alien1_triggers,
    .numPaths = 1, .paths = room7alien1_paths,
    .numObjects = 2, .objects = room7alien1_objects
};
// room7alien2
static Trigger room7alien2_triggers[] = {
{.y = 2448, .action = spawnCharacters}
};
static GObjPathPointFunction path292_2_actions[] = {
0 /* to be assigned */
};
static PathPoint path292_points[] = {
{.x = 0, .y = 0, .numActions = 0, .actions = 0},
{.x = 8, .y = 16, .numActions = 0, .actions = 0},
{.x = 16, .y = 40, .numActions = 1, .actions = path292_2_actions}
};
static GObjPathPointFunction path295_2_actions[] = {
0 /* to be assigned */
};
static PathPoint path295_points[] = {
{.x = 32, .y = 0, .numActions = 0, .actions = 0},
{.x = 24, .y = 16, .numActions = 0, .actions = 0},
{.x = 16, .y = 40, .numActions = 1, .actions = path295_2_actions}
};
static Path room7alien2_paths[] = {
{.x = 48, .y = 2440, .numPoints = 3, .points = path292_points},
{.x = 176, .y = 2440, .numPoints = 3, .points = path295_points}
};
static LevelObject room7alien2_objects[] = {
{.definition = &defAlienGunner, .x = 48, .y = 2440, .animInd = 0, .flags = 32768},
{.definition = &defAlienGunner, .x = 208, .y = 2440, .animInd = 0, .flags = 34816}
};
static LevelObjectGroup room7alien2 = {
    .numTriggers = 1, .triggers = room7alien2_triggers,
    .numPaths = 2, .paths = room7alien2_paths,
    .numObjects = 2, .objects = room7alien2_objects
};
// room7alien3
static Trigger room7alien3_triggers[] = {
{.y = 2432, .action = spawnCharacters}
};
static GObjPathPointFunction path344_3_actions[] = {
0 /* to be assigned */
};
static PathPoint path344_points[] = {
{.x = 0, .y = 0, .numActions = 0, .actions = 0},
{.x = 72, .y = -64, .numActions = 0, .actions = 0},
{.x = 104, .y = -64, .numActions = 0, .actions = 0},
{.x = 120, .y = -48, .numActions = 1, .actions = path344_3_actions}
};
static GObjPathPointFunction path345_3_actions[] = {
0 /* to be assigned */
};
static PathPoint path345_points[] = {
{.x = 0, .y = 0, .numActions = 0, .actions = 0},
{.x = 72, .y = -64, .numActions = 0, .actions = 0},
{.x = 104, .y = -64, .numActions = 0, .actions = 0},
{.x = 120, .y = -48, .numActions = 1, .actions = path345_3_actions}
};
static GObjPathPointFunction path346_3_actions[] = {
0 /* to be assigned */
};
static PathPoint path346_points[] = {
{.x = 0, .y = 0, .numActions = 0, .actions = 0},
{.x = 72, .y = -64, .numActions = 0, .actions = 0},
{.x = 104, .y = -64, .numActions = 0, .actions = 0},
{.x = 120, .y = -48, .numActions = 1, .actions = path346_3_actions}
};
static GObjPathPointFunction path347_3_actions[] = {
0 /* to be assigned */
};
static PathPoint path347_points[] = {
{.x = 240, .y = 0, .numActions = 0, .actions = 0},
{.x = 168, .y = -64, .numActions = 0, .actions = 0},
{.x = 136, .y = -64, .numActions = 0, .actions = 0},
{.x = 120, .y = -48, .numActions = 1, .actions = path347_3_actions}
};
static GObjPathPointFunction path348_3_actions[] = {
0 /* to be assigned */
};
static PathPoint path348_points[] = {
{.x = 240, .y = 0, .numActions = 0, .actions = 0},
{.x = 168, .y = -64, .numActions = 0, .actions = 0},
{.x = 136, .y = -64, .numActions = 0, .actions = 0},
{.x = 120, .y = -48, .numActions = 1, .actions = path348_3_actions}
};
static GObjPathPointFunction path349_3_actions[] = {
0 /* to be assigned */
};
static PathPoint path349_points[] = {
{.x = 240, .y = 0, .numActions = 0, .actions = 0},
{.x = 168, .y = -64, .numActions = 0, .actions = 0},
{.x = 136, .y = -64, .numActions = 0, .actions = 0},
{.x = 120, .y = -48, .numActions = 1, .actions = path349_3_actions}
};
static Path room7alien3_paths[] = {
{.x = -24, .y = 2528, .numPoints = 4, .points = path344_points},
{.x = -16, .y = 2512, .numPoints = 4, .points = path345_points},
{.x = -8, .y = 2496, .numPoints = 4, .points = path346_points},
{.x = 24, .y = 2496, .numPoints = 4, .points = path347_points},
{.x = 32, .y = 2512, .numPoints = 4, .points = path348_points},
{.x = 40, .y = 2528, .numPoints = 4, .points = path349_points}
};
static LevelObject room7alien3_objects[] = {
{.definition = &defAlienPillager, .x = -8, .y = 2496, .animInd = 6, .flags = 32768},
{.definition = &defAlienPillager, .x = 264, .y = 2496, .animInd = 6, .flags = 34816},
{.definition = &defAlienPillager, .x = -16, .y = 2512, .animInd = 6, .flags = 32768},
{.definition = &defAlienPillager, .x = 272, .y = 2512, .animInd = 6, .flags = 34816},
{.definition = &defAlienPillager, .x = -24, .y = 2528, .animInd = 6, .flags = 32768},
{.definition = &defAlienPillager, .x = 280, .y = 2528, .animInd = 6, .flags = 34816}
};
static LevelObjectGroup room7alien3 = {
    .numTriggers = 1, .triggers = room7alien3_triggers,
    .numPaths = 6, .paths = room7alien3_paths,
    .numObjects = 6, .objects = room7alien3_objects
};
// room8alien1
static Trigger room8alien1_triggers[] = {
{.y = 2376, .action = spawnCharacters}
};
static LevelObject room8alien1_objects[] = {
{.definition = &defAlienPillager, .x = 120, .y = 2368, .animInd = 10, .flags = 32768},
{.definition = &defAlienPillager, .x = 120, .y = 2312, .animInd = 10, .flags = 32768},
{.definition = &defAlienPillager, .x = 112, .y = 2336, .animInd = 10, .flags = 32768},
{.definition = &defAlienPillager, .x = 144, .y = 2360, .animInd = 10, .flags = 34816},
{.definition = &defAlienPillager, .x = 136, .y = 2320, .animInd = 10, .flags = 34816},
{.definition = &defAlienPillager, .x = 144, .y = 2336, .animInd = 10, .flags = 34816},
{.definition = &defAlienPillager, .x = 104, .y = 2352, .animInd = 10, .flags = 32768},
{.definition = &defAlienPillager, .x = 88, .y = 2304, .animInd = 10, .flags = 32768},
{.definition = &defAlienPillager, .x = 96, .y = 2320, .animInd = 10, .flags = 32768},
{.definition = &defAlienPillager, .x = 152, .y = 2344, .animInd = 10, .flags = 34816},
{.definition = &defAlienPillager, .x = 168, .y = 2304, .animInd = 10, .flags = 34816},
{.definition = &defAlienPillager, .x = 160, .y = 2320, .animInd = 10, .flags = 34816}
};
static LevelObjectGroup room8alien1 = {
    .numTriggers = 1, .triggers = room8alien1_triggers,
    .numPaths = 0, .paths = 0,
    .numObjects = 12, .objects = room8alien1_objects
};
// room8alien2
static Trigger room8alien2_triggers[] = {
{.y = 2360, .action = spawnCharacters}
};
static GObjPathPointFunction path512_1_actions[] = {
0 /* to be assigned */
};
static PathPoint path512_points[] = {
{.x = -8, .y = 0, .numActions = 0, .actions = 0},
{.x = -8, .y = 16, .numActions = 1, .actions = path512_1_actions},
{.x = -40, .y = 48, .numActions = 0, .actions = 0},
{.x = -104, .y = 48, .numActions = 0, .actions = 0}
};
static GObjPathPointFunction path515_1_actions[] = {
0 /* to be assigned */
};
static PathPoint path515_points[] = {
{.x = 24, .y = 0, .numActions = 0, .actions = 0},
{.x = 24, .y = 16, .numActions = 1, .actions = path515_1_actions},
{.x = 56, .y = 48, .numActions = 0, .actions = 0},
{.x = 120, .y = 48, .numActions = 0, .actions = 0}
};
static Path room8alien2_paths[] = {
{.x = 88, .y = 2352, .numPoints = 4, .points = path512_points},
{.x = 152, .y = 2352, .numPoints = 4, .points = path515_points}
};
static LevelObject room8alien2_objects[] = {
{.definition = &defAlienGunner, .x = 80, .y = 2352, .animInd = 0, .flags = 32768},
{.definition = &defAlienGunner, .x = 176, .y = 2352, .animInd = 0, .flags = 34816}
};
static LevelObjectGroup room8alien2 = {
    .numTriggers = 1, .triggers = room8alien2_triggers,
    .numPaths = 2, .paths = room8alien2_paths,
    .numObjects = 2, .objects = room8alien2_objects
};
// room8alien3
static GObjPathPointFunction path529_1_actions[] = {
0 /* to be assigned */
};
static PathPoint path529_points[] = {
{.x = 0, .y = 0, .numActions = 0, .actions = 0},
{.x = 64, .y = 0, .numActions = 1, .actions = path529_1_actions},
{.x = 96, .y = -32, .numActions = 0, .actions = 0},
{.x = 96, .y = -48, .numActions = 0, .actions = 0},
{.x = 80, .y = -64, .numActions = 0, .actions = 0},
{.x = 80, .y = -88, .numActions = 0, .actions = 0},
{.x = 96, .y = -104, .numActions = 0, .actions = 0},
{.x = 96, .y = -152, .numActions = 0, .actions = 0},
{.x = 64, .y = -184, .numActions = 0, .actions = 0},
{.x = 64, .y = -248, .numActions = 0, .actions = 0},
{.x = 112, .y = -296, .numActions = 0, .actions = 0}
};
static GObjPathPointFunction path530_1_actions[] = {
0 /* to be assigned */
};
static PathPoint path530_points[] = {
{.x = 0, .y = 0, .numActions = 0, .actions = 0},
{.x = -64, .y = 0, .numActions = 1, .actions = path530_1_actions},
{.x = -96, .y = -32, .numActions = 0, .actions = 0},
{.x = -96, .y = -48, .numActions = 0, .actions = 0},
{.x = -80, .y = -64, .numActions = 0, .actions = 0},
{.x = -80, .y = -88, .numActions = 0, .actions = 0},
{.x = -96, .y = -104, .numActions = 0, .actions = 0},
{.x = -96, .y = -152, .numActions = 0, .actions = 0},
{.x = -64, .y = -184, .numActions = 0, .actions = 0},
{.x = -64, .y = -248, .numActions = 0, .actions = 0},
{.x = -120, .y = -296, .numActions = 0, .actions = 0}
};
static Path room8alien3_paths[] = {
{.x = -16, .y = 2392, .numPoints = 11, .points = path529_points},
{.x = 272, .y = 2392, .numPoints = 11, .points = path530_points}
};
static LevelObject room8alien3_objects[] = {
{.definition = &defAlienGunner, .x = -16, .y = 2392, .animInd = 0, .flags = 32768},
{.definition = &defAlienGunner, .x = 272, .y = 2392, .animInd = 0, .flags = 34816}
};
static LevelObjectGroup room8alien3 = {
    .numTriggers = 0, .triggers = 0,
    .numPaths = 2, .paths = room8alien3_paths,
    .numObjects = 2, .objects = room8alien3_objects
};
// room8alien4
static Trigger room8alien4_triggers[] = {
{.y = 2264, .action = spawnCharacters}
};
static GObjPathPointFunction path502_1_actions[] = {
0 /* to be assigned */
};
static PathPoint path502_points[] = {
{.x = -16, .y = 8, .numActions = 0, .actions = 0},
{.x = 16, .y = 40, .numActions = 1, .actions = path502_1_actions}
};
static GObjPathPointFunction path521_1_actions[] = {
0 /* to be assigned */
};
static PathPoint path521_points[] = {
{.x = -16, .y = 8, .numActions = 0, .actions = 0},
{.x = 16, .y = 40, .numActions = 1, .actions = path521_1_actions}
};
static GObjPathPointFunction path519_1_actions[] = {
0 /* to be assigned */
};
static PathPoint path519_points[] = {
{.x = 24, .y = 0, .numActions = 0, .actions = 0},
{.x = -16, .y = 40, .numActions = 1, .actions = path519_1_actions}
};
static GObjPathPointFunction path524_1_actions[] = {
0 /* to be assigned */
};
static PathPoint path524_points[] = {
{.x = 24, .y = 0, .numActions = 0, .actions = 0},
{.x = -16, .y = 40, .numActions = 1, .actions = path524_1_actions}
};
static Path room8alien4_paths[] = {
{.x = 96, .y = 2248, .numPoints = 2, .points = path502_points},
{.x = 88, .y = 2232, .numPoints = 2, .points = path521_points},
{.x = 160, .y = 2248, .numPoints = 2, .points = path519_points},
{.x = 168, .y = 2232, .numPoints = 2, .points = path524_points}
};
static LevelObject room8alien4_objects[] = {
{.definition = &defAlienGunner, .x = 80, .y = 2256, .animInd = 0, .flags = 32768},
{.definition = &defAlienGunner, .x = 72, .y = 2240, .animInd = 0, .flags = 32768},
{.definition = &defAlienGunner, .x = 184, .y = 2248, .animInd = 0, .flags = 34816},
{.definition = &defAlienGunner, .x = 192, .y = 2232, .animInd = 0, .flags = 34816}
};
static LevelObjectGroup room8alien4 = {
    .numTriggers = 1, .triggers = room8alien4_triggers,
    .numPaths = 4, .paths = room8alien4_paths,
    .numObjects = 4, .objects = room8alien4_objects
};
// room8powerup
static Trigger room8powerup_triggers[] = {
{.y = 2272, .action = spawnCharacters}
};
static LevelObject room8powerup_objects[] = {
{.definition = &defHoneyPot, .x = 136, .y = 2256, .animInd = 0, .flags = 32768},
{.definition = &defHoneyPot, .x = 120, .y = 2264, .animInd = 0, .flags = 32768}
};
static LevelObjectGroup room8powerup = {
    .numTriggers = 1, .triggers = room8powerup_triggers,
    .numPaths = 0, .paths = 0,
    .numObjects = 2, .objects = room8powerup_objects
};
// room9powerup
static Trigger room9powerup_triggers[] = {
{.y = 2184, .action = spawnCharacters}
};
static LevelObject room9powerup_objects[] = {
{.definition = &defHoneyPot, .x = 120, .y = 2160, .animInd = 0, .flags = 32768},
{.definition = &defHoneyPot, .x = 144, .y = 2168, .animInd = 0, .flags = 32768},
{.definition = &defHoneyPot, .x = 128, .y = 2176, .animInd = 0, .flags = 32768}
};
static LevelObjectGroup room9powerup = {
    .numTriggers = 1, .triggers = room9powerup_triggers,
    .numPaths = 0, .paths = 0,
    .numObjects = 3, .objects = room9powerup_objects
};
// room9alienmind
static Trigger room9alienmind_triggers[] = {
{.y = 2016, .action = spawnCharacters}
};
static PathPoint path363_points[] = {
{.x = 0, .y = -56, .numActions = 0, .actions = 0},
{.x = 0, .y = 24, .numActions = 0, .actions = 0}
};
static PathPoint path365_points[] = {
{.x = 24, .y = -56, .numActions = 0, .actions = 0},
{.x = 16, .y = -56, .numActions = 0, .actions = 0},
{.x = 8, .y = -40, .numActions = 0, .actions = 0},
{.x = 0, .y = 8, .numActions = 0, .actions = 0},
{.x = -16, .y = 16, .numActions = 0, .actions = 0},
{.x = -40, .y = 40, .numActions = 0, .actions = 0},
{.x = -48, .y = 72, .numActions = 0, .actions = 0},
{.x = -48, .y = 112, .numActions = 0, .actions = 0},
{.x = -16, .y = 144, .numActions = 0, .actions = 0},
{.x = -16, .y = 160, .numActions = 0, .actions = 0}
};
static PathPoint path366_points[] = {
{.x = -24, .y = -56, .numActions = 0, .actions = 0},
{.x = -16, .y = -56, .numActions = 0, .actions = 0},
{.x = -8, .y = -40, .numActions = 0, .actions = 0},
{.x = 0, .y = 8, .numActions = 0, .actions = 0},
{.x = 16, .y = 16, .numActions = 0, .actions = 0},
{.x = 40, .y = 40, .numActions = 0, .actions = 0},
{.x = 48, .y = 72, .numActions = 0, .actions = 0},
{.x = 48, .y = 128, .numActions = 0, .actions = 0},
{.x = 16, .y = 160, .numActions = 0, .actions = 0}
};
static GObjPathPointFunction path367_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path367_4_actions[] = {
0 /* to be assigned */
};
static PathPoint path367_points[] = {
{.x = 112, .y = -32, .numActions = 1, .actions = path367_0_actions},
{.x = 88, .y = -48, .numActions = 0, .actions = 0},
{.x = 64, .y = -48, .numActions = 0, .actions = 0},
{.x = 48, .y = -24, .numActions = 0, .actions = 0},
{.x = 48, .y = 0, .numActions = 1, .actions = path367_4_actions}
};
static GObjPathPointFunction path369_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path369_4_actions[] = {
0 /* to be assigned */
};
static PathPoint path369_points[] = {
{.x = -104, .y = -8, .numActions = 1, .actions = path369_0_actions},
{.x = -80, .y = -24, .numActions = 0, .actions = 0},
{.x = -56, .y = -24, .numActions = 0, .actions = 0},
{.x = -40, .y = 0, .numActions = 0, .actions = 0},
{.x = -40, .y = 24, .numActions = 1, .actions = path369_4_actions}
};
static GObjPathPointFunction path371_5_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path371_7_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path371_8_actions[] = {
0 /* to be assigned */
};
static PathPoint path371_points[] = {
{.x = 120, .y = -232, .numActions = 0, .actions = 0},
{.x = 96, .y = -216, .numActions = 0, .actions = 0},
{.x = 80, .y = -176, .numActions = 0, .actions = 0},
{.x = 80, .y = -48, .numActions = 0, .actions = 0},
{.x = 72, .y = -40, .numActions = 0, .actions = 0},
{.x = 56, .y = -32, .numActions = 1, .actions = path371_5_actions},
{.x = 40, .y = -40, .numActions = 0, .actions = 0},
{.x = 32, .y = -64, .numActions = 1, .actions = path371_7_actions},
{.x = 32, .y = -112, .numActions = 1, .actions = path371_8_actions},
{.x = 32, .y = -48, .numActions = 0, .actions = 0},
{.x = 24, .y = -24, .numActions = 0, .actions = 0},
{.x = 0, .y = -16, .numActions = 0, .actions = 0}
};
static GObjPathPointFunction path372_5_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path372_7_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path372_8_actions[] = {
0 /* to be assigned */
};
static PathPoint path372_points[] = {
{.x = -56, .y = -232, .numActions = 0, .actions = 0},
{.x = -32, .y = -216, .numActions = 0, .actions = 0},
{.x = -16, .y = -176, .numActions = 0, .actions = 0},
{.x = -16, .y = -48, .numActions = 0, .actions = 0},
{.x = -8, .y = -40, .numActions = 0, .actions = 0},
{.x = 8, .y = -32, .numActions = 1, .actions = path372_5_actions},
{.x = 24, .y = -40, .numActions = 0, .actions = 0},
{.x = 32, .y = -64, .numActions = 1, .actions = path372_7_actions},
{.x = 32, .y = -112, .numActions = 1, .actions = path372_8_actions},
{.x = 32, .y = -48, .numActions = 0, .actions = 0},
{.x = 40, .y = -24, .numActions = 0, .actions = 0},
{.x = 64, .y = -16, .numActions = 0, .actions = 0}
};
static Path room9alienmind_paths[] = {
{.x = 128, .y = 2040, .numPoints = 2, .points = path363_points},
{.x = 96, .y = 2096, .numPoints = 10, .points = path365_points},
{.x = 160, .y = 2096, .numPoints = 9, .points = path366_points},
{.x = -8, .y = 2072, .numPoints = 5, .points = path367_points},
{.x = 256, .y = 2048, .numPoints = 5, .points = path369_points},
{.x = -16, .y = 2256, .numPoints = 12, .points = path371_points},
{.x = 208, .y = 2256, .numPoints = 12, .points = path372_points}
};
static LevelObject room9alienmind_objects[] = {
{.definition = &defAlienMind, .x = 128, .y = 1984, .animInd = 0, .flags = 0}
};
static LevelObjectGroup room9alienmind = {
    .numTriggers = 1, .triggers = room9alienmind_triggers,
    .numPaths = 7, .paths = room9alienmind_paths,
    .numObjects = 1, .objects = room9alienmind_objects
};
// part2
static Trigger part2_triggers[] = {
{.y = 2008, .action = spawnCharacters}
};
static LevelObjectGroup part2 = {
    .numTriggers = 1, .triggers = part2_triggers,
    .numPaths = 0, .paths = 0,
    .numObjects = 0, .objects = 0
};
// room10acidants
static Trigger room10acidants_triggers[] = {
{.y = 1856, .action = spawnCharacters}
};
static GObjPathPointFunction path1030_1_actions[] = {
climbUpToFloor
};
static PathPoint path1030_points[] = {
{.x = 0, .y = 0, .numActions = 0, .actions = 0},
{.x = 0, .y = -40, .numActions = 1, .actions = path1030_1_actions},
{.x = 0, .y = -56, .numActions = 0, .actions = 0}
};
static GObjPathPointFunction path1032_1_actions[] = {
climbUpToFloor
};
static PathPoint path1032_points[] = {
{.x = 0, .y = 0, .numActions = 0, .actions = 0},
{.x = 0, .y = -40, .numActions = 1, .actions = path1032_1_actions},
{.x = 0, .y = -56, .numActions = 0, .actions = 0}
};
static GObjPathPointFunction path1034_1_actions[] = {
climbUpToFloor
};
static PathPoint path1034_points[] = {
{.x = 0, .y = 0, .numActions = 0, .actions = 0},
{.x = 0, .y = -40, .numActions = 1, .actions = path1034_1_actions},
{.x = 0, .y = -56, .numActions = 0, .actions = 0}
};
static GObjPathPointFunction path1036_1_actions[] = {
climbUpToFloor
};
static PathPoint path1036_points[] = {
{.x = 0, .y = 0, .numActions = 0, .actions = 0},
{.x = 0, .y = -40, .numActions = 1, .actions = path1036_1_actions},
{.x = 0, .y = -56, .numActions = 0, .actions = 0}
};
static GObjPathPointFunction path1038_1_actions[] = {
climbUpToFloor
};
static PathPoint path1038_points[] = {
{.x = 0, .y = 0, .numActions = 0, .actions = 0},
{.x = 0, .y = -40, .numActions = 1, .actions = path1038_1_actions},
{.x = 0, .y = -56, .numActions = 0, .actions = 0}
};
static Path room10acidants_paths[] = {
{.x = 152, .y = 1920, .numPoints = 3, .points = path1030_points},
{.x = 168, .y = 1928, .numPoints = 3, .points = path1032_points},
{.x = 184, .y = 1928, .numPoints = 3, .points = path1034_points},
{.x = 200, .y = 1920, .numPoints = 3, .points = path1036_points},
{.x = 216, .y = 1904, .numPoints = 3, .points = path1038_points}
};
static LevelObject room10acidants_objects[] = {
{.definition = &defAcidAnt, .x = 216, .y = 1904, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 184, .y = 1928, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = 200, .y = 1920, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 168, .y = 1928, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = 152, .y = 1920, .animInd = 2, .flags = 32768}
};
static LevelObjectGroup room10acidants = {
    .numTriggers = 1, .triggers = room10acidants_triggers,
    .numPaths = 5, .paths = room10acidants_paths,
    .numObjects = 5, .objects = room10acidants_objects
};
// room10acidants2
static Trigger room10acidants2_triggers[] = {
{.y = 1840, .action = spawnCharacters}
};
static GObjPathPointFunction path1051_1_actions[] = {
climbUpToFloor
};
static PathPoint path1051_points[] = {
{.x = 0, .y = 0, .numActions = 0, .actions = 0},
{.x = 0, .y = -40, .numActions = 1, .actions = path1051_1_actions},
{.x = 0, .y = -56, .numActions = 0, .actions = 0}
};
static GObjPathPointFunction path1052_1_actions[] = {
climbUpToFloor
};
static PathPoint path1052_points[] = {
{.x = 0, .y = 0, .numActions = 0, .actions = 0},
{.x = 0, .y = -40, .numActions = 1, .actions = path1052_1_actions},
{.x = 0, .y = -56, .numActions = 0, .actions = 0}
};
static GObjPathPointFunction path1053_1_actions[] = {
climbUpToFloor
};
static PathPoint path1053_points[] = {
{.x = 0, .y = 0, .numActions = 0, .actions = 0},
{.x = 0, .y = -40, .numActions = 1, .actions = path1053_1_actions},
{.x = 0, .y = -56, .numActions = 0, .actions = 0}
};
static GObjPathPointFunction path1054_1_actions[] = {
climbUpToFloor
};
static PathPoint path1054_points[] = {
{.x = 0, .y = 0, .numActions = 0, .actions = 0},
{.x = 0, .y = -40, .numActions = 1, .actions = path1054_1_actions},
{.x = 0, .y = -56, .numActions = 0, .actions = 0}
};
static GObjPathPointFunction path1055_1_actions[] = {
climbUpToFloor
};
static PathPoint path1055_points[] = {
{.x = 0, .y = 0, .numActions = 0, .actions = 0},
{.x = 0, .y = -40, .numActions = 1, .actions = path1055_1_actions},
{.x = 0, .y = -56, .numActions = 0, .actions = 0}
};
static Path room10acidants2_paths[] = {
{.x = 40, .y = 1888, .numPoints = 3, .points = path1051_points},
{.x = 56, .y = 1896, .numPoints = 3, .points = path1052_points},
{.x = 72, .y = 1904, .numPoints = 3, .points = path1053_points},
{.x = 88, .y = 1912, .numPoints = 3, .points = path1054_points},
{.x = 104, .y = 1904, .numPoints = 3, .points = path1055_points}
};
static LevelObject room10acidants2_objects[] = {
{.definition = &defAcidAnt, .x = 104, .y = 1904, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 72, .y = 1904, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = 88, .y = 1912, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 56, .y = 1896, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = 40, .y = 1888, .animInd = 2, .flags = 32768}
};
static LevelObjectGroup room10acidants2 = {
    .numTriggers = 1, .triggers = room10acidants2_triggers,
    .numPaths = 5, .paths = room10acidants2_paths,
    .numObjects = 5, .objects = room10acidants2_objects
};
// r11acidants1a
static Trigger r11acidants1a_triggers[] = {
{.y = 1760, .action = spawnCharacters}
};
static GObjPathPointFunction path1001_1_actions[] = {
climbUpToFloor
};
static PathPoint path1001_points[] = {
{.x = -32, .y = 32, .numActions = 0, .actions = 0},
{.x = -32, .y = -8, .numActions = 1, .actions = path1001_1_actions},
{.x = -32, .y = -24, .numActions = 0, .actions = 0}
};
static Path r11acidants1a_paths[] = {
{.x = 264, .y = 1784, .numPoints = 3, .points = path1001_points}
};
static LevelObject r11acidants1a_objects[] = {
{.definition = &defAcidAnt, .x = 232, .y = 1816, .animInd = 2, .flags = 34816}
};
static LevelObjectGroup r11acidants1a = {
    .numTriggers = 1, .triggers = r11acidants1a_triggers,
    .numPaths = 1, .paths = r11acidants1a_paths,
    .numObjects = 1, .objects = r11acidants1a_objects
};
// r11acidants1b
static Trigger r11acidants1b_triggers[] = {
{.y = 1752, .action = spawnCharacters}
};
static GObjPathPointFunction path1103_1_actions[] = {
climbUpToFloor
};
static PathPoint path1103_points[] = {
{.x = -32, .y = 32, .numActions = 0, .actions = 0},
{.x = -32, .y = -8, .numActions = 1, .actions = path1103_1_actions},
{.x = -32, .y = -24, .numActions = 0, .actions = 0}
};
static Path r11acidants1b_paths[] = {
{.x = 232, .y = 1784, .numPoints = 3, .points = path1103_points}
};
static LevelObject r11acidants1b_objects[] = {
{.definition = &defAcidAnt, .x = 200, .y = 1816, .animInd = 2, .flags = 32768}
};
static LevelObjectGroup r11acidants1b = {
    .numTriggers = 1, .triggers = r11acidants1b_triggers,
    .numPaths = 1, .paths = r11acidants1b_paths,
    .numObjects = 1, .objects = r11acidants1b_objects
};
// r11acidants1c
static Trigger r11acidants1c_triggers[] = {
{.y = 1744, .action = spawnCharacters}
};
static GObjPathPointFunction path1107_1_actions[] = {
climbUpToFloor
};
static PathPoint path1107_points[] = {
{.x = -32, .y = 32, .numActions = 0, .actions = 0},
{.x = -32, .y = -8, .numActions = 1, .actions = path1107_1_actions},
{.x = -32, .y = -24, .numActions = 0, .actions = 0}
};
static Path r11acidants1c_paths[] = {
{.x = 200, .y = 1784, .numPoints = 3, .points = path1107_points}
};
static LevelObject r11acidants1c_objects[] = {
{.definition = &defAcidAnt, .x = 168, .y = 1816, .animInd = 2, .flags = 34816}
};
static LevelObjectGroup r11acidants1c = {
    .numTriggers = 1, .triggers = r11acidants1c_triggers,
    .numPaths = 1, .paths = r11acidants1c_paths,
    .numObjects = 1, .objects = r11acidants1c_objects
};
// r11acidants1d
static Trigger r11acidants1d_triggers[] = {
{.y = 1736, .action = spawnCharacters}
};
static GObjPathPointFunction path1123_1_actions[] = {
climbUpToFloor
};
static PathPoint path1123_points[] = {
{.x = -32, .y = 32, .numActions = 0, .actions = 0},
{.x = -32, .y = -8, .numActions = 1, .actions = path1123_1_actions},
{.x = -32, .y = -24, .numActions = 0, .actions = 0}
};
static Path r11acidants1d_paths[] = {
{.x = 168, .y = 1784, .numPoints = 3, .points = path1123_points}
};
static LevelObject r11acidants1d_objects[] = {
{.definition = &defAcidAnt, .x = 136, .y = 1816, .animInd = 2, .flags = 32768}
};
static LevelObjectGroup r11acidants1d = {
    .numTriggers = 1, .triggers = r11acidants1d_triggers,
    .numPaths = 1, .paths = r11acidants1d_paths,
    .numObjects = 1, .objects = r11acidants1d_objects
};
// r11acidants1e
static Trigger r11acidants1e_triggers[] = {
{.y = 1728, .action = spawnCharacters}
};
static GObjPathPointFunction path1111_1_actions[] = {
climbUpToFloor
};
static PathPoint path1111_points[] = {
{.x = -32, .y = 32, .numActions = 0, .actions = 0},
{.x = -32, .y = -8, .numActions = 1, .actions = path1111_1_actions},
{.x = -32, .y = -24, .numActions = 0, .actions = 0}
};
static Path r11acidants1e_paths[] = {
{.x = 152, .y = 1776, .numPoints = 3, .points = path1111_points}
};
static LevelObject r11acidants1e_objects[] = {
{.definition = &defAcidAnt, .x = 120, .y = 1808, .animInd = 2, .flags = 32768}
};
static LevelObjectGroup r11acidants1e = {
    .numTriggers = 1, .triggers = r11acidants1e_triggers,
    .numPaths = 1, .paths = r11acidants1e_paths,
    .numObjects = 1, .objects = r11acidants1e_objects
};
// r11acidants1f
static Trigger r11acidants1f_triggers[] = {
{.y = 1720, .action = spawnCharacters}
};
static GObjPathPointFunction path1115_1_actions[] = {
climbUpToFloor
};
static PathPoint path1115_points[] = {
{.x = -32, .y = 32, .numActions = 0, .actions = 0},
{.x = -32, .y = -8, .numActions = 1, .actions = path1115_1_actions},
{.x = -32, .y = -24, .numActions = 0, .actions = 0}
};
static Path r11acidants1f_paths[] = {
{.x = 120, .y = 1768, .numPoints = 3, .points = path1115_points}
};
static LevelObject r11acidants1f_objects[] = {
{.definition = &defAcidAnt, .x = 88, .y = 1800, .animInd = 2, .flags = 32768}
};
static LevelObjectGroup r11acidants1f = {
    .numTriggers = 1, .triggers = r11acidants1f_triggers,
    .numPaths = 1, .paths = r11acidants1f_paths,
    .numObjects = 1, .objects = r11acidants1f_objects
};
// r11acidants1g
static Trigger r11acidants1g_triggers[] = {
{.y = 1712, .action = spawnCharacters}
};
static GObjPathPointFunction path1119_1_actions[] = {
climbUpToFloor
};
static PathPoint path1119_points[] = {
{.x = -32, .y = 32, .numActions = 0, .actions = 0},
{.x = -32, .y = -8, .numActions = 1, .actions = path1119_1_actions},
{.x = -32, .y = -24, .numActions = 0, .actions = 0}
};
static Path r11acidants1g_paths[] = {
{.x = 88, .y = 1768, .numPoints = 3, .points = path1119_points}
};
static LevelObject r11acidants1g_objects[] = {
{.definition = &defAcidAnt, .x = 56, .y = 1800, .animInd = 2, .flags = 34816}
};
static LevelObjectGroup r11acidants1g = {
    .numTriggers = 1, .triggers = r11acidants1g_triggers,
    .numPaths = 1, .paths = r11acidants1g_paths,
    .numObjects = 1, .objects = r11acidants1g_objects
};
// r11acidants1h
static Trigger r11acidants1h_triggers[] = {
{.y = 1704, .action = spawnCharacters}
};
static GObjPathPointFunction path1127_1_actions[] = {
climbUpToFloor
};
static PathPoint path1127_points[] = {
{.x = -32, .y = 32, .numActions = 0, .actions = 0},
{.x = -32, .y = -8, .numActions = 1, .actions = path1127_1_actions},
{.x = -32, .y = -24, .numActions = 0, .actions = 0}
};
static Path r11acidants1h_paths[] = {
{.x = 56, .y = 1768, .numPoints = 3, .points = path1127_points}
};
static LevelObject r11acidants1h_objects[] = {
{.definition = &defAcidAnt, .x = 24, .y = 1800, .animInd = 2, .flags = 32768}
};
static LevelObjectGroup r11acidants1h = {
    .numTriggers = 1, .triggers = r11acidants1h_triggers,
    .numPaths = 1, .paths = r11acidants1h_paths,
    .numObjects = 1, .objects = r11acidants1h_objects
};
// room11acidants2a
static Trigger room11acidants2a_triggers[] = {
{.y = 1632, .action = spawnCharacters}
};
static GObjPathPointFunction path982_0_actions[] = {
climbUpToFloor
};
static PathPoint path982_points[] = {
{.x = 0, .y = 24, .numActions = 1, .actions = path982_0_actions},
{.x = -288, .y = -24, .numActions = 0, .actions = 0}
};
static Path room11acidants2a_paths[] = {
{.x = 272, .y = 1616, .numPoints = 2, .points = path982_points}
};
static LevelObject room11acidants2a_objects[] = {
{.definition = &defAcidAnt, .x = 272, .y = 1808, .animInd = 2, .flags = 2048},
{.definition = &defAcidAnt, .x = 272, .y = 1736, .animInd = 2, .flags = 2048},
{.definition = &defAcidAnt, .x = 272, .y = 1712, .animInd = 2, .flags = 2048},
{.definition = &defAcidAnt, .x = 272, .y = 1784, .animInd = 2, .flags = 2048},
{.definition = &defAcidAnt, .x = 272, .y = 1760, .animInd = 2, .flags = 2048},
{.definition = &defAcidAnt, .x = 272, .y = 1688, .animInd = 2, .flags = 2048},
{.definition = &defAcidAnt, .x = 272, .y = 1856, .animInd = 2, .flags = 2048},
{.definition = &defAcidAnt, .x = 272, .y = 1664, .animInd = 2, .flags = 2048},
{.definition = &defAcidAnt, .x = 272, .y = 1832, .animInd = 2, .flags = 2048},
{.definition = &defAcidAnt, .x = 272, .y = 1640, .animInd = 2, .flags = 2048}
};
static LevelObjectGroup room11acidants2a = {
    .numTriggers = 1, .triggers = room11acidants2a_triggers,
    .numPaths = 1, .paths = room11acidants2a_paths,
    .numObjects = 10, .objects = room11acidants2a_objects
};
// room11acidants2b
static Trigger room11acidants2b_triggers[] = {
{.y = 1584, .action = spawnCharacters}
};
static GObjPathPointFunction path1070_0_actions[] = {
climbUpToFloor
};
static PathPoint path1070_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path1070_0_actions},
{.x = 288, .y = 48, .numActions = 0, .actions = 0}
};
static Path room11acidants2b_paths[] = {
{.x = -16, .y = 1576, .numPoints = 2, .points = path1070_points}
};
static LevelObject room11acidants2b_objects[] = {
{.definition = &defAcidAnt, .x = -16, .y = 1792, .animInd = 2, .flags = 0},
{.definition = &defAcidAnt, .x = -16, .y = 1720, .animInd = 2, .flags = 0},
{.definition = &defAcidAnt, .x = -16, .y = 1672, .animInd = 2, .flags = 0},
{.definition = &defAcidAnt, .x = -16, .y = 1696, .animInd = 2, .flags = 0},
{.definition = &defAcidAnt, .x = -16, .y = 1768, .animInd = 2, .flags = 0},
{.definition = &defAcidAnt, .x = -16, .y = 1648, .animInd = 2, .flags = 0},
{.definition = &defAcidAnt, .x = -16, .y = 1744, .animInd = 2, .flags = 0},
{.definition = &defAcidAnt, .x = -16, .y = 1624, .animInd = 2, .flags = 0},
{.definition = &defAcidAnt, .x = -16, .y = 1600, .animInd = 2, .flags = 0},
{.definition = &defAcidAnt, .x = -16, .y = 1576, .animInd = 2, .flags = 0}
};
static LevelObjectGroup room11acidants2b = {
    .numTriggers = 1, .triggers = room11acidants2b_triggers,
    .numPaths = 1, .paths = room11acidants2b_paths,
    .numObjects = 10, .objects = room11acidants2b_objects
};
// r11acidants3a
static Trigger r11acidants3a_triggers[] = {
{.y = 1632, .action = spawnCharacters}
};
static GObjPathPointFunction path909_1_actions[] = {
climbUpToFloor
};
static PathPoint path909_points[] = {
{.x = 0, .y = -16, .numActions = 0, .actions = 0},
{.x = 0, .y = -24, .numActions = 1, .actions = path909_1_actions},
{.x = 0, .y = 0, .numActions = 0, .actions = 0}
};
static Path r11acidants3a_paths[] = {
{.x = 248, .y = 1736, .numPoints = 3, .points = path909_points}
};
static LevelObject r11acidants3a_objects[] = {
{.definition = &defAcidAnt, .x = 248, .y = 1720, .animInd = 2, .flags = 2048}
};
static LevelObjectGroup r11acidants3a = {
    .numTriggers = 1, .triggers = r11acidants3a_triggers,
    .numPaths = 1, .paths = r11acidants3a_paths,
    .numObjects = 1, .objects = r11acidants3a_objects
};
// r11acidants3b
static Trigger r11acidants3b_triggers[] = {
{.y = 1624, .action = spawnCharacters}
};
static GObjPathPointFunction path1130_1_actions[] = {
climbUpToFloor
};
static PathPoint path1130_points[] = {
{.x = 0, .y = -16, .numActions = 0, .actions = 0},
{.x = 0, .y = -24, .numActions = 1, .actions = path1130_1_actions},
{.x = 0, .y = 0, .numActions = 0, .actions = 0}
};
static Path r11acidants3b_paths[] = {
{.x = 224, .y = 1736, .numPoints = 3, .points = path1130_points}
};
static LevelObject r11acidants3b_objects[] = {
{.definition = &defAcidAnt, .x = 224, .y = 1720, .animInd = 2, .flags = 2048}
};
static LevelObjectGroup r11acidants3b = {
    .numTriggers = 1, .triggers = r11acidants3b_triggers,
    .numPaths = 1, .paths = r11acidants3b_paths,
    .numObjects = 1, .objects = r11acidants3b_objects
};
// r11acidants3c
static Trigger r11acidants3c_triggers[] = {
{.y = 1616, .action = spawnCharacters}
};
static GObjPathPointFunction path1134_1_actions[] = {
climbUpToFloor
};
static PathPoint path1134_points[] = {
{.x = 0, .y = -16, .numActions = 0, .actions = 0},
{.x = 0, .y = -24, .numActions = 1, .actions = path1134_1_actions},
{.x = 0, .y = 0, .numActions = 0, .actions = 0}
};
static Path r11acidants3c_paths[] = {
{.x = 200, .y = 1736, .numPoints = 3, .points = path1134_points}
};
static LevelObject r11acidants3c_objects[] = {
{.definition = &defAcidAnt, .x = 200, .y = 1720, .animInd = 2, .flags = 0}
};
static LevelObjectGroup r11acidants3c = {
    .numTriggers = 1, .triggers = r11acidants3c_triggers,
    .numPaths = 1, .paths = r11acidants3c_paths,
    .numObjects = 1, .objects = r11acidants3c_objects
};
// r11acidants3d
static Trigger r11acidants3d_triggers[] = {
{.y = 1608, .action = spawnCharacters}
};
static GObjPathPointFunction path1138_1_actions[] = {
climbUpToFloor
};
static PathPoint path1138_points[] = {
{.x = 0, .y = -16, .numActions = 0, .actions = 0},
{.x = 0, .y = -24, .numActions = 1, .actions = path1138_1_actions},
{.x = 0, .y = 0, .numActions = 0, .actions = 0}
};
static Path r11acidants3d_paths[] = {
{.x = 176, .y = 1736, .numPoints = 3, .points = path1138_points}
};
static LevelObject r11acidants3d_objects[] = {
{.definition = &defAcidAnt, .x = 176, .y = 1720, .animInd = 2, .flags = 2048}
};
static LevelObjectGroup r11acidants3d = {
    .numTriggers = 1, .triggers = r11acidants3d_triggers,
    .numPaths = 1, .paths = r11acidants3d_paths,
    .numObjects = 1, .objects = r11acidants3d_objects
};
// r11acidants3e
static Trigger r11acidants3e_triggers[] = {
{.y = 1600, .action = spawnCharacters}
};
static GObjPathPointFunction path1142_1_actions[] = {
climbUpToFloor
};
static PathPoint path1142_points[] = {
{.x = 0, .y = -16, .numActions = 0, .actions = 0},
{.x = 0, .y = -24, .numActions = 1, .actions = path1142_1_actions},
{.x = 0, .y = 0, .numActions = 0, .actions = 0}
};
static Path r11acidants3e_paths[] = {
{.x = 152, .y = 1736, .numPoints = 3, .points = path1142_points}
};
static LevelObject r11acidants3e_objects[] = {
{.definition = &defAcidAnt, .x = 152, .y = 1720, .animInd = 2, .flags = 2048}
};
static LevelObjectGroup r11acidants3e = {
    .numTriggers = 1, .triggers = r11acidants3e_triggers,
    .numPaths = 1, .paths = r11acidants3e_paths,
    .numObjects = 1, .objects = r11acidants3e_objects
};
// r11acidants3f
static Trigger r11acidants3f_triggers[] = {
{.y = 1592, .action = spawnCharacters}
};
static GObjPathPointFunction path1146_1_actions[] = {
climbUpToFloor
};
static PathPoint path1146_points[] = {
{.x = 0, .y = -16, .numActions = 0, .actions = 0},
{.x = 0, .y = -24, .numActions = 1, .actions = path1146_1_actions},
{.x = 0, .y = 0, .numActions = 0, .actions = 0}
};
static Path r11acidants3f_paths[] = {
{.x = 128, .y = 1720, .numPoints = 3, .points = path1146_points}
};
static LevelObject r11acidants3f_objects[] = {
{.definition = &defAcidAnt, .x = 128, .y = 1704, .animInd = 2, .flags = 2048}
};
static LevelObjectGroup r11acidants3f = {
    .numTriggers = 1, .triggers = r11acidants3f_triggers,
    .numPaths = 1, .paths = r11acidants3f_paths,
    .numObjects = 1, .objects = r11acidants3f_objects
};
// r11acidants3g
static Trigger r11acidants3g_triggers[] = {
{.y = 1584, .action = spawnCharacters}
};
static GObjPathPointFunction path1154_1_actions[] = {
climbUpToFloor
};
static PathPoint path1154_points[] = {
{.x = 0, .y = -16, .numActions = 0, .actions = 0},
{.x = 0, .y = -24, .numActions = 1, .actions = path1154_1_actions},
{.x = 0, .y = 0, .numActions = 0, .actions = 0}
};
static Path r11acidants3g_paths[] = {
{.x = 104, .y = 1720, .numPoints = 3, .points = path1154_points}
};
static LevelObject r11acidants3g_objects[] = {
{.definition = &defAcidAnt, .x = 104, .y = 1704, .animInd = 2, .flags = 2048}
};
static LevelObjectGroup r11acidants3g = {
    .numTriggers = 1, .triggers = r11acidants3g_triggers,
    .numPaths = 1, .paths = r11acidants3g_paths,
    .numObjects = 1, .objects = r11acidants3g_objects
};
// r11acidants3h
static Trigger r11acidants3h_triggers[] = {
{.y = 1576, .action = spawnCharacters}
};
static GObjPathPointFunction path1158_1_actions[] = {
climbUpToFloor
};
static PathPoint path1158_points[] = {
{.x = 0, .y = -16, .numActions = 0, .actions = 0},
{.x = 0, .y = -24, .numActions = 1, .actions = path1158_1_actions},
{.x = 0, .y = 0, .numActions = 0, .actions = 0}
};
static Path r11acidants3h_paths[] = {
{.x = 80, .y = 1720, .numPoints = 3, .points = path1158_points}
};
static LevelObject r11acidants3h_objects[] = {
{.definition = &defAcidAnt, .x = 80, .y = 1704, .animInd = 2, .flags = 2048}
};
static LevelObjectGroup r11acidants3h = {
    .numTriggers = 1, .triggers = r11acidants3h_triggers,
    .numPaths = 1, .paths = r11acidants3h_paths,
    .numObjects = 1, .objects = r11acidants3h_objects
};
// r11acidants3i
static Trigger r11acidants3i_triggers[] = {
{.y = 1568, .action = spawnCharacters}
};
static GObjPathPointFunction path1162_1_actions[] = {
climbUpToFloor
};
static PathPoint path1162_points[] = {
{.x = 0, .y = -16, .numActions = 0, .actions = 0},
{.x = 0, .y = -24, .numActions = 1, .actions = path1162_1_actions},
{.x = 0, .y = 0, .numActions = 0, .actions = 0}
};
static Path r11acidants3i_paths[] = {
{.x = 56, .y = 1720, .numPoints = 3, .points = path1162_points}
};
static LevelObject r11acidants3i_objects[] = {
{.definition = &defAcidAnt, .x = 56, .y = 1704, .animInd = 2, .flags = 2048}
};
static LevelObjectGroup r11acidants3i = {
    .numTriggers = 1, .triggers = r11acidants3i_triggers,
    .numPaths = 1, .paths = r11acidants3i_paths,
    .numObjects = 1, .objects = r11acidants3i_objects
};
// r11acidants3j
static Trigger r11acidants3j_triggers[] = {
{.y = 1560, .action = spawnCharacters}
};
static GObjPathPointFunction path1166_1_actions[] = {
climbUpToFloor
};
static PathPoint path1166_points[] = {
{.x = 0, .y = -16, .numActions = 0, .actions = 0},
{.x = 0, .y = -24, .numActions = 1, .actions = path1166_1_actions},
{.x = 0, .y = 0, .numActions = 0, .actions = 0}
};
static Path r11acidants3j_paths[] = {
{.x = 32, .y = 1720, .numPoints = 3, .points = path1166_points}
};
static LevelObject r11acidants3j_objects[] = {
{.definition = &defAcidAnt, .x = 32, .y = 1704, .animInd = 2, .flags = 0}
};
static LevelObjectGroup r11acidants3j = {
    .numTriggers = 1, .triggers = r11acidants3j_triggers,
    .numPaths = 1, .paths = r11acidants3j_paths,
    .numObjects = 1, .objects = r11acidants3j_objects
};
// r11acidants3k
static Trigger r11acidants3k_triggers[] = {
{.y = 1552, .action = spawnCharacters}
};
static GObjPathPointFunction path1170_1_actions[] = {
climbUpToFloor
};
static PathPoint path1170_points[] = {
{.x = 0, .y = -16, .numActions = 0, .actions = 0},
{.x = 0, .y = -24, .numActions = 1, .actions = path1170_1_actions},
{.x = 0, .y = 0, .numActions = 0, .actions = 0}
};
static Path r11acidants3k_paths[] = {
{.x = 8, .y = 1720, .numPoints = 3, .points = path1170_points}
};
static LevelObject r11acidants3k_objects[] = {
{.definition = &defAcidAnt, .x = 8, .y = 1704, .animInd = 2, .flags = 0}
};
static LevelObjectGroup r11acidants3k = {
    .numTriggers = 1, .triggers = r11acidants3k_triggers,
    .numPaths = 1, .paths = r11acidants3k_paths,
    .numObjects = 1, .objects = r11acidants3k_objects
};
// r11powerup
static Trigger r11powerup_triggers[] = {
{.y = 1664, .action = spawnCharacters}
};
static LevelObject r11powerup_objects[] = {
{.definition = &defHoneyPot, .x = 120, .y = 1656, .animInd = 0, .flags = 32768}
};
static LevelObjectGroup r11powerup = {
    .numTriggers = 1, .triggers = r11powerup_triggers,
    .numPaths = 0, .paths = 0,
    .numObjects = 1, .objects = r11powerup_objects
};
// r12wasp1a
static Trigger r12wasp1a_triggers[] = {
{.y = 1456, .action = spawnCharacters}
};
static GObjPathPointFunction path1227_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1227_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1227_2_actions[] = {
startWaspAttack
};
static PathPoint path1227_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path1227_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path1227_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path1227_2_actions}
};
static Path r12wasp1a_paths[] = {
{.x = 96, .y = 1512, .numPoints = 3, .points = path1227_points}
};
static LevelObject r12wasp1a_objects[] = {
{.definition = &defWasp, .x = 96, .y = 1512, .animInd = 0, .flags = 0}
};
static LevelObjectGroup r12wasp1a = {
    .numTriggers = 1, .triggers = r12wasp1a_triggers,
    .numPaths = 1, .paths = r12wasp1a_paths,
    .numObjects = 1, .objects = r12wasp1a_objects
};
// r12wasp1b
static Trigger r12wasp1b_triggers[] = {
{.y = 1472, .action = spawnCharacters}
};
static GObjPathPointFunction path1221_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1221_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1221_2_actions[] = {
startWaspAttack
};
static PathPoint path1221_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path1221_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path1221_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path1221_2_actions}
};
static Path r12wasp1b_paths[] = {
{.x = 128, .y = 1528, .numPoints = 3, .points = path1221_points}
};
static LevelObject r12wasp1b_objects[] = {
{.definition = &defWasp, .x = 128, .y = 1528, .animInd = 0, .flags = 0}
};
static LevelObjectGroup r12wasp1b = {
    .numTriggers = 1, .triggers = r12wasp1b_triggers,
    .numPaths = 1, .paths = r12wasp1b_paths,
    .numObjects = 1, .objects = r12wasp1b_objects
};
// r12wasp1c
static Trigger r12wasp1c_triggers[] = {
{.y = 1488, .action = spawnCharacters}
};
static GObjPathPointFunction path1215_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1215_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1215_2_actions[] = {
startWaspAttack
};
static PathPoint path1215_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path1215_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path1215_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path1215_2_actions}
};
static Path r12wasp1c_paths[] = {
{.x = 160, .y = 1544, .numPoints = 3, .points = path1215_points}
};
static LevelObject r12wasp1c_objects[] = {
{.definition = &defWasp, .x = 160, .y = 1544, .animInd = 0, .flags = 0}
};
static LevelObjectGroup r12wasp1c = {
    .numTriggers = 1, .triggers = r12wasp1c_triggers,
    .numPaths = 1, .paths = r12wasp1c_paths,
    .numObjects = 1, .objects = r12wasp1c_objects
};
// r12wasp2a
static Trigger r12wasp2a_triggers[] = {
{.y = 1392, .action = spawnCharacters}
};
static GObjPathPointFunction path1209_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1209_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1209_2_actions[] = {
startWaspAttack
};
static PathPoint path1209_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path1209_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path1209_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path1209_2_actions}
};
static Path r12wasp2a_paths[] = {
{.x = 80, .y = 1448, .numPoints = 3, .points = path1209_points}
};
static LevelObject r12wasp2a_objects[] = {
{.definition = &defWasp, .x = 80, .y = 1448, .animInd = 0, .flags = 0}
};
static LevelObjectGroup r12wasp2a = {
    .numTriggers = 1, .triggers = r12wasp2a_triggers,
    .numPaths = 1, .paths = r12wasp2a_paths,
    .numObjects = 1, .objects = r12wasp2a_objects
};
// r12wasp2b
static Trigger r12wasp2b_triggers[] = {
{.y = 1384, .action = spawnCharacters}
};
static GObjPathPointFunction path1203_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1203_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1203_2_actions[] = {
startWaspAttack
};
static PathPoint path1203_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path1203_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path1203_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path1203_2_actions}
};
static Path r12wasp2b_paths[] = {
{.x = 56, .y = 1472, .numPoints = 3, .points = path1203_points}
};
static LevelObject r12wasp2b_objects[] = {
{.definition = &defWasp, .x = 56, .y = 1472, .animInd = 0, .flags = 0}
};
static LevelObjectGroup r12wasp2b = {
    .numTriggers = 1, .triggers = r12wasp2b_triggers,
    .numPaths = 1, .paths = r12wasp2b_paths,
    .numObjects = 1, .objects = r12wasp2b_objects
};
// r12wasp2c
static Trigger r12wasp2c_triggers[] = {
{.y = 1376, .action = spawnCharacters}
};
static GObjPathPointFunction path1197_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1197_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1197_2_actions[] = {
startWaspAttack
};
static PathPoint path1197_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path1197_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path1197_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path1197_2_actions}
};
static Path r12wasp2c_paths[] = {
{.x = 32, .y = 1496, .numPoints = 3, .points = path1197_points}
};
static LevelObject r12wasp2c_objects[] = {
{.definition = &defWasp, .x = 32, .y = 1496, .animInd = 0, .flags = 0}
};
static LevelObjectGroup r12wasp2c = {
    .numTriggers = 1, .triggers = r12wasp2c_triggers,
    .numPaths = 1, .paths = r12wasp2c_paths,
    .numObjects = 1, .objects = r12wasp2c_objects
};
// r12wasp3a
static Trigger r12wasp3a_triggers[] = {
{.y = 1416, .action = spawnCharacters}
};
static GObjPathPointFunction path1191_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1191_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1191_2_actions[] = {
startWaspAttack
};
static PathPoint path1191_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path1191_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path1191_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path1191_2_actions}
};
static Path r12wasp3a_paths[] = {
{.x = 176, .y = 1472, .numPoints = 3, .points = path1191_points}
};
static LevelObject r12wasp3a_objects[] = {
{.definition = &defWasp, .x = 176, .y = 1472, .animInd = 0, .flags = 0}
};
static LevelObjectGroup r12wasp3a = {
    .numTriggers = 1, .triggers = r12wasp3a_triggers,
    .numPaths = 1, .paths = r12wasp3a_paths,
    .numObjects = 1, .objects = r12wasp3a_objects
};
// r12wasp3b
static Trigger r12wasp3b_triggers[] = {
{.y = 1408, .action = spawnCharacters}
};
static GObjPathPointFunction path1185_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1185_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1185_2_actions[] = {
startWaspAttack
};
static PathPoint path1185_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path1185_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path1185_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path1185_2_actions}
};
static Path r12wasp3b_paths[] = {
{.x = 200, .y = 1496, .numPoints = 3, .points = path1185_points}
};
static LevelObject r12wasp3b_objects[] = {
{.definition = &defWasp, .x = 200, .y = 1496, .animInd = 0, .flags = 0}
};
static LevelObjectGroup r12wasp3b = {
    .numTriggers = 1, .triggers = r12wasp3b_triggers,
    .numPaths = 1, .paths = r12wasp3b_paths,
    .numObjects = 1, .objects = r12wasp3b_objects
};
// r12wasp3c
static Trigger r12wasp3c_triggers[] = {
{.y = 1400, .action = spawnCharacters}
};
static GObjPathPointFunction path1179_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1179_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1179_2_actions[] = {
startWaspAttack
};
static PathPoint path1179_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path1179_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path1179_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path1179_2_actions}
};
static Path r12wasp3c_paths[] = {
{.x = 224, .y = 1520, .numPoints = 3, .points = path1179_points}
};
static LevelObject r12wasp3c_objects[] = {
{.definition = &defWasp, .x = 224, .y = 1520, .animInd = 0, .flags = 0}
};
static LevelObjectGroup r12wasp3c = {
    .numTriggers = 1, .triggers = r12wasp3c_triggers,
    .numPaths = 1, .paths = r12wasp3c_paths,
    .numObjects = 1, .objects = r12wasp3c_objects
};
// r12wasp4a
static Trigger r12wasp4a_triggers[] = {
{.y = 1336, .action = spawnCharacters}
};
static GObjPathPointFunction path1251_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1251_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1251_2_actions[] = {
startWaspAttack
};
static PathPoint path1251_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path1251_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path1251_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path1251_2_actions}
};
static Path r12wasp4a_paths[] = {
{.x = 48, .y = 1416, .numPoints = 3, .points = path1251_points}
};
static LevelObject r12wasp4a_objects[] = {
{.definition = &defWasp, .x = 48, .y = 1416, .animInd = 0, .flags = 0}
};
static LevelObjectGroup r12wasp4a = {
    .numTriggers = 1, .triggers = r12wasp4a_triggers,
    .numPaths = 1, .paths = r12wasp4a_paths,
    .numObjects = 1, .objects = r12wasp4a_objects
};
// r12wasp4b
static Trigger r12wasp4b_triggers[] = {
{.y = 1336, .action = spawnCharacters}
};
static GObjPathPointFunction path1245_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1245_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1245_2_actions[] = {
startWaspAttack
};
static PathPoint path1245_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path1245_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path1245_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path1245_2_actions}
};
static Path r12wasp4b_paths[] = {
{.x = 208, .y = 1416, .numPoints = 3, .points = path1245_points}
};
static LevelObject r12wasp4b_objects[] = {
{.definition = &defWasp, .x = 208, .y = 1416, .animInd = 0, .flags = 0}
};
static LevelObjectGroup r12wasp4b = {
    .numTriggers = 1, .triggers = r12wasp4b_triggers,
    .numPaths = 1, .paths = r12wasp4b_paths,
    .numObjects = 1, .objects = r12wasp4b_objects
};
// r12wasp4c
static Trigger r12wasp4c_triggers[] = {
{.y = 1312, .action = spawnCharacters}
};
static GObjPathPointFunction path1239_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1239_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1239_2_actions[] = {
startWaspAttack
};
static PathPoint path1239_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path1239_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path1239_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path1239_2_actions}
};
static Path r12wasp4c_paths[] = {
{.x = 32, .y = 1504, .numPoints = 3, .points = path1239_points}
};
static LevelObject r12wasp4c_objects[] = {
{.definition = &defWasp, .x = 32, .y = 1504, .animInd = 0, .flags = 0}
};
static LevelObjectGroup r12wasp4c = {
    .numTriggers = 1, .triggers = r12wasp4c_triggers,
    .numPaths = 1, .paths = r12wasp4c_paths,
    .numObjects = 1, .objects = r12wasp4c_objects
};
// r12wasp4d
static Trigger r12wasp4d_triggers[] = {
{.y = 1312, .action = spawnCharacters}
};
static GObjPathPointFunction path1233_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1233_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1233_2_actions[] = {
startWaspAttack
};
static PathPoint path1233_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path1233_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path1233_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path1233_2_actions}
};
static Path r12wasp4d_paths[] = {
{.x = 224, .y = 1504, .numPoints = 3, .points = path1233_points}
};
static LevelObject r12wasp4d_objects[] = {
{.definition = &defWasp, .x = 224, .y = 1504, .animInd = 0, .flags = 0}
};
static LevelObjectGroup r12wasp4d = {
    .numTriggers = 1, .triggers = r12wasp4d_triggers,
    .numPaths = 1, .paths = r12wasp4d_paths,
    .numObjects = 1, .objects = r12wasp4d_objects
};
// r12powerup
static Trigger r12powerup_triggers[] = {
{.y = 1368, .action = spawnCharacters}
};
static LevelObject r12powerup_objects[] = {
{.definition = &defReinforcedHoneyPot, .x = 128, .y = 1360, .animInd = 2, .flags = 32768}
};
static LevelObjectGroup r12powerup = {
    .numTriggers = 1, .triggers = r12powerup_triggers,
    .numPaths = 0, .paths = 0,
    .numObjects = 1, .objects = r12powerup_objects
};
// r13acidants1
static Trigger r13acidants1_triggers[] = {
{.y = 1328, .action = spawnCharacters}
};
static GObjPathPointFunction path1263_2_actions[] = {
markDisappear
};
static PathPoint path1263_points[] = {
{.x = 0, .y = 48, .numActions = 0, .actions = 0},
{.x = 0, .y = 176, .numActions = 0, .actions = 0},
{.x = 0, .y = 192, .numActions = 1, .actions = path1263_2_actions}
};
static GObjPathPointFunction path1290_2_actions[] = {
markDisappear
};
static PathPoint path1290_points[] = {
{.x = 0, .y = 48, .numActions = 0, .actions = 0},
{.x = 0, .y = 160, .numActions = 0, .actions = 0},
{.x = 0, .y = 176, .numActions = 1, .actions = path1290_2_actions}
};
static GObjPathPointFunction path1275_2_actions[] = {
markDisappear
};
static PathPoint path1275_points[] = {
{.x = 0, .y = 48, .numActions = 0, .actions = 0},
{.x = 0, .y = 160, .numActions = 0, .actions = 0},
{.x = 0, .y = 176, .numActions = 1, .actions = path1275_2_actions}
};
static GObjPathPointFunction path1289_2_actions[] = {
markDisappear
};
static PathPoint path1289_points[] = {
{.x = 0, .y = 48, .numActions = 0, .actions = 0},
{.x = 0, .y = 176, .numActions = 0, .actions = 0},
{.x = 0, .y = 192, .numActions = 1, .actions = path1289_2_actions}
};
static GObjPathPointFunction path1269_2_actions[] = {
markDisappear
};
static PathPoint path1269_points[] = {
{.x = 0, .y = 48, .numActions = 0, .actions = 0},
{.x = 0, .y = 176, .numActions = 0, .actions = 0},
{.x = 0, .y = 192, .numActions = 1, .actions = path1269_2_actions}
};
static GObjPathPointFunction path1274_2_actions[] = {
markDisappear
};
static PathPoint path1274_points[] = {
{.x = 0, .y = 48, .numActions = 0, .actions = 0},
{.x = 0, .y = 176, .numActions = 0, .actions = 0},
{.x = 0, .y = 192, .numActions = 1, .actions = path1274_2_actions}
};
static Path r13acidants1_paths[] = {
{.x = 232, .y = 1152, .numPoints = 3, .points = path1263_points},
{.x = 240, .y = 1168, .numPoints = 3, .points = path1290_points},
{.x = 16, .y = 1168, .numPoints = 3, .points = path1275_points},
{.x = 24, .y = 1152, .numPoints = 3, .points = path1289_points},
{.x = 248, .y = 1152, .numPoints = 3, .points = path1269_points},
{.x = 8, .y = 1152, .numPoints = 3, .points = path1274_points}
};
static LevelObject r13acidants1_objects[] = {
{.definition = &defAntHole, .x = 232, .y = 1200, .animInd = 6, .flags = 32768},
{.definition = &defAntHole, .x = 240, .y = 1216, .animInd = 6, .flags = 32768},
{.definition = &defAntHole, .x = 16, .y = 1216, .animInd = 6, .flags = 32768},
{.definition = &defAntHole, .x = 24, .y = 1200, .animInd = 6, .flags = 32768},
{.definition = &defAntHole, .x = 248, .y = 1200, .animInd = 6, .flags = 32768},
{.definition = &defAntHole, .x = 8, .y = 1200, .animInd = 6, .flags = 32768}
};
static LevelObjectGroup r13acidants1 = {
    .numTriggers = 1, .triggers = r13acidants1_triggers,
    .numPaths = 6, .paths = r13acidants1_paths,
    .numObjects = 6, .objects = r13acidants1_objects
};
// r13beetle1
static Trigger r13beetle1_triggers[] = {
{.y = 1288, .action = spawnCharacters}
};
static GObjPathPointFunction path1279_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1279_2_actions[] = {
BeetleShoot
};
static GObjPathPointFunction path1279_3_actions[] = {
PathPoint_Rotate
};
static GObjPathPointFunction path1279_4_actions[] = {
PathPoint_Rotate
};
static PathPoint path1279_points[] = {
{.x = 0, .y = 0, .numActions = 0, .actions = 0},
{.x = 0, .y = -16, .numActions = 1, .actions = path1279_1_actions},
{.x = 0, .y = -24, .numActions = 1, .actions = path1279_2_actions},
{.x = 0, .y = -144, .numActions = 1, .actions = path1279_3_actions},
{.x = -16, .y = -160, .numActions = 1, .actions = path1279_4_actions},
{.x = -112, .y = -160, .numActions = 0, .actions = 0}
};
static GObjPathPointFunction path1904_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1904_2_actions[] = {
BeetleShoot
};
static GObjPathPointFunction path1904_3_actions[] = {
PathPoint_Rotate
};
static GObjPathPointFunction path1904_4_actions[] = {
PathPoint_Rotate
};
static PathPoint path1904_points[] = {
{.x = 0, .y = 0, .numActions = 0, .actions = 0},
{.x = 0, .y = -16, .numActions = 1, .actions = path1904_1_actions},
{.x = 0, .y = -24, .numActions = 1, .actions = path1904_2_actions},
{.x = 0, .y = -144, .numActions = 1, .actions = path1904_3_actions},
{.x = 16, .y = -160, .numActions = 1, .actions = path1904_4_actions},
{.x = 112, .y = -160, .numActions = 0, .actions = 0}
};
static Path r13beetle1_paths[] = {
{.x = 56, .y = 1320, .numPoints = 6, .points = path1279_points},
{.x = 200, .y = 1320, .numPoints = 6, .points = path1904_points}
};
static LevelObject r13beetle1_objects[] = {
{.definition = &defBeetle, .x = 56, .y = 1320, .animInd = 10, .flags = 34816},
{.definition = &defBeetle, .x = 200, .y = 1320, .animInd = 10, .flags = 32768}
};
static LevelObjectGroup r13beetle1 = {
    .numTriggers = 1, .triggers = r13beetle1_triggers,
    .numPaths = 2, .paths = r13beetle1_paths,
    .numObjects = 2, .objects = r13beetle1_objects
};
// r13fly1
static Trigger r13fly1_triggers[] = {
{.y = 1192, .action = spawnCharacters}
};
static GObjPathPointFunction path1913_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1913_3_actions[] = {
enterForeground,
0 /* to be assigned */,
PathPoint_SetSpeed
};
static GObjPathPointFunction path1913_4_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path1913_5_actions[] = {
startWaspAttack
};
static PathPoint path1913_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path1913_0_actions},
{.x = 56, .y = 0, .numActions = 0, .actions = 0},
{.x = 96, .y = -8, .numActions = 0, .actions = 0},
{.x = 120, .y = -16, .numActions = 3, .actions = path1913_3_actions},
{.x = 136, .y = -24, .numActions = 1, .actions = path1913_4_actions},
{.x = 152, .y = -40, .numActions = 1, .actions = path1913_5_actions}
};
static Path r13fly1_paths[] = {
{.x = 32, .y = 1264, .numPoints = 6, .points = path1913_points}
};
static LevelObject r13fly1_objects[] = {
{.definition = &defWaspShooter, .x = 32, .y = 1264, .animInd = 6, .flags = 0}
};
static LevelObjectGroup r13fly1 = {
    .numTriggers = 1, .triggers = r13fly1_triggers,
    .numPaths = 1, .paths = r13fly1_paths,
    .numObjects = 1, .objects = r13fly1_objects
};
// r13fly2
static Trigger r13fly2_triggers[] = {
{.y = 1184, .action = spawnCharacters}
};
static GObjPathPointFunction path1682_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1682_2_actions[] = {
0 /* to be assigned */,
PathPoint_SetSpeed
};
static GObjPathPointFunction path1682_3_actions[] = {
enterForeground
};
static GObjPathPointFunction path1682_4_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path1682_5_actions[] = {
startWaspAttack
};
static PathPoint path1682_points[] = {
{.x = 24, .y = 0, .numActions = 1, .actions = path1682_0_actions},
{.x = 56, .y = 0, .numActions = 0, .actions = 0},
{.x = 96, .y = 8, .numActions = 2, .actions = path1682_2_actions},
{.x = 120, .y = 16, .numActions = 1, .actions = path1682_3_actions},
{.x = 136, .y = 24, .numActions = 1, .actions = path1682_4_actions},
{.x = 152, .y = 40, .numActions = 1, .actions = path1682_5_actions}
};
static Path r13fly2_paths[] = {
{.x = 24, .y = 1232, .numPoints = 6, .points = path1682_points}
};
static LevelObject r13fly2_objects[] = {
{.definition = &defWaspShooter, .x = 48, .y = 1232, .animInd = 6, .flags = 0}
};
static LevelObjectGroup r13fly2 = {
    .numTriggers = 1, .triggers = r13fly2_triggers,
    .numPaths = 1, .paths = r13fly2_paths,
    .numObjects = 1, .objects = r13fly2_objects
};
// r13fly3
static Trigger r13fly3_triggers[] = {
{.y = 1152, .action = spawnCharacters}
};
static GObjPathPointFunction path1936_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1936_3_actions[] = {
enterForeground,
0 /* to be assigned */,
PathPoint_SetSpeed
};
static GObjPathPointFunction path1936_4_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path1936_5_actions[] = {
startWaspAttack
};
static PathPoint path1936_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path1936_0_actions},
{.x = -56, .y = 0, .numActions = 0, .actions = 0},
{.x = -96, .y = -8, .numActions = 0, .actions = 0},
{.x = -120, .y = -16, .numActions = 3, .actions = path1936_3_actions},
{.x = -136, .y = -24, .numActions = 1, .actions = path1936_4_actions},
{.x = -152, .y = -40, .numActions = 1, .actions = path1936_5_actions}
};
static Path r13fly3_paths[] = {
{.x = 224, .y = 1224, .numPoints = 6, .points = path1936_points}
};
static LevelObject r13fly3_objects[] = {
{.definition = &defWaspShooter, .x = 224, .y = 1224, .animInd = 6, .flags = 2048}
};
static LevelObjectGroup r13fly3 = {
    .numTriggers = 1, .triggers = r13fly3_triggers,
    .numPaths = 1, .paths = r13fly3_paths,
    .numObjects = 1, .objects = r13fly3_objects
};
// r14fly4
static Trigger r14fly4_triggers[] = {
{.y = 1144, .action = spawnCharacters}
};
static GObjPathPointFunction path1929_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1929_2_actions[] = {
0 /* to be assigned */,
PathPoint_SetSpeed
};
static GObjPathPointFunction path1929_3_actions[] = {
enterForeground
};
static GObjPathPointFunction path1929_4_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path1929_5_actions[] = {
startWaspAttack
};
static PathPoint path1929_points[] = {
{.x = -24, .y = 0, .numActions = 1, .actions = path1929_0_actions},
{.x = -56, .y = 0, .numActions = 0, .actions = 0},
{.x = -96, .y = 8, .numActions = 2, .actions = path1929_2_actions},
{.x = -120, .y = 16, .numActions = 1, .actions = path1929_3_actions},
{.x = -136, .y = 24, .numActions = 1, .actions = path1929_4_actions},
{.x = -152, .y = 40, .numActions = 1, .actions = path1929_5_actions}
};
static Path r14fly4_paths[] = {
{.x = 232, .y = 1192, .numPoints = 6, .points = path1929_points}
};
static LevelObject r14fly4_objects[] = {
{.definition = &defWaspShooter, .x = 208, .y = 1192, .animInd = 6, .flags = 2048}
};
static LevelObjectGroup r14fly4 = {
    .numTriggers = 1, .triggers = r14fly4_triggers,
    .numPaths = 1, .paths = r14fly4_paths,
    .numObjects = 1, .objects = r14fly4_objects
};
// r14beetles
static Trigger r14beetles_triggers[] = {
{.y = 1072, .action = spawnCharacters}
};
static GObjPathPointFunction path1948_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1948_2_actions[] = {
0 /* to be assigned */,
PathPoint_Rotate
};
static GObjPathPointFunction path1948_4_actions[] = {
PathPoint_Rotate,
faceRight,
0 /* to be assigned */
};
static GObjPathPointFunction path1948_5_actions[] = {
BeetleShoot
};
static GObjPathPointFunction path1948_6_actions[] = {
enterBackground
};
static GObjPathPointFunction path1948_7_actions[] = {
PathPoint_Rotate,
0 /* to be assigned */
};
static GObjPathPointFunction path1948_9_actions[] = {
faceLeft,
PathPoint_Rotate,
0 /* to be assigned */
};
static GObjPathPointFunction path1948_10_actions[] = {
enterForeground,
BeetleShoot
};
static GObjPathPointFunction path1948_12_actions[] = {
0 /* to be assigned */,
PathPoint_Rotate
};
static GObjPathPointFunction path1948_13_actions[] = {
PathPoint_Rotate,
faceRight,
0 /* to be assigned */
};
static GObjPathPointFunction path1948_14_actions[] = {
BeetleShoot
};
static GObjPathPointFunction path1948_15_actions[] = {
enterBackground
};
static GObjPathPointFunction path1948_16_actions[] = {
PathPoint_Rotate,
0 /* to be assigned */
};
static GObjPathPointFunction path1948_17_actions[] = {
faceLeft,
PathPoint_Rotate,
0 /* to be assigned */
};
static GObjPathPointFunction path1948_18_actions[] = {
enterForeground,
BeetleShoot
};
static GObjPathPointFunction path1948_20_actions[] = {
0 /* to be assigned */,
PathPoint_Rotate
};
static GObjPathPointFunction path1948_21_actions[] = {
PathPoint_Rotate,
faceRight,
0 /* to be assigned */
};
static GObjPathPointFunction path1948_22_actions[] = {
BeetleShoot
};
static GObjPathPointFunction path1948_23_actions[] = {
enterBackground
};
static GObjPathPointFunction path1948_24_actions[] = {
PathPoint_Rotate,
0 /* to be assigned */
};
static GObjPathPointFunction path1948_25_actions[] = {
faceLeft,
PathPoint_Rotate,
0 /* to be assigned */
};
static GObjPathPointFunction path1948_26_actions[] = {
enterForeground,
BeetleShoot
};
static GObjPathPointFunction path1948_28_actions[] = {
0 /* to be assigned */,
PathPoint_Rotate
};
static GObjPathPointFunction path1948_29_actions[] = {
PathPoint_Rotate,
faceRight,
0 /* to be assigned */
};
static GObjPathPointFunction path1948_30_actions[] = {
BeetleShoot
};
static GObjPathPointFunction path1948_31_actions[] = {
PathPoint_Rotate
};
static GObjPathPointFunction path1948_32_actions[] = {
PathPoint_Rotate
};
static PathPoint path1948_points[] = {
{.x = 64, .y = 240, .numActions = 0, .actions = 0},
{.x = 64, .y = 224, .numActions = 1, .actions = path1948_1_actions},
{.x = 40, .y = 208, .numActions = 2, .actions = path1948_2_actions},
{.x = 32, .y = 208, .numActions = 0, .actions = 0},
{.x = 24, .y = 208, .numActions = 3, .actions = path1948_4_actions},
{.x = 0, .y = 192, .numActions = 1, .actions = path1948_5_actions},
{.x = 0, .y = 176, .numActions = 1, .actions = path1948_6_actions},
{.x = 24, .y = 160, .numActions = 2, .actions = path1948_7_actions},
{.x = 32, .y = 160, .numActions = 0, .actions = 0},
{.x = 40, .y = 160, .numActions = 3, .actions = path1948_9_actions},
{.x = 64, .y = 144, .numActions = 2, .actions = path1948_10_actions},
{.x = 64, .y = 128, .numActions = 0, .actions = 0},
{.x = 40, .y = 112, .numActions = 2, .actions = path1948_12_actions},
{.x = 24, .y = 112, .numActions = 3, .actions = path1948_13_actions},
{.x = 0, .y = 96, .numActions = 1, .actions = path1948_14_actions},
{.x = 0, .y = 80, .numActions = 1, .actions = path1948_15_actions},
{.x = 24, .y = 64, .numActions = 2, .actions = path1948_16_actions},
{.x = 40, .y = 64, .numActions = 3, .actions = path1948_17_actions},
{.x = 64, .y = 48, .numActions = 2, .actions = path1948_18_actions},
{.x = 64, .y = 32, .numActions = 0, .actions = 0},
{.x = 40, .y = 16, .numActions = 2, .actions = path1948_20_actions},
{.x = 24, .y = 16, .numActions = 3, .actions = path1948_21_actions},
{.x = 0, .y = 0, .numActions = 1, .actions = path1948_22_actions},
{.x = 0, .y = -16, .numActions = 1, .actions = path1948_23_actions},
{.x = 24, .y = -32, .numActions = 2, .actions = path1948_24_actions},
{.x = 40, .y = -32, .numActions = 3, .actions = path1948_25_actions},
{.x = 64, .y = -48, .numActions = 2, .actions = path1948_26_actions},
{.x = 64, .y = -64, .numActions = 0, .actions = 0},
{.x = 40, .y = -80, .numActions = 2, .actions = path1948_28_actions},
{.x = 24, .y = -80, .numActions = 3, .actions = path1948_29_actions},
{.x = 0, .y = -96, .numActions = 1, .actions = path1948_30_actions},
{.x = 0, .y = -112, .numActions = 1, .actions = path1948_31_actions},
{.x = 16, .y = -128, .numActions = 1, .actions = path1948_32_actions},
{.x = 24, .y = -128, .numActions = 0, .actions = 0}
};
static GObjPathPointFunction path2023_2_actions[] = {
0 /* to be assigned */,
PathPoint_Rotate
};
static GObjPathPointFunction path2023_4_actions[] = {
PathPoint_Rotate,
faceRight,
0 /* to be assigned */
};
static GObjPathPointFunction path2023_5_actions[] = {
enterForeground,
BeetleShoot
};
static GObjPathPointFunction path2023_7_actions[] = {
PathPoint_Rotate,
0 /* to be assigned */
};
static GObjPathPointFunction path2023_9_actions[] = {
faceLeft,
PathPoint_Rotate,
0 /* to be assigned */
};
static GObjPathPointFunction path2023_10_actions[] = {
BeetleShoot
};
static GObjPathPointFunction path2023_11_actions[] = {
enterBackground
};
static GObjPathPointFunction path2023_12_actions[] = {
0 /* to be assigned */,
PathPoint_Rotate
};
static GObjPathPointFunction path2023_13_actions[] = {
PathPoint_Rotate,
faceRight,
0 /* to be assigned */
};
static GObjPathPointFunction path2023_14_actions[] = {
enterForeground,
BeetleShoot
};
static GObjPathPointFunction path2023_16_actions[] = {
PathPoint_Rotate,
0 /* to be assigned */
};
static GObjPathPointFunction path2023_17_actions[] = {
faceLeft,
PathPoint_Rotate,
0 /* to be assigned */
};
static GObjPathPointFunction path2023_18_actions[] = {
BeetleShoot
};
static GObjPathPointFunction path2023_19_actions[] = {
enterBackground
};
static GObjPathPointFunction path2023_20_actions[] = {
0 /* to be assigned */,
PathPoint_Rotate
};
static GObjPathPointFunction path2023_21_actions[] = {
PathPoint_Rotate,
faceRight,
0 /* to be assigned */
};
static GObjPathPointFunction path2023_22_actions[] = {
enterForeground,
BeetleShoot
};
static GObjPathPointFunction path2023_24_actions[] = {
PathPoint_Rotate,
0 /* to be assigned */
};
static GObjPathPointFunction path2023_25_actions[] = {
faceLeft,
PathPoint_Rotate,
0 /* to be assigned */
};
static GObjPathPointFunction path2023_26_actions[] = {
BeetleShoot
};
static GObjPathPointFunction path2023_27_actions[] = {
enterBackground
};
static GObjPathPointFunction path2023_28_actions[] = {
0 /* to be assigned */,
PathPoint_Rotate
};
static GObjPathPointFunction path2023_29_actions[] = {
PathPoint_Rotate,
faceRight,
0 /* to be assigned */
};
static GObjPathPointFunction path2023_30_actions[] = {
enterForeground,
BeetleShoot
};
static GObjPathPointFunction path2023_31_actions[] = {
PathPoint_Rotate
};
static GObjPathPointFunction path2023_32_actions[] = {
PathPoint_Rotate
};
static PathPoint path2023_points[] = {
{.x = 64, .y = 240, .numActions = 0, .actions = 0},
{.x = 64, .y = 224, .numActions = 0, .actions = 0},
{.x = 40, .y = 208, .numActions = 2, .actions = path2023_2_actions},
{.x = 32, .y = 208, .numActions = 0, .actions = 0},
{.x = 24, .y = 208, .numActions = 3, .actions = path2023_4_actions},
{.x = 0, .y = 192, .numActions = 2, .actions = path2023_5_actions},
{.x = 0, .y = 176, .numActions = 0, .actions = 0},
{.x = 24, .y = 160, .numActions = 2, .actions = path2023_7_actions},
{.x = 32, .y = 160, .numActions = 0, .actions = 0},
{.x = 40, .y = 160, .numActions = 3, .actions = path2023_9_actions},
{.x = 64, .y = 144, .numActions = 1, .actions = path2023_10_actions},
{.x = 64, .y = 128, .numActions = 1, .actions = path2023_11_actions},
{.x = 40, .y = 112, .numActions = 2, .actions = path2023_12_actions},
{.x = 24, .y = 112, .numActions = 3, .actions = path2023_13_actions},
{.x = 0, .y = 96, .numActions = 2, .actions = path2023_14_actions},
{.x = 0, .y = 80, .numActions = 0, .actions = 0},
{.x = 24, .y = 64, .numActions = 2, .actions = path2023_16_actions},
{.x = 40, .y = 64, .numActions = 3, .actions = path2023_17_actions},
{.x = 64, .y = 48, .numActions = 1, .actions = path2023_18_actions},
{.x = 64, .y = 32, .numActions = 1, .actions = path2023_19_actions},
{.x = 40, .y = 16, .numActions = 2, .actions = path2023_20_actions},
{.x = 24, .y = 16, .numActions = 3, .actions = path2023_21_actions},
{.x = 0, .y = 0, .numActions = 2, .actions = path2023_22_actions},
{.x = 0, .y = -16, .numActions = 0, .actions = 0},
{.x = 24, .y = -32, .numActions = 2, .actions = path2023_24_actions},
{.x = 40, .y = -32, .numActions = 3, .actions = path2023_25_actions},
{.x = 64, .y = -48, .numActions = 1, .actions = path2023_26_actions},
{.x = 64, .y = -64, .numActions = 1, .actions = path2023_27_actions},
{.x = 40, .y = -80, .numActions = 2, .actions = path2023_28_actions},
{.x = 24, .y = -80, .numActions = 3, .actions = path2023_29_actions},
{.x = 0, .y = -96, .numActions = 2, .actions = path2023_30_actions},
{.x = 0, .y = -112, .numActions = 1, .actions = path2023_31_actions},
{.x = 16, .y = -128, .numActions = 1, .actions = path2023_32_actions},
{.x = 24, .y = -128, .numActions = 0, .actions = 0}
};
static Path r14beetles_paths[] = {
{.x = 40, .y = 856, .numPoints = 34, .points = path1948_points},
{.x = 152, .y = 856, .numPoints = 34, .points = path2023_points}
};
static LevelObject r14beetles_objects[] = {
{.definition = &defBeetle, .x = 104, .y = 1096, .animInd = 10, .flags = 34816},
{.definition = &defBeetle, .x = 216, .y = 1096, .animInd = 10, .flags = 2048},
{.definition = 0 /* to be assigned */, .x = -40, .y = 996, .animInd = 0, .flags = 32768},
{.definition = 0 /* to be assigned */, .x = -40, .y = 860, .animInd = 0, .flags = 32768},
{.definition = 0 /* to be assigned */, .x = -40, .y = 728, .animInd = 0, .flags = 32768},
{.definition = 0 /* to be assigned */, .x = 256, .y = 932, .animInd = 0, .flags = 32768},
{.definition = 0 /* to be assigned */, .x = 256, .y = 796, .animInd = 0, .flags = 32768}
};
static LevelObjectGroup r14beetles = {
    .numTriggers = 1, .triggers = r14beetles_triggers,
    .numPaths = 2, .paths = r14beetles_paths,
    .numObjects = 7, .objects = r14beetles_objects
};
// r14acidants1
static Trigger r14acidants1_triggers[] = {
{.y = 1128, .action = spawnCharacters}
};
static GObjPathPointFunction path1310_2_actions[] = {
markDisappear
};
static PathPoint path1310_points[] = {
{.x = 0, .y = 16, .numActions = 0, .actions = 0},
{.x = 0, .y = 144, .numActions = 0, .actions = 0},
{.x = 0, .y = 160, .numActions = 1, .actions = path1310_2_actions}
};
static GObjPathPointFunction path1316_2_actions[] = {
markDisappear
};
static PathPoint path1316_points[] = {
{.x = 0, .y = 16, .numActions = 0, .actions = 0},
{.x = 0, .y = 144, .numActions = 0, .actions = 0},
{.x = 0, .y = 160, .numActions = 1, .actions = path1316_2_actions}
};
static Path r14acidants1_paths[] = {
{.x = 120, .y = 976, .numPoints = 3, .points = path1310_points},
{.x = 184, .y = 976, .numPoints = 3, .points = path1316_points}
};
static LevelObject r14acidants1_objects[] = {
{.definition = &defAntHole, .x = 120, .y = 992, .animInd = 6, .flags = 32768},
{.definition = &defAntHole, .x = 184, .y = 992, .animInd = 6, .flags = 32768}
};
static LevelObjectGroup r14acidants1 = {
    .numTriggers = 1, .triggers = r14acidants1_triggers,
    .numPaths = 2, .paths = r14acidants1_paths,
    .numObjects = 2, .objects = r14acidants1_objects
};
// r14acidants2
static Trigger r14acidants2_triggers[] = {
{.y = 1064, .action = spawnCharacters}
};
static GObjPathPointFunction path1353_2_actions[] = {
markDisappear
};
static PathPoint path1353_points[] = {
{.x = 0, .y = 16, .numActions = 0, .actions = 0},
{.x = 0, .y = 128, .numActions = 0, .actions = 0},
{.x = 0, .y = 144, .numActions = 1, .actions = path1353_2_actions}
};
static GObjPathPointFunction path1354_2_actions[] = {
markDisappear
};
static PathPoint path1354_points[] = {
{.x = 0, .y = 16, .numActions = 0, .actions = 0},
{.x = 0, .y = 128, .numActions = 0, .actions = 0},
{.x = 0, .y = 144, .numActions = 1, .actions = path1354_2_actions}
};
static Path r14acidants2_paths[] = {
{.x = 128, .y = 992, .numPoints = 3, .points = path1353_points},
{.x = 176, .y = 992, .numPoints = 3, .points = path1354_points}
};
static LevelObject r14acidants2_objects[] = {
{.definition = &defAntHole, .x = 128, .y = 1008, .animInd = 6, .flags = 32768},
{.definition = &defAntHole, .x = 176, .y = 1008, .animInd = 6, .flags = 32768}
};
static LevelObjectGroup r14acidants2 = {
    .numTriggers = 1, .triggers = r14acidants2_triggers,
    .numPaths = 2, .paths = r14acidants2_paths,
    .numObjects = 2, .objects = r14acidants2_objects
};
// r14acidants3
static Trigger r14acidants3_triggers[] = {
{.y = 1000, .action = spawnCharacters}
};
static GObjPathPointFunction path1364_2_actions[] = {
markDisappear
};
static PathPoint path1364_points[] = {
{.x = 0, .y = 16, .numActions = 0, .actions = 0},
{.x = 0, .y = 144, .numActions = 0, .actions = 0},
{.x = 0, .y = 160, .numActions = 1, .actions = path1364_2_actions}
};
static GObjPathPointFunction path1365_2_actions[] = {
markDisappear
};
static PathPoint path1365_points[] = {
{.x = 0, .y = 16, .numActions = 0, .actions = 0},
{.x = 0, .y = 144, .numActions = 0, .actions = 0},
{.x = 0, .y = 160, .numActions = 1, .actions = path1365_2_actions}
};
static Path r14acidants3_paths[] = {
{.x = 136, .y = 976, .numPoints = 3, .points = path1364_points},
{.x = 168, .y = 976, .numPoints = 3, .points = path1365_points}
};
static LevelObject r14acidants3_objects[] = {
{.definition = &defAntHole, .x = 168, .y = 992, .animInd = 6, .flags = 32768},
{.definition = &defAntHole, .x = 136, .y = 992, .animInd = 6, .flags = 32768}
};
static LevelObjectGroup r14acidants3 = {
    .numTriggers = 1, .triggers = r14acidants3_triggers,
    .numPaths = 2, .paths = r14acidants3_paths,
    .numObjects = 2, .objects = r14acidants3_objects
};
// r14wasp1a
static Trigger r14wasp1a_triggers[] = {
{.y = 1064, .action = spawnCharacters}
};
static GObjPathPointFunction path1342_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1342_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1342_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path1342_3_actions[] = {
startWaspAttack
};
static PathPoint path1342_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path1342_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path1342_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path1342_2_actions},
{.x = 0, .y = -8, .numActions = 1, .actions = path1342_3_actions}
};
static Path r14wasp1a_paths[] = {
{.x = 136, .y = 1128, .numPoints = 4, .points = path1342_points}
};
static LevelObject r14wasp1a_objects[] = {
{.definition = &defWaspShooter, .x = 136, .y = 1128, .animInd = 6, .flags = 2048}
};
static LevelObjectGroup r14wasp1a = {
    .numTriggers = 1, .triggers = r14wasp1a_triggers,
    .numPaths = 1, .paths = r14wasp1a_paths,
    .numObjects = 1, .objects = r14wasp1a_objects
};
// r14wasp1b
static Trigger r14wasp1b_triggers[] = {
{.y = 1056, .action = spawnCharacters}
};
static GObjPathPointFunction path1424_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1424_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1424_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path1424_3_actions[] = {
startWaspAttack
};
static PathPoint path1424_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path1424_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path1424_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path1424_2_actions},
{.x = 0, .y = -8, .numActions = 1, .actions = path1424_3_actions}
};
static Path r14wasp1b_paths[] = {
{.x = 120, .y = 1136, .numPoints = 4, .points = path1424_points}
};
static LevelObject r14wasp1b_objects[] = {
{.definition = &defWaspShooter, .x = 120, .y = 1136, .animInd = 6, .flags = 2048}
};
static LevelObjectGroup r14wasp1b = {
    .numTriggers = 1, .triggers = r14wasp1b_triggers,
    .numPaths = 1, .paths = r14wasp1b_paths,
    .numObjects = 1, .objects = r14wasp1b_objects
};
// r14wasp2a
static Trigger r14wasp2a_triggers[] = {
{.y = 992, .action = spawnCharacters}
};
static GObjPathPointFunction path1430_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1430_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1430_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path1430_3_actions[] = {
startWaspAttack
};
static PathPoint path1430_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path1430_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path1430_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path1430_2_actions},
{.x = 0, .y = -8, .numActions = 1, .actions = path1430_3_actions}
};
static Path r14wasp2a_paths[] = {
{.x = 24, .y = 1072, .numPoints = 4, .points = path1430_points}
};
static LevelObject r14wasp2a_objects[] = {
{.definition = &defWaspShooter, .x = 24, .y = 1072, .animInd = 6, .flags = 0}
};
static LevelObjectGroup r14wasp2a = {
    .numTriggers = 1, .triggers = r14wasp2a_triggers,
    .numPaths = 1, .paths = r14wasp2a_paths,
    .numObjects = 1, .objects = r14wasp2a_objects
};
// r14wasp2b
static Trigger r14wasp2b_triggers[] = {
{.y = 1032, .action = spawnCharacters}
};
static GObjPathPointFunction path1429_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1429_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1429_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path1429_3_actions[] = {
startWaspAttack
};
static PathPoint path1429_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path1429_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path1429_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path1429_2_actions},
{.x = 0, .y = -8, .numActions = 1, .actions = path1429_3_actions}
};
static Path r14wasp2b_paths[] = {
{.x = 120, .y = 1096, .numPoints = 4, .points = path1429_points}
};
static LevelObject r14wasp2b_objects[] = {
{.definition = &defWaspShooter, .x = 120, .y = 1096, .animInd = 6, .flags = 0}
};
static LevelObjectGroup r14wasp2b = {
    .numTriggers = 1, .triggers = r14wasp2b_triggers,
    .numPaths = 1, .paths = r14wasp2b_paths,
    .numObjects = 1, .objects = r14wasp2b_objects
};
// r14wasp3a
static Trigger r14wasp3a_triggers[] = {
{.y = 976, .action = spawnCharacters}
};
static GObjPathPointFunction path1426_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1426_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1426_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path1426_3_actions[] = {
startWaspAttack
};
static PathPoint path1426_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path1426_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path1426_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path1426_2_actions},
{.x = 0, .y = -8, .numActions = 1, .actions = path1426_3_actions}
};
static Path r14wasp3a_paths[] = {
{.x = 136, .y = 1056, .numPoints = 4, .points = path1426_points}
};
static LevelObject r14wasp3a_objects[] = {
{.definition = &defWaspShooter, .x = 136, .y = 1056, .animInd = 6, .flags = 2048}
};
static LevelObjectGroup r14wasp3a = {
    .numTriggers = 1, .triggers = r14wasp3a_triggers,
    .numPaths = 1, .paths = r14wasp3a_paths,
    .numObjects = 1, .objects = r14wasp3a_objects
};
// r14wasp3b
static Trigger r14wasp3b_triggers[] = {
{.y = 936, .action = spawnCharacters}
};
static GObjPathPointFunction path1427_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1427_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1427_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path1427_3_actions[] = {
startWaspAttack
};
static PathPoint path1427_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path1427_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path1427_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path1427_2_actions},
{.x = 0, .y = -8, .numActions = 1, .actions = path1427_3_actions}
};
static Path r14wasp3b_paths[] = {
{.x = 232, .y = 1032, .numPoints = 4, .points = path1427_points}
};
static LevelObject r14wasp3b_objects[] = {
{.definition = &defWaspShooter, .x = 232, .y = 1032, .animInd = 6, .flags = 2048}
};
static LevelObjectGroup r14wasp3b = {
    .numTriggers = 1, .triggers = r14wasp3b_triggers,
    .numPaths = 1, .paths = r14wasp3b_paths,
    .numObjects = 1, .objects = r14wasp3b_objects
};
// r14wasp4a
static Trigger r14wasp4a_triggers[] = {
{.y = 872, .action = spawnCharacters}
};
static GObjPathPointFunction path1425_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1425_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1425_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path1425_3_actions[] = {
startWaspAttack
};
static PathPoint path1425_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path1425_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path1425_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path1425_2_actions},
{.x = 0, .y = -8, .numActions = 1, .actions = path1425_3_actions}
};
static Path r14wasp4a_paths[] = {
{.x = 24, .y = 960, .numPoints = 4, .points = path1425_points}
};
static LevelObject r14wasp4a_objects[] = {
{.definition = &defWaspShooter, .x = 24, .y = 960, .animInd = 6, .flags = 0}
};
static LevelObjectGroup r14wasp4a = {
    .numTriggers = 1, .triggers = r14wasp4a_triggers,
    .numPaths = 1, .paths = r14wasp4a_paths,
    .numObjects = 1, .objects = r14wasp4a_objects
};
// r14wasp4b
static Trigger r14wasp4b_triggers[] = {
{.y = 880, .action = spawnCharacters}
};
static GObjPathPointFunction path2059_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2059_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2059_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path2059_3_actions[] = {
startWaspAttack
};
static PathPoint path2059_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path2059_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path2059_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path2059_2_actions},
{.x = 0, .y = -8, .numActions = 1, .actions = path2059_3_actions}
};
static Path r14wasp4b_paths[] = {
{.x = 136, .y = 952, .numPoints = 4, .points = path2059_points}
};
static LevelObject r14wasp4b_objects[] = {
{.definition = &defWaspShooter, .x = 136, .y = 952, .animInd = 6, .flags = 2048}
};
static LevelObjectGroup r14wasp4b = {
    .numTriggers = 1, .triggers = r14wasp4b_triggers,
    .numPaths = 1, .paths = r14wasp4b_paths,
    .numObjects = 1, .objects = r14wasp4b_objects
};
// r14wasp4c
static Trigger r14wasp4c_triggers[] = {
{.y = 864, .action = spawnCharacters}
};
static GObjPathPointFunction path2081_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2081_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2081_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path2081_3_actions[] = {
startWaspAttack
};
static PathPoint path2081_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path2081_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path2081_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path2081_2_actions},
{.x = 0, .y = -8, .numActions = 1, .actions = path2081_3_actions}
};
static Path r14wasp4c_paths[] = {
{.x = 24, .y = 984, .numPoints = 4, .points = path2081_points}
};
static LevelObject r14wasp4c_objects[] = {
{.definition = &defWaspShooter, .x = 24, .y = 984, .animInd = 6, .flags = 0}
};
static LevelObjectGroup r14wasp4c = {
    .numTriggers = 1, .triggers = r14wasp4c_triggers,
    .numPaths = 1, .paths = r14wasp4c_paths,
    .numObjects = 1, .objects = r14wasp4c_objects
};
// r14wasp5a
static Trigger r14wasp5a_triggers[] = {
{.y = 808, .action = spawnCharacters}
};
static GObjPathPointFunction path2121_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2121_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2121_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path2121_3_actions[] = {
startWaspAttack
};
static PathPoint path2121_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path2121_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path2121_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path2121_2_actions},
{.x = 0, .y = -8, .numActions = 1, .actions = path2121_3_actions}
};
static Path r14wasp5a_paths[] = {
{.x = 232, .y = 896, .numPoints = 4, .points = path2121_points}
};
static LevelObject r14wasp5a_objects[] = {
{.definition = &defWaspShooter, .x = 232, .y = 896, .animInd = 6, .flags = 2048}
};
static LevelObjectGroup r14wasp5a = {
    .numTriggers = 1, .triggers = r14wasp5a_triggers,
    .numPaths = 1, .paths = r14wasp5a_paths,
    .numObjects = 1, .objects = r14wasp5a_objects
};
// r14wasp5b
static Trigger r14wasp5b_triggers[] = {
{.y = 816, .action = spawnCharacters}
};
static GObjPathPointFunction path2114_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2114_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2114_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path2114_3_actions[] = {
startWaspAttack
};
static PathPoint path2114_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path2114_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path2114_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path2114_2_actions},
{.x = 0, .y = -8, .numActions = 1, .actions = path2114_3_actions}
};
static Path r14wasp5b_paths[] = {
{.x = 120, .y = 888, .numPoints = 4, .points = path2114_points}
};
static LevelObject r14wasp5b_objects[] = {
{.definition = &defWaspShooter, .x = 120, .y = 888, .animInd = 6, .flags = 0}
};
static LevelObjectGroup r14wasp5b = {
    .numTriggers = 1, .triggers = r14wasp5b_triggers,
    .numPaths = 1, .paths = r14wasp5b_paths,
    .numObjects = 1, .objects = r14wasp5b_objects
};
// r14wasp5c
static Trigger r14wasp5c_triggers[] = {
{.y = 800, .action = spawnCharacters}
};
static GObjPathPointFunction path2107_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2107_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2107_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path2107_3_actions[] = {
startWaspAttack
};
static PathPoint path2107_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path2107_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path2107_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path2107_2_actions},
{.x = 0, .y = -8, .numActions = 1, .actions = path2107_3_actions}
};
static Path r14wasp5c_paths[] = {
{.x = 232, .y = 920, .numPoints = 4, .points = path2107_points}
};
static LevelObject r14wasp5c_objects[] = {
{.definition = &defWaspShooter, .x = 232, .y = 920, .animInd = 6, .flags = 2048}
};
static LevelObjectGroup r14wasp5c = {
    .numTriggers = 1, .triggers = r14wasp5c_triggers,
    .numPaths = 1, .paths = r14wasp5c_paths,
    .numObjects = 1, .objects = r14wasp5c_objects
};
// r14wasp6a
static Trigger r14wasp6a_triggers[] = {
{.y = 760, .action = spawnCharacters}
};
static GObjPathPointFunction path2088_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2088_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2088_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path2088_3_actions[] = {
startWaspAttack
};
static PathPoint path2088_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path2088_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path2088_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path2088_2_actions},
{.x = 0, .y = -8, .numActions = 1, .actions = path2088_3_actions}
};
static GObjPathPointFunction path2127_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2127_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2127_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path2127_3_actions[] = {
startWaspAttack
};
static PathPoint path2127_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path2127_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path2127_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path2127_2_actions},
{.x = 0, .y = -8, .numActions = 1, .actions = path2127_3_actions}
};
static Path r14wasp6a_paths[] = {
{.x = 24, .y = 832, .numPoints = 4, .points = path2088_points},
{.x = 120, .y = 832, .numPoints = 4, .points = path2127_points}
};
static LevelObject r14wasp6a_objects[] = {
{.definition = &defWaspShooter, .x = 24, .y = 832, .animInd = 6, .flags = 0},
{.definition = &defWaspShooter, .x = 120, .y = 832, .animInd = 6, .flags = 2048}
};
static LevelObjectGroup r14wasp6a = {
    .numTriggers = 1, .triggers = r14wasp6a_triggers,
    .numPaths = 2, .paths = r14wasp6a_paths,
    .numObjects = 2, .objects = r14wasp6a_objects
};
// r14wasp6b
static Trigger r14wasp6b_triggers[] = {
{.y = 728, .action = spawnCharacters}
};
static GObjPathPointFunction path2142_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2142_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2142_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path2142_3_actions[] = {
startWaspAttack
};
static PathPoint path2142_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path2142_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path2142_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path2142_2_actions},
{.x = 0, .y = -8, .numActions = 1, .actions = path2142_3_actions}
};
static GObjPathPointFunction path2143_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2143_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2143_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path2143_3_actions[] = {
startWaspAttack
};
static PathPoint path2143_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path2143_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path2143_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path2143_2_actions},
{.x = 0, .y = -8, .numActions = 1, .actions = path2143_3_actions}
};
static Path r14wasp6b_paths[] = {
{.x = 24, .y = 848, .numPoints = 4, .points = path2142_points},
{.x = 120, .y = 848, .numPoints = 4, .points = path2143_points}
};
static LevelObject r14wasp6b_objects[] = {
{.definition = &defWaspShooter, .x = 24, .y = 848, .animInd = 6, .flags = 0},
{.definition = &defWaspShooter, .x = 120, .y = 848, .animInd = 6, .flags = 2048}
};
static LevelObjectGroup r14wasp6b = {
    .numTriggers = 1, .triggers = r14wasp6b_triggers,
    .numPaths = 2, .paths = r14wasp6b_paths,
    .numObjects = 2, .objects = r14wasp6b_objects
};
// Copy of r14wasp6a
static Trigger Copy_of_r14wasp6a_triggers[] = {
{.y = 728, .action = spawnCharacters}
};
static GObjPathPointFunction path2168_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2168_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2168_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path2168_3_actions[] = {
startWaspAttack
};
static PathPoint path2168_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path2168_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path2168_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path2168_2_actions},
{.x = 0, .y = -8, .numActions = 1, .actions = path2168_3_actions}
};
static GObjPathPointFunction path2169_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2169_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2169_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path2169_3_actions[] = {
startWaspAttack
};
static PathPoint path2169_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path2169_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path2169_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path2169_2_actions},
{.x = 0, .y = -8, .numActions = 1, .actions = path2169_3_actions}
};
static Path Copy_of_r14wasp6a_paths[] = {
{.x = 136, .y = 800, .numPoints = 4, .points = path2168_points},
{.x = 232, .y = 800, .numPoints = 4, .points = path2169_points}
};
static LevelObject Copy_of_r14wasp6a_objects[] = {
{.definition = &defWaspShooter, .x = 136, .y = 800, .animInd = 6, .flags = 0},
{.definition = &defWaspShooter, .x = 232, .y = 800, .animInd = 6, .flags = 2048}
};
static LevelObjectGroup Copy_of_r14wasp6a = {
    .numTriggers = 1, .triggers = Copy_of_r14wasp6a_triggers,
    .numPaths = 2, .paths = Copy_of_r14wasp6a_paths,
    .numObjects = 2, .objects = Copy_of_r14wasp6a_objects
};
// Copy of r14wasp6b
static Trigger Copy_of_r14wasp6b_triggers[] = {
{.y = 680, .action = spawnCharacters}
};
static GObjPathPointFunction path2155_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2155_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2155_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path2155_3_actions[] = {
startWaspAttack
};
static PathPoint path2155_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path2155_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path2155_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path2155_2_actions},
{.x = 0, .y = -8, .numActions = 1, .actions = path2155_3_actions}
};
static GObjPathPointFunction path2156_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path2156_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path2156_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path2156_3_actions[] = {
startWaspAttack
};
static PathPoint path2156_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path2156_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path2156_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path2156_2_actions},
{.x = 0, .y = -8, .numActions = 1, .actions = path2156_3_actions}
};
static Path Copy_of_r14wasp6b_paths[] = {
{.x = 136, .y = 800, .numPoints = 4, .points = path2155_points},
{.x = 232, .y = 800, .numPoints = 4, .points = path2156_points}
};
static LevelObject Copy_of_r14wasp6b_objects[] = {
{.definition = &defWaspShooter, .x = 136, .y = 800, .animInd = 6, .flags = 0},
{.definition = &defWaspShooter, .x = 232, .y = 800, .animInd = 6, .flags = 2048}
};
static LevelObjectGroup Copy_of_r14wasp6b = {
    .numTriggers = 1, .triggers = Copy_of_r14wasp6b_triggers,
    .numPaths = 2, .paths = Copy_of_r14wasp6b_paths,
    .numObjects = 2, .objects = Copy_of_r14wasp6b_objects
};
// r14powerup1
static Trigger r14powerup1_triggers[] = {
{.y = 1000, .action = spawnCharacters}
};
static GObjPathPointFunction path2172_1_actions[] = {
markDisappear
};
static PathPoint path2172_points[] = {
{.x = 0, .y = 0, .numActions = 0, .actions = 0},
{.x = 0, .y = 120, .numActions = 1, .actions = path2172_1_actions}
};
static Path r14powerup1_paths[] = {
{.x = 72, .y = 992, .numPoints = 2, .points = path2172_points}
};
static LevelObject r14powerup1_objects[] = {
{.definition = &defHoneyCell, .x = 72, .y = 992, .animInd = 4, .flags = 32768}
};
static LevelObjectGroup r14powerup1 = {
    .numTriggers = 1, .triggers = r14powerup1_triggers,
    .numPaths = 1, .paths = r14powerup1_paths,
    .numObjects = 1, .objects = r14powerup1_objects
};
// r14powerup2
static Trigger r14powerup2_triggers[] = {
{.y = 968, .action = spawnCharacters}
};
static GObjPathPointFunction path2174_1_actions[] = {
markDisappear
};
static PathPoint path2174_points[] = {
{.x = 0, .y = 0, .numActions = 0, .actions = 0},
{.x = 0, .y = 152, .numActions = 1, .actions = path2174_1_actions}
};
static Path r14powerup2_paths[] = {
{.x = 184, .y = 960, .numPoints = 2, .points = path2174_points}
};
static LevelObject r14powerup2_objects[] = {
{.definition = &defHoneyCell, .x = 184, .y = 960, .animInd = 4, .flags = 32768}
};
static LevelObjectGroup r14powerup2 = {
    .numTriggers = 1, .triggers = r14powerup2_triggers,
    .numPaths = 1, .paths = r14powerup2_paths,
    .numObjects = 1, .objects = r14powerup2_objects
};
// r15powerup2
static Trigger r15powerup2_triggers[] = {
{.y = 808, .action = spawnCharacters}
};
static GObjPathPointFunction path2178_1_actions[] = {
markDisappear
};
static PathPoint path2178_points[] = {
{.x = 0, .y = 0, .numActions = 0, .actions = 0},
{.x = 0, .y = 312, .numActions = 1, .actions = path2178_1_actions}
};
static Path r15powerup2_paths[] = {
{.x = 72, .y = 800, .numPoints = 2, .points = path2178_points}
};
static LevelObject r15powerup2_objects[] = {
{.definition = &defHoneyCell, .x = 72, .y = 800, .animInd = 4, .flags = 32768}
};
static LevelObjectGroup r15powerup2 = {
    .numTriggers = 1, .triggers = r15powerup2_triggers,
    .numPaths = 1, .paths = r15powerup2_paths,
    .numObjects = 1, .objects = r15powerup2_objects
};
// r15powerup1
static Trigger r15powerup1_triggers[] = {
{.y = 872, .action = spawnCharacters}
};
static GObjPathPointFunction path2176_1_actions[] = {
markDisappear
};
static PathPoint path2176_points[] = {
{.x = 0, .y = 0, .numActions = 0, .actions = 0},
{.x = 0, .y = 248, .numActions = 1, .actions = path2176_1_actions}
};
static Path r15powerup1_paths[] = {
{.x = 184, .y = 864, .numPoints = 2, .points = path2176_points}
};
static LevelObject r15powerup1_objects[] = {
{.definition = &defHoneyCell, .x = 184, .y = 864, .animInd = 4, .flags = 32768}
};
static LevelObjectGroup r15powerup1 = {
    .numTriggers = 1, .triggers = r15powerup1_triggers,
    .numPaths = 1, .paths = r15powerup1_paths,
    .numObjects = 1, .objects = r15powerup1_objects
};
// r16acidants1
static Trigger r16acidants1_triggers[] = {
{.y = 656, .action = spawnCharacters}
};
static GObjPathPointFunction path1461_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1461_2_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1461_6_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1461_7_actions[] = {
markDisappear
};
static PathPoint path1461_points[] = {
{.x = 0, .y = 16, .numActions = 0, .actions = 0},
{.x = -16, .y = 24, .numActions = 1, .actions = path1461_1_actions},
{.x = -16, .y = 40, .numActions = 1, .actions = path1461_2_actions},
{.x = 8, .y = 64, .numActions = 0, .actions = 0},
{.x = 168, .y = 64, .numActions = 0, .actions = 0},
{.x = 192, .y = 40, .numActions = 0, .actions = 0},
{.x = 192, .y = 24, .numActions = 1, .actions = path1461_6_actions},
{.x = 176, .y = 16, .numActions = 1, .actions = path1461_7_actions}
};
static Path r16acidants1_paths[] = {
{.x = 40, .y = 544, .numPoints = 8, .points = path1461_points}
};
static LevelObject r16acidants1_objects[] = {
{.definition = &defAntHole, .x = 40, .y = 560, .animInd = 6, .flags = 32768}
};
static LevelObjectGroup r16acidants1 = {
    .numTriggers = 1, .triggers = r16acidants1_triggers,
    .numPaths = 1, .paths = r16acidants1_paths,
    .numObjects = 1, .objects = r16acidants1_objects
};
// r16powerup
static Trigger r16powerup_triggers[] = {
{.y = 608, .action = spawnCharacters}
};
static LevelObject r16powerup_objects[] = {
{.definition = &defHoneyPot, .x = 168, .y = 592, .animInd = 0, .flags = 32768},
{.definition = &defHoneyPot, .x = 88, .y = 592, .animInd = 0, .flags = 32768}
};
static LevelObjectGroup r16powerup = {
    .numTriggers = 1, .triggers = r16powerup_triggers,
    .numPaths = 0, .paths = 0,
    .numObjects = 2, .objects = r16powerup_objects
};
// r16acidants2
static Trigger r16acidants2_triggers[] = {
{.y = 592, .action = spawnCharacters}
};
static GObjPathPointFunction path1468_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1468_3_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1468_7_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1468_8_actions[] = {
markDisappear
};
static PathPoint path1468_points[] = {
{.x = 0, .y = -8, .numActions = 0, .actions = 0},
{.x = 16, .y = 8, .numActions = 1, .actions = path1468_1_actions},
{.x = 32, .y = 24, .numActions = 0, .actions = 0},
{.x = 32, .y = 56, .numActions = 1, .actions = path1468_3_actions},
{.x = 8, .y = 80, .numActions = 0, .actions = 0},
{.x = -120, .y = 80, .numActions = 0, .actions = 0},
{.x = -144, .y = 56, .numActions = 0, .actions = 0},
{.x = -144, .y = 24, .numActions = 1, .actions = path1468_7_actions},
{.x = -112, .y = -8, .numActions = 1, .actions = path1468_8_actions}
};
static GObjPathPointFunction path1505_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1505_2_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1505_6_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1505_7_actions[] = {
markDisappear
};
static PathPoint path1505_points[] = {
{.x = -16, .y = 16, .numActions = 0, .actions = 0},
{.x = -32, .y = 32, .numActions = 1, .actions = path1505_1_actions},
{.x = -32, .y = 48, .numActions = 1, .actions = path1505_2_actions},
{.x = -8, .y = 72, .numActions = 0, .actions = 0},
{.x = 88, .y = 72, .numActions = 0, .actions = 0},
{.x = 112, .y = 48, .numActions = 0, .actions = 0},
{.x = 112, .y = 32, .numActions = 1, .actions = path1505_6_actions},
{.x = 96, .y = 16, .numActions = 1, .actions = path1505_7_actions}
};
static Path r16acidants2_paths[] = {
{.x = 184, .y = 464, .numPoints = 9, .points = path1468_points},
{.x = 88, .y = 456, .numPoints = 8, .points = path1505_points}
};
static LevelObject r16acidants2_objects[] = {
{.definition = &defAntHole, .x = 184, .y = 456, .animInd = 6, .flags = 32768},
{.definition = &defAntHole, .x = 72, .y = 472, .animInd = 6, .flags = 32768}
};
static LevelObjectGroup r16acidants2 = {
    .numTriggers = 1, .triggers = r16acidants2_triggers,
    .numPaths = 2, .paths = r16acidants2_paths,
    .numObjects = 2, .objects = r16acidants2_objects
};
// r16powerup2
static Trigger r16powerup2_triggers[] = {
{.y = 520, .action = spawnCharacters}
};
static LevelObject r16powerup2_objects[] = {
{.definition = &defReinforcedHoneyPot, .x = 128, .y = 512, .animInd = 2, .flags = 32768}
};
static LevelObjectGroup r16powerup2 = {
    .numTriggers = 1, .triggers = r16powerup2_triggers,
    .numPaths = 0, .paths = 0,
    .numObjects = 1, .objects = r16powerup2_objects
};
// r17powerup
static Trigger r17powerup_triggers[] = {
{.y = 424, .action = spawnCharacters}
};
static LevelObject r17powerup_objects[] = {
{.definition = &defHoneyPot, .x = 152, .y = 400, .animInd = 0, .flags = 32768},
{.definition = &defHoneyPot, .x = 128, .y = 408, .animInd = 0, .flags = 32768},
{.definition = &defHoneyPot, .x = 112, .y = 400, .animInd = 0, .flags = 32768}
};
static LevelObjectGroup r17powerup = {
    .numTriggers = 1, .triggers = r17powerup_triggers,
    .numPaths = 0, .paths = 0,
    .numObjects = 3, .objects = r17powerup_objects
};
// r17fly1a
static Trigger r17fly1a_triggers[] = {
{.y = 408, .action = spawnCharacters}
};
static GObjPathPointFunction path1647_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1647_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1647_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path1647_3_actions[] = {
startWaspAttack
};
static PathPoint path1647_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path1647_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path1647_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path1647_2_actions},
{.x = 0, .y = -8, .numActions = 1, .actions = path1647_3_actions}
};
static Path r17fly1a_paths[] = {
{.x = 40, .y = 472, .numPoints = 4, .points = path1647_points}
};
static LevelObject r17fly1a_objects[] = {
{.definition = &defWaspShooter, .x = 40, .y = 472, .animInd = 6, .flags = 0}
};
static LevelObjectGroup r17fly1a = {
    .numTriggers = 1, .triggers = r17fly1a_triggers,
    .numPaths = 1, .paths = r17fly1a_paths,
    .numObjects = 1, .objects = r17fly1a_objects
};
// r17fly1b
static Trigger r17fly1b_triggers[] = {
{.y = 408, .action = spawnCharacters}
};
static GObjPathPointFunction path1668_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1668_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1668_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path1668_3_actions[] = {
startWaspAttack
};
static PathPoint path1668_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path1668_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path1668_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path1668_2_actions},
{.x = 0, .y = -8, .numActions = 1, .actions = path1668_3_actions}
};
static Path r17fly1b_paths[] = {
{.x = 208, .y = 472, .numPoints = 4, .points = path1668_points}
};
static LevelObject r17fly1b_objects[] = {
{.definition = &defWaspShooter, .x = 208, .y = 472, .animInd = 6, .flags = 2048}
};
static LevelObjectGroup r17fly1b = {
    .numTriggers = 1, .triggers = r17fly1b_triggers,
    .numPaths = 1, .paths = r17fly1b_paths,
    .numObjects = 1, .objects = r17fly1b_objects
};
// r17fly2a
static Trigger r17fly2a_triggers[] = {
{.y = 384, .action = spawnCharacters}
};
static GObjPathPointFunction path1654_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1654_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1654_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path1654_3_actions[] = {
startWaspAttack
};
static PathPoint path1654_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path1654_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path1654_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path1654_2_actions},
{.x = 0, .y = -8, .numActions = 1, .actions = path1654_3_actions}
};
static Path r17fly2a_paths[] = {
{.x = 24, .y = 496, .numPoints = 4, .points = path1654_points}
};
static LevelObject r17fly2a_objects[] = {
{.definition = &defWaspShooter, .x = 24, .y = 496, .animInd = 6, .flags = 0}
};
static LevelObjectGroup r17fly2a = {
    .numTriggers = 1, .triggers = r17fly2a_triggers,
    .numPaths = 1, .paths = r17fly2a_paths,
    .numObjects = 1, .objects = r17fly2a_objects
};
// r17fly2b
static Trigger r17fly2b_triggers[] = {
{.y = 384, .action = spawnCharacters}
};
static GObjPathPointFunction path1661_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1661_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1661_2_actions[] = {
PathPoint_SlowSpeedAndShootBurstsAtTarget
};
static GObjPathPointFunction path1661_3_actions[] = {
startWaspAttack
};
static PathPoint path1661_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path1661_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path1661_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path1661_2_actions},
{.x = 0, .y = -8, .numActions = 1, .actions = path1661_3_actions}
};
static Path r17fly2b_paths[] = {
{.x = 232, .y = 496, .numPoints = 4, .points = path1661_points}
};
static LevelObject r17fly2b_objects[] = {
{.definition = &defWaspShooter, .x = 232, .y = 496, .animInd = 6, .flags = 2048}
};
static LevelObjectGroup r17fly2b = {
    .numTriggers = 1, .triggers = r17fly2b_triggers,
    .numPaths = 1, .paths = r17fly2b_paths,
    .numObjects = 1, .objects = r17fly2b_objects
};
// r17wasp1
static Trigger r17wasp1_triggers[] = {
{.y = 344, .action = spawnCharacters}
};
static GObjPathPointFunction path1707_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1707_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1707_2_actions[] = {
startWaspAttack
};
static PathPoint path1707_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path1707_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path1707_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path1707_2_actions}
};
static GObjPathPointFunction path1712_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1712_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1712_2_actions[] = {
startWaspAttack
};
static PathPoint path1712_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path1712_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path1712_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path1712_2_actions}
};
static Path r17wasp1_paths[] = {
{.x = 16, .y = 456, .numPoints = 3, .points = path1707_points},
{.x = 240, .y = 456, .numPoints = 3, .points = path1712_points}
};
static LevelObject r17wasp1_objects[] = {
{.definition = &defWasp, .x = 16, .y = 456, .animInd = 0, .flags = 0},
{.definition = &defWasp, .x = 240, .y = 456, .animInd = 0, .flags = 2048}
};
static LevelObjectGroup r17wasp1 = {
    .numTriggers = 1, .triggers = r17wasp1_triggers,
    .numPaths = 2, .paths = r17wasp1_paths,
    .numObjects = 2, .objects = r17wasp1_objects
};
// r17wasp3
static Trigger r17wasp3_triggers[] = {
{.y = 328, .action = spawnCharacters}
};
static GObjPathPointFunction path1730_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1730_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1730_2_actions[] = {
startWaspAttack
};
static PathPoint path1730_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path1730_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path1730_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path1730_2_actions}
};
static GObjPathPointFunction path1731_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1731_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1731_2_actions[] = {
startWaspAttack
};
static PathPoint path1731_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path1731_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path1731_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path1731_2_actions}
};
static Path r17wasp3_paths[] = {
{.x = 56, .y = 408, .numPoints = 3, .points = path1730_points},
{.x = 200, .y = 408, .numPoints = 3, .points = path1731_points}
};
static LevelObject r17wasp3_objects[] = {
{.definition = &defWasp, .x = 56, .y = 408, .animInd = 0, .flags = 0},
{.definition = &defWasp, .x = 200, .y = 408, .animInd = 0, .flags = 2048}
};
static LevelObjectGroup r17wasp3 = {
    .numTriggers = 1, .triggers = r17wasp3_triggers,
    .numPaths = 2, .paths = r17wasp3_paths,
    .numObjects = 2, .objects = r17wasp3_objects
};
// r17wasp5
static Trigger r17wasp5_triggers[] = {
{.y = 312, .action = spawnCharacters}
};
static GObjPathPointFunction path1752_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1752_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1752_2_actions[] = {
startWaspAttack
};
static PathPoint path1752_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path1752_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path1752_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path1752_2_actions}
};
static GObjPathPointFunction path1753_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1753_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1753_2_actions[] = {
startWaspAttack
};
static PathPoint path1753_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path1753_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path1753_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path1753_2_actions}
};
static Path r17wasp5_paths[] = {
{.x = 112, .y = 384, .numPoints = 3, .points = path1752_points},
{.x = 144, .y = 384, .numPoints = 3, .points = path1753_points}
};
static LevelObject r17wasp5_objects[] = {
{.definition = &defWasp, .x = 112, .y = 384, .animInd = 0, .flags = 0},
{.definition = &defWasp, .x = 144, .y = 384, .animInd = 0, .flags = 2048}
};
static LevelObjectGroup r17wasp5 = {
    .numTriggers = 1, .triggers = r17wasp5_triggers,
    .numPaths = 2, .paths = r17wasp5_paths,
    .numObjects = 2, .objects = r17wasp5_objects
};
// r17wasp7
static Trigger r17wasp7_triggers[] = {
{.y = 296, .action = spawnCharacters}
};
static GObjPathPointFunction path1763_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1763_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1763_2_actions[] = {
startWaspAttack
};
static PathPoint path1763_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path1763_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path1763_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path1763_2_actions}
};
static GObjPathPointFunction path1764_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1764_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1764_2_actions[] = {
startWaspAttack
};
static PathPoint path1764_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path1764_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path1764_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path1764_2_actions}
};
static Path r17wasp7_paths[] = {
{.x = 80, .y = 360, .numPoints = 3, .points = path1763_points},
{.x = 176, .y = 360, .numPoints = 3, .points = path1764_points}
};
static LevelObject r17wasp7_objects[] = {
{.definition = &defWasp, .x = 80, .y = 360, .animInd = 0, .flags = 0},
{.definition = &defWasp, .x = 176, .y = 360, .animInd = 0, .flags = 2048}
};
static LevelObjectGroup r17wasp7 = {
    .numTriggers = 1, .triggers = r17wasp7_triggers,
    .numPaths = 2, .paths = r17wasp7_paths,
    .numObjects = 2, .objects = r17wasp7_objects
};
// r17wasp9
static Trigger r17wasp9_triggers[] = {
{.y = 280, .action = spawnCharacters}
};
static GObjPathPointFunction path1785_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1785_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1785_2_actions[] = {
startWaspAttack
};
static PathPoint path1785_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path1785_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path1785_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path1785_2_actions}
};
static GObjPathPointFunction path1786_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path1786_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path1786_2_actions[] = {
startWaspAttack
};
static PathPoint path1786_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path1786_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path1786_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path1786_2_actions}
};
static Path r17wasp9_paths[] = {
{.x = 40, .y = 384, .numPoints = 3, .points = path1785_points},
{.x = 216, .y = 384, .numPoints = 3, .points = path1786_points}
};
static LevelObject r17wasp9_objects[] = {
{.definition = &defWasp, .x = 40, .y = 384, .animInd = 0, .flags = 0},
{.definition = &defWasp, .x = 216, .y = 384, .animInd = 0, .flags = 2048}
};
static LevelObjectGroup r17wasp9 = {
    .numTriggers = 1, .triggers = r17wasp9_triggers,
    .numPaths = 2, .paths = r17wasp9_paths,
    .numObjects = 2, .objects = r17wasp9_objects
};
// r18powerup2
static Trigger r18powerup2_triggers[] = {
{.y = 208, .action = spawnCharacters}
};
static LevelObject r18powerup2_objects[] = {
{.definition = &defReinforcedHoneyPot, .x = 120, .y = 192, .animInd = 2, .flags = 32768}
};
static LevelObjectGroup r18powerup2 = {
    .numTriggers = 1, .triggers = r18powerup2_triggers,
    .numPaths = 0, .paths = 0,
    .numObjects = 1, .objects = r18powerup2_objects
};
// r18powerup3
static Trigger r18powerup3_triggers[] = {
{.y = 144, .action = spawnCharacters}
};
static LevelObject r18powerup3_objects[] = {
{.definition = &defReinforcedHoneyPot, .x = 136, .y = 128, .animInd = 2, .flags = 32768}
};
static LevelObjectGroup r18powerup3 = {
    .numTriggers = 1, .triggers = r18powerup3_triggers,
    .numPaths = 0, .paths = 0,
    .numObjects = 1, .objects = r18powerup3_objects
};
// waspboss
static Trigger waspboss_triggers[] = {
{.y = 144, .action = stopStageScroll},
{.y = 224, .action = spawnCharacters}
};
static GObjPathPointFunction path1863_4_actions[] = {
ChooseSweepPath_DamageFlashRed
};
static PathPoint path1863_points[] = {
{.x = 208, .y = 120, .numActions = 0, .actions = 0},
{.x = 192, .y = 136, .numActions = 0, .actions = 0},
{.x = 160, .y = 152, .numActions = 0, .actions = 0},
{.x = 128, .y = 136, .numActions = 0, .actions = 0},
{.x = 112, .y = 112, .numActions = 1, .actions = path1863_4_actions}
};
static GObjPathPointFunction path1864_4_actions[] = {
ChooseSweepPath_DamageFlashRed
};
static PathPoint path1864_points[] = {
{.x = 160, .y = -24, .numActions = 0, .actions = 0},
{.x = 176, .y = -8, .numActions = 0, .actions = 0},
{.x = 208, .y = 8, .numActions = 0, .actions = 0},
{.x = 240, .y = -8, .numActions = 0, .actions = 0},
{.x = 256, .y = -32, .numActions = 1, .actions = path1864_4_actions}
};
static GObjPathPointFunction path1868_0_actions[] = {
PathPoint_ShootBurstsAtAngle
};
static GObjPathPointFunction path1868_2_actions[] = {
ChargeAndLayEggs_DamageFlashRed
};
static PathPoint path1868_points[] = {
{.x = 0, .y = 8, .numActions = 1, .actions = path1868_0_actions},
{.x = 0, .y = 96, .numActions = 0, .actions = 0},
{.x = 0, .y = 192, .numActions = 1, .actions = path1868_2_actions}
};
static GObjPathPointFunction path1871_0_actions[] = {
PathPoint_ShootBurstsAtAngle
};
static GObjPathPointFunction path1871_2_actions[] = {
ChargeAndLayEggs_DamageFlashRed
};
static PathPoint path1871_points[] = {
{.x = 0, .y = 8, .numActions = 1, .actions = path1871_0_actions},
{.x = 0, .y = 96, .numActions = 0, .actions = 0},
{.x = 0, .y = 192, .numActions = 1, .actions = path1871_2_actions}
};
static GObjPathPointFunction path1869_0_actions[] = {
PathPoint_ShootBurstsAtAngle
};
static GObjPathPointFunction path1869_2_actions[] = {
ChargeAndLayEggs_DamageFlashRed
};
static PathPoint path1869_points[] = {
{.x = 8, .y = 0, .numActions = 1, .actions = path1869_0_actions},
{.x = 96, .y = 0, .numActions = 0, .actions = 0},
{.x = 208, .y = 0, .numActions = 1, .actions = path1869_2_actions}
};
static GObjPathPointFunction path1870_0_actions[] = {
PathPoint_ShootBurstsAtAngle
};
static GObjPathPointFunction path1870_2_actions[] = {
ChargeAndLayEggs_DamageFlashRed
};
static PathPoint path1870_points[] = {
{.x = -8, .y = 0, .numActions = 1, .actions = path1870_0_actions},
{.x = -96, .y = 0, .numActions = 0, .actions = 0},
{.x = -208, .y = 0, .numActions = 1, .actions = path1870_2_actions}
};
static GObjPathPointFunction path1896_0_actions[] = {
PathPoint_ShootBurstsAtAngle
};
static GObjPathPointFunction path1896_2_actions[] = {
ChargeAndLayEggs_DamageFlashRed
};
static PathPoint path1896_points[] = {
{.x = 0, .y = 8, .numActions = 1, .actions = path1896_0_actions},
{.x = 0, .y = 96, .numActions = 0, .actions = 0},
{.x = 88, .y = 8, .numActions = 1, .actions = path1896_2_actions}
};
static GObjPathPointFunction path1897_0_actions[] = {
PathPoint_ShootBurstsAtAngle
};
static GObjPathPointFunction path1897_2_actions[] = {
ChargeAndLayEggs_DamageFlashRed
};
static PathPoint path1897_points[] = {
{.x = 8, .y = 0, .numActions = 1, .actions = path1897_0_actions},
{.x = 96, .y = 0, .numActions = 0, .actions = 0},
{.x = 8, .y = 88, .numActions = 1, .actions = path1897_2_actions}
};
static GObjPathPointFunction path1898_0_actions[] = {
PathPoint_ShootBurstsAtAngle
};
static GObjPathPointFunction path1898_2_actions[] = {
ChargeAndLayEggs_DamageFlashRed
};
static PathPoint path1898_points[] = {
{.x = -8, .y = 0, .numActions = 1, .actions = path1898_0_actions},
{.x = -96, .y = 0, .numActions = 0, .actions = 0},
{.x = -8, .y = 88, .numActions = 1, .actions = path1898_2_actions}
};
static GObjPathPointFunction path1899_0_actions[] = {
PathPoint_ShootBurstsAtAngle
};
static GObjPathPointFunction path1899_2_actions[] = {
ChargeAndLayEggs_DamageFlashRed
};
static PathPoint path1899_points[] = {
{.x = 0, .y = 8, .numActions = 1, .actions = path1899_0_actions},
{.x = 0, .y = 96, .numActions = 0, .actions = 0},
{.x = -88, .y = 8, .numActions = 1, .actions = path1899_2_actions}
};
static Path waspboss_paths[] = {
{.x = -80, .y = 48, .numPoints = 5, .points = path1863_points},
{.x = -32, .y = 192, .numPoints = 5, .points = path1864_points},
{.x = 32, .y = 160, .numPoints = 3, .points = path1868_points},
{.x = 224, .y = 160, .numPoints = 3, .points = path1871_points},
{.x = 32, .y = 160, .numPoints = 3, .points = path1869_points},
{.x = 224, .y = 160, .numPoints = 3, .points = path1870_points},
{.x = 32, .y = 160, .numPoints = 3, .points = path1896_points},
{.x = 32, .y = 160, .numPoints = 3, .points = path1897_points},
{.x = 224, .y = 160, .numPoints = 3, .points = path1898_points},
{.x = 224, .y = 160, .numPoints = 3, .points = path1899_points}
};
static LevelObject waspboss_objects[] = {
{.definition = &defWaspBoss, .x = 128, .y = 440, .animInd = 0, .flags = 0},
{.definition = 0 /* to be assigned */, .x = 128, .y = 96, .animInd = 0, .flags = 32768}
};
static LevelObjectGroup waspboss = {
    .numTriggers = 2, .triggers = waspboss_triggers,
    .numPaths = 10, .paths = waspboss_paths,
    .numObjects = 2, .objects = waspboss_objects
};
// teststart
static Trigger teststart_triggers[] = {
{.y = -224, .action = spawnCharacters}
};
static LevelObjectGroup teststart = {
    .numTriggers = 1, .triggers = teststart_triggers,
    .numPaths = 0, .paths = 0,
    .numObjects = 0, .objects = 0
};
// testwasp1
static Trigger testwasp1_triggers[] = {
{.y = -296, .action = spawnCharacters}
};
static GObjPathPointFunction path552_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path552_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path552_2_actions[] = {
startWaspAttack
};
static PathPoint path552_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path552_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path552_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path552_2_actions}
};
static Path testwasp1_paths[] = {
{.x = 96, .y = -240, .numPoints = 3, .points = path552_points}
};
static LevelObject testwasp1_objects[] = {
{.definition = &defWasp, .x = 96, .y = -240, .animInd = 0, .flags = 0}
};
static LevelObjectGroup testwasp1 = {
    .numTriggers = 1, .triggers = testwasp1_triggers,
    .numPaths = 1, .paths = testwasp1_paths,
    .numObjects = 1, .objects = testwasp1_objects
};
// testwasp2
static Trigger testwasp2_triggers[] = {
{.y = -312, .action = spawnCharacters}
};
static GObjPathPointFunction path558_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path558_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path558_2_actions[] = {
startWaspAttack
};
static PathPoint path558_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path558_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path558_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path558_2_actions}
};
static Path testwasp2_paths[] = {
{.x = 128, .y = -256, .numPoints = 3, .points = path558_points}
};
static LevelObject testwasp2_objects[] = {
{.definition = &defWasp, .x = 128, .y = -256, .animInd = 0, .flags = 0}
};
static LevelObjectGroup testwasp2 = {
    .numTriggers = 1, .triggers = testwasp2_triggers,
    .numPaths = 1, .paths = testwasp2_paths,
    .numObjects = 1, .objects = testwasp2_objects
};
// testwasp3
static Trigger testwasp3_triggers[] = {
{.y = -328, .action = spawnCharacters}
};
static GObjPathPointFunction path571_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path571_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path571_2_actions[] = {
startWaspAttack
};
static PathPoint path571_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path571_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path571_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path571_2_actions}
};
static Path testwasp3_paths[] = {
{.x = 160, .y = -272, .numPoints = 3, .points = path571_points}
};
static LevelObject testwasp3_objects[] = {
{.definition = &defWasp, .x = 160, .y = -272, .animInd = 0, .flags = 0}
};
static LevelObjectGroup testwasp3 = {
    .numTriggers = 1, .triggers = testwasp3_triggers,
    .numPaths = 1, .paths = testwasp3_paths,
    .numObjects = 1, .objects = testwasp3_objects
};
// testwasp4
static Trigger testwasp4_triggers[] = {
{.y = -360, .action = spawnCharacters}
};
static GObjPathPointFunction path565_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path565_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path565_2_actions[] = {
startWaspAttack
};
static PathPoint path565_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path565_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path565_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path565_2_actions}
};
static Path testwasp4_paths[] = {
{.x = 96, .y = -304, .numPoints = 3, .points = path565_points}
};
static LevelObject testwasp4_objects[] = {
{.definition = &defWasp, .x = 96, .y = -304, .animInd = 0, .flags = 0}
};
static LevelObjectGroup testwasp4 = {
    .numTriggers = 1, .triggers = testwasp4_triggers,
    .numPaths = 1, .paths = testwasp4_paths,
    .numObjects = 1, .objects = testwasp4_objects
};
// testwasp5
static Trigger testwasp5_triggers[] = {
{.y = -376, .action = spawnCharacters}
};
static GObjPathPointFunction path583_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path583_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path583_2_actions[] = {
startWaspAttack
};
static PathPoint path583_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path583_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path583_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path583_2_actions}
};
static Path testwasp5_paths[] = {
{.x = 64, .y = -288, .numPoints = 3, .points = path583_points}
};
static LevelObject testwasp5_objects[] = {
{.definition = &defWasp, .x = 64, .y = -288, .animInd = 0, .flags = 0}
};
static LevelObjectGroup testwasp5 = {
    .numTriggers = 1, .triggers = testwasp5_triggers,
    .numPaths = 1, .paths = testwasp5_paths,
    .numObjects = 1, .objects = testwasp5_objects
};
// testwasp6
static Trigger testwasp6_triggers[] = {
{.y = -392, .action = spawnCharacters}
};
static GObjPathPointFunction path577_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path577_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path577_2_actions[] = {
startWaspAttack
};
static PathPoint path577_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path577_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path577_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path577_2_actions}
};
static Path testwasp6_paths[] = {
{.x = 32, .y = -272, .numPoints = 3, .points = path577_points}
};
static LevelObject testwasp6_objects[] = {
{.definition = &defWasp, .x = 32, .y = -272, .animInd = 0, .flags = 0}
};
static LevelObjectGroup testwasp6 = {
    .numTriggers = 1, .triggers = testwasp6_triggers,
    .numPaths = 1, .paths = testwasp6_paths,
    .numObjects = 1, .objects = testwasp6_objects
};
// testwasp7
static Trigger testwasp7_triggers[] = {
{.y = -408, .action = spawnCharacters}
};
static GObjPathPointFunction path613_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path613_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path613_2_actions[] = {
startWaspAttack
};
static PathPoint path613_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path613_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path613_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path613_2_actions}
};
static Path testwasp7_paths[] = {
{.x = 160, .y = -352, .numPoints = 3, .points = path613_points}
};
static LevelObject testwasp7_objects[] = {
{.definition = &defWasp, .x = 160, .y = -352, .animInd = 0, .flags = 0}
};
static LevelObjectGroup testwasp7 = {
    .numTriggers = 1, .triggers = testwasp7_triggers,
    .numPaths = 1, .paths = testwasp7_paths,
    .numObjects = 1, .objects = testwasp7_objects
};
// testwasp8
static Trigger testwasp8_triggers[] = {
{.y = -424, .action = spawnCharacters}
};
static GObjPathPointFunction path607_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path607_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path607_2_actions[] = {
startWaspAttack
};
static PathPoint path607_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path607_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path607_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path607_2_actions}
};
static Path testwasp8_paths[] = {
{.x = 192, .y = -336, .numPoints = 3, .points = path607_points}
};
static LevelObject testwasp8_objects[] = {
{.definition = &defWasp, .x = 192, .y = -336, .animInd = 0, .flags = 0}
};
static LevelObjectGroup testwasp8 = {
    .numTriggers = 1, .triggers = testwasp8_triggers,
    .numPaths = 1, .paths = testwasp8_paths,
    .numObjects = 1, .objects = testwasp8_objects
};
// testwasp9
static Trigger testwasp9_triggers[] = {
{.y = -440, .action = spawnCharacters}
};
static GObjPathPointFunction path601_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path601_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path601_2_actions[] = {
startWaspAttack
};
static PathPoint path601_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path601_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path601_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path601_2_actions}
};
static Path testwasp9_paths[] = {
{.x = 224, .y = -320, .numPoints = 3, .points = path601_points}
};
static LevelObject testwasp9_objects[] = {
{.definition = &defWasp, .x = 224, .y = -320, .animInd = 0, .flags = 0}
};
static LevelObjectGroup testwasp9 = {
    .numTriggers = 1, .triggers = testwasp9_triggers,
    .numPaths = 1, .paths = testwasp9_paths,
    .numObjects = 1, .objects = testwasp9_objects
};
// testwasppowerup
static Trigger testwasppowerup_triggers[] = {
{.y = -424, .action = spawnCharacters}
};
static LevelObject testwasppowerup_objects[] = {
{.definition = &defHoneyPot, .x = 128, .y = -440, .animInd = 0, .flags = 32768}
};
static LevelObjectGroup testwasppowerup = {
    .numTriggers = 1, .triggers = testwasppowerup_triggers,
    .numPaths = 0, .paths = 0,
    .numObjects = 1, .objects = testwasppowerup_objects
};
// testwasp10
static Trigger testwasp10_triggers[] = {
{.y = -520, .action = spawnCharacters}
};
static GObjPathPointFunction path619_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path619_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path619_2_actions[] = {
startWaspAttack
};
static PathPoint path619_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path619_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path619_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path619_2_actions}
};
static Path testwasp10_paths[] = {
{.x = 32, .y = -408, .numPoints = 3, .points = path619_points}
};
static LevelObject testwasp10_objects[] = {
{.definition = &defWasp, .x = 32, .y = -408, .animInd = 0, .flags = 0}
};
static LevelObjectGroup testwasp10 = {
    .numTriggers = 1, .triggers = testwasp10_triggers,
    .numPaths = 1, .paths = testwasp10_paths,
    .numObjects = 1, .objects = testwasp10_objects
};
// testwasp11
static Trigger testwasp11_triggers[] = {
{.y = -528, .action = spawnCharacters}
};
static GObjPathPointFunction path631_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path631_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path631_2_actions[] = {
startWaspAttack
};
static PathPoint path631_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path631_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path631_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path631_2_actions}
};
static Path testwasp11_paths[] = {
{.x = 224, .y = -432, .numPoints = 3, .points = path631_points}
};
static LevelObject testwasp11_objects[] = {
{.definition = &defWasp, .x = 224, .y = -432, .animInd = 0, .flags = 0}
};
static LevelObjectGroup testwasp11 = {
    .numTriggers = 1, .triggers = testwasp11_triggers,
    .numPaths = 1, .paths = testwasp11_paths,
    .numObjects = 1, .objects = testwasp11_objects
};
// testwasp12
static Trigger testwasp12_triggers[] = {
{.y = -544, .action = spawnCharacters}
};
static GObjPathPointFunction path625_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path625_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path625_2_actions[] = {
startWaspAttack
};
static PathPoint path625_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path625_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path625_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path625_2_actions}
};
static Path testwasp12_paths[] = {
{.x = 80, .y = -328, .numPoints = 3, .points = path625_points}
};
static LevelObject testwasp12_objects[] = {
{.definition = &defWasp, .x = 80, .y = -328, .animInd = 0, .flags = 0}
};
static LevelObjectGroup testwasp12 = {
    .numTriggers = 1, .triggers = testwasp12_triggers,
    .numPaths = 1, .paths = testwasp12_paths,
    .numObjects = 1, .objects = testwasp12_objects
};
// testwasp13
static Trigger testwasp13_triggers[] = {
{.y = -552, .action = spawnCharacters}
};
static GObjPathPointFunction path637_0_actions[] = {
0 /* to be assigned */
};
static GObjPathPointFunction path637_1_actions[] = {
enterForeground
};
static GObjPathPointFunction path637_2_actions[] = {
startWaspAttack
};
static PathPoint path637_points[] = {
{.x = 0, .y = 0, .numActions = 1, .actions = path637_0_actions},
{.x = 0, .y = -32, .numActions = 1, .actions = path637_1_actions},
{.x = 0, .y = -40, .numActions = 1, .actions = path637_2_actions}
};
static Path testwasp13_paths[] = {
{.x = 176, .y = -352, .numPoints = 3, .points = path637_points}
};
static LevelObject testwasp13_objects[] = {
{.definition = &defWasp, .x = 176, .y = -352, .animInd = 0, .flags = 0}
};
static LevelObjectGroup testwasp13 = {
    .numTriggers = 1, .triggers = testwasp13_triggers,
    .numPaths = 1, .paths = testwasp13_paths,
    .numObjects = 1, .objects = testwasp13_objects
};
// testacidant1
static Trigger testacidant1_triggers[] = {
{.y = -792, .action = spawnCharacters}
};
static PathPoint path761_points[] = {
{.x = -32, .y = -48, .numActions = 0, .actions = 0},
{.x = 16, .y = -48, .numActions = 0, .actions = 0},
{.x = 256, .y = -48, .numActions = 0, .actions = 0}
};
static Path testacidant1_paths[] = {
{.x = 16, .y = -744, .numPoints = 3, .points = path761_points}
};
static LevelObject testacidant1_objects[] = {
{.definition = &defAcidAnt, .x = -16, .y = -792, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -80, .y = -792, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -192, .y = -792, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -32, .y = -792, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -144, .y = -792, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -96, .y = -792, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -208, .y = -792, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -48, .y = -792, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -160, .y = -792, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -112, .y = -792, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -224, .y = -792, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -64, .y = -792, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -176, .y = -792, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -128, .y = -792, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -240, .y = -792, .animInd = 2, .flags = 32768}
};
static LevelObjectGroup testacidant1 = {
    .numTriggers = 1, .triggers = testacidant1_triggers,
    .numPaths = 1, .paths = testacidant1_paths,
    .numObjects = 15, .objects = testacidant1_objects
};
// testacidant0
static Trigger testacidant0_triggers[] = {
{.y = -616, .action = spawnCharacters}
};
static PathPoint path842_points[] = {
{.x = -32, .y = -48, .numActions = 0, .actions = 0},
{.x = 16, .y = -48, .numActions = 0, .actions = 0},
{.x = 256, .y = -48, .numActions = 0, .actions = 0}
};
static Path testacidant0_paths[] = {
{.x = 16, .y = -568, .numPoints = 3, .points = path842_points}
};
static LevelObject testacidant0_objects[] = {
{.definition = &defAcidAnt, .x = -152, .y = -616, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -32, .y = -616, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -80, .y = -616, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -128, .y = -616, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -176, .y = -616, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -56, .y = -616, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -104, .y = -616, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -200, .y = -616, .animInd = 2, .flags = 32768}
};
static LevelObjectGroup testacidant0 = {
    .numTriggers = 1, .triggers = testacidant0_triggers,
    .numPaths = 1, .paths = testacidant0_paths,
    .numObjects = 8, .objects = testacidant0_objects
};
// Copy of testacidant0
static Trigger Copy_of_testacidant0_triggers[] = {
{.y = -664, .action = spawnCharacters}
};
static PathPoint path852_points[] = {
{.x = 0, .y = 0, .numActions = 0, .actions = 0},
{.x = -240, .y = 0, .numActions = 0, .actions = 0},
{.x = -288, .y = 0, .numActions = 0, .actions = 0}
};
static PathPoint path862_points[] = {
{.x = 0, .y = 0, .numActions = 0, .actions = 0},
{.x = -240, .y = 0, .numActions = 0, .actions = 0},
{.x = -288, .y = 0, .numActions = 0, .actions = 0}
};
static Path Copy_of_testacidant0_paths[] = {
{.x = 272, .y = -664, .numPoints = 3, .points = path852_points},
{.x = 272, .y = -568, .numPoints = 3, .points = path862_points}
};
static LevelObject Copy_of_testacidant0_objects[] = {
{.definition = &defAcidAnt, .x = 408, .y = -664, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 288, .y = -664, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 336, .y = -664, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 384, .y = -664, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 432, .y = -664, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 312, .y = -664, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 360, .y = -664, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 456, .y = -664, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 408, .y = -568, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 288, .y = -568, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 336, .y = -568, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 384, .y = -568, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 432, .y = -568, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 312, .y = -568, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 360, .y = -568, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 456, .y = -568, .animInd = 2, .flags = 34816}
};
static LevelObjectGroup Copy_of_testacidant0 = {
    .numTriggers = 1, .triggers = Copy_of_testacidant0_triggers,
    .numPaths = 2, .paths = Copy_of_testacidant0_paths,
    .numObjects = 16, .objects = Copy_of_testacidant0_objects
};
// Copy of testacidant1
static Trigger Copy_of_testacidant1_triggers[] = {
{.y = -968, .action = spawnCharacters}
};
static PathPoint path824_points[] = {
{.x = -32, .y = -48, .numActions = 0, .actions = 0},
{.x = 16, .y = -48, .numActions = 0, .actions = 0},
{.x = 264, .y = -48, .numActions = 0, .actions = 0}
};
static PathPoint path825_points[] = {
{.x = -32, .y = -48, .numActions = 0, .actions = 0},
{.x = 16, .y = -48, .numActions = 0, .actions = 0},
{.x = 256, .y = -48, .numActions = 0, .actions = 0}
};
static Path Copy_of_testacidant1_paths[] = {
{.x = 16, .y = -872, .numPoints = 3, .points = path824_points},
{.x = 24, .y = -888, .numPoints = 3, .points = path825_points}
};
static LevelObject Copy_of_testacidant1_objects[] = {
{.definition = &defAcidAnt, .x = -16, .y = -920, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -8, .y = -936, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -80, .y = -920, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -72, .y = -936, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -192, .y = -920, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -184, .y = -936, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -32, .y = -920, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -24, .y = -936, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -144, .y = -920, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -136, .y = -936, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -96, .y = -920, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -88, .y = -936, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -208, .y = -920, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -200, .y = -936, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -48, .y = -920, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -40, .y = -936, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -160, .y = -920, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -152, .y = -936, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -112, .y = -920, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -104, .y = -936, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -224, .y = -920, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -216, .y = -936, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -64, .y = -920, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -56, .y = -936, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -176, .y = -920, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -168, .y = -936, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -128, .y = -920, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -120, .y = -936, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -240, .y = -920, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -232, .y = -936, .animInd = 2, .flags = 32768}
};
static LevelObjectGroup Copy_of_testacidant1 = {
    .numTriggers = 1, .triggers = Copy_of_testacidant1_triggers,
    .numPaths = 2, .paths = Copy_of_testacidant1_paths,
    .numObjects = 30, .objects = Copy_of_testacidant1_objects
};
// testacidant2
static Trigger testacidant2_triggers[] = {
{.y = -840, .action = spawnCharacters}
};
static PathPoint path763_points[] = {
{.x = 0, .y = -48, .numActions = 0, .actions = 0},
{.x = -48, .y = -48, .numActions = 0, .actions = 0},
{.x = -288, .y = -48, .numActions = 0, .actions = 0}
};
static PathPoint path764_points[] = {
{.x = 0, .y = -48, .numActions = 0, .actions = 0},
{.x = -48, .y = -48, .numActions = 0, .actions = 0},
{.x = -288, .y = -48, .numActions = 0, .actions = 0}
};
static Path testacidant2_paths[] = {
{.x = 272, .y = -792, .numPoints = 3, .points = path763_points},
{.x = 272, .y = -696, .numPoints = 3, .points = path764_points}
};
static LevelObject testacidant2_objects[] = {
{.definition = &defAcidAnt, .x = 272, .y = -840, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 272, .y = -744, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 336, .y = -840, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 336, .y = -744, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 448, .y = -840, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 448, .y = -744, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 288, .y = -840, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 288, .y = -744, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 400, .y = -840, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 400, .y = -744, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 352, .y = -840, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 352, .y = -744, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 464, .y = -840, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 464, .y = -744, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 304, .y = -840, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 304, .y = -744, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 416, .y = -840, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 416, .y = -744, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 368, .y = -840, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 368, .y = -744, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 480, .y = -840, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 480, .y = -744, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 320, .y = -840, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 320, .y = -744, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 432, .y = -840, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 432, .y = -744, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 384, .y = -840, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 384, .y = -744, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 496, .y = -840, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 496, .y = -744, .animInd = 2, .flags = 34816}
};
static LevelObjectGroup testacidant2 = {
    .numTriggers = 1, .triggers = testacidant2_triggers,
    .numPaths = 2, .paths = testacidant2_paths,
    .numObjects = 30, .objects = testacidant2_objects
};
// testacidant4
static Trigger testacidant4_triggers[] = {
{.y = -1096, .action = spawnCharacters}
};
static PathPoint path666_points[] = {
{.x = -32, .y = -48, .numActions = 0, .actions = 0},
{.x = 16, .y = -48, .numActions = 0, .actions = 0},
{.x = 256, .y = -48, .numActions = 0, .actions = 0}
};
static PathPoint path712_points[] = {
{.x = -32, .y = -48, .numActions = 0, .actions = 0},
{.x = 16, .y = -48, .numActions = 0, .actions = 0},
{.x = 256, .y = -48, .numActions = 0, .actions = 0}
};
static PathPoint path667_points[] = {
{.x = 0, .y = -48, .numActions = 0, .actions = 0},
{.x = -48, .y = -48, .numActions = 0, .actions = 0},
{.x = -288, .y = -48, .numActions = 0, .actions = 0}
};
static PathPoint path713_points[] = {
{.x = 0, .y = -48, .numActions = 0, .actions = 0},
{.x = -48, .y = -48, .numActions = 0, .actions = 0},
{.x = -288, .y = -48, .numActions = 0, .actions = 0}
};
static Path testacidant4_paths[] = {
{.x = 16, .y = -920, .numPoints = 3, .points = path666_points},
{.x = 16, .y = -1016, .numPoints = 3, .points = path712_points},
{.x = 272, .y = -936, .numPoints = 3, .points = path667_points},
{.x = 272, .y = -1032, .numPoints = 3, .points = path713_points}
};
static LevelObject testacidant4_objects[] = {
{.definition = &defAcidAnt, .x = -16, .y = -968, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -16, .y = -1064, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -80, .y = -968, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -80, .y = -1064, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -192, .y = -968, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -192, .y = -1064, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -32, .y = -968, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -32, .y = -1064, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -144, .y = -968, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -144, .y = -1064, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -96, .y = -968, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -96, .y = -1064, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -208, .y = -968, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -208, .y = -1064, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -48, .y = -968, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -48, .y = -1064, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -160, .y = -968, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -160, .y = -1064, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -112, .y = -968, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -112, .y = -1064, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -224, .y = -968, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -224, .y = -1064, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -64, .y = -968, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -64, .y = -1064, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -176, .y = -968, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -176, .y = -1064, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -128, .y = -968, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -128, .y = -1064, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -240, .y = -968, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = -240, .y = -1064, .animInd = 2, .flags = 32768},
{.definition = &defAcidAnt, .x = 272, .y = -984, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 272, .y = -1080, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 336, .y = -984, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 336, .y = -1080, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 448, .y = -984, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 448, .y = -1080, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 288, .y = -984, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 288, .y = -1080, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 400, .y = -984, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 400, .y = -1080, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 352, .y = -984, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 352, .y = -1080, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 464, .y = -984, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 464, .y = -1080, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 304, .y = -984, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 304, .y = -1080, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 416, .y = -984, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 416, .y = -1080, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 368, .y = -984, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 368, .y = -1080, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 480, .y = -984, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 480, .y = -1080, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 320, .y = -984, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 320, .y = -1080, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 432, .y = -984, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 432, .y = -1080, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 384, .y = -984, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 384, .y = -1080, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 496, .y = -984, .animInd = 2, .flags = 34816},
{.definition = &defAcidAnt, .x = 496, .y = -1080, .animInd = 2, .flags = 34816}
};
static LevelObjectGroup testacidant4 = {
    .numTriggers = 1, .triggers = testacidant4_triggers,
    .numPaths = 4, .paths = testacidant4_paths,
    .numObjects = 60, .objects = testacidant4_objects
};
// testbeetle1
static Trigger testbeetle1_triggers[] = {
{.y = -1208, .action = spawnCharacters}
};
static GObjPathPointFunction path589_1_actions[] = {
0 /* to be assigned */
};
static PathPoint path589_points[] = {
{.x = 0, .y = 0, .numActions = 0, .actions = 0},
{.x = 0, .y = -32, .numActions = 1, .actions = path589_1_actions},
{.x = 0, .y = -128, .numActions = 0, .actions = 0}
};
static Path testbeetle1_paths[] = {
{.x = 128, .y = -1144, .numPoints = 3, .points = path589_points}
};
static LevelObject testbeetle1_objects[] = {
{.definition = &defBeetle, .x = 128, .y = -1144, .animInd = 5, .flags = 32768}
};
static LevelObjectGroup testbeetle1 = {
    .numTriggers = 1, .triggers = testbeetle1_triggers,
    .numPaths = 1, .paths = testbeetle1_paths,
    .numObjects = 1, .objects = testbeetle1_objects
};
// testtickpowerups
static Trigger testtickpowerups_triggers[] = {
{.y = -1256, .action = spawnCharacters}
};
static LevelObject testtickpowerups_objects[] = {
{.definition = &defHoneyPot, .x = 120, .y = -1272, .animInd = 0, .flags = 32768},
{.definition = &defHoneyPot, .x = 144, .y = -1280, .animInd = 0, .flags = 32768},
{.definition = &defHoneyPot, .x = 128, .y = -1288, .animInd = 0, .flags = 32768}
};
static LevelObjectGroup testtickpowerups = {
    .numTriggers = 1, .triggers = testtickpowerups_triggers,
    .numPaths = 0, .paths = 0,
    .numObjects = 3, .objects = testtickpowerups_objects
};
// testtick
static Trigger testtick_triggers[] = {
{.y = -1344, .action = spawnCharacters}
};
static LevelObject testtick_objects[] = {
{.definition = &defTick, .x = -16, .y = -1360, .animInd = 0, .flags = 32768},
{.definition = &defHoneyPot, .x = 120, .y = -1360, .animInd = 0, .flags = 32768}
};
static LevelObjectGroup testtick = {
    .numTriggers = 1, .triggers = testtick_triggers,
    .numPaths = 0, .paths = 0,
    .numObjects = 2, .objects = testtick_objects
};
// testtick2
static Trigger testtick2_triggers[] = {
{.y = -1416, .action = spawnCharacters}
};
static LevelObject testtick2_objects[] = {
{.definition = &defTick, .x = -16, .y = -1432, .animInd = 0, .flags = 32768},
{.definition = &defHoneyPot, .x = 120, .y = -1424, .animInd = 0, .flags = 32768},
{.definition = &defTick, .x = -40, .y = -1432, .animInd = 0, .flags = 32768}
};
static LevelObjectGroup testtick2 = {
    .numTriggers = 1, .triggers = testtick2_triggers,
    .numPaths = 0, .paths = 0,
    .numObjects = 3, .objects = testtick2_objects
};
// testtick4a
static Trigger testtick4a_triggers[] = {
{.y = -1664, .action = spawnCharacters}
};
static LevelObject testtick4a_objects[] = {
{.definition = &defTick, .x = -16, .y = -1680, .animInd = 0, .flags = 32768},
{.definition = &defReinforcedHoneyPot, .x = 120, .y = -1680, .animInd = 2, .flags = 32768}
};
static LevelObjectGroup testtick4a = {
    .numTriggers = 1, .triggers = testtick4a_triggers,
    .numPaths = 0, .paths = 0,
    .numObjects = 2, .objects = testtick4a_objects
};
// testtick4b
static Trigger testtick4b_triggers[] = {
{.y = -1672, .action = spawnCharacters}
};
static LevelObject testtick4b_objects[] = {
{.definition = &defTick, .x = -40, .y = -1688, .animInd = 0, .flags = 32768}
};
static LevelObjectGroup testtick4b = {
    .numTriggers = 1, .triggers = testtick4b_triggers,
    .numPaths = 0, .paths = 0,
    .numObjects = 1, .objects = testtick4b_objects
};
// testtick3
static Trigger testtick3_triggers[] = {
{.y = -1504, .action = spawnCharacters}
};
static LevelObject testtick3_objects[] = {
{.definition = &defTick, .x = -16, .y = -1520, .animInd = 0, .flags = 32768},
{.definition = &defTick, .x = -40, .y = -1520, .animInd = 0, .flags = 32768},
{.definition = &defTick, .x = -64, .y = -1520, .animInd = 0, .flags = 32768}
};
static LevelObjectGroup testtick3 = {
    .numTriggers = 1, .triggers = testtick3_triggers,
    .numPaths = 0, .paths = 0,
    .numObjects = 3, .objects = testtick3_objects
};
// testwaspeggs
static Trigger testwaspeggs_triggers[] = {
{.y = -1792, .action = spawnCharacters}
};
static LevelObject testwaspeggs_objects[] = {
{.definition = &defWaspEgg, .x = 40, .y = -1776, .animInd = 0, .flags = 32768},
{.definition = &defWaspEgg, .x = 24, .y = -1720, .animInd = 0, .flags = 32768},
{.definition = &defWaspEgg, .x = 88, .y = -1648, .animInd = 0, .flags = 32768},
{.definition = &defWaspEgg, .x = 176, .y = -1664, .animInd = 0, .flags = 32768},
{.definition = &defWaspEgg, .x = 216, .y = -1728, .animInd = 0, .flags = 32768},
{.definition = &defWaspEgg, .x = 168, .y = -1776, .animInd = 0, .flags = 32768},
{.definition = &defWaspEgg, .x = 168, .y = -1776, .animInd = 0, .flags = 32768}
};
static LevelObjectGroup testwaspeggs = {
    .numTriggers = 1, .triggers = testwaspeggs_triggers,
    .numPaths = 0, .paths = 0,
    .numObjects = 7, .objects = testwaspeggs_objects
};
static LevelObjectGroup *OBJECTGROUPS[] = {
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
&r4fly1,
&room4powerup,
&room5fly1,
&r5powerup,
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
&waspboss,
&teststart,
&testwasp1,
&testwasp2,
&testwasp3,
&testwasp4,
&testwasp5,
&testwasp6,
&testwasp7,
&testwasp8,
&testwasp9,
&testwasppowerup,
&testwasp10,
&testwasp11,
&testwasp12,
&testwasp13,
&testacidant1,
&testacidant0,
&Copy_of_testacidant0,
&Copy_of_testacidant1,
&testacidant2,
&testacidant4,
&testbeetle1,
&testtickpowerups,
&testtick,
&testtick2,
&testtick4a,
&testtick4b,
&testtick3,
&testwaspeggs
};
