#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	private:
		std::string	_zombiename;
	public:
		Zombie();
		~Zombie();
		void	name(std::string given_name);
		void	announce(void);
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif
