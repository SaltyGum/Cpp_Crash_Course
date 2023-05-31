#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class   ClapTrap
{
public:
    // Constructors && Destructor
    ClapTrap                ( void );
    ClapTrap                ( std::string name );
    ClapTrap                ( const ClapTrap& clap );
    ClapTrap&   operator=   ( const ClapTrap& factor );
    ~ClapTrap               ( void );

    // Actions
    void attack     ( std::string& target ); // Diff
    void takeDamage ( unsigned int amount );
    void beRepaired  ( unsigned int amount );


private:

    std::string     name;
    unsigned int    hp;
    unsigned int    ep;
    unsigned int    ad;
};

#endif