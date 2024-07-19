#include "level.h"

extern const LevelObject lobj3200;
extern const Path path3179, path3180, path3181, path3182, path3183, path3184, path3201, path3202, path3203, path3204;

const LevelObject *lobjStartPoint = &lobj3200;
const Path *pathLeft = &path3179, *pathRight = &path3180;

const Path  *pathLeftHoriDiagonal = &path3202,
            *pathLeftHori = &path3183,
            *pathLeftVertical = &path3181,
            *pathLeftVertiDiagonal = &path3201;

const Path  *pathRightHoriDiagonal = &path3203,
            *pathRightHori = &path3184,
            *pathRightVertical = &path3182,
            *pathRightVertiDiagonal = &path3204;
