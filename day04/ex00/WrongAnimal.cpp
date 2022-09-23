//
// Created by Lauri Rosby on 8/9/22.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << "-§ WrongAnimal constructor called" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) {
    std::cout << "-§ WrongAnimal copy constructor called" << std::endl;
    this->type = src.getType();
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src) {
    std::cout << "-§ WrongAnimal copy assignment constructor called" << std::endl;
    this->type = src.getType();
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "-§ WrongAnimal destructor called" << std::endl;
}

//	------------------------------------------------------------------------

std::string WrongAnimal::getType() const {
    return this->type;
}

void WrongAnimal::makeSound() const {
    std::cout << "Why are you Gay?" << std::endl;
}