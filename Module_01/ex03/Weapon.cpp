#include "Weapon.hpp"


// constructor
Weapon::Weapon()
{
	type = "Nothing";
}

// constructor
Weapon::Weapon(std::string type)
{
	this->type = type;
}

// return weapon type (reference to string)
std::string	&Weapon::getType(void)
{
	return type;
}

// change weapon type
void	Weapon::setType(std::string type)
{
	this->type = type;
}

// destructor
Weapon::~Weapon()
{

}
