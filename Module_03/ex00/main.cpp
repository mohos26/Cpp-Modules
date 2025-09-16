#include "ClapTrap.hpp"

int main() {
	ClapTrap robot("Robo");

	robot.attack("Target1");

	robot.takeDamage(4);

	robot.beRepaired(3);

	for (int i = 0; i < 12; i++) {
		robot.attack("Dummy");
	}

	robot.beRepaired(5);

	robot.takeDamage(20);

	return 0;
}
