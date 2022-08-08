//
// Created by Lauri Rosby on 8/8/22.
//

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100 , 30) {
	std::cout << this->_name << ": FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src) {
	std::cout << this->_name << ": FragTrap copy constructor called" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &src) {
	ClapTrap::operator=(src);
	std::cout << this->_name << ": FragTrap copy assignment operator called" << std::endl;
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << this->_name << ": FragTrap destructor called" << std::endl;
}

//	------------------------------------------------------------------------

void FragTrap::highFivesGuys() {
	std::cout << this->getName() << " high fives" << std::endl;
}

void FragTrap::attack(const std::string &target) {
	if (this->_hitPoints > 0 && this->_energyPoints > 0) {
		this->_energyPoints -= 1;
		std::cout   << "FragTrap - " << this->_name << " attacks " << target
					<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	} else
		std::cout << "FragTrap - " << this->_name << " not enough energy or health." << std::endl;
}