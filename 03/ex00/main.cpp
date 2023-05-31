#include "ClapTrap.hpp"

int main()
{
    std::string homer = "Homer";
    std::string bart = "Bart";
    std::string marge = "Marge";

	ClapTrap john("John");
	ClapTrap jim("Jim");
	ClapTrap joe("Joe");

	john.attack(marge);
	john.attack(bart);
	john.attack(homer);
	john.takeDamage(5);
	jim.takeDamage(8);
	jim.takeDamage(2);
    jim.beRepaired(999);
	joe.beRepaired(10);
	joe.takeDamage(19);
}