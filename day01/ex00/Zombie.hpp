#ifndef CPP_MODULE_ZOMBIE_HPP
#define CPP_MODULE_ZOMBIE_HPP

# include <iostream>

class Zombie {
private:
	const std::string  &_name;

public:
	Zombie(const std::string& name);
	~Zombie();

	void announce( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif //CPP_MODULE_ZOMBIE_HPP
