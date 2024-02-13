#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>
#include <iostream>

class ClapTrap
{
    private:
        std::string name;
        int         hit_point;
        int         energy_point;
        int         attack_damage;
    public:
        void    attack(const std::string &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        
        ClapTrap(std::string name_trap);
        ~ClapTrap();
};

#endif