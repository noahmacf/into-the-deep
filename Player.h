#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

using namespace std;

class player
{
private:
    int health = 10;
    int attack = 10;
    int defense = 10;
    int strengthThrow = 10;
    int oxygenLeft = 100;
    int ropeDurability = 10;
    int chanceDurabilityDecrease = 10;
    int harpoonDurability = 10;
    int metersToTravel = 10;

public:
    player(int he, int at, int de, int st, int ox, int ro, int ch, int ha, int me);

    int getHealth();
    int getAttack();
    int getDefense();
    int getStrengthThrow();
    int getOxygenLeft();
    int getRopeDurability();
    int getChanceDurabilityDecrease();
    int getHarpoonDurability();
    int getMetersToTravel();
    string getStats();
    
};

#endif