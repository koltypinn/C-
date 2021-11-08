#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed(void) {
    std::cout << "Default constructor called" << std::endl;
    this->_fixed = 0;
}

Fixed::Fixed(const Fixed &other) {
    std::cout << "Copy constructor called" << std::endl;
    operator=(other);
}

Fixed&    Fixed::operator=(const Fixed &other) {
    std::cout << "Assignation operator called" << std::endl;
    this->_fixed = other._fixed;
    return *this;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

std::ostream&    operator<<(std::ostream& stream, const Fixed& other)
{
    stream << other.toFloat(); 
    return stream;
}

Fixed::Fixed(const int num) {
    std::cout << "Int constructor called" << std::endl;
    this->_fixed =  num << this->_fractBits;
}

Fixed::Fixed(const float num) {
    std::cout << "Float constructor called" << std::endl;
    this->_fixed = (int)roundf(num * pow(2, this->_fractBits));
}

int   Fixed::toInt(void) const{
    return this->_fixed >> this->_fractBits;
}

float   Fixed::toFloat(void) const{
    return (float)this->_fixed * (1 / pow(2, this->_fractBits));
}

void Fixed::setRawBits(int const raw){
    _fixed = raw;
    (void)raw;
}

int Fixed::getRawBits(void) const{
    return _fixed;
}
