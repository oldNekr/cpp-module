#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _count(0), _contactIndex(0) {

}

PhoneBook::~PhoneBook() {

}

void PhoneBook::showBanner() const {
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|   Index  |First Name|Last Name| Nickname  |" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (size_t it = 0; it < this->_count; ++it)
		this->_contact[it].showInfo();
	std::cout << "|-------------------------------------------|" << std::endl;
}

bool PhoneBook::addContact() {
	if (!this->_contact[this->_contactIndex].setData(this->_contactIndex + 1))
		return false;
	this->_contactIndex++;
	if (this->_count == 8)
		std::cout << "PhoneBook is full. The oldest contact #" << this->_contactIndex << " was replaced" << std::endl;
	else
		std::cout << "Contact #" << this->_contactIndex << " added" << std::endl;
	if (this->_count < 8)
		this->_count++;
	if (this->_contactIndex == 8)
		this->_contactIndex = 0;
	return true;
}

bool PhoneBook::searchContact() const {
	int	index = 1;
	std::string tmp;

	if (!this->_count) {
		std::cout << "First add at least one Contact" << std::endl;
		return true;
	}
	this->showBanner();
	if (this->_count == 1)
		std::cout << "Showing one single contact" << std::endl;
	else {
		std::cout << "Enter the number from 1 to " << this->_count << std::endl;
		std::cout << "The contact #";
		getline(std::cin, tmp);
		index = atoi(tmp.c_str());
		if (std::cin.eof())
			return false;
		else if (!(index > 0 && index < 9)) {
			std::cout << "Only numbers from 1 to 8 are accepted, try again" << std::endl;
			return true;

		} else {
			std::cout << "PhoneBook has " << this->_count << " Contacts" << std::endl;
			return true;
		}
	}
	this->_contact[index - 1].getData();
	return true;
}
