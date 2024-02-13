#include "Weapon.hpp"

const std::string& Weapon::getType(void) const
{
    return type;
}

void    Weapon::setType(std::string newtype)
{
    type = newtype;
}

Weapon::Weapon(std::string newtype)
{
    type = newtype;
}

Weapon::Weapon(void)
{
    type = "";
}