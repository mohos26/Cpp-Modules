#include <string>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name);

		void	announce(void);

		~Zombie();
	private:
		std::string	name;
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);
