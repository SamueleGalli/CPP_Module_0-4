#include "Cat.hpp"

Cat::Cat() : b(new Brain())
{
    type = "cat";
    std::cout << "finded a stray cat" << std::endl;
}

Cat::Cat(const Cat &C) : Animal(C), Brain(*C.b)
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
    std::cout << "copy assignemnt operator Cat" << std::endl;
    if (this != &C)
    {
        this->type = C.type;
        delete b;
        this->b = new Brain(*C.b);
    }
    return (*this);
}

//constructor
Cat::~Cat()
{
    delete b;
    std::cout << "killing Cat sorry" << std::endl;
}