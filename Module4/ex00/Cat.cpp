#include "Cat.hpp"

Cat::Cat()
{
    type = "cat";
    std::cout << "finded a stray cat" << std::endl;
}


Cat::~Cat()
{
    std::cout << "killing Cat sorry" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "miaooooo fuuuu" << std::endl;
}

Cat::Cat(const Cat &C)
{
    std::cout << "copy constructor Cat" << std::endl;
    if (this != &C)
        *this = C;
}

Cat  &Cat::operator=(const Cat &C)
{
    std::cout << "copy assignment operator Cat" << std::endl;
    if (this != &C)
    {
        Animal::operator=(C);
    }
    return (*this);
}
