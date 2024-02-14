#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "creating an invalid Cat" << std::endl;
}

WrongCat::WrongCat(std::string type_WrongCat)
{
    std::cout << "giving " << type_WrongCat << "name to a WrongCat" << std::endl;
    type = type_WrongCat;
}

WrongCat::~WrongCat()
{
    std::cout << "killing a Wrong Cat" << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << "playing invalid sound" << std::endl;
}