#pragma once

#include "Animal.hpp"
#include <iostream>
#include <string>


class Dog: public Animal {
	public:
		Dog();
		Dog(Dog &other);
		Dog&	operator=(Dog &other);

		void makeSound() const;

		~Dog();
};
