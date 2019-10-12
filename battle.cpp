#include <iostream>
#include <string>
#include "Player.cpp"
#include "scenes.h"
#include <ctime>
#include <cstdlib>

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

void bubble(player::player user) {

    srand(static_cast<unsigned int>(time(0)));

    int random = (rand() % 4) + 1;

    int option = 0;

    cout << "An oxygen bubble has appeared nearby!\n";
    cout << "There are two ways to gain oxygen from the bubble, but both are not guarunteed...\n";
    cout << endl;
    cout << "1. You can guaruntee that your oxygen level increases by one\n";
    cout << "or...\n";
    cout << "2. You can take a risk and have a 25% chance of increasing your oxygen by 5\n";
    cout << endl; 
    cout << "Select option 1 or 2: ";
    cin >> option;
    cout << endl;

    bool valid = false;

    do 
    {
    if (option == 1) {
        user.setOxygenLeft(-5);
        cout << "Oxygen is now " << user.getOxygenLeft << "\n";
        valid = true;
    } else if (option == 2) {
        
        int guess;
        cout << "Pick a number between 1 and 4\n";
        cin >> guess;
        if (guess == random) {
            cout << "Congrats! You guessed correctly!\n";
            cout << "Oxygen is now " << user.getOxygenLeft << "\n";
        } else {
            cout << "Incorrect guess! No oxygen received\n";
        }
        valid = true;
    } else {
        cout << "Invalid input, try again.\n";
        valid = false;
    }   
        
    } while (!valid);

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