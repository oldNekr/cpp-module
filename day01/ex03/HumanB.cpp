//
// Created by Lauri Rosby on 7/18/22.
//

#include "HumanB.hpp"

HumanB::HumanB(std::string const &name) : _name(name), _gun(nullptr) {

}

HumanB::~HumanB() {

}

void HumanB::setWeapon(Weapon const  &gun) {
	this->_gun = &gun;
}

void HumanB::attack() const {
	if (this->_gun == nullptr)
		std::cout << this->_name << " has no weapons" << std::endl;
	else
		std::cout << this->_name << " Attacks using " << this->_gun->getType() << std::endl;
}