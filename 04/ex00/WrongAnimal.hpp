#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <iostream>

class WrongAnimal
{
protected:
    std::string type;

public:
	WrongAnimal             ( void );
	WrongAnimal             ( std::string type );
	WrongAnimal             ( const WrongAnimal& wanimal );

	WrongAnimal& operator=  ( const WrongAnimal& factor );
	
	virtual ~WrongAnimal    ( void );

	std::string getType     ( void ) const;

	void makeSound          ( void ) const;
};

#endif