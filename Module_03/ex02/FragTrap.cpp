#include "FragTrap.hpp"


FragTrap::FragTrap(std::string name): ClapTrap(name) {
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << name << " is created!" << std::endl;
}


FragTrap::FragTrap(FragTrap &other): ClapTrap(other) {
	std::cout << "FragTrap " << name << " is copie!" << std::endl;
}


FragTrap&	FragTrap::operator=(FragTrap &other) {
	if (this != &other)
	{
		name = other.getName();
		hitPoints = other.getHitPoints();
		energyPoints = other.getEnergyPoints();
		attackDamage = other.getAttackDamage();
	}
	std::cout << "FragTrap " << name << " is assigned!" << std::endl;
	return *this;
}


void	FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << name << " requests a positive high five!" << std::endl;
}


void	FragTrap::attack(const std::string& target) {
	if (energyPoints && hitPoints) {
		std::cout << "FragTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
		energyPoints--;
	}
	else
		std::cout << "FragTrap " << name << " can not attack!" << std::endl;
}


FragTrap::~FragTrap() {
	std::cout << "FragTrap " << name << " destroyed!" << std::endl;
}