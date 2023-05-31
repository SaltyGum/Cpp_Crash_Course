#include "Cat.hpp"

class Dog : public Animal
{
private:
	Brain* brain;
public:
	Dog             ( void );
	Dog             ( std::string type );
	Dog             ( const Dog& dog );

	Dog& operator=  (const Dog& factor);

	~Dog            ( void );
	Brain* getBrain ( void ) const;
	void makeSound  ( void ) const;
};