#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
    private:
        int fix;
        static const int bit = 8;
    public:
        Fixed();
        Fixed(const Fixed &f);
        ~Fixed();
        Fixed   &operator=(const Fixed &f);
        int     getRawBits(void) const;
        void    setRawbits(int const raw);


};

#endif