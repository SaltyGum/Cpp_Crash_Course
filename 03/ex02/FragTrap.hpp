#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap            ( void );
    FragTrap            ( std::string name );
    FragTrap            ( const FragTrap& frag );
    FragTrap& operator= ( const FragTrap& factor );

    ~FragTrap           ( void );

    // Actions
    void attack         ( std::string& target );
    void highFivesGuys   ( void );
};


