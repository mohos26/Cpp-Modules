#pragma once

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>


class WrongCat: public WrongAnimal {
	public:
		WrongCat();
		WrongCat(WrongCat &other);
		WrongCat&	operator=(WrongCat &other);

		void makeSound() const;

		~WrongCat();
};
