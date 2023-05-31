#ifndef WRONGCAT_H
# define WRONGCAT_H

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat            ( void );
	WrongCat            ( std::string type );
	WrongCat            ( const WrongCat& wcat );

	WrongCat& operator= ( const WrongCat& factor );

	~WrongCat           ( void );

	void makeSound      ( void ) const;
};

#endif