#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;

	i->makeSound();  // Meow
	j->makeSound();  // Woof
	meta->makeSound(); // Some generic sound

	delete meta;
	delete j;
	delete i;

	std::cout << "\n--- Wrong classes ---\n";
	const WrongAnimal* wa = new WrongAnimal();
	const WrongAnimal* wc = new WrongCat();

	wa->makeSound(); // WrongAnimal sound
	wc->makeSound(); // WrongAnimal sound (not overridden)

	delete wa;
	delete wc;
}
