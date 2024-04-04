#include "Dog.hpp"

//constructor
Dog::Dog()
{
    this->type = "Dog";
    std::cout << "finded a stray Dog" << std::endl;
}

Dog::Dog(const Dog &D) : Animal(D)
{
    std::cout << "copy constructor Dog" << std::endl;
    if (this != &D)
        *this = D;
}

//function
void    Dog::makeSound() const
{
    std::cout << "bau bau" << std::endl;
}

//operator overload
Dog  &Dog::operator=(const Dog &D)
{
    std::cout << "copy assignemnt operator Dog" << std::endl;
    if (this != &D)
        this->type = D.type;
    return (*this);
}

//destructor
Dog::~Dog()
{
    std::cout << "killing doggy sorry" << std::endl;
}