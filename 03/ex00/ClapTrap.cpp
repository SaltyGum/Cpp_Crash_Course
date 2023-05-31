#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : name("Common"), hp(10), ep(10), ad(0)
{
    std::cout << "ClapTrap Constructor Called " << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : name(name), hp(10), ep(10), ad(0)
{
    std::cout << "ClapTrap Name constructor Called!" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& clap ) 
    : name(clap.name), hp(clap.hp), ep(clap.hp), ad(clap.ad)
{
    std::cout << "ClapTrap Copy Constructor Called!";
}

ClapTrap& ClapTrap::operator=( const ClapTrap& factor )
{
    this->name = factor.name;
    this->name = factor.name;
    this->name = factor.name;
    this->name = factor.name;
    std::cout << "ClapTrap Copy Assignment Called!!" << std::endl;
    return ( *this );
}

ClapTrap::~ClapTrap( void )
{
    std::cout << "Destructor Called for " << this->name << " ClapTrap" << std::endl;
}

void ClapTrap::attack( std::string& target )
{
    if (this->ep > 0)
    {
        this->ep -= 1;
        std::cout << "ClapTrap " << this->name
        << " attacks " << target
        << " causing (" << this->ad
        << ") points of damage!" << std::endl;
    }
    else
        std::cout << "No energy try charging a bit" << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount )
{
    if  ( this->hp == 0 )
        std::cout << "Shooting Dead Traps How Dumb... " << std::endl;
    else if ( amount > this->hp)
    {
        this->hp = 0;
        std::cout << "ClapTrap " << this->name
        << " takes (" << this->hp
        << ") of damage and burn to ashes what a explosion." << std::endl;
    }
    else
    {
        this->hp -= amount;
        std::cout << "ClapTrap " << this->name
        << " takes (" << amount
        << ") of damage ("
        << this->hp << ") Hit points remaining..." << std::endl;
    }
}

void ClapTrap::beRepaired( unsigned int amount)
{
    if (this->hp == 0)
    {
        std::cout << "Dead as " << this->name
        << " is it cannot repair nothing." << std::endl;
    }
    else if ( this->ep > 0)
    {
        this->ep -= 1;
        this->hp += amount;
        std::cout << "ClapTrap " << this->name
        << " feels new now that have recovered (" << amount
        << ") Hit points now have (" << this->hp
        << ") Hit points" << std::endl; 
    }
    else
        std::cout << "No energy try charging a bit" << std::endl;
}