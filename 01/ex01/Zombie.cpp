#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Unnamed zombie is created." << std::endl;
}

void	Zombie::name(std::string given_name, int i)
{
	char c;

	this->_zombiename = given_name;
	c = i + 48;
	this->_zombiename += c;
	std::cout << "Unnamed zombie is named " << this->_zombiename << "." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "< " << this->_zombiename << ">" << " BraiiiiiiinnnzzzZ. . ." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->_zombiename << " is destructed." << std::endl;
}
