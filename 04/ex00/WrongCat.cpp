#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Wrong Animal evil core")
{
	std::cout << "WrongCat(void) constructor called" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	std::cout << "WrongCat(\"" << type << "\") constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& wcat) : WrongAnimal(wcat)
{
	std::cout << "WrongCat copy constructor called on " << wcat.type << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& factor)
{
	this->type = factor.type;
	return ( *this );
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called for " << this->type << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong Meow ?? " << std::endl;
}
