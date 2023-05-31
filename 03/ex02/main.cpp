#include "FragTrap.hpp"

int main()
{
    std::string homer = "Homer";
    std::string marge = "Marge";
    std::string lisa = "Lisa";
    std::string bart = "Bart";
    std::string maggie = "Maggie";

	ClapTrap john("John");
	ClapTrap jim("Jim");
	ClapTrap joe("Joe");
	ScavTrap jane("Jane");
	FragTrap joseph("Joseph");

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
	joseph.attack(maggie);
	joseph.takeDamage(99);
	joseph.beRepaired(50);
	joseph.highFivesGuys();
}