#include "Dog.hpp"


Dog::Dog(){
	type = "Dog";
	brain = new (std::nothrow) Brain();
	if (brain == nullptr)
	{
		std::cerr << "malloc error!" << std::endl;
		std::exit(1);
	}
	std::cout << "Dog constructed" << std::endl;
}

Dog::Dog(Dog &other): AAnimal(other) {
	brain = new (std::nothrow) Brain(*other.brain);
	if (brain == nullptr)
	{
		std::cerr << "malloc error!" << std::endl;
		std::exit(1);
	}
	std::cout << "Dog copy constructed" << std::endl;
}

Dog&	Dog::operator=(Dog &other) {
	if (&other != this)
	{
		brain = new (std::nothrow) Brain(*other.brain);
		if (brain == nullptr)
		{
			std::cerr << "malloc error!" << std::endl;
			std::exit(1);
		}
		type = other.getType();
	}
	std::cout << "Dog copy assigned" << std::endl;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof!" << std::endl;
}

Dog::~Dog() {
	delete brain;
	std::cout << "Dog destructed" << std::endl;
}
