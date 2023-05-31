#include "Cat.hpp"

class Dog : public Animal
{
public:
	Dog             ( void );
	Dog             ( std::string type );
	Dog             ( const Dog& dog );

	Dog& operator=  (const Dog& factor);

	~Dog            ( void );

	void makeSound  ( void ) const;
};