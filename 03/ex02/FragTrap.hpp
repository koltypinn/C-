#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
   public:
        FragTrap( void ) {return ;};
        FragTrap(std::string name);
        FragTrap(FragTrap const &);
        ~FragTrap();
        void highFivesGuys(void);
        void attack( std::string const & target );

        FragTrap & operator=(FragTrap const &);
};

#endif