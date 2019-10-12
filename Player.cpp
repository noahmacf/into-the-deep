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

int player::setHealth(int add)
{
    return health + add;
}

int player::setAttack(int add)
{
    return attack + add;
}

int player::setDefense(int add)
{
    return defense + add;
}

int player::setStrengthThrow(int add)
{
    return strengthThrow + add;
}

int player::setOxygenLeft(int add)
{
    return oxygenLeft + add;
}

int player::setRopeDurability(int add)
{
    return ropeDurability + add;
}

int player::setChanceDurabilityDecrease(int add)
{
    return chanceDurabilityDecrease + add;
}

int player::setHarpoonDurability(int add)
{
    return harpoonDurability + add;
}

int player::setMetersToTravel(int add)
{
    return metersToTravel + add;
}