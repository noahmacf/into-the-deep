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
    stats += "\nHealth: " + health;
    stats += "\nAttack: " + attack;
    stats += "\nDefense: " + defense;
    stats += "\nStrength Throw: " + strengthThrow;
    stats += "\nOxygen Left: " + oxygenLeft;
    stats += "\nMeters to travel: " + metersToTravel;
    stats += "\n";
    return stats;
}