#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"
int main()
{
    std::cout << "first test (1)\n------------------------" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;
    std::cout << "----------------------\nsecond test (2)" << std::endl;
    std::cout << "--------------------------------------\ncreating array of animal\n------------------------" << std::endl;
    Animal *a[100];
    for (int i = 0; i < 50; i++)
    {
        a[i] = new Dog();
    }
    for (int i = 50; i < 100; i++)
    {
        a[i] = new Cat();
    }
    std::cout << "----------------------------\ndeleting that array\n--------------------------------" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        delete a[i];
    }
    std::cout << "--------------\nthird and last (3)" << std::endl;
    Dog basic;
    {
        Dog tmp = basic;
    }
    std::cout << "----------------------\nend last test\n------------------------" << std::endl;
    return 0;
}
