//
// Created by Lauri Rosby on 8/5/22.
//

#ifndef CPP_MODULE_CLAPTRAP_HPP
#define CPP_MODULE_CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
protected:
	std::string _name;
	unsigned int _hitPoints;
	unsigned int _energyPoints;
	unsigned int _attackDamage;

	ClapTrap(std::string name, unsigned int hp, unsigned int energy, unsigned int dmg);

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
	void setNum(std::string const &what, int const &newVal);
};

	std::ostream & operator << (std::ostream &stats, ClapTrap const &src);


#endif //CPP_MODULE_CLAPTRAP_HPP