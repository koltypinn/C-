#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cmath>

class   Brain
{
	public:
		std::string	ideas[100];
        Brain();
		Brain(const Brain &other);
		~Brain();
		Brain&	operator = (const Brain &other);
};

#endif