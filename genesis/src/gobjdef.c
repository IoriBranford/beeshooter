#include "gobject.h"

typedef struct GameObjectDefinition {
    unsigned char health, speed;
    unsigned short defeatPoints;
    const unsigned char *defeatSound;
    const GameObjectDefinition *bulletDef;
    void (*update)(GameObject*);
    void (*onDefeat)(GameObject*);
} GameObjectDefinition;

static const GameObjectDefinition defAnt = {
    .health = 1, .speed = 2,
    .defeatPoints = 100,
};