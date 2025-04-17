#include "sounddef.h"

#include "res_audio.h"

#include <genesis.h>

void SND_playDef(SoundDefinition *soundDef) {
    XGM_startPlayPCM(soundDef->id, soundDef->priority, soundDef->channel);
}

#define DATA_AND_LENGTH(wav) .data = wav, .length = sizeof(wav)

SoundDefinition sndPause = {
    DATA_AND_LENGTH(wavPause),
    .channel = SOUND_PCM_CH1,
    .priority = 15
};
SoundDefinition sndPlayerShot = {
    DATA_AND_LENGTH(wavPlayerShot),
    .channel = SOUND_PCM_CH2,
    .priority = 0
};
SoundDefinition sndChangeSpeedSlow = {
    DATA_AND_LENGTH(wavChangeSpeedSlow),
    .channel = SOUND_PCM_CH2,
    .priority = 9
};
SoundDefinition sndChangeSpeedFast = {
    DATA_AND_LENGTH(wavChangeSpeedFast),
    .channel = SOUND_PCM_CH2,
    .priority = 9
};
SoundDefinition sndChangeWeapon = {
    DATA_AND_LENGTH(wavChangeWeapon),
    .channel = SOUND_PCM_CH2,
    .priority = 9
};
SoundDefinition sndExtend = {
    DATA_AND_LENGTH(wavExtend),
    .channel = SOUND_PCM_CH2,
    .priority = 15
};
SoundDefinition sndPlayerShotHit = {
    DATA_AND_LENGTH(wavPlayerShotHit),
    .channel = SOUND_PCM_CH3,
    .priority = 0
};
SoundDefinition sndPlayerHurt = {
    DATA_AND_LENGTH(wavPlayerHurt),
    .channel = SOUND_PCM_CH2,
    .priority = 15
};
SoundDefinition sndPlayerDie = {
    DATA_AND_LENGTH(wavPlayerDie),
    .channel = SOUND_PCM_CH2,
    .priority = 15
};
SoundDefinition sndEnemyShot = {
    DATA_AND_LENGTH(wavEnemyShot),
    .channel = SOUND_PCM_CH3,
    .priority = 4
};
SoundDefinition sndLiquidShot = {
    DATA_AND_LENGTH(wavLiquidShot),
    .channel = SOUND_PCM_CH3,
    .priority = 3
};
SoundDefinition sndBugKill1 = {
    DATA_AND_LENGTH(wavBugKill1),
    .channel = SOUND_PCM_CH3,
    .priority = 8
};
SoundDefinition sndBugKill2 = {
    DATA_AND_LENGTH(wavBugKill2),
    .channel = SOUND_PCM_CH3,
    .priority = 9
};
SoundDefinition sndBreakPot = {
    DATA_AND_LENGTH(wavBreakPot),
    .channel = SOUND_PCM_CH3,
    .priority = 8
};
SoundDefinition sndRocksBreak = {
    DATA_AND_LENGTH(wavRocksBreak),
    .channel = SOUND_PCM_CH3,
    .priority = 15
};
SoundDefinition sndBossKill = {
    DATA_AND_LENGTH(wavBossKill),
    .channel = SOUND_PCM_CH3,
    .priority = 15
};
SoundDefinition sndPowerup = {
    DATA_AND_LENGTH(wavPowerup),
    .channel = SOUND_PCM_CH2,
    .priority = 10
};
SoundDefinition sndBonus = {
    DATA_AND_LENGTH(wavBonus),
    .channel = SOUND_PCM_CH2,
    .priority = 14
};

static SoundDefinition *SOUNDDEFS[] = {
    &sndPause,
    &sndPlayerShot,
    &sndChangeSpeedFast,
    &sndChangeSpeedSlow,
    &sndChangeWeapon,
    &sndExtend,
    &sndPlayerShotHit,
    &sndPlayerHurt,
    &sndPlayerDie,
    &sndEnemyShot,
    &sndLiquidShot,
    &sndBugKill1,
    &sndBugKill2,
    &sndBreakPot,
    &sndRocksBreak,
    &sndBossKill,
    &sndPowerup,
    &sndBonus,
    0
};

void SND_initSoundDefs() {
    u8 id = 64;
    for (SoundDefinition **def = SOUNDDEFS; *def; ++def) {
        XGM_setPCM(id, (*def)->data, (*def)->length);
        (*def)->id = id;
        ++id;
    }
}