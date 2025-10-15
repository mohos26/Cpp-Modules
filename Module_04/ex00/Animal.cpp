#include "Animal.hpp"


Animal::Animal() {
	type = "Nothing";
	std::cout << "Animal constructed" << std::endl;
}

Animal::Animal(std::string type) {
	this->type = type;
	std::cout << "Animal copy constructed" << std::endl;
}


Animal::Animal(Animal &other) {
	type = other.getType();
	std::cout << "Animal copy constructed" << std::endl;
}


Animal&	Animal::operator=(Animal &other) {
	if (this != &other)
		type = other.getType();
	std::cout << "Animal copy assigned" << std::endl;
	return *this;
}


std::string	Animal::getType(void) const {
	return type;
}


void Animal::makeSound() const {
	std::cout << "Some animal sound" << std::endl;
}


Animal::~Animal() {
	std::cout << "Animal destructed" << std::endl;
}
