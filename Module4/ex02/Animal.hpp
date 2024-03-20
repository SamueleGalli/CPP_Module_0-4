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
        virtual void              makeSound() const = 0;
        
        Animal();
        Animal(std::string type_a);
        ~Animal();
};

#endif