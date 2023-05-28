#include "HumanB.hpp"

HumanB::HumanB( void )
{
}

HumanB::HumanB( std::string name )
{
    this->name = name;
}

HumanB::~HumanB( void )
{
}

void    HumanB::setWeapon   ( Weapon& weapon )
{
    this->weapon = &weapon;
}

void HumanB::attack  ( void )
{
    if (this->weapon)
        std::cout << this->name << " Attacks with his " << this->weapon->getType() << std::endl;
    else
        std::cout << this->name << " Attacks with his bare fists " << std::endl;
}