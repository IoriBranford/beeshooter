#include "gobjdef.h"
#include "maths.h"
#include "res_gfx.h"

const GameObjectDefinition defAnt = {
    .health = 1, .speed = FIX16(2),
    .defeatPoints = 100,
    .spriteDef = &sprAnt,
    .palette = &palAnt
};