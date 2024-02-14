#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal , public Brain
{
    private:
        void makeSound() const;
        Brain *b;
    public:
        Dog();
        ~Dog();
};

#endif