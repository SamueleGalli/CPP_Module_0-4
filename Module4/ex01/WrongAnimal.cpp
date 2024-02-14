#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(std::string type_wa)
{
    std::cout << "giving " << type_wa << "name to a wrong animal" << std::endl;
    type = type_wa;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "killing a wrong animal?" << std::endl;
}

WrongAnimal::WrongAnimal()
{
    std::cout << "creating a wrong animal, ok" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (type);
}

void    WrongAnimal::makeSound() const
{
    std::cout << "make an invalid Animal sound" << std::endl;
}