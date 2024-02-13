#include "Fixed.hpp"

Fixed::Fixed(void)
{
    fix = 0;
    std::cout << "Default constructor  called" << std::endl;
}

Fixed::Fixed(Fixed const &f)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &f)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fix = f.fix;
    return (*this);
}

Fixed::Fixed(const int integer)
{
    std::cout << "Int constructor called" << std::endl;
    fix = integer * (1 << bit);
}

Fixed::Fixed(const float fixed)
{
    std::cout << "Float constructor called" << std::endl;
    fix = roundf((float)fixed * (float)(1 << bit));
}

float Fixed::toFloat(void) const
{
    float   fixed = (float)fix / (float)(1 << bit);
    return (fixed);
}

int Fixed::toInt(void) const
{
    int integer = fix >> bit;
    return (integer);
}

std::ostream  &operator<<(std::ostream &out, const Fixed &fix)
{
    out << fix.toFloat();
    return out;
}