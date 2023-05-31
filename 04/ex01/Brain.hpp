#ifndef BRAIN_H
# define BRAIN_H
#include <iostream>

class Brain
{
public:
	Brain               ( void );
	Brain               ( const Brain& brain );
	
	Brain& operator=    (const Brain& factor);

	~Brain();

	const std::string& getIdea(int index) const;

private:
	
	std::string ideas[100];
};

#endif