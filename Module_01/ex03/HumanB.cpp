#include "HumanB.hpp"

// constructor
HumanB::HumanB(std::string name)
{
	this->name = name;
	weapon = NULL;
}

// assign weapon
void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

// setter
void	HumanB::setName(std::string name)
{
	this->name = name;
}

// getter
std::string	HumanB::getName(void)
{
	return name;
}

// print attack message
void	HumanB::attack(void)
{
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " has no weapon" << std::endl;
}

// destructor
HumanB::~HumanB()
{

}
