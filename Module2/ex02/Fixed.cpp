#include "Fixed.hpp"

Fixed::Fixed(void)
{
    fix = 0;
    std::cout << "Default constructor  called" << std::endl;
}

Fixed::Fixed(Fixed const &f)
{
    std::cout << "Copy constructor called" << std::endl;

    *this = f.toFloat();
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
    std::cout << ".......\n";
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

bool   Fixed::operator<(Fixed const &f) const
{
    return (this->fix < f.fix);
}

bool Fixed::operator>(Fixed const &f) const
{
    return (this->fix > f.fix);
}

bool Fixed::operator>=(Fixed const &f) const
{
    return (this->fix >= f.fix);
}

bool Fixed::operator<=(Fixed const &f) const
{
    return (this->fix <= f.fix);
}

bool Fixed::operator==(Fixed const &f) const
{
    return (this->fix == f.fix);
}

bool Fixed::operator!=(Fixed const &f) const
{
    return (this->fix != f.fix);
}

Fixed &Fixed::operator+(Fixed const &f)
{
    this->fix = this->fix + f.toFloat();
    return (*this);
}

Fixed &Fixed::operator-(Fixed const &f)
{
    this->fix = this->fix - f.toFloat();
    return (*this);
}

Fixed &Fixed::operator*(Fixed const &f)
{
    this->fix = this->fix * f.toFloat();
    return (*this);
}

Fixed &Fixed::operator/(Fixed const &f)
{
    this->fix = this->fix / f.toFloat();
    return (*this);
}

Fixed   &Fixed::operator++()
{
    this->fix++;
    return (*this);
}

Fixed   Fixed::operator++(int)
{
    Fixed   post(*this);
    this->fix++;
    return (post);
}

Fixed   &Fixed::operator--()
{
    this->fix--;
    return (*this);
}

Fixed   Fixed::operator--(int)
{
    Fixed pre(*this);
    this->fix--;
    return (pre);
}

const Fixed  &Fixed::min(Fixed const &f1,Fixed const &f2)
{
    if (f1 < f2)
        return (f1);
    else
        return (f2);
}

Fixed  &Fixed::min(Fixed &f1,Fixed &f2)
{
    if (f1 < f2)
        return (f1);
    else
        return (f2);
}

const Fixed        &Fixed::max(Fixed const &f1,Fixed const &f2)
{
    if (f1 > f2)
        return (f1);
    else
        return (f2);
}

Fixed  &Fixed::max(Fixed &f1,Fixed &f2)
{
    if (f1 > f2)
        return (f1);
    else
        return (f2);
}