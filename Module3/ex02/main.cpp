#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ClapTrap    trap("bumblebee");
    ScavTrap    dig("drill");
    FragTrap    highfive("highbot");

    trap.attack("megatron");
    trap.takeDamage(6);
    trap.beRepaired(4);
    dig.attack("destructor of land");
    dig.guardGate();
    highfive.attack("decimator of bot");
    highfive.highFiveGuys();
}