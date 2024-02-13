#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap    trap("bumblebee");
    ScavTrap    dig("drill");

    trap.attack("megatron");
    trap.takeDamage(6);
    trap.beRepaired(4);
    dig.attack("destructor of land");
    dig.guardGate();
}