#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    trap("bumblebee");
    
    trap.attack("megatron");
    trap.takeDamage(6);
    trap.beRepaired(4);
    trap.beRepaired(4);
    trap.attack("megatron");
    trap.attack("desepticon");
    trap.attack("megatron");
    trap.attack("desepticon");
    trap.attack("megatron");
    trap.attack("desepticon");
    trap.attack("megatron");
    trap.beRepaired(8);
}