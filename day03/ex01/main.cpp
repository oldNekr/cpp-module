//
// Created by Lauri Rosby on 8/5/22.
//

#include "ClapTrap.hpp"

int main() {
    ClapTrap frame1("Excalibur");
    ClapTrap frame2("Volt");
    ClapTrap frame3("Mag");
    ClapTrap whippingBoy("Grineer");
    std::cout << std::endl;

    ClapTrap copy1(frame1);
    ClapTrap copy2("test");
    copy2 = frame2;
    std::cout << std::endl;

    std::cout << frame1;
    frame1.attack(whippingBoy.getName());
    std::cout << frame1 << std::endl;

    std::cout << frame2;
    frame2.takeDamage(2);
    std::cout << frame2 << std::endl;

    std::cout << frame3;
    frame3.takeDamage(11);
    std::cout << frame3;
    frame3.attack("Corpus");
    frame3.beRepaired(10);
    std::cout << std::endl;

    std::cout << frame1;
    for (int it = 1; frame1.getNum("_energyPoints") > 4;) {
        std::cout << it++ << ". ";
        frame1.attack(whippingBoy.getName());
    }
    std::cout << frame1;
    for (int it = 1; frame1.getNum("_energyPoints");) {
        std::cout << it++ << ". ";
        frame1.beRepaired(5);
    }
    std::cout << frame1;
    frame1.attack("Corpus");
    frame1.beRepaired(1);
    std::cout  << std::endl;

	return EXIT_SUCCESS;
}