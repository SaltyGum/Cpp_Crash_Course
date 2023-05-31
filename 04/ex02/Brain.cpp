#include "Brain.hpp"
#include <cstdlib>

Brain::Brain( void )
{
	int i = 0;
	const std::string examples[] = {
		"I want carinhos",
		"I want to be big spoon",
		"I want chameguinhos",
		"I want to go walk",
		"I want water",
		"I want a treat",
        "I want a big fat fish",
        "I want a big meat",
        "I want to do skecthy things",
        "I want to see the end of the world or the creation of everything and nothingness..."
	};
	while ( i < 100)
	{
		this->ideas[i] = examples[rand() % 9];
		i++;
	}
	std::cout << "Brain(void) constructor called" << std::endl;
}

Brain::Brain(const Brain& brain)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = brain.ideas[i];
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& factor)
{
	if (this != &factor)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = factor.ideas[i];
	}
	return ( *this );
}

Brain::~Brain( void )
{
	std::cout << "Brain destructor called and now your brainless" << std::endl;
}

const std::string& Brain::getIdea(int index) const
{
	return ( this->ideas[index] );
}
