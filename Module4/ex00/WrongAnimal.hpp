#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <string>
#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        std::string getType() const;
        void makeSound() const;
        
        WrongAnimal(std::string type_wa);
        WrongAnimal(const WrongAnimal &WA);
        WrongAnimal &operator=(const WrongAnimal &WA);
        WrongAnimal();
        ~WrongAnimal();
};

#endif