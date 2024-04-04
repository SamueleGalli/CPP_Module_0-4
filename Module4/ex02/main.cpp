#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"
int main()
{
    /*std::cout << "test abstract animal\n------------------------" << std::endl;
    AAnimal *a;
    a = new AAnimal();*/
    std::cout << "---------------------\nNormal test\n------------------------" << std::endl;
    Dog basic;
    {
        Dog tmp = basic;
    }
}
