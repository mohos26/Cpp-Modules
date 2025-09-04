#include "Zombie.hpp"


// create zombie on stack and announce
void	randomChump(std::string name)
{
	Zombie	zombie(name);

	zombie.announce();
}
