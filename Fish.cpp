#include <iostream>
#include <string>
#include "Fish.h"

using namespace std;

fish::fish(int he, int at, int de)
{
    health = he;
    attack = at;
    defense = de;
}

int fish::getHealth()
{
    return health;
}

int fish::getAttack()
{
    return attack;
}

int fish::getDefense()
{
    return defense;
}

string fish::getStats()
{
    string stats;
    stats += "\nHealth: " + health;
    stats += "\nAttack: " + attack;
    stats += "\nDefense: " + defense;
    return stats;
}