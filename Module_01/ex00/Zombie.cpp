#include "Zombie.hpp"
#include <iostream>
#include <string>


Zombie::Zombie()
{
	name = "Foo";
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie(void)
{
	std::cout << name << ": Sleeeeeeeeep..." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
