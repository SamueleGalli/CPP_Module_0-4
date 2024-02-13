#include "Zombie.hpp"
void    Zombie::randomChump(std::string name)
{
    Zombie* zomb = newZombie(name);
    zomb->announce();
    delete zomb;
}