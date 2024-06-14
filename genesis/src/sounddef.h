#ifndef _SOUNDDEF_H
#define _SOUNDDEF_H

#include "types.h"
#include "snd/sound.h"

typedef struct SoundDefinition {
    const u8 *data;
    u32 length;
    u8 channel, priority;
} SoundDefinition;

void SND_playDef(const SoundDefinition *soundDef);

extern const SoundDefinition
    sndPlayerShotHit,
    sndBugKill1,
    sndBugKill2,
    sndBreakPot,
    sndPowerup;

#endif