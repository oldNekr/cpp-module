#include "Contact.hpp"

Contact::Contact() {

}

Contact::~Contact() {

}

std::string Contact::_dataNames[5] = {
		"First _name: ",
		"Last _name: ",
		"Nickname: ",
		"Phone number: ",
		"Darkest secret: "
};

bool Contact::isDigit(const std::string& str) {
	for (int it = 0; str[it]; ++it)
		if (!std::isdigit(str[it]))
			return false;
	return true;
}

bool Contact::setData(size_t index) {
	this->_index = index;
	for(int it = 0; it < 5; ++it) {
		std::cout << this->_dataNames[it];
		std::getline(std::cin, this->_dataSet[it]);
		if (std::cin.eof())
			return false;
		if (this->_dataSet[it].empty()) {
			std::cout << "Fill in the field" << std::endl;
			it--;
			continue;
		}
		if (it == 3 && !isDigit(this->_dataSet[it])) {
			std::cout << "Phone number should contain numbers" << std::endl;
			it--;
			continue;
		}
	}
	return true;
}

void Contact::getData() const {
	for (int it = 0; it < 4; ++it)
		std::cout << this->_dataNames[it] << this->_dataSet[it] << std::endl;
}

void Contact::showInfo() const {
	std::cout << "|" << std::setw(10) << this->_index << "|";
	for (int it = 0; it < 3; ++it) {
		if (this->_dataSet[it].length() > 10)
			std::cout << this->_dataSet[it].substr(0,9) << ".|";
		else
			std::cout << std::setw(10) << this->_dataSet[it] << "|";
	}
	std::cout << std::endl;
}
