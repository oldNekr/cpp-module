//
// Created by Lauri Rosby on 7/23/22.
//

#include "Fixed.hpp"

//	------------------------------------------------------------------------

Fixed::Fixed() : _nbr(0) {}

Fixed::~Fixed() {}

Fixed::Fixed(const Fixed &src) {
	*this = src;
}

Fixed::Fixed(int const &value) {
	this->_nbr = value << this->_bits; //сдвиг на 8 бит влево
}

Fixed::Fixed(float const &value){
	this->_nbr = roundf(value * (1 << this->_bits));
}

//	------------------------------------------------------------------------

Fixed &Fixed::operator=(const Fixed &cp) {
	this->_nbr = cp.getRawBits();
	return *this;
}

//	------------------------------------------------------------------------

void Fixed::setRawBits(const int raw) {
	this->_nbr = raw;
}

int Fixed::getRawBits() const {
	return this->_nbr;
}

//	------------------------------------------------------------------------

int Fixed::toInt() const {
	return (this->_nbr >> Fixed::_bits); //сдвиг на 8 бит вправо
}

float Fixed::toFloat() const {
	return ((float)(this->_nbr) / (1 << this->_bits));
}

//	------------------------------------------------------------------------

bool Fixed::operator>(const Fixed &src) const {
	return (this->getRawBits() > src.getRawBits());
}

bool Fixed::operator<(const Fixed &src) const {
	return (this->getRawBits() < src.getRawBits());
}

bool Fixed::operator>=(const Fixed &src) const {
	return (this->getRawBits() >= src.getRawBits());
}

bool Fixed::operator<=(const Fixed &src) const {
	return (this->getRawBits() <= src.getRawBits());
}

bool Fixed::operator==(const Fixed &src) const {
	return (this->getRawBits() == src.getRawBits());
}

bool Fixed::operator!=(const Fixed &src) const {
	return (this->getRawBits() != src.getRawBits());
}

//	------------------------------------------------------------------------

Fixed Fixed::operator+(Fixed const &src) const {
	Fixed tmp;
	tmp.setRawBits(this->getRawBits() + src.getRawBits());
	return tmp;
}

Fixed Fixed::operator-(Fixed const &src) const {
	Fixed tmp;
	tmp.setRawBits(this->getRawBits() - src.getRawBits());
	return tmp;
}

Fixed Fixed::operator*(Fixed const &src) const {
	Fixed tmp;
	long long res;
	res = this->getRawBits() * src.getRawBits();
	tmp.setRawBits(res >> this->_bits);
	return tmp;
}

Fixed Fixed::operator/(Fixed const &src) const {
	Fixed	temp;
	long long	res;
	res = this->getRawBits() / (src.getRawBits() >> this->_bits);
	temp.setRawBits(res);
	return temp;
}

//	------------------------------------------------------------------------

const Fixed & Fixed::operator++() {
	this->_nbr++;
	return *this;
}

const Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	this->_nbr++;
	return tmp;
}

const Fixed & Fixed::operator--() {
	this->_nbr--;
	return *this;
}

const Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	operator--();
	return tmp;
}

//	------------------------------------------------------------------------

Fixed & Fixed::min(Fixed &value_1, Fixed &value_2) {
	if (value_1 < value_2)
		return value_1;
	return value_2;
}

Fixed const & Fixed::min(Fixed const &value_1, Fixed const &value_2) {
	if (value_1 < value_2)
		return value_1;
	return value_2;
}

Fixed & Fixed::max(Fixed &value_1, Fixed &value_2) {
	if (value_1 > value_2)
		return value_1;
	return value_2;
}

Fixed const & Fixed::max(Fixed const &value_1, Fixed const &value_2) {
	if (value_1 > value_2)
		return value_1;
	return value_2;
}
//	------------------------------------------------------------------------

std::ostream & operator << (std::ostream & out, Fixed const &fixed) {
	out << fixed.toFloat();
	return out;
}
