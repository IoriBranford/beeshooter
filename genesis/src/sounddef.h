#ifndef _SOUNDDEF_H
#define _SOUNDDEF_H

#include "types.h"
#include "snd/sound.h"

typedef struct SoundDefinition {
    const u8 *data;
    u16 length, id;
    u8 channel, priority;
} SoundDefinition;

void SND_initSoundDefs();
void SND_playDef(SoundDefinition *soundDef);

extern SoundDefinition
    sndPause,
    sndPlayerShot,
    sndChangeSpeedFast,
    sndChangeSpeedSlow,
    sndChangeWeapon,
    sndExtend,
    sndEnemyShot,
    sndLiquidShot,
    sndPlayerShotHit,
    sndPlayerHurt,
    sndPlayerDie,
    sndBugKill1,
    sndBugKill2,
    sndBreakPot,
    sndPowerup,
    sndBonus;

#endif