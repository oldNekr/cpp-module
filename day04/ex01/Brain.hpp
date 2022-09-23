//
// Created by Lauri Rosby on 9/23/22.
//

#ifndef CPP_MODULE_BRAIN_HPP
#define CPP_MODULE_BRAIN_HPP

#include <iostream>

class Brain {
public:
    std::string ideas[100];

    Brain(std::string const &word);
    Brain(const Brain &src);
    Brain & operator = (const Brain &src);
    virtual ~Brain();
};


#endif //CPP_MODULE_BRAIN_HPP
