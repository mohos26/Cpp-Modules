#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>


int main() {
	std::cout << "--- Single objects test ---" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "\n--- Deleting single objects ---" << std::endl;
	delete j; // should call Dog destructor and Brain destructor
	delete i; // should call Cat destructor and Brain destructor

	std::cout << "\n--- Array of animals ---" << std::endl;
	const Animal* animals[10];
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
	Dog dog2 = dog1; // invokes copy constructor

	return 0;
}