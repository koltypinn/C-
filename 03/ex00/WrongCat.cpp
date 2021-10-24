#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat::Default constructor called" << '\n';
}

WrongCat::WrongCat(std::string type)
{
	std::cout << "WrongCat::Constructor called" << '\n';
	this->type = type;
}

WrongCat::WrongCat(const WrongCat &other)
{
	std::cout << "WrongCat::Copy constructor called" << '\n';
	this->operator = (other);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat::Destructor called" << '\n';
}

WrongCat&	WrongCat::operator = (const WrongCat &other)
{
	std::cout << "WrongCat::Assignation operator called" << '\n';
    type = other.type;
	return(*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat::meoooooooow" << '\n';
}