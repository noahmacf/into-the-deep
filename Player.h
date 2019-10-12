#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

using namespace std;

class player
{
private:
    // Health
    int clout = 10;
    // Attack
    int intelligence = 10;
    // Defense
    int wisdom = 10;
    // Speed
    int wit = 10;
    // Stamina
    int caffeine = 10;

public:
    player(int clo, int intel, int wis, int wi, int caff);

    int getClout();
    int getIntelligence();
    int getWisdom();
    int getWit();
    int getCaffeine();
    string getStats();
    
};

#endif