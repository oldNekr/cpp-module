//
// Created by Lauri Rosby on 10/1/22.
//

#ifndef CPP_MODULE_CURE_HPP
#define CPP_MODULE_CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria{
public:
    Cure();
    Cure(Cure const &src);
    Cure &operator=(Cure const &src);
    virtual ~Cure();

    AMateria *clone() const;
    void use(ICharacter &target);
};


#endif //CPP_MODULE_CURE_HPP
