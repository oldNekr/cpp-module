#include <iostream>

int main(int argc, char **argv)
{
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int it = 1; argv[it]; it++)
			for (int kt = 0; argv[it][kt]; kt++)
				std::cout << (char)toupper(argv[it][kt]);
		std::cout << std::endl;
	}
	return 0;
}
