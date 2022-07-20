//
// Created by Lauri Rosby on 7/20/22.
//

#include "Replacer.hpp"

int main(int argc, char **argv) {
	if (argc == 4) {
		try {
			Replacer::replace(argv[1], argv[2], argv[3]);
		}
		catch (char const *errorMsg) {
			std::cerr << "Error: " << errorMsg << std::endl;
			return EXIT_FAILURE;
		}
	} else
	{
		std::cerr << "Expected 3 arguments to be given" <<std::endl;
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}