#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"
int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;

    std::cout << "creating array of animal\n\n\n";
    Animal *a[100];
    for (int i = 0; i < 50; i++)
    {
        a[i] = new Dog();
    }
    for (int i = 50; i < 100; i++)
    {
        a[i] = new Cat();
    }
    std::cout << "deleting that array\n\n\n";
    for (int i = 0; i < 100; i++)
    {
        delete a[i];
    }
    /*Cat c;
    {
        Cat tmp = c;
    }*/
    return 0;
}
