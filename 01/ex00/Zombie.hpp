#include <iostream>

class Zombie
{
public:
    //Constructor Destructor
    Zombie(std::string name);
    ~Zombie(void);

    //Funtions Getter/Setter...
    void    announce(void);

private:
    std::string name;
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);