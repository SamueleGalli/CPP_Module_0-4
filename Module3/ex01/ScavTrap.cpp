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

ScavTrap::ScavTrap()
{
    std::cout << "creating ScavTrap with no name" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &ST)
{
    std::cout << "copy eredited ScavTrap" << std::endl;
    if (this != &ST)
    {
        *this = ST;
    }

}

ScavTrap  &ScavTrap::operator=(const ScavTrap &ST)
{
    if (this != &ST)
    {
        this->name = ST.name;
        this->hit_point = ST.hit_point;
        this->energy_point = ST.energy_point;
        this->attack_damage = ST.attack_damage;
    }
    return (*this);
}