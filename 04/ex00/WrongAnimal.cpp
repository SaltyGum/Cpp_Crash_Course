#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("")
{
	std::cout << "WrongAnimal(void) constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "WrongAnimal(^ " << type << " ^) constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& wanimal) : type(wanimal.type)
{
	std::cout << "WrongAnimal copy constructor called " << wanimal.type << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& factor)
{
	this->type = factor.type;
	return ( *this );
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called erradicated this thing -> " << this->type << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Default WrongAnimal starts a sound that makes you remember the verve of the universe filling you with a deep e hollow fear" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return ( this->type );
}