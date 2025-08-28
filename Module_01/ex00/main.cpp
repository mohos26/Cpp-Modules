#include "Zombie.hpp"


int	main()
{
	Zombie	*ptr;

	ptr = newZombie("saaid");
	randomChump("ahmed");
	randomChump("bochraybe");
	ptr->announce();
	delete ptr;
	return 0;
}
