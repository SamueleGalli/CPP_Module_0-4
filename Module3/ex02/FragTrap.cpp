#include "FragTrap.hpp"

FragTrap::FragTrap(std::string new_name)
{
    name = new_name;
    hit_point = 100;
    energy_point = 100;
    attack_damage = 30;
    std::cout << "creatin another ereditated trap" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "destroying another ereditated trap" << std::endl;
}

void    FragTrap::highFiveGuys(void)
{
    std::cout << "give me a big high five ..." << std::endl;
}

FragTrap::FragTrap()
{
    std::cout << "creating another ereditated trap FragTrap" << std::endl;
}

FragTrap::FragTrap(const FragTrap &FT)
{
    std::cout << "copy constructor called" << std::endl;
    if (this != &FT)
        *this = FT;
}
FragTrap    &FragTrap::operator=(const FragTrap &FT)
{
    std::cout << "copy assignment operator called" << std::endl;
    if (this !=&FT)
    {
        this->name = FT.name;
        this->hit_point = FT.hit_point;
        this->energy_point = FT.energy_point;
        this->attack_damage = FT.attack_damage;
    }
    return (*this);
}
