#include <string>

#ifndef WEAPON_HPP
# define WEAPON_HPP

class Weapon
{
	public:
		Weapon();
		Weapon(std::string type);

		std::string	&getType(void);
		void		setType(std::string type);

		~Weapon();
	private:
		std::string	type;
};

#endif
