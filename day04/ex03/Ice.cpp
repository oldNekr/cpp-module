//
// Created by Lauri Rosby on 10/1/22.
//

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
    std::cout << "-§ " << this->_type << " constructor called" << std::endl;
}

Ice::Ice(const Ice &src) : AMateria(src) {
    std::cout << "-§ " << this->_type << " copy constructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &src) {
    std::cout << "-§ " << this->_type << " copy assignment operator called" << std::endl;
    return *this;
}

Ice::~Ice() {
    std::cout << "-§ " << this->_type << " destructor called" << std::endl;
}

AMateria *Ice::clone() const {
    Ice *copy = new Ice(*this);
    return copy;
}

void Ice::use(int &target) {
    std::cout << "* shoots an ice bolt at ";
    AMateria::use(target);
    std::cout << " *" << std::endl;
}