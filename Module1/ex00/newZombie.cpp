#include "Zombie.hpp"

Zombie* Zombie::newZombie(std::string name)
{
    Zombie* zomb = new Zombie;
    if (zomb != 0)
        zomb->name = name;
    return zomb;
}