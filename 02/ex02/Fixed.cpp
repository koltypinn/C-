#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed(void) {
    this->_fixed = 0;
}

Fixed::Fixed(const Fixed &other) {
    operator=(other);
}

Fixed&    Fixed::operator=(const Fixed &other) {
    this->_fixed = other._fixed;
    return *this;
}

Fixed::~Fixed(void) {
}

std::ostream&    operator<<(std::ostream& stream, const Fixed& other)
{
    stream << other.toFloat(); 
    return stream;
}

Fixed::Fixed(const int num) {
    this->_fixed =  num << this->_fractBits;
}

Fixed::Fixed(const float num) {
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

Fixed   Fixed::operator+(const Fixed& other) const {
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed   Fixed::operator-(const Fixed& other) const {
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed   Fixed::operator*(const Fixed& other) const {
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed   Fixed::operator/(const Fixed& other) const {
    return Fixed(this->toFloat() / other.toFloat());
}

bool   Fixed::operator==(const Fixed& other) const {
    return this->_fixed == other.getRawBits();
}

bool   Fixed::operator!=(const Fixed& other) const {
    return this->_fixed != other.getRawBits();
}

bool   Fixed::operator<=(const Fixed& other) const {
    return this->_fixed <= other.getRawBits();
}

bool   Fixed::operator>=(const Fixed& other) const {
    return this->_fixed >= other.getRawBits();
}

bool   Fixed::operator<(const Fixed& other) const {
    return this->_fixed < other.getRawBits();
}

bool   Fixed::operator>(const Fixed& other) const {
    return this->_fixed > other.getRawBits();
}

Fixed   Fixed::operator++() {
    Fixed tmp;

    ++(this->_fixed);
    tmp._fixed = this->_fixed;
    return tmp;
}

Fixed   Fixed::operator++(int) {
    Fixed tmp;

    tmp._fixed = this->_fixed;
    ++(this->_fixed);
    return tmp;
}

float Fixed::min(const Fixed& first, const Fixed& second){
    if (first.operator>(second))
        return second.toFloat();
    else
        return first.toFloat();
}

float Fixed::max(const Fixed& first, const Fixed& second){
    if (first.operator>(second))
        return first.toFloat();
    else
        return second.toFloat();
}