#include "Zombie.hpp"


int	main()
{
	int		n;
	Zombie	*ptr;

	n = 12;
	ptr = zombieHorde(n, "saaid");
	for (int i=0; i < n; i++)
		ptr[i].announce();
	delete[] ptr;
}
