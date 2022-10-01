//
// Created by Lauri Rosby on 8/9/22.
//

#ifndef CPP_MODULE_CAT_HPP
#define CPP_MODULE_CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal{
private:
    Brain *myBrain;

public:
	Cat();
	Cat(const Cat &src);
	Cat & operator = (const Cat &src);
	virtual ~Cat();

    Brain *getBrain() const;
	virtual void makeSound() const;
};


#endif //CPP_MODULE_CAT_HPP
