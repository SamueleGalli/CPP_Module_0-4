#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(std::string new_name);
        ~FragTrap();

        void    highFiveGuys(void);
        FragTrap();
        FragTrap(const FragTrap &FT);
        FragTrap  &operator=(const FragTrap &FT);
};

#endif