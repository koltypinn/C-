#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class   Dog: public Animal
{
	private:
		Brain* brain_of_dog;
	public:
        Dog();
		Dog(std::string type);
		Dog(const Dog &other);
		virtual ~Dog();
		Dog&	operator = (const Dog &other);
		void makeSound() const;
};

#endif