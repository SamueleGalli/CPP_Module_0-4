#ifndef DOG_HPP
#define DOG_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal , public Brain
{
    private:
        void makeSound() const;
        Brain *b;
    public:
    Dog    &operator=(Dog const &d);
    Dog();
    Dog(const Dog &D);
    ~Dog();
};

#endif