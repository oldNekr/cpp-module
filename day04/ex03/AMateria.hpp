//
// Created by Lauri Rosby on 10/1/22.
//

#ifndef CPP_MODULE_AMATERIA_HPP
#define CPP_MODULE_AMATERIA_HPP

#include <iostream>


class AMateria
{
protected:
    std::string _type;
public:
    AMateria(std::string const & type);
    AMateria(AMateria const & type);
    AMateria &operator=(AMateria const & type);
    virtual ~AMateria();

    std::string const & getType() const; //Returns the materia type

    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};


#endif //CPP_MODULE_AMATERIA_HPP
