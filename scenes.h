#include <iostream>

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