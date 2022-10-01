//
// Created by Lauri Rosby on 10/1/22.
//

#ifndef CPP_MODULE_ICE_HPP
#define CPP_MODULE_ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria{
public:
    Ice();
    Ice(Ice const &src);
    Ice &operator=(Ice const &src);
    virtual ~Ice();

    AMateria *clone() const;
    void use(ICharacter& target);
};


#endif //CPP_MODULE_ICE_HPP
