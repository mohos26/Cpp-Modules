#include "Zombie.hpp"

// constructor
Zombie::Zombie()
{
	name = "foo";
}

// destructor
Zombie::~Zombie(void)
{
	std::cout << name << ": Sleeeeeeeeep..." << std::endl;
}

// announce
void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// setter
void	Zombie::setName(std::string name)
{
	this->name = name;
}
