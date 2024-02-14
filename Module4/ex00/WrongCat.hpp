#ifndef WrongCAT_HPP
#define WrongCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    private:
        void makeSound() const;
    public:
        WrongCat();
        WrongCat(std::string name_cat);
        ~WrongCat();
};

#endif