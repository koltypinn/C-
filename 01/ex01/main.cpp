#include "Zombie.hpp"

int	main()
{
	Zombie *zom;

	zom = zombieHorde(7, "Nicolas");
	delete[] zom;
	return (0);
}

