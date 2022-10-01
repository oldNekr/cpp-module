//
// Created by Lauri Rosby on 8/9/22.
//

#ifndef CPP_MODULE_DOG_HPP
#define CPP_MODULE_DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal{
private:
    Brain *myBrain;

public:
	Dog();
	Dog(const Dog &src);
	Dog & operator = (const Dog &src);
	virtual ~Dog();

    Brain *getBrain() const;
	virtual void makeSound() const;
};


#endif //CPP_MODULE_DOG_HPP
