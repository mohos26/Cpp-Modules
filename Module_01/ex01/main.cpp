#include "Zombie.hpp"


int	main()
{
	int		n;
	Zombie	*ptr;

	n = 12;
	ptr = zombieHorde(n, "saaid");
	delete[] ptr;
}
