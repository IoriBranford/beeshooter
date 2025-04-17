#ifndef _HUD_H
#define _HUD_H

#include "player.h"
#include "gameplay.h"

u16 HUD_loadSpriteFrames(u16 tileIndex);
void HUD_freeSpriteFrames();

void HUD_init(PlayerObject *player, u16 timeLeft);

void HUD_updateResult(GameResult result);
void HUD_updateScore(u32 score);
void HUD_updateTimerMinutes(u16 minutes);
void HUD_updateTimerSeconds(u16 seconds);
void HUD_updateTimerFrames(u16 frames);
void HUD_updateTimeLeft(u16 timeLeft);
void HUD_updateLives(u8 lives);
void HUD_updateWeaponLevel(u8 playerHealth);
void HUD_updateWeaponSelect(u8 weapon);
void HUD_updateSpeed(fix16 speed);
void HUD_initBonus(u16 points);
void HUD_updateBonus();
void HUD_updateObjectCount(int n);
void HUD_updateFPS(u32 fps);
void HUD_updateCPU(u16 cpu);

#endif