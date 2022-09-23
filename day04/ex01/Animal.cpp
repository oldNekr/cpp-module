//
// Created by Lauri Rosby on 8/9/22.
//

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "-§ Animal constructor called" << std::endl;
	this->type = "Animal";
}

Animal::Animal(const Animal &src) {
	std::cout << "-§ Animal copy constructor called" << std::endl;
	this->type = src.getType();
}

Animal &Animal::operator=(const Animal &src) {
	std::cout << "-§ Animal copy assignment constructor called" << std::endl;
	this->type = src.getType();
	return *this;
}

Animal::~Animal() {
	std::cout << "-§ Animal destructor called" << std::endl;
}

//	------------------------------------------------------------------------

std::string Animal::getType() const {
	return this->type;
}

void Animal::makeSound() const {
	std::cout << "TENNO SKOOOOOOM!" << std::endl;
}