#include "Dog.hpp"

//constructor
Dog::Dog() : b(new Brain())
{
    this->type = "dog";
    std::cout << "finded a stray Dog" << std::endl;
}

Dog::Dog(const Dog &D) : Animal(D), Brain(*D.b), b(new Brain(*D.b))
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
    {
        this->type = D.type;
        delete b;
        this->b = new Brain(*D.b);
    }
    return (*this);
}

//destructor
Dog::~Dog()
{
    delete b;
    std::cout << "killing doggy sorry" << std::endl;
}