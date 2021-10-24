#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal::Default constructor called" << '\n';
	this->type = "default";
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal::Copy constructor called" << '\n';
	this->operator = (other);
}

Animal::~Animal()
{
	std::cout << "Animal::Destructor called" << '\n';
}

Animal&	Animal::operator = (const Animal &other)
{
	std::cout << "Animal::Assignation operator called" << '\n';
	this->type = other.getType();
	return(*this);
}

std::string Animal::getType( void ) const
{
	std::cout << "Animal::getType member function called" << '\n';
	return(this->type);
}

void Animal::makeSound() const
{
	std::cout << "Animal::WWWWWWWWWWW" << '\n';
}
