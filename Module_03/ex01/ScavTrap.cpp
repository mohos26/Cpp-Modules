#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap " << name << " is created!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &other): ClapTrap(other) {
	std::cout << "ScavTrap " << name << " is copied!" << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap &other) {
	if (this != &other)
	{
		name = other.getName();
		hitPoints = other.getHitPoints();
		energyPoints = other.getEnergyPoints();
		attackDamage = other.getAttackDamage();
	}
	std::cout << "ScavTrap " << name << " is assigned!" << std::endl;
	return *this;
}

void ScavTrap::attack(const std::string& target) {
	if (energyPoints && hitPoints) {
		std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
		energyPoints--;
	}
	else
		std::cout << "ScavTrap " << name << " can not attack!" << std::endl;
}

void ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << name << " is now in Gate Keeper mode." << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << name << " destroyed!" << std::endl;
}
