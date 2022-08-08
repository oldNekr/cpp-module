//
// Created by Lauri Rosby on 8/8/22.
//

#ifndef CPP_MODULE_FRAGTRAP_HPP
#define CPP_MODULE_FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap {
public:
	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	FragTrap & operator = (FragTrap const & src);
	~FragTrap();

	void highFivesGuys(void);
	void attack(const std::string &target);
};


#endif //CPP_MODULE_FRAGTRAP_HPP
