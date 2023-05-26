#include "Zombie.hpp"

int main(void)
{
    Zombie zombie1("Bulba");
	Zombie *zombie2 = newZombie("CHarCHar");
	zombie1.announce();
	zombie2->announce();
	randomChump("SquirlSquirtle");
	delete zombie2;
    return 0;
}
