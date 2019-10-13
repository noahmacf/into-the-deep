#include <iostream>
#include <string>
#include "scenes.h"
#include <ctime>
#include <cstdlib>
#include "battle.h"

using namespace std;

bool died = false;

bool battle()
{
    int index = 0;
    player user(10, 10, 10, 10, 10, 10, 10, 10, 10);
    vector<scene> enemy;
    scene shrimp("Oh no! You've come into contact with a feisty shrimp! Fortunately it's not very strong and you can easly overcome it", "Shrimp", 5, 2, 1, 3);
    enemy.push_back(shrimp);
    doBattle(user, enemy, index); index++;
    bubble(user);
    if (died) return true;
    
    scene goldfish("Here comes an angry goldfish...", "Goldfish", 7, 3, 1, 5);
    enemy.push_back(goldfish);
    doBattle(user, enemy, index); index++;
    bubble(user);
    if (died) return true;
    
    scene watersnake("This watersnake is even more agressive than the others. Choose your weapons wisely!", "Watersnake", 9, 4, 3, 7);
    enemy.push_back(watersnake);
    doBattle(user, enemy, index); index++;
    bubble(user);
    if (died) return true;
    
    scene seaUrchin("You've uspet a sea urchin! Watch out for that attack level!", "Sea Urchin", 11, 5, 3, 9);
    enemy.push_back(seaUrchin);
    doBattle(user, enemy, index); index++;
    bubble(user);
    if (died) return true;
    
    scene pufferFish("Now you've come face-to-face with a puffer fish!", "Puffer Fish", 13, 6, 5, 11);
    enemy.push_back(pufferFish);
    doBattle(user, enemy, index); index++;
    bubble(user);
    if (died) return true;
    
    scene crab("Uh oh... this crab does not look happy at all", "Crab", 15, 7, 5, 12);
    enemy.push_back(crab);
    doBattle(user, enemy, index); index++;
    bubble(user);
    if (died) return true;
    
    scene turtle("Watch out! This turtle definitley has something up his shell", "Turtle", 17, 8, 5, 15);
    enemy.push_back(turtle);
    doBattle(user, enemy, index); index++;
    bubble(user);
    if (died) return true;
    
    scene dolphin("Here comes a vengeful dolphin!", "Dolphin", 19, 9, 6, 15);
    enemy.push_back(dolphin);
    doBattle(user, enemy, index); index++;
    bubble(user);
    if (died) return true;
    
    scene stingray("You've now made contact with an octopus! Better keep your wits about you... ", "Stingray", 21, 10, 6, 17);
    enemy.push_back(stingray);
    doBattle(user, enemy, index); index++;
    bubble(user);
    if (died) return true;
    
    scene octopus("This octopus is on a mission, but look at that health gain!", "Octopus", 23, 11, 7, 22);
    enemy.push_back(octopus);
    doBattle(user, enemy, index); index++;
    bubble(user);
    if (died) return true;
    
    scene seaLion("Here comes one ruthless sea lion", "Sea Lion", 25, 12, 9, 22);
    enemy.push_back(seaLion);
    doBattle(user, enemy, index); index++;
    bubble(user);
    if (died) return true;
    
    scene crocodile("This crocodile will certainly not be easy to kill!", "Crocodile", 27, 13, 9, 24);
    enemy.push_back(crocodile);
    doBattle(user, enemy, index); index++;
    bubble(user);
    if (died) return true;
    
    scene shark("Beware! It will take a lot to kill this shark", "Shark", 29, 14, 12, 25);
    enemy.push_back(shark);
    doBattle(user, enemy, index); index++;
    bubble(user);
    if (died) return true;
    
    scene giantSquid("Almost finished... so get rid of the squid!", "Giant Squid", 31, 15, 13, 26);
    enemy.push_back(giantSquid);
    doBattle(user, enemy, index); index++;
    bubble(user);
    if (died) return true;
    
    scene killerWhale("Better kill this whale before it kills you!", "Killer Whale", 33, 16, 16, 29);
    enemy.push_back(killerWhale);
    doBattle(user, enemy, index); index++;
    bubble(user);
    if (died) return true;
    
    scene lockNessMonster("THE ULTIMATE CHALLENGE: Defeat this beast and reach the surface!", "Loch Ness Monster", 35, 17, 17, 30);
    enemy.push_back(lockNessMonster);
    doBattle(user, enemy, index);
    

    return died;
}

