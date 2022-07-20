//
// Created by Lauri Rosby on 7/18/22.
//

#ifndef CPP_MODULE_HUMANB_HPP
#define CPP_MODULE_HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
private:
	std::string const &_name;
	Weapon const *_gun;
public:

	HumanB(std::string const &name);
	~HumanB();

	void attack() const;
	void setWeapon(Weapon const &gun);
};


#endif //CPP_MODULE_HUMANB_HPP
