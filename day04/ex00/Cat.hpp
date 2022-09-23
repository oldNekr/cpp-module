//
// Created by Lauri Rosby on 8/9/22.
//

#ifndef CPP_MODULE_CAT_HPP
#define CPP_MODULE_CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
public:
	Cat();
	Cat(const Cat &src);
	Cat & operator = (const Cat &src);
	~Cat();

	void makeSound() const;
};


#endif //CPP_MODULE_CAT_HPP
