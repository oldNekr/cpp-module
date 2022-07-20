#ifndef CPP_MODULE_WEAPON_HPP
#define CPP_MODULE_WEAPON_HPP

#include <iostream>

class Weapon {
private:
	std::string _type;

public:
	Weapon(std::string const &type);
	~Weapon();

	std::string const &getType() const;
	void setType(std::string const &type);

};

#endif //CPP_MODULE_WEAPON_HPP
