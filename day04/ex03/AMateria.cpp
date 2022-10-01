//
// Created by Lauri Rosby on 10/1/22.
//

#include "AMateria.hpp"

AMateria::AMateria(const std::string &type) : _type(type) {
    std::cout << "-§ AMateria " << this->_type << " constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &type) : _type(type.getType()) {
    std::cout << "-§ AMateria " << this->_type << " copy constructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &type) {
    std::cout << "-§ AMateria " << this->_type << " copy assignment operator called" << std::endl;
//    this->_type = type.getType();
    return *this;
}

AMateria::~AMateria() {
    std::cout << "-§ AMateria " << this->_type << " destructor called" << std::endl;
}

const std::string &AMateria::getType() const {
    return this->_type;
}