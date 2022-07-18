#include "Zombie.hpp"

int main() {
	std::cout <<std::endl;
	Zombie *_zombie = newZombie("Tenno");
	_zombie->announce();
	delete _zombie;
	std::cout <<std::endl;
	randomChump("Skoom");
	std::cout <<std::endl;
	return EXIT_SUCCESS;
}