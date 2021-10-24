#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal("animal");
	const Animal* j = new Dog("dog");
	const Animal* i = new Cat("cat");
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	const WrongAnimal *wrongcat = new WrongCat("wrongcat");
	std::cout << wrongcat->getType() << " " << std::endl;
	wrongcat->makeSound();
	delete meta;
	delete j;
	delete i;
	delete wrongcat;
}
