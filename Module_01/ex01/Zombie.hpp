#include <string>
#include <iostream>


class Zombie
{
	public:
		Zombie();

		void	announce(void);
		void	setName(std::string name);

		~Zombie();
	private:
		std::string	name;
};

// create a horde of zombies
Zombie*	zombieHorde(int N, std::string name);
