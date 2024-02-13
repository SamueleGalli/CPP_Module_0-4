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
        bool            operator<(Fixed const &f) const;
        bool            operator>(Fixed const &f) const;
        bool            operator>=(Fixed const &f) const;
        bool            operator<=(Fixed const &f) const;
        bool            operator==(Fixed const &f) const;
        bool            operator!=(Fixed const &f) const;
        
        Fixed           &operator+(Fixed const &f);
        Fixed           &operator-(Fixed const &f);
        Fixed           &operator*(Fixed const &f);
        Fixed           &operator/(Fixed const &f);
        Fixed           &operator++();
        Fixed           operator++(int);
        Fixed           &operator--();
        Fixed           operator--(int);

        static Fixed const        &min(Fixed const &f1,Fixed const &f2);
        static Fixed              &min(Fixed &f1,Fixed &f2);
        static Fixed const        &max(Fixed const &f1,Fixed const &f2);
        static Fixed              &max(Fixed &f1,Fixed &f2);

        float           toFloat(void) const;
        int             getRawBits(void) const;
        int             toInt(void) const;
        void            setRawbits(int const raw);
        friend          std::ostream  &operator<<(std::ostream &out, const Fixed &fix);
};

#endif