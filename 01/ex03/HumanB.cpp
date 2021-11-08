#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name) {}

void HumanB::attack()
{
    if (this->weapon)
        std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &Weapon)
{
    this->weapon = &Weapon;
}
