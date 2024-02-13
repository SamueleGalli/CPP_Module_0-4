#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>
class Fixed
{
    private:
        int fix;
        static const int bit = 8;
    public:
        Fixed(const int integer);
        Fixed(const float fixed);
        Fixed();
        Fixed(Fixed const &f);
        ~Fixed();
        Fixed           &operator=(Fixed const &f);
        
        float           toFloat(void) const;
        int             toInt(void) const;
        friend          std::ostream  &operator<<(std::ostream &out, const Fixed &fix);
};

#endif