#include <string>
#include <iostream>
#include <cmath>


class ClapTrap {
	protected:
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;
		std::string	name;
	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &other);
		ClapTrap&	operator=(ClapTrap &other);

		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		int			getHitPoints(void) const;
		int			getEnergyPoints(void) const;
		int			getAttackDamage(void) const;
		std::string	getName(void) const;

		~ClapTrap();
};
