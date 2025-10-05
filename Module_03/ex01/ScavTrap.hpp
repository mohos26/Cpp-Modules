#include "ClapTrap.hpp"
#include <string>

class ScavTrap: public ClapTrap {
	public:
		ScavTrap(std::string name);
		ScavTrap(ScavTrap &other);
		ScavTrap&	operator=(ScavTrap &other);

		void attack(const std::string& target);
		void guardGate(void);

		~ScavTrap();
};
