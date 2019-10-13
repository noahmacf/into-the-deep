#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

player::player(int he, int at, int de, int st, int ox, int ro, int ch, int ha, int me)
{
    
    health = he;
    attack = at;
    defense = de;
    strengthThrow = st;
    oxygenLeft = ox;
    ropeDurability = ro;
    chanceDurabilityDecrease = ch;
    harpoonDurability = ha;
    metersToTravel = me;
}

int player::getHealth()
{
    return health;
}

int player::getAttack()
{
    return attack;
}

int player::getDefense()
{
    return defense;
}

int player::getStrengthThrow()
{
    return strengthThrow;
}

int player::getOxygenLeft()
{
    return oxygenLeft;
}

int player::getRopeDurability()
{
    return ropeDurability;
}

int player::getChanceDurabilityDecrease()
{
    return chanceDurabilityDecrease;
}

int player::getHarpoonDurability()
{
    return harpoonDurability;
}

int player::getMetersToTravel()
{
    return metersToTravel;
}

string player::getStats()
{
    string stats;
    stats += "\nHealth: " + to_string(health);
    stats += "\nAttack: " + to_string(attack);
    stats += "\nDefense: " + to_string(defense);
    stats += "\nStrength Throw: " + to_string(strengthThrow);
    stats += "\nOxygen Left: " + to_string(oxygenLeft);
    stats += "\nMeters to travel: " + to_string(metersToTravel);
    stats += "\n";
    return stats;
}

int player::setHealth(int change)
{
    this->health = change;
    return 0;
}

int player::setAttack(int change)
{
    this->attack = change;
    return 0;
}

int player::setDefense(int change)
{
    this->defense = change;
    return 0;
}

int player::setStrengthThrow(int change)
{
    this->strengthThrow = change;
    return 0;
}

int player::setOxygenLeft(int change)
{
    this->oxygenLeft = change;
    return 0;
}

int player::setRopeDurability(int change)
{
    this->ropeDurability = change;
    return 0;
}

int player::setChanceDurabilityDecrease(int change)
{
    this->chanceDurabilityDecrease = change;
    return 0;
}

int player::setHarpoonDurability(int change)
{
    this->harpoonDurability = change;
    return 0;
}

int player::setMetersToTravel(int change)
{
    this->metersToTravel = change;
    return 0;
}