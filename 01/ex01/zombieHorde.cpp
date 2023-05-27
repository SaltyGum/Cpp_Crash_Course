#include "Zombie.hpp"

//horde[i].setName(name + static_cast<char> (48 + i));
Zombie* zombieHorde( int N, std::string name )
{
    int i;
    Zombie  *horde = new Zombie[N];

    i = 0;
    while (i < N)
    {
        horde[i].setName(name + static_cast<char> (48 + i));
        //horde[i].setName(name);
        i++;
    }
    return (horde);
}
