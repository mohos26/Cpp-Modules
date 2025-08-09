#include "HumanB.hpp"


HumanB::HumanB()
{

}

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void	HumanB::setWeapon(Weapon weapon)
{
	this->weapon->setType(weapon.getType());
}

Weapon	*HumanB::getWeapon(void)
{
	return weapon;
}

void	HumanB::setName(std::string name)
{
	this->name = name;
}

std::string	HumanB::getName(void)
{
	return name;
}

void	HumanB::attack(void)
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

HumanB::~HumanB()
{

}
