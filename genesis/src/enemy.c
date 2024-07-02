#include "gobject.h"
#include "gobjdef.h"

#include <genesis.h>

enum AniBigAnt {
    ANI_BIGANT_RIGHT,
    ANI_BIGANT_DOWN
};

void ENEMY_onDefeatBigAnt(GameObject *self) {
    const fix16 SPEEDY = FIX16(4);
    fix16 x = self->centerX, y = self->centerY;
    struct {
        fix16 x, y;
        fix16 velX, velY;
        GameObjectDefinition *def;
    } drops[2] = {
        {.x = x, .y = y, .velY = -SPEEDY},
        {.x = x, .y = y, .velY = -SPEEDY}
    };

    if (!self->sprite)
        GOBJ_initSprite(self);
    Sprite *sprite = self->sprite;
    bool vFlip = (sprite->attribut & TILE_ATTR_VFLIP_MASK) != 0;
    bool hFlip = (sprite->attribut & TILE_ATTR_HFLIP_MASK) != 0;
    u16 animInd = self->sprite->animInd;
    bool vertical = animInd == ANI_BIGANT_DOWN;
    if (vertical) {
        const fix16 SPEEDX = FIX16(1);
        const fix16 OFFSETX = FIX16(8), OFFSETY = FIX16(24);
        drops[0].y -= OFFSETY;
        drops[1].y += OFFSETY;

        if (hFlip) {
            drops[0].x -= OFFSETX;
            drops[1].x -= OFFSETX;
            drops[0].velX = -SPEEDX;
            drops[1].velX = -SPEEDX << 1;
        } else {
            drops[0].x += OFFSETX;
            drops[1].x += OFFSETX;
            drops[0].velX = SPEEDX;
            drops[1].velX = SPEEDX << 1;
        }

        if (vFlip) {
            drops[0].def = &defAntBigHead;
            drops[1].def = &defAntBigButt;
        } else {
            drops[1].def = &defAntBigHead;
            drops[0].def = &defAntBigButt;
        }
    } else {
        const fix16 OFFSETX = FIX16(24), OFFSETY = FIX16(-8);
        const fix16 SPEEDX = FIX16(1)/8;
        drops[0].x -= OFFSETX;
        drops[0].y += OFFSETY;
        drops[0].velX = -SPEEDX;
        drops[1].x += OFFSETX;
        drops[1].y += OFFSETY;
        drops[1].velX = SPEEDX;
        
        if (hFlip) {
            drops[0].def = &defAntBigHead;
            drops[1].def = &defAntBigButt;
        } else {
            drops[1].def = &defAntBigHead;
            drops[0].def = &defAntBigButt;
        }
    }
    for (int i = 0; i < 2; ++i) {
        GameObject *drop = GOBJ_createFromDef(drops[i].def, drops[i].x, drops[i].y);
        GOBJ_initSprite(drop);
        SPR_setHFlip(drop->sprite, hFlip);
        SPR_setVFlip(drop->sprite, vFlip);
        SPR_setAnim(drop->sprite, animInd);
        drop->velX = drops[i].velX;
        drop->velY = drops[i].velY;
    }

    GOBJ_defaultDefeatAction(self);
}