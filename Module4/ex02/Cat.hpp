#ifndef CAT_HPP
#define CAT_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal, public Brain
{
    private:
        void makeSound() const;
        Brain *b;
    public:
    Cat &operator=(const Cat &c);
    Cat();
    Cat(const Cat &C);
    ~Cat();
};

#endif