#!/bin/bash
set -e

# turns add cpp syntax into machine code
# will create a .o file for each
cc -c main.cpp 
cc -c Player.cpp
cc -c battle.cpp
cc -c scenes.cpp

# link all the object files together
cc -lstdc++ -o deep main.o battle.o Player.o scenes.o

# delete the object files
rm *.o

# run the program
./deep 