#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>


class Cat: public AAnimal {
	private:
		Brain	*brain;
	public:
		Cat();
		Cat(Cat &other);
		Cat&	operator=(Cat &other);

		void makeSound() const;

		~Cat();
};
