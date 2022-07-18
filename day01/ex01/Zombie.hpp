#ifndef CPP_MODULE_ZOMBIE_HPP
#define CPP_MODULE_ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
	std::string _name;
public:
	Zombie();
	~Zombie();

	void announce( void );
	void givingNames(std::string const &name);
};

Zombie* zombieHorde( int N, std::string name );

#endif //CPP_MODULE_ZOMBIE_HPP