void doBattle(player user, vector<scene>& enemy, int index)
{
    bool battleWon = false;
    bool enemyDead = false;
    int slapsLeft = 1;
    int harpoonsLeft = 10;
    int blocksLeft = 3;
    int turns = 0;
    bool blocked = false;

    // get enemy description
    cout << enemy[index].getDesc() << "\n";

    // set enemy stats
    int enemyHealth = enemy[index].gethealth();

    while(!battleWon)
    {
        //Player turn          
        blocked = false;
        cout << "Please choose a method of attack\n";
        cout << "1. Harpoon    2. Punch\n";
        cout << "3. Slap       4. Block\n";

        cout << "\nThe enemy has " << enemyHealth << " health left\n";

        cout << "Please enter in a number if you are unsure how the attack works\n";
        cout << "Type exit to exit information about attacks\n";
        string input;
        do
        {
            cin >> input;
            if(input == "1") cout << "\nYou would shoot a harpoon at the " << enemy[index].getfishName() << " causing "  << (user.getAttack() + 5) << (string)" damage\n";
            else if(input == "2") cout << "\nYou would punch the " << enemy[index].getfishName() << " causing " << user.getAttack() << (string)" damage\n";
            else if(input == "3") cout << "\nYou would slap the " << enemy[index].getfishName() << " causing " << (user.getAttack() + 20) << (string)" damage\n";
            else if(input == "4") cout << "\nYou would block the " << enemy[index].getfishName() << " causing the fish to not hit you\n";
        } while (input != "exit");
        cout << "\n--Status--\n";
        cout << "You may use the harpoon " << harpoonsLeft << (string)" more times.\n"; 
        cout << "You may use punch as many more times as you wish.\n";
        cout << "You may use slap in " << (3 - turns) << (string)" more turns";
        cout << "You may use slap " << slapsLeft << (string)" more times\n";
        cout << "You may use block " << blocksLeft << (string)" more times.\n";

        cout << "\nWhat move do you want to use?\n";
        cin >> input;
        if(input == "1") {
            cout << "\nYou shot a harpoon at the " << enemy[index].getfishName() << " causing "  << (user.getAttack() + 5) << (string)" damage\n";
            enemyHealth -= (user.getAttack() + 5);
        }
        if(input == "2") {
            cout << "\nYou punched the " << enemy[index].getfishName() << " causing " << user.getAttack() << (string)" damage\n";
            enemyHealth -= (user.getAttack());
        }
        if(input == "3" && turns >= 3) {
            cout << "\nYou slapped the " << enemy[index].getfishName() << " causing " << (user.getAttack() + 20) << (string)" damage\n";
            enemyHealth -= (user.getAttack() + 20);
            slapsLeft--;
        }
        if(input == "3" && turns < 3) {
            cout << "\nSorry! you have " << (3 - turns) << (string)" turns left before you can use slap\n";
        }
        if(input == "4") {
            cout << "\nYou blocked the " << enemy[index].getfishName() << " causing the fish to not hit you\n";
            blocked = true;
            blocksLeft--;
        }
        turns++;

        cout << "\nThe enemy has " << enemyHealth << " health left.\n";
        cout << "You have " << user.getHealth() << " health left.\n\n";

        // enemy
        if(blocked)
        {
            cout << "The enemy was blocked\n";
        }
        else if(enemyHealth >= 0) {
            cout << "The enemy hit you!!\n";
            user.setHealth(user.getHealth() - enemy[index].getattack());
            cout << "You have been dealth with " << enemy[index].getattack() << (string)" damage\n";
        }

        cout << "You have " << user.getHealth() << " health left.\n";
        
        if(enemyHealth <= 0)
        {
            cout << "You have won!!\n";
            battleWon = true;
        }

        if(user.getHealth() <= 0)
        {
            cout << "You have died. Sad.\n";
            died = true;
            bool goAway = false;
            while(!goAway)
            {
                cout << "please go away now\n";
                string doesntMatter = "";
                cin >> doesntMatter;
            }
            return;
        }

        if(user.getOxygenLeft() <= 0) {
            cout << "You ran out of oxygen, thus you have died.\n";
            died = true;
            bool goAway = false;
            while(!goAway)
            {
                cout << "please go away now\n";
                string doesntMatter = "";
                cin >> doesntMatter;
            }
            return;
        }
    }
}

void bubble(player user) {

    if(!died) {

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
            cout << "Oxygen is now " << user.getOxygenLeft() << "\n";
            valid = true;
        } else if (option == 2) {
            
            int guess;
            cout << "Pick a number between 1 and 4\n";
            cin >> guess;
            if (guess == random) {
                cout << "Congrats! You guessed correctly!\n";
                cout << "Oxygen is now " << user.getOxygenLeft() << "\n";
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
}

void upgradeDistance(player user) {
    cout << "Current distance traveled per round: " << user.getMetersToTravel() << endl;
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