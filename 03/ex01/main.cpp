#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;

	// Dog basic;
	// {
	// 	std::cout << '\n';
	// 	Dog tmp = basic;
	// 	std::cout << '\n';
	// }
	// std::cout << '\n';

	// Animal *animals[4];
	// for (int i = 0; i < 2; i++)
	// 	animals[i] = new Cat("cat");
	// for (int i = 2; i < 4; i++)
	// 	animals[i] = new Dog("dog");
	// for (int i = 0; i < 4; i++)
	// {
	// 	std::cout << animals[i]->getType()<<'\n';
	// 	delete animals[i];
	// }
}
