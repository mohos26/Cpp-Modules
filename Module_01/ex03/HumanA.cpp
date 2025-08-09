#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
	this->name = name;
}

void	HumanA::setWeapon(Weapon &weapon)
{
	this->weapon = weapon;
}

Weapon	&HumanA::getWeapon(void)
{
	return weapon;
}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

HumanA::~HumanA()
{

}

void	HumanA::setName(std::string name)
{
	this->name = name;
}

std::string	HumanA::getName(void)
{
	return name;
}
