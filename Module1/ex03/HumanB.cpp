#include "HumanB.hpp"

HumanB::HumanB(std::string nameb)
{
    name = nameb;
}

void    HumanB::attack(void)
{
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weaponb)
{
    weapon = &weaponb;
}