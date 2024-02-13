#include "Zombie.hpp"

int main(void)
{
    Zombie zomb;

    Zombie *zombie = zomb.zombieHorde(7, "mario");
    for (int i = 0; i < 7; i++)
        zombie[i].announce();
    delete[] zombie;
}