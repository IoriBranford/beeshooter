#ifndef _SPRITE_H
#define _SPRITE_H

typedef struct Sprite Sprite;

/**
 * sprite->data must be table of animation frame tiles returned by SPR_loadAllFrames
 */
void SPR_defaultFrameChange(Sprite *sprite);

#endif