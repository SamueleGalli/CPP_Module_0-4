#include "Cat.hpp"

Cat::Cat()
{
    b = new Brain();
    type = "cat";
    std::cout << "finded a stray cat" << std::endl;
}

Cat::~Cat()
{
    std::cout << "killing Cat sorry" << std::endl;
    delete b;
}

void    Cat::makeSound() const
{
    std::cout << "miaooooo fuuuu" << std::endl;
}

Cat  &Cat::operator=(const Cat &c)
{
    if (this != &c)
    {
        this->type = c.type;
        this->b = c.b;
    }
    return (*this);
}