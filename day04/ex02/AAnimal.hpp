//
// Created by Lauri Rosby on 8/9/22.
//

#ifndef CPP_MODULE_AANIMAL_HPP
#define CPP_MODULE_AANIMAL_HPP

#include <iostream>

class AAnimal {
protected:
	std::string type;

public:
	AAnimal();
	AAnimal(const AAnimal &src);
	AAnimal & operator = (const AAnimal &src);
	virtual ~AAnimal();

	std::string getType() const;
	virtual void makeSound() const = 0;
};


#endif //CPP_MODULE_AANIMAL_HPP
