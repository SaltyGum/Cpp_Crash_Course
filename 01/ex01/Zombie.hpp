#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie
{
public:
    //Constructor Destructor
    Zombie(void);
    Zombie(std::string name);
    ~Zombie(void);

    //Funtions Getter/Setter...
    void    announce(void);
    void    setName(std::string name);

private:
    std::string name;
};

Zombie* zombieHorde( int N, std::string name );

#endif
