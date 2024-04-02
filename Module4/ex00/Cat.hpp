#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
{
    private:
        void makeSound() const;
    public:
        Cat();
        Cat(const Cat &C);
        Cat  &operator=(const Cat &C);
        ~Cat();
};

#endif