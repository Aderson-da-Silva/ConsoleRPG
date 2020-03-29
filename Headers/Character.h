#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>

class Character
{
public:
    Character();
    virtual ~Character();

    //Fucntions
    void initialize(std::string name);
    void printStats() const;
    inline int ExpMaxDefinition() { return (50 / 3) * (pow(this->level, 3) - 6 * pow(this->level, 3) + (17 * this->level) - 11); }
    void levelUp();

    //Acessors
    inline const double &getX() const { return this->xPos; }
    inline const double &getY() const { return this->yPos; }
    inline const std::string &getName() const { return this->name; }
    inline const int &getLevel() const { return this->level; }
    inline const int &getExp() const { return this->exp; }
    inline const int &getExpNext() const { return this->expNext; }
    inline const int &gethpMax() const { return this->hpMax; }
    inline const int &getStamina() const { return this->stamina; }
    inline const int &getDamageMin() const { return this->damageMin; }
    inline const int &getdamageMax() const { return this->damageMax; }
    inline const int &getDefence() const { return this->defence; }

    //Modifiers

private:
    double xPos;
    double yPos;

    std::string name;
    int level;
    int exp;
    int expNext;

    int strength;
    int vitality;
    int dexterity;
    int intelligence;

    int hp;
    int hpMax;
    int stamina;
    int staminaMax;
    int damageMin;
    int damageMax;
    int defence;
    int luck;

    int statPoints;
    int skillPoints;
};
#endif