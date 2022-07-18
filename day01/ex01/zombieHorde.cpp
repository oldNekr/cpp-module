#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	Zombie *zombieS = new Zombie[N];

	if (zombieS == nullptr) {
		std::cout << "Error memory" << std::endl;
		exit(EXIT_FAILURE);
	}
	for (int it = 0; it < N; ++it)
		zombieS[it].givingNames(name);
	return zombieS;
}