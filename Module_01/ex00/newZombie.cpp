#include "Zombie.hpp"
#include <string>
#include <iostream>
#include <new>


Zombie* newZombie(std::string name)
{
	Zombie	*zombie;

	zombie = new (std::nothrow) Zombie(name);
	if (!zombie)
	{
		std::cerr << "Cannot Allocate Memory" << std::endl;
		exit(1);
	}
	// zombie->announce();
	return zombie;
}
