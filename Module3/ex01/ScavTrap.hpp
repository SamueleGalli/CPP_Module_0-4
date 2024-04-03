#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"
class ScavTrap : public ClapTrap
{
    public:
        void    attack(const std::string &target);
        void    guardGate();
        
        ScavTrap();
        ScavTrap(const ScavTrap &ST);
        ScavTrap  &operator=(const ScavTrap &ST);
        ScavTrap(std::string trap_eredited);
        ~ScavTrap();
};

#endif