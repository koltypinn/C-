#ifndef HUMAN_A_APP
#define HUMAN_A_APP
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon &weapon;

public:
    HumanA(std::string, Weapon&);
    void attack(void);
};

#endif
