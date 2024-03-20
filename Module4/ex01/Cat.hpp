#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal, public Brain
{
    private:
        void makeSound() const;
        Brain *b;
    public:
        Cat &operator=(const Cat &c);
        Cat();
        ~Cat();
};

#endif