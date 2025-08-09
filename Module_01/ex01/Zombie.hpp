#include <string>
#include <iostream>


class Zombie
{
	public:
		Zombie();
		Zombie(std::string name);

		void	announce(void);
		void	setName(std::string name);

		~Zombie();
	private:
		std::string	name;
};

Zombie*	zombieHorde(int N, std::string name);

