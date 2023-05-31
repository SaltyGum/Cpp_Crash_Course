#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* i = new Cat("Malhado");
	const Animal* j = new Dog("Dalmatas");
	const WrongAnimal* k = new WrongCat();
	const WrongCat* l = new WrongCat("DoomBringer");

	std::cout << std::endl << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	std::cout << l->getType() << " " << std::endl << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	k->makeSound();
	l->makeSound();
	std::cout << std::endl;

	delete meta;
	delete i;
	delete j;
	delete k;
	delete l;
}