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