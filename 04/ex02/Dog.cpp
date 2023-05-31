#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog"), brain( new Brain() )
{
	std::cout << "Dog(void) constructor called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type), brain( new Brain() )
{
	std::cout << "Dog[ " << type << " ] constructor called" << std::endl;
}

Dog::Dog(const Dog& dog) : Animal(dog)
{
	this->brain = new Brain(*dog.brain);
	std::cout << "Dog copy constructor called on " << dog.type << std::endl;
}

Dog& Dog::operator=(const Dog& factor)
{
	this->type = factor.type;
	this->brain = new Brain(*factor.brain);
	return ( *this );
}

Dog::~Dog( void )
{
	delete this->brain;
	std::cout << "Dog destructor (0,31mL/kg) injected in " << this->type << std::endl;
}

void Dog::makeSound( void ) const
{
	std::cout << "Only the Dogas WoOOOooooOOof WOooOOoooof" << std::endl;
}

Brain* Dog::getBrain( void ) const
{
	return ( this->brain );
}
