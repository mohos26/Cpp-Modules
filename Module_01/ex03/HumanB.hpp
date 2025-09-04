#include "Weapon.hpp"
#include <string>
#include <iostream>


#ifndef HUMANB_HPP
# define HUMANB_HPP

class HumanB
{
	public:
		HumanB(std::string name);

		void		setWeapon(Weapon &weapon);
		void		setName(std::string name);
		std::string	getName(void);
		void		attack(void);

		~HumanB();
	private:
		std::string	name;
		Weapon		*weapon;
};

#endif
