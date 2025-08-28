#include "Zombie.hpp"
#include <new>

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*lst;

	lst = new (std::nothrow) Zombie[N];
	if (!lst)
	{
		std::cerr << "Cannot Allocate Memory" << std::endl;
		exit(1);
	}
	for (int i = 0; i < N; i++)
	{
		lst[i].setName(name);
		lst[i].announce();
	}
	return lst;
}
