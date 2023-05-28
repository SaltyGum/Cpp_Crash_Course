#include "Zombie.hpp"

int main(void)
{
    Zombie zombie1("Bulba");
	randomChump("SquirlSquirtle");
	Zombie *zombie2 = newZombie("CHarCHar");
	zombie1.announce();
	zombie2->announce();
	delete zombie2;
    return 0;
}
