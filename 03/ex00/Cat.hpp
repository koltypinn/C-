#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class   Cat: public Animal
{
	public:
		Cat();
		Cat(std::string type);
		Cat(const Cat &other);
		~Cat();
		Cat&	operator = (const Cat &other);
		std::string getType(void) const;
		void makeSound(void) const;
};

#endif