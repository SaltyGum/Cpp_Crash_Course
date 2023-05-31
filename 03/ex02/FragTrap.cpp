#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap()
{
    std::cout << "FragTrap( void ) Constructor Called " << std::endl;
    this->hp = 100;
    this->ep = 100;
    this->ad = 30;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
    std::cout << "FragTrap Name constructor Called!" << std::endl;
    this->hp = 100;
    this->ep = 100;
    this->ad = 30;
}

FragTrap::FragTrap( const FragTrap& frag ) : ClapTrap(frag)
{
    std::cout << "FragTrap Copy Constructor Called!";
}

FragTrap& FragTrap::operator=( const FragTrap& factor )
{
    ClapTrap::operator=(factor);
    std::cout << "FragTrap Copy Assignment Called!!" << std::endl;
    return ( *this );
}

FragTrap::~FragTrap( void )
{
    std::cout << "Destructor Called for " << this->name << " FragTrap" << std::endl;
}

void FragTrap::attack( std::string& target )
{
    if (this->ep > 0)
    {
        this->ep -= 1;
        std::cout << "FragTrap " << this->name
        << " attacks " << target
        << " causing (" << this->ad
        << ") points of damage!" << std::endl;
    }
    else
        std::cout << "No energy try charging a bit" << std::endl;
}

void FragTrap::highFivesGuys( void )
{
    std::cout << "FragTrap " << this->name
    << " Wants to high five with everyone !!!!"
    << std::endl;
}