#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal() {
	type = "Nothing";
	std::cout << "WrongAnimal constructed" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) {
	this->type = type;
	std::cout << "WrongAnimal constructed" << std::endl;
}


WrongAnimal::WrongAnimal(WrongAnimal &other) {
	type = other.getType();
	std::cout << "WrongAnimal copy constructed" << std::endl;
}


WrongAnimal&	WrongAnimal::operator=(WrongAnimal &other) {
	if (this != &other)
		type = other.getType();
	std::cout << "WrongAnimal copy assigned" << std::endl;
	return *this;
}


std::string	WrongAnimal::getType(void) const {
	return type;
}


void WrongAnimal::makeSound() const {
	std::cout << "Some WrongAnimal sound" << std::endl;
}


WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructed" << std::endl;
}
