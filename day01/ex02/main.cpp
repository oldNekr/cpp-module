#include <iostream>

int main() {
	std::string _string = "HI THIS IS BRAIN";
	std::string *stringPTR = &_string;
	std::string &stringREF = _string;

	std::cout 	<< "• The memory address of the string variable. " << &_string << std::endl
				<< "• The memory address held by stringPTR. " << stringPTR << std::endl
				<< "• The memory address held by stringREF. " << &stringREF << std::endl << std::endl

				<< "• The value of the string variable. " << _string << std::endl
				<< "• The value pointed to by stringPTR. " << *stringPTR << std::endl
				<< "• The value pointed to by stringREF. " << stringREF << std::endl;

	return EXIT_SUCCESS;
}