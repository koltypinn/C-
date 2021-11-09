#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    this->_name = name;
    this->_Attackdamage = 0;
    this->_Energypoints = 10;
    this->_Hitpoints = 10;
    std:: cout << "ClapTrap " << this->_name << " was created." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
    *this = copy;
    std:: cout << "ClapTrap " << this->_name << " was created with Copy Constructor." << std::endl;
}

ClapTrap::~ClapTrap()
{
    std:: cout << "ClapTrap " << this->_name << " was destroyed." << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap <" << this->_name << "> attack " << target << ", causing " << this->_Attackdamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->_Attackdamage += amount;
    std::cout << "<" << this->_name << "> attack wins +" << amount << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->_Energypoints += amount;
    std::cout << "<" << this->_name << "> Energy wins +" << amount << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const &rhs)
{
    std::cout << "ClapTrap " << this->_name << " was created with Assignment Operator." << std::endl;
	this->_name = rhs._name;
    this->_Attackdamage = rhs._Attackdamage;
    this->_Energypoints = rhs._Energypoints;
    this->_Hitpoints = rhs._Hitpoints;
	return *this;
}