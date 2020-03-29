#ifndef GAME_H
#define GAME_H

#include "Functions.h"
#include "Character.h"
#include <ctime>

using namespace std;

class Game
{
public:
    Game();
    virtual ~Game();

    //Functions
    void initGame();
    void mainMenu();

    //Accessors
    inline bool getPlaying() const { return this->playing; };

    //Modifiers

private:
    int choice;
    bool playing;

    //Character related
    Character character;
};

#endif
