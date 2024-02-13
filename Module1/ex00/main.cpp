#include "Zombie.hpp"

int main(void)
{
    Zombie zombie;
    Zombie* zomb = zombie.newZombie("gigi");
    zomb->announce();
    Zombie* zomb2 = zombie.newZombie("Foo");
    zomb2->announce();
    zomb2->randomChump("tomas");
    delete zomb;
    delete zomb2;
}