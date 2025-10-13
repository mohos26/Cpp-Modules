#include <iostream>
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	std::cout << "--- Single objects test ---" << std::endl;
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	std::cout << "\n--- Deleting single objects ---" << std::endl;
	delete j; // يجب استدعاء Destructor للـ Dog والـ Brain
	delete i; // يجب استدعاء Destructor للـ Cat والـ Brain

	std::cout << "\n--- Array of animals ---" << std::endl;
	const AAnimal* animals[10];
	for (int k = 0; k < 5; k++)
		animals[k] = new Dog();
	for (int k = 5; k < 10; k++)
		animals[k] = new Cat();

	std::cout << "\n--- Deleting array of animals ---" << std::endl;
	for (int k = 0; k < 10; k++)
		delete animals[k];

	std::cout << "\n--- Deep copy test ---" << std::endl;
	Dog dog1;
	dog1.makeSound();
	Dog dog2 = dog1; // استدعاء Copy Constructor

	return 0;
}
