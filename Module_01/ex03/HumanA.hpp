#include "Weapon.hpp"
#include <string>
#include <iostream>


#ifndef HUMANA_HPP
# define HUMANA_HPP

class HumanA
{
	public:
		HumanA(std::string name, Weapon &weapon);

		Weapon		&getWeapon(void);
		void		setName(std::string name);
		std::string	getName(void);
		void		attack(void);

		~HumanA();
	private:
		std::string	name;
		Weapon		&weapon;
};

#endif
