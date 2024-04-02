#include "WrongCat.hpp"

WrongCat::WrongCat(const WrongCat &WC)
{
    std::cout << "copy construtor cat" << std::endl;
    *this = WC;
}

WrongCat::WrongCat()
{
    std::cout << "creating an invalid Cat" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "killing a Wrong Cat" << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << "playing invalid sound" << std::endl;
}

WrongCat    WrongCat::operator=(const WrongCat &WC)
{
    std::cout << "copy assignment operator cat" << std::endl;
    if (this != &WC)
    {
        WrongAnimal::operator=(WC);
    }
    return (*this);
}
