#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat             ( void );
    Cat             ( std::string type );
    Cat             ( const Cat& cat );
    Cat& operator=  ( const Cat& factor );

    ~Cat            ( void );

    void makeSound  ( void ) const;
};