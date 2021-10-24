#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog::Default constructor called" << '\n';
	this->brain_of_dog = new Brain();
}

Dog::Dog(std::string type)
{
	std::cout << "Dog::Constructor called" << '\n';
	this->brain_of_dog = new Brain();
	this->type = type;
}

Dog::Dog(const Dog &other)
{
	std::cout << "Dog::Copy constructor called" << '\n';
	this->brain_of_dog = new Brain(*other.brain_of_dog);
}

Dog::~Dog()
{
	delete brain_of_dog;
	std::cout << "Dog::Destructor called" << '\n';
}

Dog&	Dog::operator = (const Dog &other)
{
	std::cout << "Dog::Assignation operator called" << '\n';
	if (this == &other)
        return *this;
	this->brain_of_dog = other.brain_of_dog;
	type = other.type;
	return(*this);
}

void	Dog::makeSound() const
{
	std::cout << "Dog::gavvvvvv" << '\n';
}
