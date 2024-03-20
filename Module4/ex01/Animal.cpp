#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "finded Animal" << std::endl;
}

Animal::Animal(std::string type_a)
{
    std::cout << "giving " << type_a << "name to animal" << std::endl;
    type = type_a;
}

Animal::~Animal()
{
    std::cout << "killing Animal sorry" << std::endl;
}

const std::string Animal::getType() const
{
    return (type);
}

void   Animal::makeSound() const
{
    std::cout << "make no sound" << std::endl;
}
