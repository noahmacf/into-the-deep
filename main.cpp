#include <iostream>
#include "battle.h"

using namespace std;

// global constants
bool playing = true;
bool dead = false;
bool won = false;

void intro();

// main function
int main()
{
    intro();

    battle();
    dead = battle();
    
    if(dead)
    {
        cout << "\nEND OF GAME STOP PLAYING";
    }

    return 0;
}

void intro()
{

    cout <<" ___             ___            __                                         \n";
    cout <<"  )  _  _)_ _     ) ( _   _     ) ) _   _   _                              \n";
    cout <<"_(_ ) ) (_ (_)   (   ) ) )_)   /_/ )_) )_) )_)                             \n";
    cout <<"                        (_        (_  (_  (                                \n";
    cout <<" __         ___             _                                              \n";
    cout <<" )_)         ) ( _   _     /_) ) _   _   _ ( _      _)_ ( _   _ _  o  _  _ \n";
    cout <<"/__) (_(    (   ) ) )_)   / / ( (_( (_) )   ) ) (_( (_   ) ) ) ) ) ( (_ (  \n";
    cout <<"       _)          (_             _)              _)                    _) \n\n\n";

    cout << "Welcome to Into The Deep, a game where your instincts and quick thinking determines whether you live or die.\n";
    cout << "You are part of an elite group of marine biologists, on a secret mission to discover a new type of oxygen-emitting algae.\n";
    cout << "This morning you headed down to the sea floor to collect more samples...\n";
    cout << "But while you were out your underwater lab exploded!\n";
    cout << "As the sole survivor it is up to you to reach the surface, battling sea monsters along the way\n";
    cout << "Just make sure you don't run out of oxygen...\n\n";
    
}
