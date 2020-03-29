#!/bin/bash
PATHS="src/Character.cpp src/Game.cpp src/main.cpp"
GAME="target/Game"

echo "Compiling code"
g++ -c $PATHS

echo "Linking and Optimizing code"

g++ -Wall -O2 *.o -o $GAME

rm *.o 

echo "Compilation finished"

./$GAME
