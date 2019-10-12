#ifndef FISH_H
#define FISH_H

#include <iostream>
#include <string>

using namespace std;

class fish
{
private:
    int health = 10;
    int attack = 10;
    int defense = 10;

public:
    fish(int he, int at, int de);

    int getHealth();
    int getAttack();
    int getDefense();

    string getStats();
    
};

#endif