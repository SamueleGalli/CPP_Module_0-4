#include "Cat.hpp"

Cat::Cat()
{
    Brain b;
    type = "cat";
    std::cout << "finded a stray cat" << std::endl;
}

Cat::~Cat()
{
    std::cout << "killing Cat sorry" << std::endl;
}

Cat::Cat(const Cat &C)
{
    std::cout << "copy constructor Cat" << std::endl;
    if (this != &C)
        *this = C;
}

void    Cat::makeSound() const
{
    std::cout << "miaooooo fuuuu" << std::endl;
}

Cat  &Cat::operator=(const Cat &c)
{
    std::cout << "copy assignemnt operator Cat" << std::endl;
    if (this != &c)
    {
        this->type = c.type;
        this->b = c.b;
    }
    return (*this);
}