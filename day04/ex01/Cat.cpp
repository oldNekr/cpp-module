//
// Created by Lauri Rosby on 8/9/22.
//

#include "Cat.hpp"

Cat::Cat() {
    std::cout << "-§ Cat constructor called" << std::endl;
    myBrain = new Brain("Meow");
    this->type = "Cat";
}

Cat::Cat(const Cat &src) {
    std::cout << "-§ Cat copy constructor called" << std::endl;
    this->type = src.getType();
    myBrain = new Brain("Meow");
    *myBrain = *(src.getBrain());
}

Cat &Cat::operator=(const Cat &src) {
    std::cout << "-§ Cat copy assignment constructor called" << std::endl;
    this->type = src.getType();
    myBrain = new Brain("Meow");
    *myBrain = *(src.getBrain());
    return *this;
}

Cat::~Cat() {
    std::cout << "-§ Cat destructor called" << std::endl;
    delete myBrain;
}

//	------------------------------------------------------------------------

Brain *Cat::getBrain() const {
    return this->myBrain;
}

void Cat::makeSound() const {
    std::cout << "Meow" << std::endl;
}