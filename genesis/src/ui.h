#ifndef _UI_H
#define _UI_H

#include "player.h"
#include "gameplay.h"

u16 UI_loadSpriteFrames(u16 tileIndex);
void UI_freeSpriteFrames();

void UI_initHud(PlayerObject *player, u16 timeLeft);

void UI_updateResult(GameResult result);
void UI_updateScore(u32 score);
void UI_updateTimeLeft(u16 timeLeft);
void UI_updateLives(u8 lives);
void UI_updateWeaponLevel(u8 playerHealth);
void UI_updateWeaponSelect(u8 weapon);
void UI_updateSpeed(fix16 speed);
void UI_updateObjectCount(int n);
void UI_updateFPS(u32 fps);
void UI_updateCPU(u16 cpu);

#endif