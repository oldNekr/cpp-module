//
// Created by Lauri Rosby on 7/20/22.
//

#include "Harl.hpp"

int main(int argc, char **argv) {
	Harl thisHarl;

//	std::cout << "[ 'DEBUG' Example ]" << std::endl;
//	thisHarl.complain("DEBUG");
//	std::cout << "--------------------" << std::endl;
//	std::cout << "[ 'INFO' Example ]" << std::endl;
//	thisHarl.complain("INFO");
//	std::cout << "--------------------" << std::endl;
//	std::cout << "[ 'WARNING' Example ]" << std::endl;
//	thisHarl.complain("WARNING");
//	std::cout << "--------------------" << std::endl;
//	std::cout << "[ 'ERROR' Example ]" << std::endl;
//	thisHarl.complain("ERROR");
//	std::cout << "--------------------" << std::endl;
//	std::cout << "[ otherwise Example  ]" << std::endl;
//	thisHarl.complain("");
//	std::cout << "\n" << std::endl;

	if (argc != 1) {
		thisHarl.complain(argv[1]);
		std::cout << std::endl;
	}

	return EXIT_SUCCESS;
}