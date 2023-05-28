#include "HumanA.hpp"
#include "HumanB.hpp"

int main( void )
{
    Weapon  slash = Weapon("Giant Fucking Axe");
    HumanA  glen("Glen", slash);
    glen.attack();
    slash.setType("B. F. Sword");
    glen.attack();

    Weapon  stick = Weapon("Spiked Poisonous Baseball Bat");
    HumanB  Negan("Negan");
    Negan.attack();
    Negan.setWeapon(stick);
    Negan.attack();
    stick.setType("Broken Baseball Bat");
    Negan.attack();
    return 0;
}

/* PDF's Main
int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return 0;
}
*/