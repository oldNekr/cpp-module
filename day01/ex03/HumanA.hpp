//
// Created by Lauri Rosby on 7/18/22.
//

#ifndef CPP_MODULE_HUMANA_HPP
#define CPP_MODULE_HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
private:
	std::string _name;
	Weapon const &_gun;

public:

	HumanA(std::string const &name, Weapon const &gun);
	~HumanA();

	void attack() const;

};


#endif //CPP_MODULE_HUMANA_HPP
