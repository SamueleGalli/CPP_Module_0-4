#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal
{
    private:
        void makeSound() const;
    public:
        Dog();
        Dog(const Dog &D);

        Dog &operator=(const Dog &D);
        ~Dog();
};

#endif