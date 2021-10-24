#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog::Default constructor called" << '\n';
}

Dog::Dog(std::string type)
{
	std::cout << "Dog::Constructor called" << '\n';
	this->type = type;
}

Dog::Dog(const Dog &other)
{
	std::cout << "Dog::Copy constructor called" << '\n';
	this->operator = (other);
}

Dog::~Dog()
{
	std::cout << "Dog::Destructor called" << '\n';
}

Dog&	Dog::operator = (const Dog &other)
{
	std::cout << "Dog::Assignation operator called" << '\n';
	type = other.type;
	return(*this);
}

void	Dog::makeSound() const
{
	std::cout << "Dog::gavvvvvv" << '\n';
}
