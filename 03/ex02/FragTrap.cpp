#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_name = name;
    this->_Hitpoints = 100;
    this->_Energypoints = 100;
    this->_Attackdamage = 30;
    std::cout << "<" << this->_name << "> constructor FragTrap called" << std::endl;
    return ;
}

FragTrap::FragTrap(FragTrap const &copy)
{
    std:: cout << "Copy constructor FragTrap called" << std::endl;
    *this = copy;
    return ;
}

FragTrap::~FragTrap()
{
    std::cout << "<" << this->_name << "> Destructor FragTrap called" << std::endl;
    return ;
}

void FragTrap::attack( std::string const & target )
{

    std::cout << "FragTrap <" << this->_name << "> attack " << target << ", causing " << this->_Attackdamage << " points of damage!" << std::endl;
    return ;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "positive high fives." << std::endl;
    return ;
}

FragTrap & FragTrap::operator=(FragTrap const &rhs)
{
    std::cout << "Assignment operator called" << std::endl;
	this->_name = rhs._name;
    this->_Attackdamage = rhs._Attackdamage;
    this->_Energypoints = rhs._Energypoints;
    this->_Hitpoints = rhs._Hitpoints;
	return *this;
}
