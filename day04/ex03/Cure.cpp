//
// Created by Lauri Rosby on 10/1/22.
//

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
    std::cout << "-§ " << this->_type << " constructor called" << std::endl;
}

Cure::Cure(const Cure &src) : AMateria(src) {
    std::cout << "-§ " << this->_type << " copy constructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &src) {
    std::cout << "-§ " << this->_type << " copy assignment operator called" << std::endl;
    return *this;
}

Cure::~Cure() {
    std::cout << "-§ " << this->_type << " destructor called" << std::endl;
}

AMateria *Cure::clone() const {
    Cure *copy = new Cure(*this);
    return copy;
}

void Cure::use(int &target) {
    std::cout << "* heals ";
    AMateria::use(target);
    std::cout << "'s wounds *" << std::endl;
}