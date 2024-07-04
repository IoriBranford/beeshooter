#include <genesis.h>

void SPR_defaultFrameChange(Sprite *sprite) {
    u16 **aniFrameTiles = (u16**)sprite->data;
    SPR_setVRAMTileIndex(sprite, aniFrameTiles[sprite->animInd][sprite->frameInd]);
}

bool SPR_getAnimationWillBeDone(Sprite *sprite) {
    return sprite 
        && sprite->frameInd + 1 >= sprite->animation->numFrame
        && sprite->timer + 1 >= sprite->frame->timer;
}