#include <iostream>
#include <string>
#include "Player.h"

using namespace std;


player::player(int clo, int intel, int wis, int wi, int caff)
{
    clout = clo;
    intelligence = intel;
    wisdom = wis;
    wit = wi;
    caffeine = caff;
}

int player::getClout()
{

}

string player::getStats()
{
    string stats;
    stats += "\nClout: " + clout;
    stats += "\nIntelligence: " + intelligence;
    stats += "\nWisdom: " + wisdom;
    stats += "\nWit: " + wit;
    stats += "\nCaffeiene" + caffeine;
    stats += "\n";
    return stats;
}