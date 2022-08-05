//
// Created by Lauri Rosby on 8/5/22.
//

#ifndef CPP_MODULE_CLAPTRAP_HPP
#define CPP_MODULE_CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
private:
	std::string _name;
	int _hitPoint;
	int _energyPoint;
	int attackDamage;

public:
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &src);
	ClapTrap & operator = (ClapTrap const &src);
	~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string getName() const;
	int getNum(std::string const &what) const;
	int setNum(std::string const &what, int const &newVal);
};

std::ostream & operator << (std::ostream &out, ClapTrap const &other)

#endif //CPP_MODULE_CLAPTRAP_HPP
