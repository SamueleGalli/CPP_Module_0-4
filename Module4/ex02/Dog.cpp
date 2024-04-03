#include "Dog.hpp"

Dog::Dog()
{
    Brain b;
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

Dog  &Dog::operator=(const Dog &d)
{
    std::cout << "copy assignemnt operator Dog" << std::endl;
    if (this != &d)
    {
        this->type = d.type;
        this->b = d.b;
    }
    return (*this);
}

Dog::Dog(const Dog &D)
{
    std::cout << "copy constructor Dog" << std::endl;
    if (this != &D)
        *this = D;
}