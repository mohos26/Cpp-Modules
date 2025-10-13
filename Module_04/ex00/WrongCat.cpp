#include "WrongCat.hpp"


WrongCat::WrongCat(){
	type = "WrongCat";
	std::cout << "WrongCat constructed" << std::endl;
}

WrongCat::WrongCat(WrongCat &other): WrongAnimal(other) {
	std::cout << "WrongCat copy constructed" << std::endl;
}

WrongCat&	WrongCat::operator=(WrongCat &other) {
	if (&other != this)
		type = other.getType();
	std::cout << "WrongCat copy assigned" << std::endl;
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructed" << std::endl;
}
