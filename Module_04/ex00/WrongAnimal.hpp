#pragma once

#include <string>
#include <iostream>


class WrongAnimal {
	protected:
		std::string	type;
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(WrongAnimal &other);
		WrongAnimal&	operator=(WrongAnimal &other);

		void makeSound() const;
		std::string	getType(void) const;

		~WrongAnimal();
};
