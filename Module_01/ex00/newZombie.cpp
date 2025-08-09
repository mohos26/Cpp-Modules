#include "Zombie.hpp"
#include <string>


Zombie* newZombie(std::string name)
{
	Zombie	*zombie;

	zombie = new Zombie(name);
	// zombie->announce();
	return zombie;
}
