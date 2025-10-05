#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name) {
	this->name = name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << "ClapTrap " << name << " is created!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &other) {
	name = other.getName();
	hitPoints = other.getHitPoints();
	energyPoints = other.getEnergyPoints();
	attackDamage = other.getAttackDamage();
	std::cout << "ClapTrap " << name << " is copied!" << std::endl;
}

ClapTrap&	ClapTrap::operator=(ClapTrap &other) {
	if (&other != this)
	{
		name = other.getName();
		hitPoints = other.getHitPoints();
		energyPoints = other.getEnergyPoints();
		attackDamage = other.getAttackDamage();
		std::cout << "ClapTrap " << name << " is assigned!" << std::endl;
	}
	return *this;
}

void	ClapTrap::attack(const std::string& target) {
	if (energyPoints && hitPoints) {
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
		energyPoints--;
	}
	else
		std::cout << "ClapTrap " << name << " can not attack!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (hitPoints) {
		std::cout << "ClapTrap " << name << " take damage " << std::min(hitPoints, (int)amount) << "!" << std::endl;
		hitPoints -= std::min(hitPoints, (int)amount);
	}
	else
		std::cout << "ClapTrap " << name << " has zero hit point!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (energyPoints && hitPoints) {
		std::cout << "ClapTrap " << name << " be repaired, " << amount << " points!" << std::endl;
		hitPoints += amount;
		energyPoints--;;
	}
	else
		std::cout << "ClapTrap " << name << " can not be repaired!" << std::endl;
}

int	ClapTrap::getHitPoints(void) const {
	return hitPoints;
}

int	ClapTrap::getEnergyPoints(void) const {
	return energyPoints;
}

int	ClapTrap::getAttackDamage(void) const {
	return attackDamage;
}

std::string	ClapTrap::getName(void) const {
	return name;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << name << " destroyed!" << std::endl;
}