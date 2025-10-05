#include <iostream>
#include "FragTrap.hpp"

int main() {
	std::cout << "=== Creating FragTrap ===" << std::endl;
	FragTrap frag("Serena");

	std::cout << "\n=== Testing attack ===" << std::endl;
	frag.attack("Bandit");

	std::cout << "\n=== Taking damage ===" << std::endl;
	frag.takeDamage(20);

	std::cout << "\n=== Repairing ===" << std::endl;
	frag.beRepaired(10);

	std::cout << "\n=== Using special ability ===" << std::endl;
	frag.highFivesGuys();

	std::cout << "\n=== Testing energy depletion ===" << std::endl;
	for (int i = 0; i < 105; i++)
		frag.attack("Dummy");

	std::cout << "\n=== End of scope (destruction order) ===" << std::endl;
	return 0;
}
