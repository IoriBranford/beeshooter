#ifndef _GOBJDEF_H
#define _GOBJDEF_H

typedef struct GameObject GameObject;

typedef struct GameObjectDefinition {
    unsigned char health, speed;
    unsigned short defeatPoints;
    const unsigned char *defeatSound;
    const GameObjectDefinition *bulletDef;
    void (*update)(GameObject*);
    void (*onDefeat)(GameObject*);
} GameObjectDefinition;

#endif