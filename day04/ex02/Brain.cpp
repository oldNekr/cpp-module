//
// Created by Lauri Rosby on 9/23/22.
//

#include "Brain.hpp"

Brain::Brain(std::string const &word) {
    std::cout << "-§ Brain constructor called" << std::endl;
    for (int it = 0; it < 100; ++it)
        this->ideas[it] = word;
}

Brain::Brain(const Brain &src) {
    std::cout << "-§ Brain copy constructor called" << std::endl;
    for (int it = 0; it < 100; ++it)
        this->ideas[it] = src.ideas[it];
}

Brain & Brain::operator=(const Brain &src) {
    std::cout << "-§ Brain copy assignment operator called" << std::endl;
    for (int it = 0; it < 100; ++it)
        this->ideas[it] = src.ideas[it];
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}