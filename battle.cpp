#include <iostream>
#include <string>
#include "Player.cpp"
#include "scenes.h"

using namespace std;

void battle()
{
    scene blank("", "", -1, -1, -1, -1);
    vector<scene> scenes;

    scenes[0] = goldfish;
    
    scenes.push_back(blank);

    bool battleWon = false;
    while(!battleWon)
    {
        cout << "";
    }
}

/*
    actions:
        attacks:
            harpoon
                durabilityHarpoon--
                healthOpponent--
            punch
                healthOpponent--
                "insert punch line"
            slap
                instant KO
                only after x turns

        defenses:
            bite
                healthOpponent--
                health++
                chanceDeath++
            block
                blocks next move
        
    
    bubbleScene:
        bubble
            is x1-x2 meters away
            you can throw the tank z meters
            upgrade for _ oxygen

    goingUpTowardsSurface
        distance per turn can be ugraded

    currency:
        oxygen:
            goes down with each battle
            can be used to level up
                health
                defense
                attack

*/