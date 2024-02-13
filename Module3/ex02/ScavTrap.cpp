#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string trap_eredited)
{
    std::cout << "CLapTrap is erediting ScavTrap" << std::endl;
    this->name = trap_eredited;
    this->hit_point = 100;
    this->energy_point = 50;
    this->attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "destroy eredited trap" << std::endl;
}

void    ScavTrap::attack(const std::string &target)
{
    std::cout << "ScavTrap " << name << " striking " << target << " with " << attack_damage << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap entered in Gate keeper mode" << std::endl; 
}
