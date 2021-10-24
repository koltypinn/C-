#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat::Default constructor called" << '\n';
}

Cat::Cat(std::string type)
{
	std::cout << "Cat::Constructor called" << '\n';
	this->type = type;
}

Cat::Cat(const Cat &other)
{
	std::cout << "Cat::Copy constructor called" << '\n';
	this->operator = (other);
}

Cat::~Cat()
{
	std::cout << "Cat::Destructor called" << '\n';
}

Cat&	Cat::operator = (const Cat &other)
{
	std::cout << "Cat::Assignation operator called" << '\n';
	type = other.type;
	return(*this);
}

std::string Cat::getType(void) const
{
	std::cout << "Cat::getType member function called" << '\n';
	return(this->type);
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat::meoooooooow" << '\n';
}