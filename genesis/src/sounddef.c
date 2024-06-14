#include "sounddef.h"

#include "res_audio.h"

#include <genesis.h>

void SND_playDef(const SoundDefinition *soundDef) {
    XGM2_playPCMEx(soundDef->data, soundDef->length, soundDef->channel, soundDef->priority, false, false);
}

#define DATA_AND_LENGTH(wav) .data = wav, .length = sizeof(wav)

const SoundDefinition sndExtend = {
    DATA_AND_LENGTH(wavExtend),
    .channel = SOUND_PCM_CH2,
    .priority = 16
};
const SoundDefinition sndPlayerShotHit = {
    DATA_AND_LENGTH(wavPlayerShotHit),
    .channel = SOUND_PCM_CH3,
    .priority = 0
};
const SoundDefinition sndBugKill1 = {
    DATA_AND_LENGTH(wavBugKill1),
    .channel = SOUND_PCM_CH3,
    .priority = 8
};
const SoundDefinition sndBugKill2 = {
    DATA_AND_LENGTH(wavBugKill2),
    .channel = SOUND_PCM_CH3,
    .priority = 9
};
const SoundDefinition sndBreakPot = {
    DATA_AND_LENGTH(wavBreakPot),
    .channel = SOUND_PCM_CH3,
    .priority = 8
};
const SoundDefinition sndPowerup = {
    DATA_AND_LENGTH(wavPowerup),
    .channel = SOUND_PCM_CH3,
    .priority = 9
};