#include "HumanA.hpp"

HumanA::HumanA(std::string namea, Weapon &weapona)
{
    name = namea;
    weapon = &weapona;
}

void    HumanA::attack(void)
{
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}