#include "HumanA.hpp"


// constructor
HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
	this->name = name;
}

// return reference to weapon
Weapon	&HumanA::getWeapon(void)
{
	return weapon;
}

// print attack message
void	HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

// destructor
HumanA::~HumanA()
{

}

// setter
void	HumanA::setName(std::string name)
{
	this->name = name;
}

// getter
std::string	HumanA::getName(void)
{
	return name;
}
