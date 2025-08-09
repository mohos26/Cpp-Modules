#include "Zombie.hpp"


Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*lst;

	lst = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		lst[i].setName(name);
		lst[i].announce();
	}
	return lst;
}
