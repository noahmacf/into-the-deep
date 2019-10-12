#include <iostream>
#include "player.h"
#include "battle.cpp"

using namespace std;

// global constants

// function prototypes
void intro();
void scene1();

// main function
int main()
{

    intro();
    scene1();

    return 0;
}

void intro()
{
    cout << "Welcome to Idiot University, a game where how cunning you are determines your place.\n";
    cout << "You are an 18 year old freshman, who was valedictorian of your senior class.\n";
    cout << "Now that you have been eccepted into the prestigious Idiot University, you have to prove your worth.\n";
    cout << "Little did you know,. everyone around you, just might end up being a moron. Despite their academic achievements...\n\n";
}

void scene1()
{
    cout << "'And that is why my beliefs are inherently correct and yours are wrong!'\n";
    cout << "'That's rich,' Marcus snickered, 'The teacher may know some math, but that may be it'\n";
    cout << "'What do you think?' ";
    string thoughts;
    cin >> thoughts;
    cout << "\n'Uh huh,' Marcus replied, 'Well we better get to the next class'\n";
    cout << "--AN IDIOT APPROACHES--\n";
}