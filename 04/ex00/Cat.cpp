#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat(void) constructor used <-" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "Cat{ " << type << " } constructor called <-" << std::endl;
}

Cat::Cat(const Cat& cat) : Animal(cat)
{
	std::cout << "Copy Cat constructor called to ->" << cat.type << std::endl;
}

Cat& Cat::operator=(const Cat& factor)
{
	this->type = factor.type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor (Dona Chica) called to ->" << this->type << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Minnnhaaauuu Minnnhaauuu" << std::endl;
}