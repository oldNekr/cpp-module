#include "PhoneBook.hpp"

int main()
{
	PhoneBook book;
	std::string line, cmd;

	line = "Enter command (ADD, SEARCH, EXIT): ";
	for (std::cout << line, std::getline(std::cin, cmd);
			!std::cin.eof(); std::getline(std::cin, cmd))
	{
		if (cmd == "ADD")
		{
			if(!book.addContact())
				break;
		}
		else if (cmd == "SEARCH")
		{
			if(!book.searchContact())
				break;
			else
				continue;
		}
		else if (cmd == "EXIT")
			break;
		std::cout << line;
	}
	return 0;
}