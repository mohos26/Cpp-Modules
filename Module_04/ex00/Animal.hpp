#pragma once

#include <string>
#include <iostream>


class Animal {
	protected:
		std::string	type;
	public:
		Animal();
		Animal(std::string type);
		Animal(Animal &other);
		Animal&	operator=(Animal &other);

		virtual void makeSound() const;
		std::string	getType(void) const;

		virtual ~Animal();
};
