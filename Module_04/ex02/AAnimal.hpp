#pragma once

#include <string>
#include <iostream>


class AAnimal {
	protected:
		std::string	type;
	public:
		AAnimal();
		AAnimal(std::string type);
		AAnimal(AAnimal &other);
		AAnimal&			operator=(AAnimal &other);

		virtual void	makeSound() const = 0;
		std::string		getType(void) const;

		virtual			~AAnimal();
};
