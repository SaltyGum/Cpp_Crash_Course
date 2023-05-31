#include "ScavTrap.hpp"

int main()
{
    std::string marge = "Marge";
    std::string homer = "Homer";
    std::string bart = "Bart";
    std::string lisa = "Lisa";

	ClapTrap john("John");
	ClapTrap jim("Jim");
	ClapTrap joe("Joe");
	ScavTrap jane("Jane");

	john.attack(marge);
	john.attack(bart);
	john.attack(homer);
	john.takeDamage(5);
	jim.takeDamage(9);
	jim.takeDamage(10);
	joe.beRepaired(10);
	joe.takeDamage(19);
	jane.attack(lisa);
	jane.takeDamage(99);
	jane.beRepaired(50);
	jane.guardGate();
}