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
		void	name(std::string given_name, int i);
		void	announce(void);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
