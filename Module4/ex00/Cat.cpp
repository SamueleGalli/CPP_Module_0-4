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