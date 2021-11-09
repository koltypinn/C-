#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a("Drake Bell");
	ClapTrap	b(a);
	ClapTrap	c;

	c = a;
	std::cout << std::endl;
	a.attack("Josh Nicolson");
	std::cout << std::endl;
	b.takeDamage(20);
	std::cout << std::endl;
	a.attack("Meeegan");
	std::cout << std::endl;
	b.takeDamage(30);
	std::cout << std::endl;
	c.beRepaired(25);
	std::cout << std::endl;
	return (0);
}
