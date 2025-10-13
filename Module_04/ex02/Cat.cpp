#include "Cat.hpp"


Cat::Cat(){
	type = "Cat";
	brain = new (std::nothrow) Brain();
	if (brain == nullptr)
	{
		std::cerr << "malloc error!" << std::endl;
		std::exit(1);
	}
	std::cout << "Cat constructed" << std::endl;
}


Cat::Cat(Cat &other): AAnimal(other) {
	brain = new (std::nothrow) Brain(*other.brain);
	if (brain == nullptr)
	{
		std::cerr << "malloc error!" << std::endl;
		std::exit(1);
	}
	std::cout << "Cat copy constructed" << std::endl;
}


Cat&	Cat::operator=(Cat &other) {
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
	std::cout << "Cat copy assigned" << std::endl;
	return *this;
}


void Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}


Cat::~Cat() {
	delete brain;
	std::cout << "Cat destructed" << std::endl;
}
