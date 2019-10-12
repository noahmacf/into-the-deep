#include <iostream>
#include <string>
#include "Player.cpp"
#include "scenes.h"
#include <ctime>
#include <cstdlib>

using namespace std;

void battle();
void doBattle(player user, vector<scene>& enemy, int index);
void bubble(player user);

void battle()
{
    int index = 0;
    player user(10, 10, 10, 10, 10, 10, 10, 10, 10);
    vector<scene> enemy;
    scene shrimp("Oh no! You've come into contact with a feisty shrimp! Fortunately it's not very strong and you can easly overcome it", "Shrimp", 5, 2, 1, 3);
    enemy.push_back(shrimp);
    doBattle(user, enemy, index); index++;
    bubble(user);
    
    scene goldfish("Here comes an angry goldfish...", "Goldfish", 7, 3, 1, 5);
    enemy.push_back(goldfish);
    doBattle(user, enemy, index); index++;
    bubble(user);
    
    scene watersnake("This watersnake is even more agressive than the others. Choose your weapons wisely!", "Watersnake", 9, 4, 3, 7);
    enemy.push_back(watersnake);
    doBattle(user, enemy, index); index++;
    bubble(user);
    
    scene seaUrchin("You've uspet a sea urchin! Watch out for that attack level!", "Sea Urchin", 11, 5, 3, 9);
    enemy.push_back(seaUrchin);
    doBattle(user, enemy, index); index++;
    bubble(user);
    
    scene pufferFish("Now you've come face-to-face with a puffer fish!", "Puffer Fish", 13, 6, 5, 11);
    enemy.push_back(pufferFish);
    doBattle(user, enemy, index); index++;
    bubble(user);
    
    scene crab("Uh oh... this crab does not look happy at all", "Crab", 15, 7, 5, 12);
    enemy.push_back(crab);
    doBattle(user, enemy, index); index++;
    bubble(user);
    
    scene turtle("Watch out! This turtle definitley has something up his shell", "Turtle", 17, 8, 5, 15);
    enemy.push_back(turtle);
    doBattle(user, enemy, index); index++;
    bubble(user);
    
    scene dolphin("Here comes a vengeful dolphin!", "Dolphin", 19, 9, 6, 15);
    enemy.push_back(dolphin);
    doBattle(user, enemy, index); index++;
    bubble(user);
    
    scene stingray("You've now made contact with an octopus! Better keep your wits about you... ", "Stingray", 21, 10, 6, 17);
    enemy.push_back(stingray);
    doBattle(user, enemy, index); index++;
    bubble(user);
    
    scene octopus("This octopus is on a mission, but look at that health gain!", "Octopus", 23, 11, 7, 22);
    enemy.push_back(octopus);
    doBattle(user, enemy, index); index++;
    bubble(user);
    
    scene seaLion("Here comes one ruthless sea lion", "Sea Lion", 25, 12, 9, 22);
    enemy.push_back(seaLion);
    doBattle(user, enemy, index); index++;
    bubble(user);
    
    scene crocodile("This crocodile will certainly not be easy to kill!", "Crocodile", 27, 13, 9, 24);
    enemy.push_back(crocodile);
    doBattle(user, enemy, index); index++;
    bubble(user);
    
    scene shark("Beware! It will take a lot to kill this shark", "Shark", 29, 14, 12, 25);
    enemy.push_back(shark);
    doBattle(user, enemy, index); index++;
    bubble(user);
    
    scene giantSquid("Almost finished... so get rid of the squid!", "Giant Squid", 31, 15, 13, 26);
    enemy.push_back(giantSquid);
    doBattle(user, enemy, index); index++;
    bubble(user);
    
    scene killerWhale("Better kill this whale before it kills you!", "Killer Whale", 33, 16, 16, 29);
    enemy.push_back(killerWhale);
    doBattle(user, enemy, index); index++;
    bubble(user);
    
    scene lockNessMonster("THE ULTIMATE CHALLENGE: Defeat this beast and reach the surface!", "Loch Ness Monster", 35, 17, 17, 30);
    enemy.push_back(lockNessMonster);
    doBattle(user, enemy, index); index++;
    bubble(user);


}

void doBattle(player user, vector<scene>& enemy, int index)
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
            if(input == "1") cout << "\nYou shoot a harpoon at the " + enemy[index].getfishName + " causing "  + (user.getAttack() + 5) + (string)" damage\n";
            if(input == "2") cout << "\nYou punch the " + enemy[index].getfishName + " causing " + user.getAttack() + (string)" damage\n";
            if(input == "3") cout << "\nYou slap the " + enemy[index].getfishName + " causing " + (user.getAttack() + 20) + (string)" damage\n";
            if(input == "4") cout << "\nYou block the " + enemy[index].getfishName + " causing the fish to not hit you\n";
        } while (input != "exit");
    }
}

void bubble(player user) {

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

void upgradeDistance(player user) {
    cout << "Current distance traveled per round: " << user.getMetersToTravel << endl;
    cout << "Would you like to use oxygen to increase this distance? (Y/N)\n";

    string response;
    cin >> response;


    bool valid;
    do 
    {
    if (response == "Y" || response == "y") {
        // ask if they want to spend 1 oxygen to get 2 more meters
        // or 2 oxygen to get 5
        valid = true;
    } else if (response == "N" || response == "n") {

        cout << "Okay, word.\n";        
        valid = true;
    } else {
        cout << "Invalid input, try again.\n";
        cout << "Only input 'Y' or 'N'\n";
        valid = false;
    }   
        
    } while (!valid);

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