#include "Dog.hpp"

Dog::Dog()
{
    b = new Brain();
    type = "dog";
    std::cout << "finded a stray Dog" << std::endl;
}

Dog::~Dog()
{
    std::cout << "killing doggy sorry" << std::endl;
    delete b;
}

void    Dog::makeSound() const
{
    std::cout << "bau bau" << std::endl;
}