#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

using namespace std;

class player
{
private:
    int health;
    int attack;
    int defense;
    int strengthThrow;
    int oxygenLeft;
    int ropeDurability;
    int chanceDurabilityDecrease;
    int harpoonDurability;
    int metersToTravel;

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
    int setHealth(int change);
    int setAttack(int change);
    int setDefense(int change);
    int setStrengthThrow(int change);
    int setOxygenLeft(int change);
    int setRopeDurability(int change);
    int setChanceDurabilityDecrease(int change);
    int setHarpoonDurability(int change);
    int setMetersToTravel(int change);
};

#endif