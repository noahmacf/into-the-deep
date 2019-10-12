#include <iostream>
#include "scenes.h"
#include <string>


using namespace std;

scene::scene(string de, string name, int he, int at, int def, int hG) {
    desc = de;
    fishName = name;
    health = he;
    attack = at;
    defense = def;
    healthGain = hG;
}

string scene::getDesc() {
    return desc;
}

string scene::getfishName() {
    return fishName;
}

int scene::gethealth() {
    return health;
}
int scene::getattack() {
    return attack;
}

int scene::getdefense() {
    return defense;
}

int scene::gethealthGain() {
    return healthGain;
}

int scene::sethealth(int add) {
    return health + add;
}
int scene::setattack(int add) {
    return attack + add;
}

int scene::setdefense(int add) {
    return defense + add;
}
int scene::sethealthGain(int add) {
    return healthGain + add;
}
