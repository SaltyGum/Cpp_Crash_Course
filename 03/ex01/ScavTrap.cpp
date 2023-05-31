#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap()
{
    std::cout << "ScavTrap( void ) Constructor Called " << std::endl;
    this->hp = 100;
    this->ep = 50;
    this->ad = 20;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
    std::cout << "ScavTrap Name constructor Called!" << std::endl;
    this->hp = 100;
    this->ep = 50;
    this->ad = 20;
}

ScavTrap::ScavTrap( const ScavTrap& scav ) : ClapTrap(scav)
{
    std::cout << "ScavTrap Copy Constructor Called!";
}

ScavTrap& ScavTrap::operator=( const ScavTrap& factor )
{
    ClapTrap::operator=(factor);
    std::cout << "ScavTrap Copy Assignment Called!!" << std::endl;
    return ( *this );
}

ScavTrap::~ScavTrap( void )
{
    std::cout << "Destructor Called for " << this->name << " ScavTrap" << std::endl;
}

void ScavTrap::attack( std::string& target )
{
    if (this->ep > 0)
    {
        this->ep -= 1;
        std::cout << "ScavTrap " << this->name
        << " attacks " << target
        << " causing (" << this->ad
        << ") points of damage!" << std::endl;
    }
    else
        std::cout << "No energy try charging a bit" << std::endl;
}

void ScavTrap::guardGate( void )
{
    std::cout << "ScavTrap " << this->name
    << " Thinks that guarding gates is FUN and started to guard the gates"
    << std::endl;
}
