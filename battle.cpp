#include <iostream>
#include <string>
#include "Player.cpp"
#include "scenes.h"
#include <ctime>
#include <cstdlib>

using namespace std;

void battle() {
    player user();
    bubble();
}

void doBattle() {
    
}

void bubble() {

    srand(static_cast<unsigned int>(time(0)));

    int random = (rand() % 10) + 1;

    int option = 0;

    cout << "An oxygen bubble has appeared nearby!\n";
    cout << "There are two ways to gain oxygen from the bubble, but both are not guarunteed...\n";
    cout << endl;
    cout << "1. You can guaruntee that your oxygen level increases by one\n";
    cout << "or...\n";
    cout << "2. You can take a risk and have a 25% chance of increasing your oxygen by 5\n"; 
    cout << "Select option 1 or 2: ";
    cin >> option;
    cout << endl;

    if (option == 1) {
        
    }


    

    /*
        upgrade strength?
            oxygen --;
            strenght += notpop;

        if they pop
            pop++
        else
            notpop++
    */
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