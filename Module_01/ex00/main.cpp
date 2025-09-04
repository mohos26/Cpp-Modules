#include "Zombie.hpp"


int	main()
{
	Zombie	*zombiePtr;

	zombiePtr = newZombie("saaid");
	randomChump("ahmed");
	randomChump("bochraybe");
	zombiePtr->announce();
	delete zombiePtr;
	return 0;
}
