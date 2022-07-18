#include "Zombie.hpp"

Zombie *newZombie( std::string name) {
	Zombie *newbornZombie = new Zombie(name);
	if (newbornZombie == nullptr) {
		std::cout << "Error memory" << std::endl;
		exit(EXIT_FAILURE);
	}
	return newbornZombie;
}