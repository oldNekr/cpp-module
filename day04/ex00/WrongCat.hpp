//
// Created by Lauri Rosby on 8/9/22.
//

#ifndef CPP_MODULE_WRONGCAT_HPP
#define CPP_MODULE_WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
    WrongCat();
    WrongCat(const WrongCat &src);
    WrongCat & operator = (const WrongCat &src);
    ~WrongCat();

    void makeSound() const;
};


#endif //CPP_MODULE_WRONGCAT_HPP
