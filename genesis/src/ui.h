#ifndef _UI_H
#define _UI_H

#include "player.h"
#include "gameplay.h"

void UI_initHud();
void UI_drawHud(PlayerObject *player, u32 score, u16 timeLeft, GameResult result);

#endif