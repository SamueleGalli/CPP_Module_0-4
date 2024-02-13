#include "Zombie.hpp"

void    Zombie::announce(void)
{
    if (name == "")
        std::cout << "no name zombie";
    else if (name == "Foo")
        std::cout << "Foo: BraiiiiiiinnnzzzZ...";
    else
        std::cout << "<" << name << ">: " << "BraiiiiiiinnnzzzZ...";
    std::cout << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "eliminate Zombie" << std::endl;
}
