#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
public:
    HumanA  ( void );
    HumanA  ( std::string name, Weapon &weapon );
    ~HumanA ( void );
    void    attack  ( void );

private:
    std::string name;
    Weapon      &weapon;
};

#endif