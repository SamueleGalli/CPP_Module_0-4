#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name_trap)
{
    std::cout << "assembling trap" << std::endl;
    name = name_trap;
    hit_point = 10;
    energy_point = 10;
    attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "desassembly trap" << std::endl;
}

void    ClapTrap::attack(const std::string &target)
{
    if (energy_point == 0 || hit_point == 0)
    {
        std::cout << "ClapTrap loose all energy or hit_point so it can't do anything" << std::endl;
        return ;
    }    
    energy_point--;
    std::cout << "ClapTrap " << name << " is attacking " << target << " inflicting " << attack_damage << " of damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    hit_point = hit_point - amount;
    if (hit_point < 0)
        hit_point = 0;
    std::cout << "ClapTrap " << name << " is taking " << amount << " damage" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (energy_point == 0 || hit_point == 0)
    {
        std::cout << "ClapTrap loose all energy or hit_point so it can't do anything" << std::endl;
        return ;
    }    
    hit_point = hit_point + amount;
    energy_point--;
    std::cout << "ClapTrap " << name << " is repairig itself for " << amount << std::endl;
}