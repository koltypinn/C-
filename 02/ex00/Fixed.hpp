#ifndef _FIXED_HPP
#define _FIXED_HPP

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
    Fixed& operator=(Fixed &other);

    int getRawBits(void) const;
    void setRawBits( int const raw ); 
};

#endif