//
// Created by Lauri Rosby on 8/9/22.
//

#ifndef CPP_MODULE_WRONGANIMAL_HPP
#define CPP_MODULE_WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
protected:
    std::string	type;


public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &src);
    WrongAnimal & operator = (const WrongAnimal &src);
    virtual	~WrongAnimal();

    std::string	getType()	const;

    void	makeSound() const;
};


#endif //CPP_MODULE_WRONGANIMAL_HPP
