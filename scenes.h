#include <iostream>
#include <vector>

using namespace std;

class scene {

    private:
        string desc = "";
        string fishName = "";
        int health;
        int attack;
        int defense;
        int healthGain;

    public:
        scene(string de, string name, int he, int at, int def, int hG);

        void battle();
        string getDesc();
        string getfishName();
        int gethealth();
        int getattack();
        int getdefense();
        int gethealthGain();

};


scene shrimp("Oh no! You've come into contact with a feisty shrimp! Fortunately it's not very strong and you can easly overcome it", "Shrimp", 5, 2, 1, 3);
scene goldfish("Here comes an angry goldfish...", "Goldfish", 7, 3, 1, 5);
scene watersnake("This watersnake is even more agressive than the others. Choose your weapons wisely!", "Watersnake", 9, 4, 3, 7);
scene seaUrchin("You've uspet a sea urchin! Watch out for that attack level!", "Sea Urchin", 11, 5, 3, 9);
scene pufferFish("Now you've come face-to-face with a puffer fish!", "Puffer Fish", 13, 6, 5, 11);
scene crab("Uh oh... this crab does not look happy at all", "Crab", 15, 7, 5, 12);
scene turtle("Watch out! This turtle definitley has something up his shell", "Turtle", 17, 8, 5, 15);
scene dolphin("Here comes a vengeful dolphin!", "Dolphin", 19, 9, 6, 15);
scene stingray("You've now made contact with an octopus! Better keep your wits about you... ", "Stingray", 21, 10, 6, 17);
scene octopus("This octopus is on a mission, but look at that health gain!", "Octopus", 23, 11, 7, 22);
scene seaLion("Here comes one ruthless sea lion", "Sea Lion", 25, 12, 9, 22);
scene crocodile("This crocodile will certainly not be easy to kill!", "Crocodile", 27, 13, 9, 24);
scene shark("Beware! It will take a lot to kill this shark", "Shark", 29, 14, 12, 25);
scene giantSquid("Almost finished... so get rid of the squid!", "Giant Squid", 31, 15, 13, 26);
scene killerWhale("Better kill this whale before it kills you!", "Killer Whale", 33, 16, 16, 29);
scene lockNessMonster("THE ULTIMATE CHALLENGE: Defeat this beast and reach the surface!", "Loch Ness Monster", 35, 17, 17, 30);
