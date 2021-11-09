#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap clap("Drake");

    clap.attack("Kanye");
    clap.takeDamage(25);
    clap.beRepaired(20);
    clap.attack("Kanye");
    clap.takeDamage(25);
    clap.beRepaired(20);
    
    std::cout << std::endl;
    ScavTrap Scav("Pucca");

    Scav.attack("Gary");
    Scav.takeDamage(20);
    Scav.beRepaired(150);
    Scav.attack("Abyo");
    Scav.guardGate();
    
    std::cout << std::endl;
    return (0);
}