#ifndef _FIXED_HPP
#define _FIXED_HPP

// Include Headers
#include <iostream>

class Fixed
{
private:
    int _fixed;
    static const int _fractBits = 8;

public:
    Fixed(void); 
    Fixed(const Fixed &); 
    ~Fixed(void); 
    Fixed& operator=(const Fixed &); 
    Fixed(const int);
    Fixed(const float);

    float toFloat( void ) const;
    int toInt( void ) const;
    int getRawBits(void) const;
    void setRawBits( int const raw ); 

    
    Fixed operator+(const Fixed&) const;
    Fixed operator-(const Fixed&) const;
    Fixed operator*(const Fixed&) const;
    Fixed operator/(const Fixed&) const;

    
    bool operator==(const Fixed&) const;
    bool operator!=(const Fixed&) const;
    bool operator<=(const Fixed&) const;
    bool operator>=(const Fixed&) const;
    bool operator>(const Fixed&) const;
    bool operator<(const Fixed&) const;
    Fixed   operator++(); 
    Fixed   operator++(int); 
    Fixed   operator--(); 
    Fixed   operator--(int); 

    static float   min(const Fixed& first, const Fixed& second);
    static float   max(const Fixed& first, const Fixed& second);
};

std::ostream &operator<<(std::ostream&, const Fixed&);
#endif