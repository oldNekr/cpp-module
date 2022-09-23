//
// Created by Lauri Rosby on 8/9/22.
//

#ifndef CPP_MODULE_DOG_HPP
#define CPP_MODULE_DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
public:
	Dog();
	Dog(const Dog &src);
	Dog & operator = (const Dog &src);
	~Dog();

	void makeSound() const;
};


#endif //CPP_MODULE_DOG_HPP
