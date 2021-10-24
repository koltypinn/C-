#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat::Default constructor called" << '\n';
	this->brain_of_cat = new Brain();
}

Cat::Cat(std::string type)
{
	std::cout << "Cat::Constructor called" << '\n';
	this->brain_of_cat = new Brain();
	this->type = type;
}

Cat::Cat(const Cat &other)
{
	std::cout << "Cat::Copy constructor called" << '\n';
	this->operator = (other);
}

Cat::~Cat()
{
	delete brain_of_cat;
	std::cout << "Cat::Destructor called" << '\n';
}

Cat&	Cat::operator = (const Cat &other)
{
	std::cout << "Cat::Assignation operator called" << '\n';
	if (this == &other)
        return *this;
	
	type = other.type;
	brain_of_cat = other.brain_of_cat;
	return(*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat::meoooooooow" << '\n';
}