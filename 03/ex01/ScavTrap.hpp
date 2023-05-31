#include "ClapTrap.hpp"

class  ScavTrap : public ClapTrap
{
public:
    ScavTrap            ( void );
    ScavTrap            ( std::string name );
    ScavTrap            ( const ScavTrap& scav );
    ScavTrap& operator= ( const ScavTrap& factor );

    ~ScavTrap           ( void );

    // Actions
    void attack     ( std::string& target );
    void guardGate  ( void );

};
