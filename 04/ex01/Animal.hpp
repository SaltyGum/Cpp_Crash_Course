#include <iostream>

class Animal
{
protected:
    std::string type;

public:
    Animal              ( void );
    Animal              ( std::string type );
    Animal              ( const Animal& animal );
    Animal& operator=   ( const Animal& factor );

    virtual ~Animal         ( void );
    std::string getType     ( void ) const;
    virtual void makeSound  ( void ) const;
};