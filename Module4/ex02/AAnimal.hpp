#ifndef AANIMAL_HPP
#define AANIMAL_HPP
#include <string>
#include <iostream>

class AAnimal
{
    protected:
        std::string type;
    public:
        const std::string getType() const;
        virtual void              makeSound() const = 0;
        
        AAnimal(const AAnimal &A);
        AAnimal();
        AAnimal(std::string type_a);
        AAnimal  &operator=(const AAnimal &A);
        virtual ~AAnimal();
};

#endif