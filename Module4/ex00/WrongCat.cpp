#include "WrongCat.hpp"

//constructor
WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "creating an invalid Cat" << std::endl;
}

WrongCat::WrongCat(const WrongCat &WC) : WrongAnimal(WC)
{
    std::cout << "copy construtor cat" << std::endl;
    if (this != &WC)
        *this = WC;
}

//function
void    WrongCat::makeSound() const
{
    std::cout << "playing invalid sound" << std::endl;
}

//operator overload
WrongCat    WrongCat::operator=(const WrongCat &WC)
{
    std::cout << "copy assignment operator cat" << std::endl;
    if (this != &WC)
        this->type = WC.type;
    return (*this);
}

//destructor
WrongCat::~WrongCat()
{
    std::cout << "killing a Wrong Cat" << std::endl;
}