#include "ScavTrap.hpp"
#include <iostream>


int main() {
	std::cout << "=== Creating ScavTrap ===" << std::endl;
	ScavTrap scav("Serena");

	std::cout << "\n=== Basic Actions ===" << std::endl;
	scav.attack("Target Dummy");
	scav.takeDamage(20);
	scav.beRepaired(10);

	std::cout << "\n=== Gate Keeper Mode ===" << std::endl;
	scav.guardGate();

	std::cout << "\n=== Energy Depletion Test ===" << std::endl;
	for (int i = 0; i < 55; ++i) {
		scav.attack("Enemy");
	}

	std::cout << "\n=== Destruction Phase ===" << std::endl;
	return 0;
}
