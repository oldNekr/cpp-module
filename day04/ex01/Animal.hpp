//
// Created by Lauri Rosby on 8/9/22.
//

#ifndef CPP_MODULE_ANIMAL_HPP
#define CPP_MODULE_ANIMAL_HPP

#include <iostream>

class Animal {
protected:
	std::string type;

public:
	Animal();
	Animal(const Animal &src);
	Animal & operator = (const Animal &src);
	virtual ~Animal();

	std::string getType() const;
	virtual void makeSound() const;
};


#endif //CPP_MODULE_ANIMAL_HPP
