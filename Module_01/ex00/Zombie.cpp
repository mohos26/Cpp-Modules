#include "Zombie.hpp"
#include <iostream>
#include <string>


// constructor
Zombie::Zombie()
{
	name = "Foo";
}

// constructor with name
Zombie::Zombie(std::string name)
{
	this->name = name;
}

// announce
void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// destructor
Zombie::~Zombie(void)
{
	std::cout << name << ": Sleeeeeeeeep..." << std::endl;
}
