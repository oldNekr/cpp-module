//
// Created by Lauri Rosby on 7/23/22.
//

#include "Fixed.hpp"

Fixed::Fixed() : _nbr(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(const Fixed &cp) {
	std::cout << "Copy assignment operator called" << std::endl;

    if (this != &cp)
	    this->_nbr = cp.getRawBits();
	return *this;
}

void Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_nbr = raw;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_nbr;
}