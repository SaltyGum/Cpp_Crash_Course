#include "Animal.hpp"

Animal::Animal( void ) : type("Animal")
{
	std::cout << "Animal(void) constructor called" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal( " << type << " ) constructor called" << std::endl;
}

Animal::Animal(const Animal& animal) : type(animal.type)
{
	std::cout << "Animal copy constructor used in " << animal.type << std::endl;
}

Animal& Animal::operator=(const Animal& factor)
{
	this->type = factor.type;
	return ( *this );
}

Animal::~Animal( void )
{
	std::cout << "Animal destructor called to " << this->type << std::endl;
}

std::string Animal::getType( void ) const
{
	return ( this->type );
}
