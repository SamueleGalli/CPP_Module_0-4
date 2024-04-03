#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>
#include <iostream>

class ClapTrap
{
    protected:
        std::string name;
        int         hit_point;
        int         energy_point;
        int         attack_damage;
    public:
        void    attack(const std::string &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        
        ClapTrap();
        ClapTrap(const ClapTrap &CT);
        ClapTrap  &operator=(const ClapTrap &CT);
        ClapTrap(std::string name_trap);
        ~ClapTrap();
};

#endif