//
// Created by Lauri Rosby on 8/5/22.
//

#include "ScavTrap.hpp"

int main() {
    ClapTrap frame1("Excalibur");
    ScavTrap frame2("Volt");
    ClapTrap enemy1("Grineer");
	ClapTrap enemy2("Corpus");
	std::cout << std::endl;

    std::cout << frame1 << frame2;
    frame1.attack(enemy1.getName());
	frame2.attack(enemy2.getName());
	std::cout << frame1 << frame2 << std::endl;

    frame2.takeDamage(20);
    std::cout << frame2;
	frame2.beRepaired(15);
	std::cout << frame2 << std::endl;

	frame2.guardingGate();
	std::cout << std::endl;

	ScavTrap copyFrame(frame2);
	std::cout << "Copy " << copyFrame << std::endl;

	ScavTrap frame3("Mag");
	std::cout << frame3;
	frame3 = frame2;
	std::cout << "Equal " << frame3 << std::endl;

    return EXIT_SUCCESS;
}