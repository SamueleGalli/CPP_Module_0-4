#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "finded Abstract Animal" << std::endl;
}

AAnimal::AAnimal(std::string type_a)
{
    std::cout << "giving " << type_a << "name to Abstract Animal" << std::endl;
    type = type_a;
}

AAnimal::~AAnimal()
{
    std::cout << "killing AAnimal sorry" << std::endl;
}

const std::string AAnimal::getType() const
{
    return (type);
}

void   AAnimal::makeSound() const
{
    std::cout << "make no sound" << std::endl;
}

AAnimal::AAnimal(const AAnimal &A)
{
    std::cout << "copy constructor Abstract Animal" << std::endl;
    if (this != &A)
        *this = A;
}
AAnimal  &AAnimal::operator=(const AAnimal &A)
{
    std::cout << "copy assignment operator Abstract Animal" << std::endl;
    if (this !=&A)
    {
        this->type = A.type;
    }
    return (*this);
}