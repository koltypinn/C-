#ifndef SCAVTRAPP_HPP
# define SCAVTRAPP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap( void ) {return ;};
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &);
        ~ScavTrap();
        void guardGate();
        void attack( std::string const & target );
        
        ScavTrap & operator=(ScavTrap const &rhs);
};


#endif