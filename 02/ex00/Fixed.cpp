#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->_fixed = 0;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    _fixed = other._fixed;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed   &Fixed::operator=(Fixed &other)
{
	std::cout << "Assignation operator called" << std::endl;
    _fixed = other._fixed;
    return *this;
}

void Fixed::setRawBits(int const raw){
    this->_fixed = raw;
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixed;
}