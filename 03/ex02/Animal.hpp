#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cmath>

class   Animal
{
	protected:
		std::string	type;
	public:
        Animal();
		Animal(const Animal &other);
		virtual ~Animal();
		Animal&	operator = (const Animal &other);
		std::string getType(void) const;
		virtual void makeSound() const = 0;
};

#endif