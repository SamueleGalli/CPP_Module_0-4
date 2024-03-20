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

Dog  &Dog::operator=(const Dog &d)
{
    if (this != &d)
    {
        this->type = d.type;
        this->b = d.b;
    }
    return (*this);
}
