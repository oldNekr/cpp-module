//
// Created by Lauri Rosby on 8/9/22.
//

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound(); //will output the dog sound!
	meta->makeSound();
    delete j;
    delete i;
    delete meta;
    std::cout << std::endl;

    const WrongAnimal* gen = new WrongAnimal();
	const WrongAnimal* Kitty = new WrongCat();
//	const WrongCat* Kitty = new WrongCat();
    std::cout << std::endl;

    std::cout << Kitty->getType() << " " << std::endl;
    std::cout << gen->getType() << " " << std::endl;
    std::cout << std::endl;

    Kitty->makeSound(); // cat sound
    gen->makeSound(); // animal sound
    std::cout << std::endl;

    delete gen;
    delete Kitty;

	return 0;
}