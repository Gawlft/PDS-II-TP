#ifndef _WEAPON_HPP_
#define _WEAPON_HPP_

#include <string>
#include <map>
#include <iostream>
#include <iterator>
#include "utilities.hpp"

enum class WEAPONS
{
    UNARMED,
    GREATSWORD,
    LONGSWORD,
    DAGGER,
    BATTLEAXE
};
class Weapon
{

public:
    Weapon(std::string name, unsigned int minDamage, unsigned int maxDamage);

    std::string getName();
    unsigned int damageRange();
    unsigned int getDamage();

private:
    std::string _name;
    unsigned int _minimumDamage;
    unsigned int _maximumDamage;
};

extern std::map<WEAPONS, Weapon> availableWeapons;

#endif