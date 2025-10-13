#include "AAnimal.hpp"


AAnimal::AAnimal() {
	type = "Nothing";
	std::cout << "AAnimal constructed" << std::endl;
}

AAnimal::AAnimal(std::string type) {
	this->type = type;
	std::cout << "AAnimal constructed" << std::endl;
}


AAnimal::AAnimal(AAnimal &other) {
	type = other.getType();
	std::cout << "AAnimal copy constructed" << std::endl;
}


AAnimal&	AAnimal::operator=(AAnimal &other) {
	if (this != &other)
		type = other.getType();
	std::cout << "AAnimal copy assigned" << std::endl;
	return *this;
}


std::string	AAnimal::getType(void) const {
	return type;
}


void AAnimal::makeSound() const {
	std::cout << "Some Aanimal sound" << std::endl;
}


AAnimal::~AAnimal() {
	std::cout << "AAnimal copy destructed" << std::endl;
}
