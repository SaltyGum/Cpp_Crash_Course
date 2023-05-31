#include "Dog.hpp"
#include "Brain.hpp"
#include <iomanip>

int main()
{
	Animal* animals[10];
	//Animal toto;

	for (int i = 0; i < 10; i++)
	{
		if (i >= 5)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	Cat copy(*(Cat *)animals[0]);
	std::cout << std::endl;
	for (int i = 0; i < 100; i++)
	{
		std::cout << "teste" << std::endl;
		std::cout << copy.getBrain()->getIdea(i) << std::endl;
		std::cout << ((Cat *)animals[0])->getBrain()->getIdea(i) << std::endl;
	}
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		delete animals[i];
	}
}
