#include "Zombie.hpp"

int main() {
	Zombie *zombies = zombieHorde(9, "Tenno");
	for (int it = 0; it < 9; ++it)
		zombies[it].announce();
	delete [] zombies;
	return EXIT_SUCCESS;
}