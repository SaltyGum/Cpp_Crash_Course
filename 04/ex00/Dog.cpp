#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog")
{
	std::cout << "Dog(void) constructor called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "Dog[ " << type << " ] constructor called" << std::endl;
}

Dog::Dog(const Dog& dog) : Animal(dog)
{
	std::cout << "Dog copy constructor called on " << dog.type << std::endl;
}

Dog& Dog::operator=( const Dog& factor )
{
	this->type = factor.type;
	return ( *this );
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor (0,31mL/kg) injected in " << this->type << std::endl;
}

void Dog::makeSound( void ) const
{
	std::cout << "Only the Dogas WoOOOooooOOof WOooOOoooof" << std::endl;
}
