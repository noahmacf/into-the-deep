#include <iostream>
#include <string>
#include "Player.cpp"
#include "scenes.h"

using namespace std;

void battle()
{
    player::player user(10, 10, 10, 10, 10, 10, 10, 10, 10);
    doBattle(user);
}

void doBattle(player::player user)
{
    bool battleWon = false;
    while(!battleWon)
    {
        int index = 0;
        cout << "Please choose a method of attack\n";
        cout << "1. Harpoon    2. Punch\n";
        cout << "3. Slap       3. Block\n";
        cout << "Please enter in a number if you are unsure how the attack works\n";
        cout << "Type exit to exit\n";
        string input;
        do
        {
            cin >> input;
            if(input == "1") cout << "\nYou shoot a harpoon causing "  + (user.getAttack() + 5) + (string)" damage\n";
            if(input == "2") cout << "\nYou punch the fish causing " + user.getAttack() + (string)" damage\n";
            if(input == "3") cout << "\nYou slap the fish causing ";
        } while (input != "exit");
        
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