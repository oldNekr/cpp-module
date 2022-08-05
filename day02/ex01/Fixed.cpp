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

Fixed::Fixed(int const &value) {
	std::cout << "Int constructor called" << std::endl;
	this->_nbr = value << this->_bits; //сдвиг на 8 бит влево
}

Fixed::Fixed(float const &value){
	(std::cout << "Float constructor called" << std::endl);
	this->_nbr = roundf(value * (1 << this->_bits));
}

Fixed &Fixed::operator=(const Fixed &cp) {
	std::cout << "Copy assignment operator called" << std::endl;
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

int Fixed::toInt() const {
	return (this->_nbr >> Fixed::_bits); //сдвиг на 8 бит вправо
}

float Fixed::toFloat() const {
	return ((float)(this->_nbr) / (1 << this->_bits));
}

std::ostream & operator << (std::ostream & out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return out;
}
