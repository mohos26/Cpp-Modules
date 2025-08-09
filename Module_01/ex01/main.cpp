#include "Zombie.hpp"


int	main()
{
	int		n;
	Zombie	*ptr;
	// Zombie	zombie("saaid");

	n = 12;
	ptr = zombieHorde(n, "saaid");
	std::cout << "*" << std::endl;
	delete[] ptr;
}
