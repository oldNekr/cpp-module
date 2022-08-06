//
// Created by Lauri Rosby on 8/5/22.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    this->_name = name;
    std::cout << this->_name << ": default constructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src) {
    this->_name = src.getName();
    this->_hitPoints = src.getNum("_hitPoints");
    this->_energyPoints = src.getNum("_energyPoints");
    this->_attackDamage = src.getNum("_attackDamage");
    std::cout << this->_name << ": copy constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name, unsigned int hp, unsigned int energy, unsigned int dmg)
    : _hitPoints(hp), _energyPoints(energy), _attackDamage(dmg) {
    this->_name = name;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &src) {
    this->_name = src.getName();
    this->_hitPoints = src.getNum("_hitPoints");
    this->_energyPoints = src.getNum("_energyPoints");
    this->_attackDamage = src.getNum("_attackDamage");
    std::cout << this->_name << ": copy assigment operator called." << std::endl;
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << this->_name << ": destructor called." << std::endl;
}

//	------------------------------------------------------------------------

void ClapTrap::attack(const std::string &target) {
    if (this->_hitPoints > 0 && this->_energyPoints > 0) {
        this->_energyPoints -= 1;
        std::cout   << this->_name << " attacks " << target
                    << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    } else
        std::cout << this->_name << " not enough energy or health." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << this->_name << " takes " << amount << " of damage." << std::endl;
    if(amount < this->_hitPoints)
        this->_hitPoints -= amount;
    else
        this->_hitPoints = 0;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_hitPoints > 0 && this->_energyPoints > 0) {
        this->_energyPoints -= 1;
        this->_hitPoints += amount;
        std::cout << this->_name << " repairs " << amount << " health points." << std::endl;
    } else
        std::cout << this->_name << " not enough energy or health." << std::endl;
}

//	------------------------------------------------------------------------

std::string ClapTrap::getName() const {
    return this->_name;
}

int ClapTrap::getNum(const std::string &what) const {
    if (what == "_hitPoints")
        return this->_hitPoints;
    else if (what == "_energyPoints")
        return this->_energyPoints;
    else if (what == "_attackDamage")
        return this->_attackDamage;
    else
        return EXIT_SUCCESS;
}

void ClapTrap::setNum(const std::string &what, const int &newVal) {
    if (what == "_hitPoints")
        this->_hitPoints = newVal;
    else if (what == "_energyPoints")
        this->_energyPoints = newVal;
    else if (what == "_attackDamage")
        this->_attackDamage = newVal;
}

//	------------------------------------------------------------------------

std::ostream & operator<<(std::ostream &stats, ClapTrap const &src) {
    stats   << "-----------------------\nInfo stats : " << src.getName() << "\n-HP [" << src.getNum("_hitPoints")
            << "]\n-Energy [" << src.getNum("_energyPoints") << "]\n-Damage [" << src.getNum("_attackDamage")
            << "]\n-----------------------" << std::endl;
    return stats;
}
