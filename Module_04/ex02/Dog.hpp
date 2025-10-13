#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>
#include <new>


class Dog: public AAnimal {
	private:
		Brain	*brain;
	public:
		Dog();
		Dog(Dog &other);
		Dog&	operator=(Dog &other);

		void makeSound() const;

		~Dog();
};
