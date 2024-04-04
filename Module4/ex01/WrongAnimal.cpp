#include "WrongAnimal.hpp"

//constructor
WrongAnimal::WrongAnimal()
{
    this->type = "WrongAnimal";
    std::cout << "creating a wrong animal, ok" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &WA)
{
    std::cout << "copy construtor Wrong Animal" << std::endl;
    if (this != &WA)
        *this = WA;
}

//set Wrong type
WrongAnimal::WrongAnimal(std::string type_wa)
{
    std::cout << "giving " << type_wa << " name to a wrong animal" << std::endl;
    this->type = type_wa;
}

//getter
std::string WrongAnimal::getType() const
{
    return (type);
}

//function
void    WrongAnimal::makeSound() const
{
    std::cout << "make an invalid Animal sound" << std::endl;
}

//operator overload
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &WA)
{
    std::cout << "copy assignment operator Wrong Animal" << std::endl;
    if (this != &WA)
        this->type = WA.type;
    return (*this);
}

//destructor
WrongAnimal::~WrongAnimal()
{
    std::cout << "killing a wrong animal?" << std::endl;
}