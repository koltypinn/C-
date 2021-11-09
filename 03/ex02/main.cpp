#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap clap("POIRE");

    clap.attack("JIJI");
    clap.takeDamage(15);
    clap.beRepaired(30);
    clap.attack("JIJI");
    std::cout << std::endl;
    
    ScavTrap Scav("POMME");

    Scav.attack("BANANE");
    Scav.takeDamage(50);
    Scav.beRepaired(150);
    Scav.attack("ANANAS");
    Scav.guardGate();
    std::cout << std::endl;
    
    FragTrap trap("RAISIN");
    trap.attack("COCO");
    trap.takeDamage(4000);
    trap.beRepaired(600);
    trap.attack("KIWI");
    trap.highFivesGuys();
    std::cout << std::endl;
    
    return (0);
}