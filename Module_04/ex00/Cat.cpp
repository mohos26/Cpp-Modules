#include "Cat.hpp"


Cat::Cat(){
	type = "Cat";
	std::cout << "Cat constructed" << std::endl;
}

Cat::Cat(Cat &other): Animal(other) {
	std::cout << "Cat copy constructed" << std::endl;
}

Cat&	Cat::operator=(Cat &other) {
	if (&other != this)
		type = other.getType();
	std::cout << "Cat copy assigned" << std::endl;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructed" << std::endl;
}
