//
// Created by Lauri Rosby on 8/6/22.
//

#ifndef CPP_MODULE_SCAVTRAP_HPP
#define CPP_MODULE_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap {
public:
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const & src);
    ScavTrap & operator = (ScavTrap const & src);
    ~ScavTrap();

    void guardingGate() const;
    void attack(std::string const & target);
};


#endif //CPP_MODULE_SCAVTRAP_HPP
