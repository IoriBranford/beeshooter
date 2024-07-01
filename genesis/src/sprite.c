#include <genesis.h>

void SPR_defaultFrameChange(Sprite *sprite) {
    u16 **aniFrameTiles = (u16**)sprite->data;
    SPR_setVRAMTileIndex(sprite, aniFrameTiles[sprite->animInd][sprite->frameInd]);
}