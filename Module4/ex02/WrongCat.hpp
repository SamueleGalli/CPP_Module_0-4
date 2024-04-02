#ifndef WrongCAT_HPP
#define WrongCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    private:
        void makeSound() const;
    public:
        WrongCat();
        WrongCat(const WrongCat &WC);
        WrongCat    operator=(const WrongCat &WC);
        ~WrongCat();
};

#endif