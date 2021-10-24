#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal::Default constructor called" << '\n';
    this->type = "default";
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "WrongAnimal::Constructor called" << '\n';
	this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "WrongAnimal::Copy constructor called" << '\n';
	this->operator = (other);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal::Destructor called" << '\n';
}

WrongAnimal&	WrongAnimal::operator = (const WrongAnimal &other)
{
	std::cout << "WrongAnimal::Assignation operator called" << '\n';
    type = other.type;
	return(*this);
}

std::string WrongAnimal::getType( void ) const
{
	std::cout << "WrongAnimal::getType member function called" << '\n';
	return(this->type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal::WWWWWWWWWWW" << '\n';
}
