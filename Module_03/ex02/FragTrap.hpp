#include "ClapTrap.hpp"
#include <string>


class FragTrap: public ClapTrap {
	public:
		FragTrap(std::string name);
		FragTrap(FragTrap &other);
		FragTrap&	operator=(FragTrap &other);

		void	highFivesGuys(void);
		void	attack(const std::string& target);

		~FragTrap();
};
