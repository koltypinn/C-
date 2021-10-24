#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cmath>

class   WrongAnimal
{
	protected:
		std::string	type;
	public:
        WrongAnimal();
        WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &other);
		~WrongAnimal();
		WrongAnimal&	operator = (const WrongAnimal &other);
        std::string getType(void) const;
		void makeSound(void) const;
};

#endif