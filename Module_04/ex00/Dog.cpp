#include "Dog.hpp"


Dog::Dog(){
	type = "Dog";
	std::cout << "Dog constructed" << std::endl;
}

Dog::Dog(Dog &other): Animal(other) {
	std::cout << "Dog copy constructed" << std::endl;
}

Dog&	Dog::operator=(Dog &other) {
	if (&other != this)
		type = other.getType();
	std::cout << "Dog copy assigned" << std::endl;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof!" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destructed" << std::endl;
}
