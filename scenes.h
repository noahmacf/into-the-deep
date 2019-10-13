#ifndef SCENES_H
#define SCENES_H

#include <iostream>
#include <vector>

using namespace std;

class scene {

    private:
        string desc;
        string fishName;
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

        int sethealth(int add);
        int setattack(int add);
        int setdefense(int add);
        int sethealthGain(int add);
};

#endif