#include "Zombie.hpp"

int main(void)
{
	int	i, N;

	N = 10;
	i = 0;
    Zombie zombie1("Bulba");
	Zombie *horde;
	horde = zombieHorde(N, "Ditto");
	horde->announce();
	std::cout << std::endl;
	while (i < N)
	{
		horde[i].announce();
		i++;
	}
	delete [] horde;
    return (0);
}
