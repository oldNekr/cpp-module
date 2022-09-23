//
// Created by Lauri Rosby on 8/9/22.
//

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << "-§ WrongCat constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &src) {
    std::cout << "-§ WrongCat copy constructor called" << std::endl;
    this->type = src.getType();
}

WrongCat &WrongCat::operator=(const WrongCat &src) {
    std::cout << "-§ WrongCat copy assignment constructor called" << std::endl;
    this->type = src.getType();
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << "-§ WrongCat destructor called" << std::endl;
}

//	------------------------------------------------------------------------

void WrongCat::makeSound() const {
    std::cout << "Wrong Meow" << std::endl;
}