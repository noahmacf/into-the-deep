#ifndef BATTLE_H
#define BATTLE_H

#include "Player.h"
#include "scenes.h"

bool battle();
void doBattle(player user, vector<scene>& enemy, int index);
void bubble(player user);

#endif 