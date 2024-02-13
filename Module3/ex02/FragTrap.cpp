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
