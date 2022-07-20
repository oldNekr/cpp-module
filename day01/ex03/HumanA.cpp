//
// Created by Lauri Rosby on 7/18/22.
//

#include "HumanA.hpp"

HumanA::HumanA(std::string const &name, Weapon const &gun) : _name(name), _gun(gun){

}

HumanA::~HumanA() {
	std::cout << std::endl;
}

void HumanA::attack() const {
	std::cout << this->_name << " Attacks using " << this->_gun.getType() << std::endl;
}
