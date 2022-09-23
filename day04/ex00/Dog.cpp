//
// Created by Lauri Rosby on 8/9/22.
//

#include "Dog.hpp"

Dog::Dog() {
    std::cout << "-§ Dog constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog &src) {
    std::cout << "-§ Dog copy constructor called" << std::endl;
    this->type = src.getType();
}

Dog &Dog::operator=(const Dog &src) {
    std::cout << "-§ Dog copy assignment constructor called" << std::endl;
    this->type = src.getType();
    return *this;
}

Dog::~Dog() {
    std::cout << "-§ Dog destructor called" << std::endl;
}

//	------------------------------------------------------------------------

void Dog::makeSound() const {
    std::cout << "Woof" << std::endl;
}