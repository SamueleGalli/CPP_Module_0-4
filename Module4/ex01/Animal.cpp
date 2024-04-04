#include "Animal.hpp"

//constructor
Animal::Animal()
{
    std::cout << "finded Animal" << std::endl;
}

Animal::Animal(const Animal &A)
{
    std::cout << "copy constructor Animal" << std::endl;
    if (this != &A)
        *this = A;
}

//set type
Animal::Animal(std::string type_a)
{
    std::cout << "giving " << type_a << " name to animal" << std::endl;
    this->type = type_a;
}

//get type
const std::string Animal::getType() const
{
    return (type);
}

//function
void   Animal::makeSound() const
{
    std::cout << "make no sound" << std::endl;
}

//operator overload
Animal  &Animal::operator=(const Animal &A)
{
    std::cout << "copy assignment operator Animal" << std::endl;
    if (this !=&A)
        this->type = A.type;
    return (*this);
}

//destructor
Animal::~Animal()
{
    std::cout << "killing Animal sorry" << std::endl;
}