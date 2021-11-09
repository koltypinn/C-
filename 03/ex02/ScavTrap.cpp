#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_name = name;
    this->_Hitpoints = 100;
    this->_Energypoints = 50;
    this->_Attackdamage = 20;
    std::cout << "<" << this->_name << "> constructor ScavTrap called" << std::endl;
    return ;
}

ScavTrap::ScavTrap(ScavTrap const &copy)
{
    std:: cout << "Copy constructor ScavTrap called" << std::endl;
    *this = copy;
    return ;
}

ScavTrap::~ScavTrap()
{
    std::cout << "<" << this->_name << "> Destructor ScavTrap called" << std::endl;
    return ;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap have enterredin Gate keeper mode." << std::endl;
    return ;
}

void ScavTrap::attack( std::string const & target )
{

    std::cout << "ScavTrap <" << this->_name << "> attack " << target << ", causing " << this->_Attackdamage << " points of damage!" << std::endl;
    return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &rhs)
{
    std::cout << "Assignment operator called" << std::endl;
	this->_name = rhs._name;
    this->_Attackdamage = rhs._Attackdamage;
    this->_Energypoints = rhs._Energypoints;
    this->_Hitpoints = rhs._Hitpoints;
	return *this;
}