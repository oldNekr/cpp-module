//
// Created by Lauri Rosby on 7/20/22.
//

#include "Harl.hpp"

void Harl::debug() {
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger."
				 " I really do!\n" << std::endl;
}

void Harl::info() {
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn’t put "
				 "enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void Harl::warning() {
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming for "
				 "years whereas you started working here since last month.\n" << std::endl;
//	Harl::error();
}

void Harl::error() {
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl() {

	thought[0] = &Harl::debug;
	thought[1] = &Harl::info;
	thought[2] = &Harl::warning;
	thought[3] = &Harl::error;
}

Harl::~Harl() {

}

void Harl::complain(std::string level) {
	int caseNum;

	level == "DEBUG" ? caseNum = 0 :
	level == "INFO" ? caseNum = 1 :
	level == "WARNING" ? caseNum = 2 :
	level == "ERROR" ? caseNum = 3 :
			caseNum = 4;
	switch (caseNum) {
		case 0:(this->*thought[0])();
		case 1:(this->*thought[1])();
		case 2:(this->*thought[2])();
		case 3:(this->*thought[3])();
			break;
		default:
			std::cout << "Probably complaining about insignificant problems." << std::endl;
	}
}