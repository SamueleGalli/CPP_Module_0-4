#include "Cat.hpp"

//constructor
Cat::Cat()
{
    this->type = "Cat";
    std::cout << "finded a stray cat" << std::endl;
}

Cat::Cat(const Cat &C) : Animal(C)
{
    std::cout << "copy constructor Cat" << std::endl;
    if (this != &C)
        *this = C;
}

//function
void    Cat::makeSound() const
{
    std::cout << "miaooooo fuuuu" << std::endl;
}

//operator overload
Cat  &Cat::operator=(const Cat &C)
{
    std::cout << "copy assignment operator Cat" << std::endl;
    if (this != &C)
        this->type = C.type;
    return (*this);
}

//destructor
Cat::~Cat()
{
    std::cout << "killing Cat sorry" << std::endl;
}
