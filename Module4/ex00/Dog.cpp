#include "Dog.hpp"

Dog::Dog()
{
    type = "dog";
    std::cout << "finded a stray Dog" << std::endl;
}

Dog::~Dog()
{
    std::cout << "killing doggy sorry" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "bau bau" << std::endl;
}

Dog::Dog(const Dog &D)
{
    std::cout << "copy constructor Dog" << std::endl;
    if (this != &D)
        *this = D;
}

Dog  &Dog::operator=(const Dog &D)
{
    std::cout << "copy assignment operator Dog" << std::endl;
    if (this != &D)
    {
        Animal::operator=(D);
    }
    return (*this);
}
