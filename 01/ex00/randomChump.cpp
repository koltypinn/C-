#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	chump;

	chump.name(name);
	chump.announce();
}
