#include <iostream>
#include "player.h"
#include "battle.cpp"

using namespace std;

// global constants
bool playing = true;
bool dead = false;
bool won = false;

// main function
int main()
{
    intro();

    battle();
    

    return 0;
}

void intro()
{
    cout << "Welcome to Into The Deep, a game where your instincts and quick thinking determines whether you live or die.\n";
    cout << "You are part of an elite group of marine biologists, on a secret mission to discover a new type of oxygen-emitting algae.\n";
    cout << "This morning you headed down to the sea floor to collect more samples...\n";
    cout << "But while you were out your underwater lab exploded!\n";
    cout << "As the sole survivor it is up to you to reach the surface, battling sea monsters along the way";
    cout << "Just make sure you don't run out of oxygen...\n\n";
}
