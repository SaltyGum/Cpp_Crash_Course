#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain* brain;

public:
    Cat             ( void );
    Cat             ( std::string type );
    Cat             ( const Cat& cat );
    Cat& operator=  ( const Cat& factor );

    ~Cat            ( void );
    Brain* getBrain ( void ) const;

    void makeSound  ( void ) const;
};