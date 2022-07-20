//
// Created by Lauri Rosby on 7/18/22.
//

#include "Weapon.hpp"

#include <utility>

Weapon::Weapon(std::string const &type) : _type(type) {

}

Weapon::~Weapon() {

}

void Weapon::setType(std::string const &type) {
	this->_type = type;
}

std::string const &Weapon::getType() const {
	return this->_type;
}
