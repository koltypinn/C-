#include "Zombie.hpp"

int	main()
{
	Zombie *zom;

	randomChump("Nickolas");
	zom = newZombie("Maria");
	zom->announce();
	randomChump("Nicolla");
	delete zom;
	return (0);
}
