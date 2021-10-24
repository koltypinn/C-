#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain::Default constructor called" << '\n';
	for (int i = 0; i < 100; i++)
		ideas[i] = "idea";
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain::Copy constructor called" << '\n';
	for (int i = 0;i < 100;i++)
	{
		this->ideas[i] = other.ideas[i];
	}
}

Brain::~Brain()
{
	std::cout << "Brain::Destructor called" << '\n';
}

Brain&	Brain::operator = (const Brain &other)
{
	std::cout << "Brain::Assignation operator called" << '\n';
	if (this == &other)
        return *this;
	for (int i = 0; i < 100;i++)
		this->ideas[i] = other.ideas[i];
	return(*this);
}
