#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        const std::string getType() const;
        virtual void              makeSound() const;
        
        Animal();
        Animal(const Animal &A);
        Animal(std::string type_a);

        Animal  &operator=(const Animal &A);
        virtual ~Animal();
};

#endif